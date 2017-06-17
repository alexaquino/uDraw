#include "triangulo.h"
#include <QPainter>

Triangulo::Triangulo(QPointF point, QObject *parent) : Figura(point,parent) {
    Q_UNUSED(point)
}

Triangulo::~Triangulo(){}

// Método: Desenhar (Triângulo)
void Triangulo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    // Define cor e espessura da borda do denho
    painter -> setPen(QPen(Qt::red, 2));

    QPolygonF triangulo;

    triangulo << QPointF(startPoint().x() + (endPoint().x() > startPoint().x() ? + 1 : - 1)*
                         abs((endPoint().x() - startPoint().x())/2), startPoint().y())
              << QPointF((endPoint().x() > startPoint().x()) ? endPoint().x() : startPoint().x(),
                          endPoint().y())
              << QPointF((endPoint().x() > startPoint().x()) ? startPoint().x() : endPoint().x(),
                          endPoint().y());

    painter -> drawPolygon(triangulo);

    Q_UNUSED(option)
    Q_UNUSED(widget)
}
