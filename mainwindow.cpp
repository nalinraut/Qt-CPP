#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnAstroid_clicked()
{
    this->ui->renderArea->shape(RenderArea::Astroid);
    this->ui->renderArea->backgroundColor(Qt::red);
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnCycloid_clicked()
{
    this->ui->renderArea->shape(RenderArea::Cycloid);
    this->ui->renderArea->backgroundColor(Qt::green);
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnHuygens_clicked()
{
    this->ui->renderArea->shape(RenderArea::HuygensCycloid);
    this->ui->renderArea->backgroundColor(Qt::blue);
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnHypocycloid_clicked()
{
    this->ui->renderArea->shape(RenderArea::HypoCycloid);
    this->ui->renderArea->backgroundColor(Qt::yellow);
    this->ui->renderArea->repaint();
}
