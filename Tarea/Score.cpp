#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    while(n--){
        int r=0,aux=1;
        string x;
        cin>>x;
        for(int i=0; i< x.length(); i++){
            if(x[i]=='O'){
                r = r + aux;
                aux++;
            }
            else
                aux=1;
        }
        cout<<r<<endl;
    }
}