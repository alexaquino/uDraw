#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>   // Classe mãe de todas as Janelas.
#include <QTimer>        // A classe QTimer fornece temporizadores repetitivos e de disparo único.
#include <QResizeEvent>  // A classe QResizeEvent contém parâmetros de eventos para redimensionar eventos.

#include "paintscene.h"  // Área de deseho.

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT // Macro que possibilita o uso de sinais e slots.

  public:
    explicit MainWindow(QWidget *parent = 0); // Construtor da Janela Principal (apenas 1 parâmetro = explicit ;)
    ~MainWindow(); // Destrutor da Janela Principal

  private:
    Ui::MainWindow *ui;
    PaintScene *scene;
    QTimer *timer;

  private:
    void resizeEvent(QResizeEvent * event); // Redimencionar Evento

  private slots: // Um slot é uma função que é usada para aceitar e responder a um sinal.
    void slotTimer();               // Habilita área da cena
    void on_pushButton_clicked();   // Habilitar forma Losango
    void on_pushButton_2_clicked(); // Habilitar forma Retângulo
    void on_pushButton_3_clicked(); // Habilitar forma Triângulo
    void on_pushButton_4_clicked(); // Habilitar forma Elipse
    void on_pushButton_5_clicked(); // Habilitar forma Linha
    void on_pushButton_6_clicked(); // Habilitar forma Ponto

    void on_actionAtalhos_triggered(); // Menu
};

#endif // MAINWINDOW_H
