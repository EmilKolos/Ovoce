#include <iostream>
#include "ovoce.h"
#include "jablko.h"
#include "hroznovevino.h"
#include "kosiknaovoce.h"

using namespace std;

int main()
{
    /* Trida ovoce
    ovoce randomOvoce;
    randomOvoce.fruitInfo();
    ++randomOvoce;
    randomOvoce.fruitInfo();
    */

    /* Trida Jablko
   Jablko zelenyVoleJabko("kurvaNevimJabkoAleZeleny");
   zelenyVoleJabko.fruitInfo();
   */


   HroznoveVino randomVino("prosteVino",15);
   /* Trida HroznoveVino
   randomVino.fruitInfo();
   --randomVino;
   randomVino.fruitInfo();
   */

    // Template KosikNaOvoce
   KosikNaOvoce<ovoce*> kosik;
   /* S pretizenim operatoru
   kosik += new Jablko("jabko");
   kosik += new HroznoveVino("JakozeVino", 15);
   */
   if(kosik.addFruit(new Jablko("jabko"))) cout << "Succesfully added!"<< endl; else cout << "Failed to add!"<< endl;
   if(kosik.removeFruit(&randomVino)) cout << "Successfully removed!"<< endl; else cout << "Failed to remove!"<< endl;
   if(kosik.addFruit(&randomVino)) cout << "Successfully added!"<< endl; else cout << "Failed to add!"<< endl;
   if(kosik.addFruit(new HroznoveVino("Cihla", 30))) cout << "Successfully added!"<< endl; else cout << "Failed to add!"<< endl;
   if(kosik.removeFruit(&randomVino)) cout << "Successfully removed!"<< endl; else cout << "Failed to remove!"<< endl;
   kosik.info();


    return 0;
}
