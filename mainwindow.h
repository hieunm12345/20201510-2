#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_pushButton_Cong_clicked();

    void on_pushButton_Tru_clicked();

    void on_pushButton_Nhan_clicked();

    void on_pushButton_Chia_clicked();

    void on_pushButton_TiepTuc_clicked();

    void on_pushButton_Thoat_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
