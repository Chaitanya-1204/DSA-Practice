#include <iostream>
#include <string>

using namespace std;
int main(){
    int n, t;
    string s, x;
    cin>>n;
    cin>>t;
    cin>>s;
    x=s;
    while(t--){
        for (int i = 0; i < n-1; i++)
        {
            if(s[i]=='B' && s[i+1]=='G'){
                x[i]='G';
                x[i+1]='B';
                i++;
                continue;
            }
            x[i]=s[i];
        }
        s=x;
        
    }
    cout<<s;
    
    return 0;
}