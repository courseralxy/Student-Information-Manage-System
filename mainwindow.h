﻿#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<string>
#include<iostream>
using namespace std;
#include <QMainWindow>
#include <QWidget>
#include<QTableWidget>
#include<QStringList>
//#include<QLayout>
#include<QObject>
#include<QAction>
#include<QMenu>
#include<QLayout>
#include<QTableWidget>
#include<QObject>
#include<QSize>
#include<QString>
#include<QFileDialog>
#include<QFile>
#include<QMessageBox>
#include<QTextStream>
#include<Qtextedit>
#include<QContextMenuEvent>
#include<QVector>
#include<QComboBox>
#include"studentdatabase.h"
#include"delegate.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    // QTableWidget *table;
    // QLayout *layout;
    QAction *newAction;
     QAction *openAction;
     QAction *saveAction;
     QAction *exitAction;
     QAction *addAction;
     QAction *deleteAction;
     //QAction *sortAction;
     QAction *searchAction;
     QAction *gradeAction;
     QAction *majorAction;
     QAction *gpaAction;
     QAction *insertAction;
     studentDatabase *stuDB;

     bool c[5];
     QWidget *widget;
     QLayout *layout;
     QTableWidget *table;
     QVector<QComboBox*> *QComboBoxList;
     void tableInitialize();
     int partition(int p, int q, int column);
     void quickSort(int p, int q, int column);
     void Swap(int p1,int p2, int column);
     virtual void contextMenuEvent(QContextMenuEvent *event);
private slots:
     void newFile();
     void openFile();
     void saveFile();
     void addModify();
     void deleteModify();
     void sortView(int colunmIndex);
     void searchView();
     void gradeStatistic();
     void majorStatistic();
     void gpaStatistic();
     void tableModify(int row,int column);
     void insertBefore();
     void insertAfter();
     void deleteLine();
     void print_s();
};

#endif // MAINWINDOW_H
