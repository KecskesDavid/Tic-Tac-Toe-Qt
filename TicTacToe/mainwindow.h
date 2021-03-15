#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QPair>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_1_1_clicked();
    void on_pushButton_1_2_clicked();
    void on_pushButton_1_3_clicked();
    void on_pushButton_2_1_clicked();
    void on_pushButton_2_2_clicked();
    void on_pushButton_2_3_clicked();
    void on_pushButton_3_1_clicked();
    void on_pushButton_3_2_clicked();
    void on_pushButton_3_3_clicked();

private:
    Ui::MainWindow *ui;
    int playerFlag = 0;
    int gridMatrix[3][3]={0};
    QPair<int,int> resolveMatrix[7][3]={
      {QPair<int,int>(0,0),QPair<int,int>(1,1),QPair<int,int>(2,2)},
      {QPair<int,int>(0,0),QPair<int,int>(0,1),QPair<int,int>(0,2)},
      {QPair<int,int>(1,0),QPair<int,int>(1,1),QPair<int,int>(1,2)},
      {QPair<int,int>(2,0),QPair<int,int>(2,1),QPair<int,int>(2,2)},
      {QPair<int,int>(0,0),QPair<int,int>(1,0),QPair<int,int>(2,0)},
      {QPair<int,int>(0,1),QPair<int,int>(1,1),QPair<int,int>(2,1)},
      {QPair<int,int>(0,2),QPair<int,int>(1,2),QPair<int,int>(2,2)},
    };
    void checkWinner(int);
    void resolveButton(QPushButton*,int,int);
};
#endif // MAINWINDOW_H
