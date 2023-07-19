#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    double s = sqrt(1);
    cout<<"Nhap n: ";
    cin>>n;
    for(int i=2;i<=n;i++){
        s = sqrt(i + s);
    }
    cout<<"S("<<n<<") = "<<s;
    return 0;
}