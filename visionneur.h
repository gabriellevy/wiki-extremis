#ifndef VISIONNEUR_H
#define VISIONNEUR_H

#include <QMainWindow>
#include "TLMContreTLM/compterendu.h"

namespace Ui {
class Visionneur;
}

class Visionneur : public QMainWindow
{
    Q_OBJECT

public:
    explicit Visionneur(QWidget *parent = nullptr);
    ~Visionneur();

    void AfficherCompteRendu(CompteRendu* compteRendu);

private:
    Ui::Visionneur *ui;
};

#endif // VISIONNEUR_H
