#include <iostream>;
using namespace std;
int kTSoHoanThien(int n){
    int s = 0;
    for(int i = 1; i<n;i++)
        if(n%i == 0)
	    s+ = i;
    return s == n;
}
int main(){
    int a;
    cout<<"Nhap so nguyen";
    cin>>a;
}
