#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,x;
    double s;
    cout<<"Nhap x,n: ";
    cin>>x>>n;
    s = sqrt(x);
    for(int i=2;i<=n;i++){
        s = sqrt(pow(x,i) + s);
    }

    cout<<"S("<<n<<") = "<<s;
    return 0;
}