#include "ovoce.h"

ovoce::ovoce()
{
    fruitName = "Nedefinovano";
    fruitWeight = 0;
    fruitRipeness = 1;
}

const string &ovoce::getFruitName() const
{
    return fruitName;
}

void ovoce::setFruitName(const string &newFruitName)
{
    fruitName = newFruitName;
}

float ovoce::getFruitWeight() const
{
    return fruitWeight;
}

void ovoce::setFruitWeight(float newFruitWeight)
{
    fruitWeight = newFruitWeight;
}

int ovoce::getFruitRipeness() const
{
    return fruitRipeness;
}

void ovoce::setFruitRipeness(int newFruitRipeness)
{
    fruitRipeness = newFruitRipeness;
}

void ovoce::fruitInfo()
{
    cout << "Ovoce: " << fruitName << endl
         << "Vaha: " << fruitWeight << endl
         << "Zralost: " << fruitRipeness << endl;
}

void ovoce::operator++()
{
    fruitRipeness++;
}
