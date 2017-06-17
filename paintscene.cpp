#include "paintscene.h"
#include "losango.h"
#include "triangulo.h"
#include "retangulo.h"
#include "elipse.h"
#include "linha.h"
#include "ponto.h"


PaintScene::PaintScene(QObject *parent) : QGraphicsScene(parent) { }

PaintScene::~PaintScene() { }

int PaintScene::typeFigura() const {
    return m_typeFigura;
}


void PaintScene::setTypeFigura(const int type) {
    m_typeFigura = type;
}


void PaintScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event) {
    tempFigura -> setEndPoint(event -> scenePos());

    this -> update(QRectF(0, 0, this -> width(), this -> height()));
}


void PaintScene::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    switch (m_typeFigura) {
        case RetanguloType: {
            Retangulo *item = new Retangulo(event -> scenePos());
            item -> setPos(event -> pos());
            tempFigura = item;
            break;
        }
        case LosangoType: {
            Losango *item = new Losango(event -> scenePos());
            item -> setPos(event -> pos());
            tempFigura = item;
            break;
        }
        case TrianguloType: {
            Triangulo *item = new Triangulo(event -> scenePos());
            item -> setPos(event -> pos());
            tempFigura = item;
            break;
        }
        case ElipseType: {
            Elipse *item = new Elipse(event -> scenePos());
            item -> setPos(event -> pos());
            tempFigura = item;
            break;
        }
        case LinhaType: {
            Linha *item = new Linha(event -> scenePos());
            item -> setPos(event -> pos());
            tempFigura = item;
            break;
        }
        case PontoType: {
            Ponto *item = new Ponto(event -> scenePos());
            item -> setPos(event -> pos());
            tempFigura = item;
            break;
        }
        default:{
            Retangulo *item = new Retangulo(event -> scenePos());
            item -> setPos(event -> pos());
            tempFigura = item;
            break;
        }
    }

    this -> addItem(tempFigura);
}
