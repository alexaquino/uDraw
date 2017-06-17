#ifndef LINHA_H
#define LINHA_H

#include <QObject>
#include <QGraphicsItem>
#include "figura.h"

class Linha : public Figura {
    Q_OBJECT

  public:
    explicit Linha(QPointF point, QObject *parent = 0);
    ~Linha();

  private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // LINHA_H
