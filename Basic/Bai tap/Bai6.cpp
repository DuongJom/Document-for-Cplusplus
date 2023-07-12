#include<iostream>
using namespace std;

int main(){
    int n;
    float s = 0;
    cout<<"Nhap n: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        s += 1.0/(i*(i + 1));
    }
    cout<<"S("<<n<<") = "<<s;
    return 0;
}