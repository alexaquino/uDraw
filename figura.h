#ifndef FIGURA_H
#define FIGURA_H

#include <QObject>
#include <QGraphicsItem>
#include <QDebug>

class Figura : public QObject, public QGraphicsItem {
    Q_OBJECT
    // Propiedades que definem o Ponto Inicial e Final do desenho
    Q_PROPERTY(QPointF startPoint READ startPoint WRITE setStartPoint NOTIFY pointChanged)
    Q_PROPERTY(QPointF endPoint READ endPoint WRITE setEndPoint NOTIFY pointChanged)
  public:
    explicit Figura(QPointF point, QObject *parent = 0); // A classe QPointF define um ponto no plano.
                                                         // A classe QObject é a classe base de todos os objetos Qt
                                                         // QObject *parent = 0 Constrói um objeto com o pai pai pai .


    ~Figura();

    QPointF startPoint() const;   // Get Ponto Inicial
    QPointF endPoint() const;     // Get Ponto Final

    void setStartPoint(const QPointF point);   // Set Ponto Inicial
    void setEndPoint(const QPointF point);     // Set Ponto Final

  signals:
    void pointChanged();   // Sinaliza/Comunica alteração de ponto (A comunicação entre os widgets, no Qt, é feita através de signals e slots)

  private:
    QPointF m_startPoint;   // Ponto Inicial
    QPointF m_endPoint;     // Ponto Final

    QRectF boundingRect() const;    // Área em que o desenho será mostrado

  public slots:
    void updateRomb();     // Atualiza área de desenho
};

#endif // FIGURA_H
