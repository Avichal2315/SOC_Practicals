

class Solution {
public:
int i=0;
    bool isPalindrome(string s) {
        //use 2 pointers
        //offline 
       //string a;
    //    for(int j=0;j<s.size() && i==0;j++)
    //    {
    //     if(!((s[j]>=65 && s[j]<=90) || (s[j]>=97 && s[j]<=122) || (s[j]>=48 && s[j]<=57) ))
    //     {
    //         s.erase(j,1);
    //     }
   
    //    }
    //    s.erase(std::remove(s.begin(), s.end(), 32), s.end());
    //    s.erase(std::remove(s.begin(), s.end(), '.'), s.end());
    for(int j=32;j<127 && i==0;j++)
    {
        if(j==65)
        {
            j=91;
        }else if(j==97)
        {
            j=123;
        }else if(j==48)
        j=58;
        s.erase(std::remove(s.begin(), s.end(), j), s.end());
    }
    for(int j=0;j<s.size() && i==0;j++)
        if(s[j]>=65 && s[j]<=90)
        {
            s[j]=s[j]+32;
        }
       i++;
       //cout<<s<<endl;
       if(s.empty() || s.size()==1){
        return 1;
       }else if(s[0]==s[s.size()-1]){
        s=s.substr(1,s.size()-2);
       return isPalindrome(s);
       }else return 0;
    }
};