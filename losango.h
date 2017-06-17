#ifndef LOSANGO_H
#define LOSANGO_H

#include <QObject>
#include <QGraphicsItem>
#include "figura.h"

class Losango : public Figura {
    Q_OBJECT

  public:
    explicit Losango(QPointF point, QObject *parent = 0);
    ~Losango();

  private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // LOSANGO_H
