
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    
    string s;
    cin>>s;
    int len=s.length();
// int arr[len];
vector<int>v;
    for(int i=0;i<len;i++){
        if(s[i] == '.') {
            v.push_back(0);
        }
        else{
            if(s[i+1]=='-')
            {v.push_back(2);
            i++;}
            else{
                v.push_back(1);
                i++;
            }
        }
    }

    for(auto &it:v){
        cout<<it;
    }
    
    return 0;
}