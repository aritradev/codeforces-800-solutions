#include<iostream>
using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ara[n+3];
        int flag=0;
        for(int i =0 ;i<n;i++){
            cin>>ara[i];
        }
        for(int i=0;i<n;i++){
            if(i-2>=0 && ((ara[i]%2)!=(ara[i-2]%2)))
            {
                flag=1;
                break;
            }
            
        }
         if(flag==0)
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;
    }
}