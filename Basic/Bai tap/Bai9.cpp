#include<iostream>
using namespace std;

int main(){
    int n;
    float s = 1;
    cout<<"Nhap n: ";
    cin>>n;
    for (int i = 2; i <= n; i++)
    {
        s *= i;
    }
    cout<<"T("<<n<<") = "<<s;
    return 0;
}