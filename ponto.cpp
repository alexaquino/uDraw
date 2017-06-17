#include "ponto.h"
#include <QPainter>

Ponto::Ponto(QPointF point, QObject *parent) : Figura(point, parent) {
    Q_UNUSED(point)
}

Ponto::~Ponto(){ }

// Método: Desenhar (Ponto)
void Ponto::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    // Define cor e espessura da borda do denho
    painter -> setPen(QPen(Qt::gray, 4));

    // Parâmetros: x_inicial, y_inicial
    QPointF ponto(endPoint().x() > startPoint().x() ? startPoint().x() : endPoint().x(),
                  endPoint().y() > startPoint().y() ? startPoint().y() : endPoint().y());

    painter -> drawPoint(ponto); // Desenha Ponto

    Q_UNUSED(option)
    Q_UNUSED(widget)
}

