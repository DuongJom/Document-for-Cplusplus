#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    double s = sqrt(2);
    cout<<"Nhap n: ";
    cin>>n;
    for(int i=3;i<=n;i++){
        s = pow(i + s, 1.0/i);
    }

    cout<<"S("<<n<<") = "<<s;
    return 0;
}