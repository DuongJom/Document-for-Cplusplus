#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    double s = 1;
    cout<<"Nhap n: ";
    cin>>n;
    for(int i=2;i<=n;i++){
        s = pow(i + s, 1.0/(i+1));
    }

    cout<<"S("<<n<<") = "<<s;
    return 0;
}