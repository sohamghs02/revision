#include<bits/stdc++.h>
using namespace std;

double diffsumsqroot(int m, int n){
    double sum1=0,sum2=0;
    for(int i=m; i<=n; i++){
        double sq = sqrt(i);
        if(i%2==0){
            sum1=sum1+sq;
        }
        else{
            sum2=sum2+sq;
        }       
    }
    return sum1-sum2;
}

int main(){
    int m,n;
    cin>>m;
    cin>>n;
    cout<<diffsumsqroot(m,n)<<endl;
    return 0;
}