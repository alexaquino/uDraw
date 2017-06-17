#ifndef ELIPSE_H
#define ELIPSE_H

#include <QObject>
#include <QGraphicsItem>
#include "figura.h"

class Elipse : public Figura {
    Q_OBJECT
  public:
    explicit Elipse(QPointF point, QObject *parent = 0);
    ~Elipse();
  private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // ELIPSE_H
