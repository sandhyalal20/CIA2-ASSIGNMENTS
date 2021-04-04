#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QDebug>
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


void MainWindow::on_pushButton_clicked()
{
  QMessageBox::information(this,"Sandhya R 212218104146","This is INFORMATION Box..");
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Sandhya","Do you like Chocolates?");
    if(reply==QMessageBox::Yes)
    {
        QMessageBox::information(this,"Chocolates","Yes");
    }
    if(reply==QMessageBox::No)
    {
        QMessageBox::information(this,"Chocolates","No");
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Sandhya","This is a CUSTOM message",QMessageBox::Yes|QMessageBox::YesToAll|QMessageBox::No|QMessageBox::NoToAll);
    if(reply==QMessageBox::Yes)
    {
        qDebug()<<"Nothing Is Displayed..";
    }
    if(reply==QMessageBox::YesToAll)
    {
        QMessageBox::warning(this,"Sandhya 4146","Display the message with warning as YesToAll");
    }
    if(reply==QMessageBox::No)
    {
        qDebug()<<"Nothing Is Displayed..";
    }
    if(reply==QMessageBox::NoToAll)
    {
        QMessageBox::warning(this,"Sandhya 4146","Dont Display the message with warning as YesToAll");
    }
}
void MainWindow::on_pushButton_4_clicked()
{
   QMessageBox::warning(this,"Sandhya R 212218104146","This is a WARNING message!");
}

void MainWindow::on_pushButton_5_clicked(bool checked)
{
    QIcon *ico = new QIcon();
           ico->addPixmap(QPixmap("C:\\Users\\ELCOT\\Desktop\\icon.png"),QIcon::Normal,QIcon::On);
           if(QIcon::On==true) {
               qDebug() <<"button is checked ";
           }
           else
           {
               qDebug() <<"button is checked ";
           }
           ico->addPixmap(QPixmap("C:\\Users\\ELCOT\\Desktop\\off.png"),QIcon::Normal,QIcon::Off);
           ui->pushButton_5->setIcon(*ico);
           ui->pushButton_5->setCheckable(true);
}
