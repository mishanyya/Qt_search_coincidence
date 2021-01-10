#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "QMainWindow"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
void search();   // это созданный нами слот для поиска совпадений
void clear();   // это созданный нами слот для сброса


};
#endif // MAINWINDOW_H
