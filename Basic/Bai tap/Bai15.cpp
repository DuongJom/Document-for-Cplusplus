#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    float s = 1;
    cout << "Nhap n: ";
    cin >> n;

    for(int i=2;i<=n;i++){
        int t = 0;
        for(int j = 1;j<=i;j++){
            t+=j;
        }
        s+=1.0/t;
    }

    cout<<"S("<<n<<") = "<<s;
    return 0;
}