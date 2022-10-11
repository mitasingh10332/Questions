#include <bits/stdc++.h>
using namespace std;
//O(n^2)
int main(){
    int n;
    cin >> n;
    int target = 4;
    vector<int> a(n);

    for(auto &i: a)
    {
       cin>>i;
    }
    sort(a.begin(),a.end());
    bool found =false;
    for(int i=0;i<n;i++){    
        int low=i+1;
        int high=n-1;

        while(low<high){
            int current =a[i]+a[low]+a[high];
            if(current==target){
                found =true;
               return 0;
            }
            else if(current<target){
                low++;
            }
            else{
                high--;
            }

        }

    }

    if(!found){
        cout<<"0"<<endl;
    }
    return 0;

}
