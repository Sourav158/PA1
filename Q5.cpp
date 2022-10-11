#include <iostream>
#include <cctype>
using namespace std;

int main(){

    int asc;
    char ch;
    cout << "Enter a letter: ";
    cin >> ch;

    if (int(ch) == 122 || int(ch) == 90){
        cout << "CRYPTO: A" << endl;
    } else if (islower(ch)){
        asc = int(ch) -31;
        cout << "CRYPTO: " << char(asc) << endl;
    } else if(isupper(ch)){ 
        asc = int(ch) + 1;
        cout << "CRYPTO: " << char(asc) << endl;
    }else{
        cout << "YOU DID NOT ENTER A LETTER";
    }
}