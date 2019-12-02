#include <QtGui/QApplication>
#include "saotp.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SAOTP w;
    w.show();
    
    return a.exec();
}
