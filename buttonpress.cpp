#include "buttonpress.h"
#include "wiringPi.h"
#include <QTimer>

buttonpress::buttonpress(QWidget *parent) :
    QWidget(parent)
{
    setupUi(this);
    wiringPiSetupGpio();
    pinMode(button0, INPUT);
    pinMode(button1, INPUT);
    pinMode(button2, INPUT);
    timeptr=new QTimer(this);
    connect(timeptr, SIGNAL(timeout()),SLOT(readbutton));
    timeptr->start(100);
}

void buttonpress::readbutton(){
    bool b0=digitalRead(button0);
    bool b1= digitalRead(button1);
    bool b2= digitalRead(button2);



    if(b0 == true)
        kasten1->setStyleSheet("background-color: red;");
    else
        kasten1->setStyleSheet("background-color: black;");

    if (b1 == true)
        kasten2->setStyleSheet("background-color: red;");
    else
        kasten2->setStyleSheet("background-color: black;");

    if (b2==  true)
        kasten3->setStyleSheet("background-color: red;");
    else
        kasten3->setStyleSheet("background-color: black;");
}
