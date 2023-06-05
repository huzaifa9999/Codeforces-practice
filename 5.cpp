#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int y;
    cin >> y;
    y+=1;
     int k=1;
     while(k>0)
     {
        int copy=y;
        int a=copy%10;
        copy/=10;
          int b=copy%10;
        copy/=10;
          int c=copy%10;
        copy/=10;
          int d=copy%10;
        copy/=10;

        if(a!=b&&b!=c&&c!=d&&a!=d&&b!=d&&c!=a)
        {
k=0;
        }
        else{k++;y++;}
     }
cout<<y<<endl;
    return 0;
}