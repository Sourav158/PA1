#include <iostream>
#include <math.h>    
#include <time.h>
using namespace std;

int Blackjack(char);
int BlackJack(char, char);
int rsum = 0;
char cards[12] = {'a','2','3','4','5','6','7','8','9','q','k','j'}; 

int main(){
    srand (time(0));
    char choice;
    int num1 = rand() % 14 + 2;
    int num2 = rand() % 14 + 2;
    int num3;
    Blackjack(cards[num1], cards[num2]);

    cout << "Welcome to EC327 Blackjack" << endl;
    cout << "Total: "<< rsum << endl;
    cout << "Draw again (y/n): ";
    cin >> choice;

    if (choice == 'y'){
        continue;
    }else if (choice == 'n' && rsum < 21){
        cout << "You quit with " << rsum;
    }else{
        cout << "Error occured"<< endl;
    }

    while (choice == 'y' && rsum < 21){

        num3 = rand() % 14 + 2;
        Blackjack(int(cards[num3]));
        cout << "Total: " << rsum<<endl;

        if(rsum == 21){
            cout << "Won blackjack" << endl;
        }if(rsum > 21){
            cout <<"Failed Blackjack"<< endl;
        }
        return rsum;
        cout << "Draw Again (y/n): ";
        cin >> choice;
    }
}
int Blackjack(char a, char b){

    int val1, val2; 
    int asc1 = int(a) - 48;
    int asc2 = int(b) - 48;

    if(asc1 > 11 || asc2 > 11){
        cout<< "Error Occured"<<endl;
        return rsum;
    }else if(asc1 == 49){
        val1 = 11;
    }else if(asc1 == 58 || asc1 == 59 || asc1 == 65 || asc1 == 68){ 
        val1 = 10;
    }else if(asc2 == 49){
        val2 = 11;
    }else if(asc2 == 58 || asc2 == 59 || asc2 == 65 || asc2 == 68){
        val2 = 10;
    }
    return rsum = val1 + val2;
}
int Blackjack(int a){ 
    int asc, val;
    asc = a;

    if(asc > 11 || asc > 11){
        cout<< "Error"<<endl;
        return rsum; 
    }else if(asc == 65 || asc == 59 || asc == 58 || asc == 68){
        val = 10;
    }else if(asc == 49){
        val = 11;
    }
    return rsum = rsum + val;
}




