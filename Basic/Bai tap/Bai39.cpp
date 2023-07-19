#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    double s = 1;
    cout<<"Nhap n: ";
    cin>>n;
    for(int i=2;i<=n;i++){
        long long gt = 1;
        for(int j=1;j<=i;j++){
            gt *= j;
        }
        s = pow(gt + s, 1.0/(i+1));
    }

    cout<<"S("<<n<<") = "<<s;
    return 0;
}