#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ajuda.h"

// Construtor
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    scene = new PaintScene();
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    timer = new QTimer();
    connect(timer, &QTimer::timeout, this, &MainWindow::slotTimer);
    timer->start(100);
}

// Destrutor
MainWindow::~MainWindow() {
    delete ui;
}

// Cria área da cena (área de desenho)
void MainWindow::slotTimer() {
    timer->stop();
    scene->setSceneRect(0, 0, ui->graphicsView->width() - 20, ui->graphicsView->height() - 20);
}

// Redimenciona janela
void MainWindow::resizeEvent(QResizeEvent *event) {
    timer->start(100);
    QMainWindow::resizeEvent(event);
}

// Botão habilita desenho do Losango
void MainWindow::on_pushButton_clicked() {
    scene -> setTypeFigura(PaintScene::LosangoType);
}

// Botão habilita desenho do Retangulo
void MainWindow::on_pushButton_2_clicked() {
    scene -> setTypeFigura(PaintScene::RetanguloType);
}

// Botão habilita desenho do Triângulo
void MainWindow::on_pushButton_3_clicked() {
    scene -> setTypeFigura(PaintScene::TrianguloType);
}

// Botão habilita desenho do Elipse
void MainWindow::on_pushButton_4_clicked() {
    scene -> setTypeFigura(PaintScene::ElipseType);
}

// Botão habilita desenho do Linha
void MainWindow::on_pushButton_5_clicked() {
    scene -> setTypeFigura(PaintScene::LinhaType);
}

// Botão habilita desenho do Ponto
void MainWindow::on_pushButton_6_clicked() {
    scene -> setTypeFigura(PaintScene::PontoType);
}

// Menu
void MainWindow::on_actionAtalhos_triggered() {
    Ajuda ajudaObject;
    ajudaObject.setModal(true);
    ajudaObject.exec();
}
