#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef unsigned long long int ulli;
int main(){
    fastIO
    ulli a=0, b=0, t=0;
    cin >> t;
    while(t--){       
        cin >> a >> b;
        if(b==0) cout << 1 << endl;
        else if(a==1) cout << 1 << endl;
        else if(a==6) cout << 6 << endl;        
        else{            
            ulli arr[5], arr2[5];
            for(int i=1; i<=4; i++){
                arr[i]=pow(a,i);
            } // hay un patron, todos los numeros del tipo a ^ [b + (4 * n)] terminan con el mismo digito, (cuando vas cambiando n)
            ulli temp=0, j=0;            
            for(int i=1; i<=4; i++){
                arr2[i] = arr[i] % 10;
            }         
            (b%4==0) ? cout << arr2[4] << endl : cout << arr2[b%4] << endl;
        }
    }
    return 0;
}
