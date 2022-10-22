#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QListWidgetItem>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString words[] = {"Mark", "Yeva", "Oleg", "Olha", "Bohdan"};
    for (int k = 0; k < (words->length()+1); ++k) {
            ui->listWidget->addItem(words[k]);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    QMessageBox::information (this, "Information", item->text());
}

