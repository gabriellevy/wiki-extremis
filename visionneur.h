#ifndef VISIONNEUR_H
#define VISIONNEUR_H

#include <QMainWindow>

namespace Ui {
class Visionneur;
}

class Visionneur : public QMainWindow
{
    Q_OBJECT

public:
    explicit Visionneur(QWidget *parent = nullptr);
    ~Visionneur();

private:
    Ui::Visionneur *ui;
};

#endif // VISIONNEUR_H
