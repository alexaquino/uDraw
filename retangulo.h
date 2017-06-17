#ifndef RETANGULO_H
#define RETANGULO_H

#include <QObject>
#include <QGraphicsItem>
#include "figura.h"

class Retangulo : public Figura {
    Q_OBJECT

  public:
    explicit Retangulo(QPointF point, QObject *parent = 0);
    ~Retangulo();

  private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // RETANGULO_H
