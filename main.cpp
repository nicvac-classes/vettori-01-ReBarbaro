#include <iostream>
#include<vector>
using namespace std;


int main() {
    string v[5];
    int i;
    i=0;
    v[0]="fibra";
    v[1]="vasco";
    v[2]="baby gang";
    v[3]="simba";
    v[4]="francesco bruno";
    while(i<=4){
        cout<<"il"<<i+1<<"nome è"<<v[i]<<endl;
        i=i+1;
        }
        string w[5];
        i=0;
        while(i<5){
            cout<<"inserisci il nome del "<<i+1<<"cantante"<<endl;
            cin>>w[i];
            cout<<"il"<<i+1<<"cantante è"<<w[i];
            i=i+1;}
            int x[10];
            i=0;
            while(i<10){
                x[i]=i+1;
                cout<<"il"<<i+1<<"numero sarà"<<x[i]<<endl;
                i=i+1;}
                i=0;
                while(i<10){
                     cout<<"il"<<i+1<<"numero sarà"<<x[i]<<endl;
                     i=i*2;
                     i=i+1;
                     }
                     i=0;
                     while(i<10){
                        cout<<"il"<<i+1<<"numero sarà"<<x[i]<<endl;
                        i=(i*2)+1;
                        i=i+1;
                        }
                        int y[11];
                        i=0;
                        while(i<11){
                            y[i]=i*2;
                            cout<<"il"<<i+1<<"numero sarà"<<y[i]<<endl;
                            i=i+1;
                            }




}


//LEGGERE LE ISTRUZIONI NEL FILE README.md
