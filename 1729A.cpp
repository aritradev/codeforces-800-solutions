#include<iostream>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int ara[3];

        for(int i = 0; i<3;i++){
            cin>>ara[i];
        }
        int ans1=abs(ara[0]-1);
        int ans2= abs(ara[1]-ara[2])+(ara[2]-1);

        if(ans1<ans2){
            cout<<"1"<<endl;
        }
       else if((ans1==ans2)){
            cout<<"3"<<endl;
        }
        else
        cout<<"2"<<endl;
    }
}