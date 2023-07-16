#include<iostream>
using namespace std;

int main(){
    int n,t=1;
    cout<<"Nhap n: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0){
            t *= i;
        }
    }
    cout<<"Tich cac uoc so cua "<<n<<" la "<<t;
    return 0;
}