#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    char ch;
    int n, res=0, i=1;
    cin>>n;
    cin>>s;
    ch=s[0];
    while(i<n){
        if(s[i]==ch){
            res++;
        }
        else ch=s[i];
        i++;
    }
    cout<<res;
    return 0;
}