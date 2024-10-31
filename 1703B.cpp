#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
        
        cin>>n;
        int count=0; 
        

        char ara[n+5];
        for(int i =0;i<n;i++){
            cin>>ara[i];
            count=count+2;

        }
        sort(ara,ara+n);
        for(int i =0;i<n;i++){
           if(ara[i]==ara[i+1]){
            count--;
           }
             

        }
        cout<<count<<endl;
        


    }
}