#include<iostream>
#include<math.h>
#define ll long long
using namespace std;

int main(){
    int n;
    double s = 1;
    cout<<"Nhap n: ";
    cin>>n;
    for(int i=2;i<=n;i++){
        ll gt = 1;
        for(int j=1;j<=i;j++){
            gt*=j;
        }
        s = sqrt(gt + s);
    }

    cout<<"S("<<n<<") = "<<s;
    return 0;
}