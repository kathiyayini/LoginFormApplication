#include "mainwindow.h"
#include <QApplication>
#include<QTextStream>
#include<QFile>
#include<QString>
QString readTextFile(QString path){
     QFile file(path);
     if(file.open(QIODevice::ReadOnly|QIODevice::Text))
     {
         QTextStream in(&file);
         return in.readAll();
     }
     return "";
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString css=readTextFile(":/design/style.txt");
     if(css.length()>0)
     {
         a.setStyleSheet(css);
     }
    MainWindow w;
    w.show();
    return a.exec();
}