#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n, x, min, max, mini, maxi, swap;
    vector <int> seq;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        seq.push_back(x);
    }
    min=seq[0];
    mini=0;
    for(int i=1; i<n; i++){
        if(seq[i]<=min){
            min=seq[i];
            mini=i;
        }
    }
    max=seq[0];
    maxi=0;
    for(int i=1; i<n; i++){
        if(seq[i]>max){
            max=seq[i];
            maxi=i;
        }
    }
    swap= ((n-mini)-1)+(maxi);
    if(maxi>mini)
    swap--;
    cout<<swap;

    return 0;
}