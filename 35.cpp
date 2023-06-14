#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int a,b,c;
    cin >> a >> b >> c ;

    int ans=4*(sqrt(a*b/c)+sqrt(c*b/a)+sqrt(a*c/b));
    cout<<ans<<endl;
    
    return 0;
}