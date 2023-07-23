#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }

    // int smallerProblem = factorial(n-1);
    // int biggerProblem = n*smallerProblem;
    // return biggerProblem;

    return n * factorial(n-1);
}

int main(){

    cout << "Enter a number: ";
    int n;
    cin >> n;

    cout << "Factorial of " << n << " is: " << factorial(n) << endl;

    return 0;
}