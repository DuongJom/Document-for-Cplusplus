#include<iostream>
using namespace std;

int main(){
    int n,s=0;
    cout<<"Nhap n: ";
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            s += i;
        }
    }

    cout<< ((s==n)?"La so hoan thien":"Khong la so hoan thien");
    return 0;
}