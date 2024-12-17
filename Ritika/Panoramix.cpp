#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    int n, m, flag=0, flagx=0, res=1;
    cin>>n;
    cin>>m;
    int temp=sqrt(m);
    for(int i=2; i<=temp; i++){
        if(m%i==0){
            flag++;
            break;
        }
    }
    if(flag==0){
        for(int x=n+1; x<m; x++){
            temp=sqrt(x);
            flagx=0;
            for(int i=2; i<=temp; i++){
                if(x%i==0){
                    flagx++;
                    break;
                }
            }
            if(flagx==0){
                res=0;
                break;
            }
        }
        if(res==1){
            cout<<"YES";
        }
        else cout<<"NO";
    }
    else cout<<"NO";
    return 0;
}