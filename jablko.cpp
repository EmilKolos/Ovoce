#include "jablko.h"

Jablko::Jablko(string cultivar)
{
    fruitName = "jablko";
    fruitRipeness = 1;
    fruitWeight = 100;
    appleCultivar = cultivar;
}

void Jablko::fruitInfo()
{
    ovoce::fruitInfo();
    cout << "Odruda: " << appleCultivar << endl;
}

const string &Jablko::getAppleCultivar() const
{
    return appleCultivar;
}

void Jablko::setAppleCultivar(const string &newAppleCultivar)
{
    appleCultivar = newAppleCultivar;
}
