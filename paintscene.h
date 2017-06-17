#ifndef PAINTSCENE_H
#define PAINTSCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include "figura.h"

class PaintScene : public QGraphicsScene {
    Q_OBJECT
    Q_PROPERTY(int typeFigura READ typeFigura WRITE setTypeFigura NOTIFY typeFiguraChanged)

  public:
    explicit PaintScene(QObject *parent = 0);
    ~PaintScene();

    int typeFigura() const;
    void setTypeFigura(const int type);

    enum FiguraTypes {
         RetanguloType,
         LosangoType,
         TrianguloType,
         ElipseType,
         LinhaType,
         PontoType
    };

signals:
    void typeFiguraChanged();

private:

    Figura *tempFigura;
    int m_typeFigura;

private:
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);

};

#endif // PAINTSCENE_H
