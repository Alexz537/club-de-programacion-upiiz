#include <bits/stdc++.h>

using namespace std; //biblioteca estandar de c++ para que las que la usen no ocupen

#define watch(x) cout << (#x) << " es: " << x << endl;
#define EPS 1.19209e-07 //para comparar perdidas en variables decimales
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef int entero;
typedef long long int lli;
typedef vector<long long int> vlli;
const lli MAX = 1e9+7;//primo mas grande que cabe en un int, int es 2^31 -1

//usar double en vez de float por más precision

int main(){

    fastIO

    int a=0, b=0, aw = 0, draw=0, bw = 0;

    cin >> a >> b;

    int num = 6;

    for(int i=1; i<=6; i++){

        if(abs(a-i) > abs(b-i)){
            bw++;
        }
        else if(abs(b-i)>abs(a-i)){
            aw++;
        }
        else{
            draw++;
        }

    }

    cout << aw << " " << draw << " " << bw << "\n";


    return 0;
}
