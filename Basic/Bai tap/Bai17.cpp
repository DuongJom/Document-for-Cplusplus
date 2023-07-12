#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x,n;
    float s;

    cout<<"Nhap x,n: ";
    cin>>x>>n;

    s = x;
    for(int i=2;i<=n;i++){
       int t = 1;
       for(int j=1;j<=i;j++){
            t*=j;
        } 
       s+= pow(x,i)/t;
    }
    cout<<"S("<<n<<") = "<<s;
    return 0;
}