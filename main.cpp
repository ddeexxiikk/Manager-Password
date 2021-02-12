#include <iostream>
#include <ctime>
#include <fstream>

int main()
{
    std::string nazwa, nazwa_aplikacji, letnumsym[65]={"A","a","B","b","C","C","D","d","E","e","F","f","G","g","H","h","I","i",
    "J","j","K","k","L","l","M","m","N","n","O","o","P","p","R","r","S","s","T","t","U","u",
    "V","v","W","w","X","x","Y","y","Z","z","0","1","2","3","4","5","6","7","8","9","!","@","#","$","&"};
    int ilosc_znakow;

    printf("Podaj nazwe aplikacji: ");
    std::cin >> nazwa;

    nazwa_aplikacji= nazwa+".txt";

    printf("Podaj ilosc znakow: ");
    std::cin >> ilosc_znakow;

    std::string * password = new std::string[ilosc_znakow];

    srand(time(NULL));

    for(int i=0; i<ilosc_znakow; i++){
        password[i]=letnumsym[(rand()%65)];
    }

    for(int k=0; k<ilosc_znakow; k++)
        std::cout << password[k];

    std::ofstream file;
    file.open(nazwa_aplikacji, std::ios::out);

    for(int k=0; k<ilosc_znakow; k++)
        file << password[k];

    file.close();
    delete [] password;

    return 0;
}
