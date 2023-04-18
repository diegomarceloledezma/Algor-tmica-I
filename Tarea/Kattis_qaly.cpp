#include <bits/stdc++.h>
using namespace std;


int main(){
    double r=0.0;
    int n;
    cin>>n;
    while(n--){
        double a,b;
        cin>>a>>b;
        r+=a*b;
    }
    printf("%.3f",r);
}