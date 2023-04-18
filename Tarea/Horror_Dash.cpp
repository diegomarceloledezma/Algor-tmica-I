#include <bits/stdc++.h>
using namespace std;


int main(){
    int z;
    cin >> z;
    for(int i=0;i<t;i++){
        int n,a, res = 0;
        cin>>n;
        while(n--){
            cin>>a;
            res = max(res,a);
        }
        cout << "Case " << i+1 << ": " << res <<endl;
    }
}