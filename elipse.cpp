#include "elipse.h"
#include <QPainter>

Elipse::Elipse(QPointF point, QObject *parent) : Figura(point, parent) {
    Q_UNUSED(point)
}

Elipse::~Elipse(){ }

// Método Desenhar (Elipse)
void Elipse::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    // Define cor e espessura da borda do denho
    painter -> setPen(QPen(Qt::blue, 2));

    // Parâmetros: x_inicial, y_inicial, tamanho_x, tamanho_y
    QRectF elipse(endPoint().x() > startPoint().x() ? startPoint().x() : endPoint().x(),
                  endPoint().y() > startPoint().y() ? startPoint().y() : endPoint().y(),
                  qAbs(endPoint().x() - startPoint().x()),
                  qAbs(endPoint().y() - startPoint().y()));

    painter -> drawEllipse(elipse); // Desenha Elipse

    Q_UNUSED(option)
    Q_UNUSED(widget)
}

