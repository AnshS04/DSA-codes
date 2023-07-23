#include<iostream>
using namespace std;

#define LIMIT 5
#define AREA(l, b) (l * b)

int main(){

    cout << "The value of LIMIT" << " is " << LIMIT << endl;

    int l1 = 10, l2 = 5, area;
    area = AREA(l1, l2);
    cout << "Area of rectangle"
         << " is: "<<
        area << endl;

    return 0;
}