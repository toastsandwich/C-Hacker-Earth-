#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int packet[n];
    for(i=0;i<=n;i++){
        cin<<packet[i];
    }
    if(packet[n-1]%10==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
