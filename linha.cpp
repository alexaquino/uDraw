#include "linha.h"
#include <QPainter>

Linha::Linha(QPointF point, QObject *parent) : Figura(point, parent) {
    Q_UNUSED(point)
}

Linha::~Linha(){ }

// Método Desenhar (Linha)
void Linha::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    // Define cor e espessura da borda do denho
    painter -> setPen(QPen(Qt::black, 2));

    // Parâmetros: x_inicial, y_inicial, tamanho_x, tamanho_y
    QLineF linha(endPoint().x() > startPoint().x() ? startPoint().x() : endPoint().x(),
                 endPoint().y() > startPoint().y() ? startPoint().y() : endPoint().y(),
                 qAbs(endPoint().x() - startPoint().x()),
                 qAbs(endPoint().y() - startPoint().y()));

    painter -> drawLine(linha); // Desenha Linha

    Q_UNUSED(option)
    Q_UNUSED(widget)
}

