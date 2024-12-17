#include <iostream>
#include <string>
using namespace std;

int main(){
    string n1, n2;
    cin>>n1;
    cin>>n2;

    int l=n1.length();
    string m="";
    while(l--){
        m=to_string(int(n1[l])^int(n2[l]))+m;
    }
    
    cout<<m;
    return 0;
}