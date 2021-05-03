#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QStatusBar>
#include<QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
      this->setCentralWidget(ui->groupBox);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_signin_clicked()
{
    QString username=ui->username->text();
        QString password=ui->password->text();
        if(username=="kathiyayini" && password=="2001")
        {
            QMessageBox::information(this,"Login","Username and password is correct");
            hide();
            info=new Dialog(this);
            info->show();
            statusBar()->showMessage("this App will be remand within 5 secs",5000);

        }
        else{
        QMessageBox::warning(this,"Login","Username or password is not correct");
}
}

void MainWindow::on_cancel_clicked()
{
QApplication::quit();
}
