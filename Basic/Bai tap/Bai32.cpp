#include<iostream>
using namespace std;

int main(){
    int n,i=0;
    bool laCP = false;
    cout<<"Nhap n: ";
    cin>>n;
    while(i*i<=n){
        if(i*i==n){
            laCP = true;
            break;
        }
        i++;
    }

    cout<<n<<(laCP == true?" la so chinh phuong":" khong la so chinh phuong");
    return 0;
}