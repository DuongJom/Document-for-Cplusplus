#include<iostream>
using namespace std;

int main(){
    int n, s = 0;
    cout << "Nhap n: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        s += i;
    }

    cout << "Bieu thuc S(" << n << ") = " << s;
    return 0;
}
