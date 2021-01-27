#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int ktora_tablica(){
    int liczba=(rand()%3)+1;
    return liczba;
}

int main()
{
    srand(time(NULL));

    string letter[50]={"A","a","B","b","C","C","D","d","E","e","F","f","G","g","H","h","I","i",
    "J","j","K","k","L","l","M","m","N","n","O","o","P","p","R","r","S","s","T","t","U","u",
    "V","v","W","w","X","x","Y","y","Z","z"};
    string number[10]={"0","1","2","3","4","5","6","7","8","9"};
    string symbol[5]={"!","@","#","$","&"};

    int ilosc_znakow;

    cout << "Podaj ilosc znakow: ";
    cin >> ilosc_znakow;

    string * password = new string[ilosc_znakow];
    
    for(int i=0; i<ilosc_znakow; i++){
        int pomoc=ktora_tablica();
        switch(pomoc){
        case 1:
            password[i]=letter[(rand()%50)];
            break;
        case 2:
            password[i]=number[(rand()%10)];
            break;
        case 3:
            password[i]=symbol[(rand()%5)];
            break;
        }
    }

    for(int k=0; k<ilosc_znakow; k++)
        cout << password[k];

    delete [] password;

    return 0;
}
