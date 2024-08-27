#include<bits/stdc++.h>
using namespace std;

int main(){
   int m,n;
   cin>>m>>n;
   int arr[m][n];
   for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
         cin>>arr[i][j];
      }
   }
   for(int i=0; i<m; i++){
      for(int j=i+1; j<m; j++){
         if(arr[i][0]==arr[j][1] && arr[i][1]==arr[j][0])
           cout<<"("<<arr[i][0]<<","<< arr[i][1]<<")"<<endl;
      }
   }
   return 0;
}