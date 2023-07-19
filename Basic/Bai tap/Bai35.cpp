#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    double s;
    cout<<"Nhap n: ";
    cin>>n;
    s = sqrt(n);
    for(int i=1;i<n;i++){
        s = sqrt(n - i + s);
    }

    cout<<"S("<<n<<") = "<<s;
    return 0;
}