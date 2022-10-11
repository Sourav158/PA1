#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x1, y1, length1, height1;
    int x2, y2, length2, height2;
    int x3, y3, x4, y4;

    cout << "Enter the x and y point and length and width for the first" << endl;
    cin >> x1;
    cin >> y1;
    cin >> length1;
    cin >> height1;

    cout << "Enter the x and y point and length and width for the second" << endl;
    cin >> x2;
    cin >> y2;
    cin >> length2;
    cin >> height2;

    x3 = x1 + length1;
    y3 = y1 + height1;
    x4 = x2 + length2;
    y4 = y2 + height2;

    if (x3 > x2 && y3 > y2) {
        cout <<"The rectangles intersect" << endl;
    }
    else if ((x1 == x2 && x3 == x4) && (y3 > y2 || y4 > y1)){
        cout <<"The rectangles intersect" << endl;
    }
    else if ((y1 == y2 && y3 == y4) && (x3 > x2 || x4 > x1)){
        cout <<"The rectangles intersect" << endl;
    }
    else{
        cout <<"The rectangles DO NOT intersect" << endl;
    }
}

