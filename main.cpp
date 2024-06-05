#include "iostream"
using namespace std;
/*Hadani tejneho cisla*/
int main(int argc, char *argv[]){
    int tajneCislo;
    int hracovoCislo;
    tajneCislo = rand()%5+1; //náhodné cislo od 1 do 5
    cout << "Zadej svij typ na tajne čislo:";
    cin >> hracovoCislo;
    return 0;
}