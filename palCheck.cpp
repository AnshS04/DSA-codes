bool isAlphaNumeric(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))    
        return true;  
    else    
        return false; 
    
}

char toLowerCase(char ch) {  if (ch >= 'a' && ch <= 'z') {    return ch;  } else {    return ch - 'A' + 'a';  } 

bool checkPalindrome(string s)
{
    // Write your code here.


    int n = s.size();

    int lo = 0;
    int hi = n-1;

    while(lo<=hi)
    {
        char ch1 = s[lo];
        char ch2 = s[hi];
        
        
        if(!isAlphaNumeric(ch1))
            lo++;
        else if(!isAlphaNumeric(ch2))
            hi--;
        else{
            if(toLowerCase(s[lo]) == toLowerCase(s[hi]))
            {
                lo++;
                hi--;
            }
            else{
                return false;
            }
        }

        

        

       
    }
    return true;


}