#ifndef COMPLEMENT_H
#define COMPLEMENT_H

#include <QString>
#include <QVector>

class Complement
{
public:
    Complement();

    virtual ~Complement() {}

    virtual QString GetNom() = 0;
};

#endif // COMPLEMENT_H
