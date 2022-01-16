#include "hroznovevino.h"

HroznoveVino::HroznoveVino(string cultivar, int count)
{
    fruitName = "Hroznove vino";
    fruitRipeness = 1;
    fruitWeight = 200;
    grapeCount = count;
    grapeCultivar = cultivar;
}

const string &HroznoveVino::getGrapeCultivar() const
{
    return grapeCultivar;
}

void HroznoveVino::setGrapeCultivar(const string &newGrapeCultivar)
{
    grapeCultivar = newGrapeCultivar;
}

int HroznoveVino::getGrapeCount() const
{
    return grapeCount;
}

void HroznoveVino::setGrapeCount(int newGrapeCount)
{
    grapeCount = newGrapeCount;
}

void HroznoveVino::fruitInfo()
{
    ovoce::fruitInfo();
    cout << "Odruda: " << grapeCultivar << endl
         << "Pocet kulicek ve strapci: " << grapeCount << endl;
}

void HroznoveVino::operator--()
{
    grapeCount--;
}
