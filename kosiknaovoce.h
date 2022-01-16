#ifndef KOSIKNAOVOCE_H
#define KOSIKNAOVOCE_H

#include "jablko.h"
#include "hroznovevino.h"
#include "ovoce.h"
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
class KosikNaOvoce
{
public:
    void info();
    int checkWeight();

    bool addFruit(T);
    bool removeFruit(T);
    vector<T> kosik;

protected:
    int maxWeight = 300;

};

template <class T>
void KosikNaOvoce<T>::info()
{
    for (auto i: kosik)
    {
        i->fruitInfo();
    }
}

template <class T>
int KosikNaOvoce<T>::checkWeight()
{
    int weight = 0;
    for (T i : kosik)
    {
        weight+=i->getFruitWeight();
    }
    return weight;
}
/* Verze s pretizenim operatoru
template <class basket, class fruit>
void operator+=(KosikNaOvoce<basket> &b, fruit f)
{
    b.kosik.push_back(f);
}
*/
template <class T>
bool KosikNaOvoce<T>::addFruit(T f)
{
    if(checkWeight()+f->getFruitWeight() <= maxWeight)
    {
        kosik.push_back(f);
        return true;
    }
    else return false;
}

template <class T>
bool KosikNaOvoce<T>::removeFruit(T f)
{
    if(find(kosik.begin(), kosik.end(), f) != kosik.end())
    {
        remove(kosik.begin(), kosik.end(), f);
    } else return false;
}

#endif // KOSIKNAOVOCE_H
