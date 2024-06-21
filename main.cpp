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
    cout << "Zadej svij typ na tajne cislo: ";
    cin >> hracovoCislo;
    if (hracovoCislo == tajneCislo)
    {
        cout << GREEN << "Uhodli jste tajne cislo!" << endl;
        cout << RESET << "Cislo bylo " << tajneCislo << endl;
    }
    else
    {
        cout << RED << "Neuhodli jste tajne cislo!" << endl;
        cout << RESET << "Cislo bylo " << tajneCislo << endl;
    }
    
    return 0;
}