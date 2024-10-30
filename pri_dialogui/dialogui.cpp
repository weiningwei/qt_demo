#include "dialogui.h"
#include "ui_dialogui.h"
#include <QDebug>

dialogui::dialogui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dialogui)
{
    ui->setupUi(this);
    qDebug() << "dialogui construct function";
}

dialogui::~dialogui()
{
    delete ui;
}

void dialogui::on_pushButton_clicked()
{
    qDebug() << "button clicked";
    ui->label->setText("hello");
}
