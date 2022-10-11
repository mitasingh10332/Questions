#include <bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;
    vector<char> v;

    int max_len=0;
    int start = -1;
    vector<int> dict(256, -1);
     int i;
    for( i=0; i<s.length(); i++)
        {
            if(dict[s[i]] > start)
            {
                start = dict[s[i]];
            }

        dict[s[i]] = i;
        max_len = max(max_len, i-start);
    }

    for(int j=start+1; j<=i; j++){
        v.push_back(s[j]);
    }

    cout<<max_len<<endl;

    for(auto i = v.begin(); i!=v.end(); i++){
        cout<<*i;
    }

    return 0;
}
