#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mouseMoveEvent(QMouseEvent *ev)
{
    this->x = ev->x();
    this-> y = ev->y();
    qDebug()<<"x: " + QString::number(x) +"|" + "y: " +  QString::number(y);

}
