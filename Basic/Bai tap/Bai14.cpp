#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,x;
    long s = 0;
    cout<<"Nhap x,n: ";
    cin>>x>>n;

    for(int i=0;i<=n;i++){
        s += pow(x, 2*i + 1);
    }
    cout<<"S("<<n<<") = "<<s;
    return 0;
}