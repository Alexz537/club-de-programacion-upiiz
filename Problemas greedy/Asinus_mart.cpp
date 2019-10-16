#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    float arr[5];

    float sum=0;

    for(int h=0; h<5; h++){

       cin>>arr[h];

       if(arr[h]==0){
        cout<<"ERROR";
        return 0;
       }
    }
    sort(arr, arr+5);
    for(int g=4; g>=0; g--){
        sum+=arr[g];
        if(sum<=250){
        cout<<arr[g]<<endl;
        }
        else{
        arr[g]=0;
        cout<<arr[g]<<endl;
        }

    }
    return 0;

}