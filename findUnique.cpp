#include<iostream>
using namespace std;

bool uniqueOccur(int arr[], int n)
{
    int brr[10000] = {0};
        for(int i=0; i<n; i++)
        {
            int num = arr[i];

            brr[num]++;
        }
        
        for(int i=0; i<100; i++)
        {
            for(int j=0; j<100; j++)
            {
                if(i==j || brr[i] == 0)
                    continue;
                
                if(brr[i] == brr[j])
                    return false;
            }
        }
        return true;
    
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    bool result = uniqueOccur(arr, n);

    if(result)
    {
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }

    return 0;
}