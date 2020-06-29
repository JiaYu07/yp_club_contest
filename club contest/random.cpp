#pragma GCC optimize("Ofast")
#include <stdlib.h>
#include <iostream>
#include<time.h>
#include <fstream>

using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int  MODT= 100;
const int  MODN= 100;
const int MODL = 6;
const int MODA=26;

string int_to_str(int a){
    string out="";
    while(a>0){
        out=(char)((a%10)+'0')+out;
        a/=10;
    }
    return out;
}

int main(){
    //IOS
    
    srand(time(NULL));
    //cout<<"./gen/"+int_to_str(12)+".in";
    for(int i=1;i<31;++i){
        int t=rand()%(MODT)+1;
        int n=rand()%(MODN)+1;
        FILE * f=nullptr;
        f=fopen(("./gen/"+int_to_str(i)+".in").c_str(), "w+");
        //cout<<t<<" "<<n<<endl;
        fprintf(f,"%d %d\n",t,n);
        while(t--){
            string s="";
            int l=rand()%(MODL)+1;
            while(l--){ s+="c";}
            //cout<<s<<endl;
            fprintf(f,"%s\n",s.c_str());
        }
        fclose(f);
    }
    return 0;
}