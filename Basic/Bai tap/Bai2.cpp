#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n, s = 0;
    cout<<"Nhap n: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        s += pow(i,2);
    }
    cout<<"S("<<n<<") = "<<s;
    return 0;
}