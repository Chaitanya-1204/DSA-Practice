#include <iostream>
#include <string>

using namespace std;
int main(){
    string s, n="";
    cin>>s;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if(s[i]=='.'){
            n.append(1, '0');
        }
        else if(s[i]=='-'){
            if(s[i+1]=='.'){
                n.append(1, '1');
            }
            else if(s[i+1]=='-'){
                n.append(1, '2');
            }
            i++;
        }
    }
    
    
    cout<<n;
    
    return 0;
}