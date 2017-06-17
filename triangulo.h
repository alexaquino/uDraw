#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <QObject>
#include <QGraphicsItem>
#include "figura.h"

class Triangulo : public Figura {
    Q_OBJECT

  public:
    explicit Triangulo(QPointF point, QObject *parent = 0);
    ~Triangulo();

  private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // TRIANGULO_H
