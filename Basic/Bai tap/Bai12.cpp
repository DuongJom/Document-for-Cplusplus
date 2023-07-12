#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x, n, s = 0;

    cout<<"Nhap x, n: ";
    cin>>x>>n;

    for(int i = 1;i<=n;i++){
       s += pow(x, i); 
    }
    cout<<"S("<<n<<") = "<<s;
    return 0;
}
