#include<iostream>
using namespace std;
int main(){
    int n, dist, x, y;
    for(int i=0; i<25; i++){
        cin>>n;
        if(n){
            x=i/5;
            y=i%5;
            dist=abs(2-x)+abs(2-y);
            cout<<dist;
            break;
        }
    }
    return 0;
}