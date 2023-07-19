#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    double s = 0.5;
    cout<<"Nhap n: ";
    cin>>n;
    for(int i=1;i<n;i++){
        s = 1.0/(1 + s);
    }

    cout<<"S("<<n<<") = "<<s;
    return 0;
}