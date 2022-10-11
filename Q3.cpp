#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num1 = 0, counter = 0; 
    int N = 1, R = 1, c = 0;
    int A = 1, B = 1, d = 0;
    int tern1[4], tern2[4];
    int tern3[5], tern4[5];

    cout << "Enter two numbers between 0-100: " << endl;
    cin >> num1;

    if (num1 > 80){
        while (N > 0){
            R = num1%3;
            N = floor(num1/3);
            num1 = N;
            tern3[c] = R;
            c = c + 1;
        }
        cout << endl;
        cin >> num1;
        while (A > 0){
            B = num1%3;
            A = floor(num1/3);
            num1 = A;
            tern4[d] = B;
            d = d + 1;
        }
    }
    else {
        while (N > 0){
            R = num1%3;
            N = floor(num1/3);
            num1 = N;
            tern1[c] = R;
            c = c + 1;
        }
        cout << endl;
        cin >> num1;
        while (A > 0){
            B = num1%3;
            A = floor(num1/3);
            num1 = A;
            tern2[d] = B;
            d = d + 1;
        }       
    }

    if (num1 > 80){
        for (int i = 0; i < 5; i++){
            if ( tern3[i] != tern4[i]){
                counter = counter + 1;
            } else{
                continue;
            }
        }
    }else{
        for (int i = 0; i < 4; i++){
            if ( tern1[i] != tern2[i]){
                counter = counter + 1;
            } else{
                continue;
            }
        }
    }

    cout << "Hamming Distance between the two numbers in ternary form is: " << counter << endl;
}