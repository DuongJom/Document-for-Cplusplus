#include<iostream>
using namespace std;

int main(){
    int n,cnt=0;
    cout<<"Nhap n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i == 0 && i%2 == 0){
            cnt++;
        }
    }

    cout<<"So luong cac uoc so chan cua "<<n<<" la: "<<cnt;
    return 0;