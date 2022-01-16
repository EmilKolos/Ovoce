#ifndef OVOCE_H
#define OVOCE_H

#include <string>
#include <iostream>
using namespace std;


class ovoce
{
public:
    ovoce();

    const string &getFruitName() const;
    void setFruitName(const string &newFruitName);

    float getFruitWeight() const;
    void setFruitWeight(float newFruitWeight);

    int getFruitRipeness() const;
    void setFruitRipeness(int newFruitRipeness);

    virtual void fruitInfo();

    void operator++();

protected:
    string fruitName;
    int fruitWeight;
    int fruitRipeness;
};

#endif // OVOCE_H
