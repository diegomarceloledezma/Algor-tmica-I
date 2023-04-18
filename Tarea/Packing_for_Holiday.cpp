#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,c;
    cin>>n;
    for(int i=0; i< n ;i++){
        cin>>a>>b>>c;
        if(a< 21 && b<21 && c < 21)
            cout<<"Case "<<i+1<<": good"<<endl;
        else
            cout<<"Case "<<i+1<<": bad"<<endl;
    }
}