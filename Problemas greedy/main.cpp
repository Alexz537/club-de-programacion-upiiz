#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char cad1[10000];
    char cad2[10000];
    int letras[25];
    int letras2[25];
    cin>>cad1;
    cin>>cad2;
    if((strlen(cad1))!=(strlen(cad2))){
        cout<<"No :("<<endl;
        return 0;
    }
    for(int i=0; i<25; i++){
        letras[i]=0;
        letras2[i]=0;
    }
    for(int i=0; i<strlen(cad1); i++){
        int n=cad1[i]-97;
        letras[n]+=1;
    }
    for(int i=0; i<strlen(cad2); i++){
        int n=cad2[i]-97;
        letras2[n]+=1;
    }
    for(int i=0; i<25;i++){
        cout<<"letras1 en "<<i<<"es"<<letras[i]<<endl;
        cout<<"letras2 en "<<i<<"es"<<letras2[i]<<endl;
        /*if(letras[i]!=letras2[i]){
            cout<<"No :("<<endl;
            return 0;
        }*/
    }
    cout<<"ANAGRAMA!"<<endl;
    return 0;
}
