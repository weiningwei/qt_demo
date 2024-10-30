#ifndef DIALOG_H
#define DIALOG_H

#include <QWidget>

class dialog : public QWidget
{
    Q_OBJECT
public:
    explicit dialog(QWidget *parent = nullptr);
    void dialog_test(void);
signals:

};

#endif // DIALOG_H
