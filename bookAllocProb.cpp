#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> arr)
{
    int ans1 = INT_MIN;
    int ans2 = INT_MIN;

    int rightSum = accumulate(arr.begin(), arr.end(), 0);
    rightSum -= arr[0];
    int leftSum = arr[0];

    vector<int> ansVec;

    for (int i = 1; i < arr.size(); i++) {

        int ans = max(leftSum, rightSum);
        ansVec.push_back(ans);

        rightSum -= arr[i];
            
        // if (leftSum == rightSum){
        //     return leftSum;
        // }
        // else if(leftSum>rightSum)
        // {
        //     ans1 = max(rightSum, ans1);
        // }
        // else
        // {
        //     ans2 = max(leftSum, ans2);
        // }
                     
        leftSum += arr[i];
      
    }

     int real = *min_element(ansVec.begin(), ansVec.end());
    return real;
}

int main(){
    
    

    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    cout << solution(arr);
        

    
    return 0;
}