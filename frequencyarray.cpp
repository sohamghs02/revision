#include <iostream>
using namespace std;

int main(){
    int n;    
    cin>>n;
    int arr[n];    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int visit[n];
    for(int i=0; i<n; i++){
        if(visit[i]!=1){
           int count = 1;
           for(int j=i+1; j<n; j++){
                if(arr[i]==arr[j]){
                    count++;
                    visit[j]=1;
                }
            }
            cout<<arr[i]<<" = "<<count<<" times "<<endl;
        }
    }
    return 0;
}