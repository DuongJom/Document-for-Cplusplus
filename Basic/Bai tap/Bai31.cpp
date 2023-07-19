#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    bool laSNT=true;
    cout<<"Nhap n: ";
    cin>>n;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            laSNT = false;
        }
    }
    cout<<n<<(n>=2 && laSNT == true?" la so nguyen to":" khong la so nguyen to");
    return 0;
}