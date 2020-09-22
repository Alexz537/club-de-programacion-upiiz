#include <bits/stdc++.h>

using namespace std; //biblioteca estandar de c++ para que las que la usen no ocupen

#define watch(x) cout << (#x) << " es: " << x << endl;
#define EPS 1.19209e-07 //para comparar perdidas en variables decimales
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef int entero;
typedef long long int lli;
typedef vector<long long int> vlli;
typedef unsigned long long int ulli;
typedef vector<unsigned long long int> vulli;
const lli MAX = 1e9+7;//primo mas grande que cabe en un int, int es 2^31 -1

//usar double en vez de float por más precision

bool is_Magic(ulli numero){

    ulli num = numero, digito=0;
    lli num2=0;
    bool flag_uno = false, flag_catorce = false, flag_ciento = true;
    ulli arr[3];
    ulli temp=0, cont=0, cont2=0;
    temp = num;
    
    while(temp != 0) {

        // Increment counter
        cont++;

        // Remove last digit of 'temp'
        temp /= 10;
    }
    ulli numero_digits[cont];
    /*while(cont--){

    }*/
    cont2=cont;
    int i=0;
    while (cont2>1){
        //cout <<"entra"<<endl;
        num2 = pow(10,(cont2-1));// ejemplo 987, cont = 3, num2 = 100
        //watch(num) watch(num2)
        numero_digits[i] = num/num2; // [0] = 9
        switch(numero_digits[i]){
            case 0:
                cout << "NO" << endl;
                return false;
            case 2:
                cout << "NO" << endl;
                return false;
            case 3:
                cout << "NO" << endl;
                return false;
            case 5:
                cout << "NO" << endl;
                return false;
            case 6:
                cout << "NO" << endl;
                return false;
            case 7:
                cout << "NO" << endl;
                return false;
            case 8:
                cout << "NO" << endl;
                return false;
            case 9:
                cout << "NO" << endl;
                return false;
        }
        //cout << num/num2 << endl;
        num=num-numero_digits[i]*num2; // num = 87
        i++;
        cont2--;
    }
    numero_digits[i]=num;

    /*for(int i=0; i<cont; i++){
        cout << numero_digits[i] << " ";
        
    }
    cout << endl;*/

    if(cont==1 && numero_digits[0]==1){
        cout << "YES" << endl;
        return false;
    }
    else if(cont==1 && numero_digits[0]==4){
        cout << "NO" << endl;
        return false;
    }
    else if(cont==1 && numero_digits[0]==0){
        cout << "NO" << endl;
        return false;
    }
    if(numero_digits[cont-1] != 1 && numero_digits[cont-1] != 4){
        cout << "NO" << endl;
        return false;
    }

    int num_cuatros=0;
    for(int i=0; i<cont; i++){
        if(numero_digits[0]!=1){
            cout << "NO" << endl;
            return false;
        }
        if(numero_digits[i] == 1){
            num_cuatros=0;
        }
        else if(numero_digits[i]==4){
            num_cuatros++;
        }
        if(num_cuatros>2){
            cout << "NO" << endl;
            return false;
        }
        

        //cout << numero_digits[i] << " ";


    }

    //num2 = 10*(cont-1);
    //cout << cont << endl;
    cout << "YES" << endl; 
    return true;

}

int main(){

    fastIO

    ulli num=0;

    cin >> num;

    is_Magic(num);




    return 0;
}
