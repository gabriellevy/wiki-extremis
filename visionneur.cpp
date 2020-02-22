#include "visionneur.h"
#include "ui_visionneur.h"

Visionneur::Visionneur(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Visionneur)
{
    ui->setupUi(this);
}

Visionneur::~Visionneur()
{
    delete ui;
}


void Visionneur::AfficherCompteRendu(CompteRendu* compteRendu){

}
