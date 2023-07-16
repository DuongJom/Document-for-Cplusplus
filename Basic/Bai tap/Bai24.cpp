#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    cout<<"Cac uoc so le cua "<<n<<" la:"<<endl;
    for(int i=1;i<=n;i++){
        if(n%i == 0 && i%2 != 0){
            cout<<i<<endl;
        }
    }
    return 0;
}