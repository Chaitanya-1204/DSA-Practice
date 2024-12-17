#include <iostream>
#include <string>

using namespace std;
int main(){
    string s;
    int n, c=0;
    cin>>n;
    s= to_string(n);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i]==52 || s[i]==55)
        {
            c++;
        }
        
    }
    if(c==4|| c==7) cout<<"YES";
    else cout<<"NO";
    
    
    return 0;
}