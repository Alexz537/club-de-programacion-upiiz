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

    int d=0, arr[3], suma=0;

    cin >> arr[0] >> arr[1] >> arr[2] >> d;

    sort(arr, arr+3);

    int ab=abs(arr[0]-arr[1]), bc=abs(arr[1]-arr[2]);

    if(ab < d){
        suma+=abs(ab - d);
    }
    if(bc < d){
        suma+=abs(bc - d);
    }

    cout << suma << "\n";


    return 0;
}
