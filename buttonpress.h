#ifndef BUTTONPRESS_H
#define BUTTONPRESS_H

#include "ui_buttonpress.h"

#define button0 22
#define button1 27
#define button2 17

class buttonpress : public QWidget, private Ui::buttonpress
{
    Q_OBJECT

public:
    explicit buttonpress(QWidget *parent = 0);
    QTimer *timeptr;
private slots:
    void readbutton();
};

#endif // BUTTONPRESS_H
