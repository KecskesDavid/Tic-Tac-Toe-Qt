#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

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

void MainWindow::resolveButton(QPushButton *button,int i, int j)
{
    steps--;
    if(playerFlag==1){
        button->setText("x");
        playerFlag=-1;
        gridMatrix[i-1][j-1]=1;
        checkWinner(1);
    }
    else{
        button->setText("o");
        playerFlag=1;
        gridMatrix[i-1][j-1]=-1;
        checkWinner(-1);
    }
}

/*Slots for the buttons*/
void MainWindow::on_pushButton_1_1_clicked()
{
    if(ui->pushButton_1_1->text()==""){
        resolveButton(ui->pushButton_1_1,1,1);
    }
}

void MainWindow::on_pushButton_1_2_clicked()
{
    if(ui->pushButton_1_2->text()==""){
        resolveButton(ui->pushButton_1_2,1,2);
    }
}

void MainWindow::on_pushButton_1_3_clicked()
{
    if(ui->pushButton_1_3->text()==""){
        resolveButton(ui->pushButton_1_3,1,3);
    }
}

void MainWindow::on_pushButton_2_1_clicked()
{
    if(ui->pushButton_2_1->text()==""){
        resolveButton(ui->pushButton_2_1,2,1);
    }
}

void MainWindow::on_pushButton_2_2_clicked()
{
    if(ui->pushButton_2_2->text()==""){
        resolveButton(ui->pushButton_2_2,2,2);
    }
}

void MainWindow::on_pushButton_2_3_clicked()
{
    if(ui->pushButton_2_3->text()==""){
        resolveButton(ui->pushButton_2_3,2,3);
    }
}

void MainWindow::on_pushButton_3_1_clicked()
{
    if(ui->pushButton_3_1->text()==""){
        resolveButton(ui->pushButton_3_1,3,1);
    }
}

void MainWindow::on_pushButton_3_2_clicked()
{
    if(ui->pushButton_3_2->text()==""){
        resolveButton(ui->pushButton_3_2,3,2);
    }
}

void MainWindow::on_pushButton_3_3_clicked()
{
    if(ui->pushButton_3_3->text()==""){
        resolveButton(ui->pushButton_3_3,3,3);
    }
}

void MainWindow::checkWinner(int flag) /*This function checks wheter there is a winner or not.*/
{
    int counter=0; /*With this variable is calculated wheter a player made a row or not*/
    for(int i=0; i<8; i++){
        for(int j=0;j<3;j++){
            if(gridMatrix[resolveMatrix[i][j].first][resolveMatrix[i][j].second]==flag){ /*Matrix that contains every solution in pairs*/
                counter++;
            }
        }
        if(counter==3){
            break;
        }
        counter=0;
    }
    if(counter==3){  /*If we have a winner then the game is restarted*/
        if(flag == -1)
        {
            QMessageBox::warning(this,"Winner!","O is the Winner!","Restart");
            scoreO++;
            ui->scoreO->setText(QString::number(scoreO));
        }
        else
        {
            QMessageBox::warning(this,"Winner!","X is the Winner!","Restart");
            scoreX++;
            ui->scoreX->setText(QString::number(scoreX));
        }
        restartGame();
        return;
    }
    if(steps == 0){ /*Draw case*/
        QMessageBox::warning(this,"Draw!","The game ended in a draw!","Restart");
        restartGame();
    }
}

void MainWindow::restartGame() /*Sets everything to 0*/
{
    playerFlag=0;
    steps=9;
    ui->pushButton_1_1->setText("");
    ui->pushButton_1_2->setText("");
    ui->pushButton_1_3->setText("");
    ui->pushButton_2_1->setText("");
    ui->pushButton_2_2->setText("");
    ui->pushButton_2_3->setText("");
    ui->pushButton_3_1->setText("");
    ui->pushButton_3_2->setText("");
    ui->pushButton_3_3->setText("");
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            gridMatrix[i][j]=0;
}

void MainWindow::on_exitBtn_clicked()/*Game exit*/
{
    this->close();
}
