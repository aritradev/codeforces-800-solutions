#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int ara[2];
        for(int i=0;i<2;i++){
            cin>>ara[i];
        }
        if((ara[0]%2==0 && ara[1]%2!=0)||(ara[0]%2!=0&&ara[1]%2==0)){
            
            cout<<"Burenka\n";
        }
        else
        cout<<"Tonya"<<endl;
    }
}