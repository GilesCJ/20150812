#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QString>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString filename;
    QFileDialog ss;
    filename = ss.getOpenFileName(this, tr("Open File"),
                                  "/home",
                                  tr("Images (*.png *.xpm *.jpg)"));

}

MainWindow::~MainWindow()
{
    delete ui;
}
