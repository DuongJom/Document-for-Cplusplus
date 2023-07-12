#include<iostream>
using namespace std;

int main(){
    int n;
    long s = 1;
    cout<<"Nhap n: ";
    cin>>n;

    for(int i = 2; i <= n; i++){
        int t = 1;
        for(int j = 1;j<=i; j++){
            t *= j;
        }
        s+=t;
    }

    cout<<"S("<<n<<") = "<<s;
    return 0;
}