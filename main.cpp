#include "buttonpress.h"
#include <QApplication>
#include "wiringPi.h"
#include <QTimer>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    buttonpress w;
    w.show();

    return a.exec();
}
