#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(){
    string s;
    int u=0, l=0;
    cin>>s;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if(s[i]>=65 && s[i]<=90){
            u++;
        }
        if(s[i]>=97 && s[i]<=122){
            l++;
        }
    }
    if(u>l){

    transform(s.begin(), s.end(), s.begin(), ::toupper); 

    }
    else
    {
            transform(s.begin(), s.end(), s.begin(), ::tolower); 
    }
    
    
    cout<<s;
    
    return 0;
}