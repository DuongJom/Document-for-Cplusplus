#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x,n;
    float s;

    cout<<"Nhap x,n: ";
    cin>>x>>n;

    s = 1 + x;
    for(int i=1;i<=n;i++){
       int t = 1;
       for(int j=1;j<=2*i+1;j++){
            t*=j;
        } 
       s+= pow(x,2*i+1)/t;
    }
    cout<<"S("<<n<<") = "<<s;
    return 0;
}