#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int> map;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
       
         map[s[i]]++;
        if (map[s[i]]>1)
        {
            cout<<s[i];
            break;
        }
      
    }
     
    return 0;
}
