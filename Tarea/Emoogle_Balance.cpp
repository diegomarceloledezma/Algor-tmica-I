#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    for(int i=0; cin >> n,n!=0; i++){
        int a, ans = 0;
        while(n--){
            cin>>a;
            if(a)
                ans++;
            else
                ans--;
        }
        cout << "Case "<< i+1 <<": "<< ans << endl;
    }
}