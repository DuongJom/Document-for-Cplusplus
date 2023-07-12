#include<iostream>
using namespace std;

int main(){
    int n;
    float s = 1;
    cout<<"Nhap n: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        s += 1.0/(2*i + 1);
    }
    cout<<"S("<<n<<") = "<<s;
    return 0;
}