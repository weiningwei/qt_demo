#include "dialog.h"
#include <QDebug>

dialog::dialog(QWidget *parent) : QWidget(parent)
{
    qDebug() << "construct funtion";
}

void dialog::dialog_test(void)
{
    qDebug() << "dialog_test function";
}
