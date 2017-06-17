#include "losango.h"
#include <QPainter>

Losango::Losango(QPointF point, QObject *parent) : Figura(point,parent) {
    Q_UNUSED(point)
}

Losango::~Losango(){ }

// Método Desenhar (Losango)
void Losango::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    // Define cor e espessura da borda do denho
    painter->setPen(QPen(Qt::green, 2));

    QPolygonF losango;

    losango  << QPointF(startPoint().x() + (endPoint().x() > startPoint().x() ? + 1 : - 1)*
                        abs((endPoint().x() - startPoint().x())/2), startPoint().y())
             << QPointF(endPoint().x(), startPoint().y() + (endPoint().y() > startPoint().y() ? + 1 : - 1)*
                        abs((endPoint().y() - startPoint().y())/2))
             << QPointF(startPoint().x() + (endPoint().x() > startPoint().x() ? + 1 : - 1)*
                        abs((endPoint().x() - startPoint().x())/2), endPoint().y())
             << QPointF(startPoint().x(), startPoint().y() + (endPoint().y() > startPoint().y() ? + 1 : - 1)*
                        abs((endPoint().y() - startPoint().y())/2));

    painter -> drawPolygon(losango); // Desenha Losango

    Q_UNUSED(option)
    Q_UNUSED(widget)
}
