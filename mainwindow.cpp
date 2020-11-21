#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmessagebox.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_ChuY->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Cong_clicked()
{
    int tskq = 0;
    int mskq = 0;
    int ts1 = ui->lineEdit_TS1->text().toInt();
    int ts2 = ui->lineEdit_TS2->text().toInt();
    int ms1 = ui->lineEdit_MS1->text().toInt();
    int ms2 = ui->lineEdit_MS2->text().toInt();

    if((ui->lineEdit_MS1->text() == "")
    && (ui->lineEdit_MS2->text() == "")
    && (ui->lineEdit_TS1->text() == "")
    && (ui->lineEdit_TS2->text() == ""))
    {
        ui->label_ChuY->setVisible(true);
    } else
    {
        ui->label_ChuY->setVisible(false);
        if(ms1 == ms2)
        {
            mskq = ms1;
            tskq = ts1 + ts2;
        } else
        {
            mskq = ms1*ms2;
            ts1 *= ms2;
            ts2 *= ms1;
            tskq = ts1 + ts2;
        }
    }

    for(int i = (tskq < mskq ? tskq : mskq); i >= 1; i--)
    {
        if(tskq % i == 0 && mskq % i == 0) // tim bcnn
        {
            tskq /= i;
            mskq /= i;
        }
    }

    ui->lineEdit_TSKQ->setText(QString::number(tskq));
    ui->lineEdit_MSKQ->setText(QString::number(mskq));
}

void MainWindow::on_pushButton_Tru_clicked()
{
    int tskq = 0;
    int mskq = 0;
    int ts1 = ui->lineEdit_TS1->text().toInt();
    int ts2 = ui->lineEdit_TS2->text().toInt();
    int ms1 = ui->lineEdit_MS1->text().toInt();
    int ms2 = ui->lineEdit_MS2->text().toInt();

    if((ui->lineEdit_MS1->text() == "")
    && (ui->lineEdit_MS2->text() == "")
    && (ui->lineEdit_TS1->text() == "")
    && (ui->lineEdit_TS2->text() == ""))
    {
        ui->label_ChuY->setVisible(true);
    } else
    {
        ui->label_ChuY->setVisible(false);
        if(ms1 == ms2)
        {
            mskq = ms1;
            tskq = ts1 - ts2;
        } else
        {
            mskq = ms1*ms2;
            ts1 *= ms2;
            ts2 *= ms1;
            tskq = ts1 - ts2;
        }
    }

    for(int i = (tskq < mskq ? tskq : mskq); i >= 1; i--)
    {
        if(tskq % i == 0 && mskq % i == 0) // tim bcnn
        {
            tskq /= i;
            mskq /= i;
        }
    }

    ui->lineEdit_TSKQ->setText(QString::number(tskq));
    ui->lineEdit_MSKQ->setText(QString::number(mskq));
}

void MainWindow::on_pushButton_Nhan_clicked()
{
    int tskq = 0;
    int mskq = 0;
    int ts1 = ui->lineEdit_TS1->text().toInt();
    int ts2 = ui->lineEdit_TS2->text().toInt();
    int ms1 = ui->lineEdit_MS1->text().toInt();
    int ms2 = ui->lineEdit_MS2->text().toInt();

    if((ui->lineEdit_MS1->text() == "")
    && (ui->lineEdit_MS2->text() == "")
    && (ui->lineEdit_TS1->text() == "")
    && (ui->lineEdit_TS2->text() == ""))
    {
        ui->label_ChuY->setVisible(true);
    } else
    {
        ui->label_ChuY->setVisible(false);
        tskq = ts1 * ts2;
        mskq = ms1 * ms2;
    }

    for(int i = (tskq < mskq ? tskq : mskq); i >= 1; i--)
    {
        if(tskq % i == 0 && mskq % i == 0) // tim bcnn
        {
            tskq /= i;
            mskq /= i;
        }
    }

    ui->lineEdit_TSKQ->setText(QString::number(tskq));
    ui->lineEdit_MSKQ->setText(QString::number(mskq));
}

void MainWindow::on_pushButton_Chia_clicked()
{
    int tskq = 0;
    int mskq = 0;
    int ts1 = ui->lineEdit_TS1->text().toInt();
    int ts2 = ui->lineEdit_TS2->text().toInt();
    int ms1 = ui->lineEdit_MS1->text().toInt();
    int ms2 = ui->lineEdit_MS2->text().toInt();

    if((ui->lineEdit_MS1->text() == "")
    && (ui->lineEdit_MS2->text() == "")
    && (ui->lineEdit_TS1->text() == "")
    && (ui->lineEdit_TS2->text() == ""))
    {
        ui->label_ChuY->setVisible(true);
    } else
    {
        ui->label_ChuY->setVisible(false);
        tskq = ts1 * ms2;
        mskq = ts2 * ms1;
    }

    for(int i = (tskq < mskq ? tskq : mskq); i >= 1; i--)
    {
        if(tskq % i == 0 && mskq % i == 0) // tim bcnn
        {
            tskq /= i;
            mskq /= i;
        }
    }

    ui->lineEdit_TSKQ->setText(QString::number(tskq));
    ui->lineEdit_MSKQ->setText(QString::number(mskq));
}

void MainWindow::on_pushButton_TiepTuc_clicked()
{

    ui->lineEdit_TS1->setText("");
    ui->lineEdit_TS2->setText("");
    ui->lineEdit_MS1->setText("");
    ui->lineEdit_MS2->setText("");
    ui->lineEdit_TSKQ->setText("");
    ui->lineEdit_MSKQ->setText("");
}

void MainWindow::on_pushButton_Thoat_clicked()
{
    void MainWindow::on_pushButton_Thoat_clicked()
    {
        ui->label_ThongBao->setVisible(false);
        QMessageBox a;
        a.setWindowTitle("Chu y");
        a.setText("Ban co muon thoat khong?");
        a.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        a.setDefaultButton(QMessageBox::No);
        a.setIcon(QMessageBox::Warning);
        int ketQua = a.exec();
        switch (ketQua) {
            case QMessageBox::Yes:
            close();
            break;
        case QMessageBox::No:
            break;
        }
    }
}
