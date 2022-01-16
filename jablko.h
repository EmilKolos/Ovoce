#ifndef JABLKO_H
#define JABLKO_H

#include "ovoce.h"
#include <string>

using namespace std;

class Jablko : public ovoce
{
public:
    Jablko(string cultivar);

    void fruitInfo();

    const string &getAppleCultivar() const;
    void setAppleCultivar(const string &newAppleCultivar);

protected:
    string appleCultivar;

};

#endif // JABLKO_H
