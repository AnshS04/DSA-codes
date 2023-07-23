#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int main(){

    string str;
    getline(cin, str);
    

    string ans;
    string added = "@40";
	

	for(int i=0; i<str.length(); i++)
	{
		if(str[i] == ' ')
		{
            str.erase(i, 1);
            str.insert(i,"@40");
            // str[i] = '@40';
			// ans.push_back('@');
            // ans.push_back('4');
            // ans.push_back('0');
		}
        // else{
        //     ans.push_back(str[i]);
        // }
		
	}

    // cout << ans;
    cout << str;

    return 0;
}