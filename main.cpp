#include "iostream"
#include "color.h"
#include "ctime"
using namespace std;

/*Hadani tejneho cisla*/
int main(int argc, char *argv[]){
    srand(time(0));
    int tajneCislo;
    int hracovoCislo;
    tajneCislo = rand()%5+1; //náhodné cislo od 1 do 5
    cout << "Zadej svij typ na tajne cislo:";
    cin >> hracovoCislo;
    if (tajneCislo == tajneCislo)
    {
        cout << "Uhodli jste tajne cislo!" << endl;
    }
    else
    {
        cout << "Neuhodli jste tajne cislo!" << endl;
    }
    
    return 0;
}