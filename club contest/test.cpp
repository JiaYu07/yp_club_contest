#include <iostream>
#include<iomanip>
//#include<fstream>
using namespace std;  

void openfile(){
    freopen("/home/crystal/桌面/desktop/tmp-save/club contest/gen/30.in", "r", stdin);
    freopen("/home/crystal/桌面/desktop/tmp-save/club contest/output/30.out", "w", stdout);
}
int chr_arr[100][100];
int main(){
   openfile();
    int times=0,int_size=0;
    
    cin>>times>>int_size;  

    while (times > 0)
    {
        string s = "";
        cin >> s;
        int slen = s.length();
        //cout << slen << endl;
        for (int i = 0; i < int_size; i++)
            for (int j = 0; j < int_size; j++)
            {
                switch (slen){
                case 1:
                    if (i + j == int_size - 1)   
                         chr_arr[i][j] +=1;    
                    break;  
                case 2:  
                    if(i==j)
                        chr_arr[i][j] +=1;                                        
                    break;  
                case 3:  
                    if(j==int_size-1) 
                       chr_arr[i][j] +=1;                 
                    break;  
                case 4:  
                    if(j==0)
                        chr_arr[i][j] +=1; 
                    break;  
                 case 5:  
                    if(i==0)
                        chr_arr[i][j] +=1; 
                    break;  
                 case 6:  
                    if(i==int_size-1)
                        chr_arr[i][j] +=1; 
                    break;  
                }  
            } 
        times--;  
    }
    for(int int_ct=0;int_ct<int_size;int_ct++){  
    for(int int_ct2=0;int_ct2<int_size;int_ct2++){  
        if(chr_arr[int_ct][int_ct2]==0)
        cout<<setw(10)<<"X";
       else if(chr_arr[int_ct][int_ct2]==1)
        cout<<setw(10)<<"*";
        else cout<<setw(10)<<chr_arr[int_ct][int_ct2];  
        //if(int_ct2!=int_size-1){  
          //  cout<<' ';  
        //}  
    }  
    if(int_ct!=int_size-1)cout<<endl;  
}  
    cout<<endl;  
  
    return 0;  
}  
