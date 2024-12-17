#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, x;
    double sum=0, res;
    cin>>n;
     for(int i=0; i<n; i++){
        cin>>x;
        sum+=x;
    }
    res=sum/n;
    cout<<res;
    return 0;
}