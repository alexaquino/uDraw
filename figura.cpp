#include "figura.h"
#include <QPainter>

Figura::Figura(QPointF point, QObject *parent) : QObject(parent), QGraphicsItem() {
    // Define as coordenadas iniciais do desenho
    this -> setStartPoint(mapFromScene(point));
    this -> setEndPoint(mapFromScene(point));

    connect(this, &Figura::pointChanged, this, &Figura::updateRomb);
}

Figura::~Figura() { }

QRectF Figura::boundingRect() const {

    return QRectF((endPoint().x() > startPoint().x() ? startPoint().x() : endPoint().x()) - 5,
                  (endPoint().y() > startPoint().y() ? startPoint().y() : endPoint().y()) - 5,
                   qAbs(endPoint().x() - startPoint().x()) + 10,
                   qAbs(endPoint().y() - startPoint().y()) + 10);
}

void Figura::updateRomb() {
    this->update((endPoint().x() > startPoint().x() ? startPoint().x() : endPoint().x()) - 5,
                 (endPoint().y() > startPoint().y() ? startPoint().y() : endPoint().y()) - 5,
                  qAbs(endPoint().x() - startPoint().x()) + 10,
                  qAbs(endPoint().y() - startPoint().y()) + 10);
}

void Figura::setStartPoint(const QPointF point) {
    m_startPoint = mapFromScene(point);
    emit pointChanged();
}

void Figura::setEndPoint(const QPointF point) {
    m_endPoint = mapFromScene(point);
    emit pointChanged();
}

QPointF Figura::startPoint() const {
    return m_startPoint;
}

QPointF Figura::endPoint() const{
    return m_endPoint;
}
