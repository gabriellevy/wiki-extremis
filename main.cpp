#include "visionneur.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Visionneur w;
    w.show();

    return a.exec();
}
