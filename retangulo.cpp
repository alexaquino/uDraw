#include "retangulo.h"
#include <QPainter>

Retangulo::Retangulo(QPointF point, QObject *parent) : Figura(point,parent) {
    Q_UNUSED(point)
}

Retangulo::~Retangulo(){ }

// Método: Desenhar (Retangulo)
void Retangulo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    // Define cor e espessura da borda do denho
    painter -> setPen(QPen(Qt::yellow, 2));

    // Parâmetros: x_inicial, y_inicial, tamanho_x, tamanho_y
    QRectF retangulo(endPoint().x() > startPoint().x() ? startPoint().x() : endPoint().x(),
                     endPoint().y() > startPoint().y() ? startPoint().y() : endPoint().y(),
                     qAbs(endPoint().x() - startPoint().x()),
                     qAbs(endPoint().y() - startPoint().y()));

    painter -> drawRect(retangulo); // Desenha Retangulo

    Q_UNUSED(option)
    Q_UNUSED(widget)
}

