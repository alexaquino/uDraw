#ifndef PONTO_H
#define PONTO_H

#include <QObject>
#include <QGraphicsItem>
#include "figura.h"

class Ponto : public Figura {
    Q_OBJECT

  public:
    explicit Ponto(QPointF point, QObject *parent = 0);
    ~Ponto();

  private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // PONTO_H
