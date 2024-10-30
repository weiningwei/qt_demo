#ifndef DIALOGUI_H
#define DIALOGUI_H

#include <QWidget>

namespace Ui {
class dialogui;
}

class dialogui : public QWidget
{
    Q_OBJECT

public:
    explicit dialogui(QWidget *parent = nullptr);
    ~dialogui();

private slots:
    void on_pushButton_clicked();

private:
    Ui::dialogui *ui;
};

#endif // DIALOGUI_H
