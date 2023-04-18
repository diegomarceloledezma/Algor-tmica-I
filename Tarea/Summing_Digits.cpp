#include <bits/stdc++.h>
using namespace std;


int main(){
    long long int n;
    while(cin >> n, n!=0){
        n = n%9;
        if(!n){
            n = 9;
        }
        cout<<n<<endl;
    }
}