#include "visionneur.h"
#include <QApplication>
#include "Coutume/ucoutume.h"
#include <memory>

using std::shared_ptr;
using std::make_shared;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Visionneur w;

    // tmp test :
    shared_ptr<UCoutume> univers = make_shared<UCoutume>();
    univers->DeclencherTournoi();

    w.show();

    return a.exec();
}
