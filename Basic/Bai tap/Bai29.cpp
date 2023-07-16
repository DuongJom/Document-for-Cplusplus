#include<iostream>
using namespace std;

int main(){
    int n, usLeMax;
    cout<<"Nhap n: ";
    cin>>n;
    for(int i=n/2;i>=1;i--){
        if(n%i == 0 && i%2 != 0){
            usLeMax = i;
            break;
        }
    }

    cout<<"Uoc so le lon nhat cua "<<n<<" la: "<<usLeMax;
    return 0;
}