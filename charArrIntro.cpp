#include <iostream>

using namespace std;

bool checkPallindrome(char name[], int n)
{
    

    for(int i = 0; i < n; i++)
        name[i] = tolower(name[i]);

    int s = 0;
    int e = n-1;
    while(s<=e)
    {
        if(name[s] == name[e])
        {
            s++;
            e--;
        }
        else{
            return false;
        }
    }
    return true;
}

void reverseStr(char name[], int n)
{
    int s = 0;
    int e = n-1;

    while(s<e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }

    cout << "Reverse of your name is: " << name << endl;
}

int getLength(char name[])
{
  int count = 0;
  for(int i=0; name[i] != '\0'; i++)
    {
      count++;
    }

  return count;
}

int main() {
  char name[20];

  cout << "Enter your name: ";
  cin >> name;

  int n = getLength(name);

  cout << "Length is: " << n << endl;

  reverseStr(name, n);

  cout << checkPallindrome(name, n);
}



