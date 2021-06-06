#include <QtGui/QApplication>
#include "widget2048.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget2048 w;
    w.show();
    
    return a.exec();
}
