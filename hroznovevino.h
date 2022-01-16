#ifndef HROZNOVEVINO_H
#define HROZNOVEVINO_H

#include "ovoce.h"
#include <string>

using namespace std;

class HroznoveVino : public ovoce
{
public:
    HroznoveVino(string cultivar, int count);
    const string &getGrapeCultivar() const;
    void setGrapeCultivar(const string &newGrapeCultivar);

    int getGrapeCount() const;
    void setGrapeCount(int newGrapeCount);

    void fruitInfo();

    void operator--();

protected:
    string grapeCultivar;
    int grapeCount;
};

#endif // HROZNOVEVINO_H
