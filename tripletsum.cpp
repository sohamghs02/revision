#include <bits/stdc++.h>
using namespace std;

void Triplets(int arr[], int n, int s){
  for (int i = 0; i < n - 2; i++){
    for (int j = i + 1; j < n - 1; j++){
	    for (int k = j + 1; k < n; k++){
	      if (arr[i] + arr[j] + arr[k] == s){
          cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
		    }
      }	    
	  }
  }
}

int main (){
    int n,s;
    cin>>n;
    cin>>s;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Triplets(arr, n, s);
    return 0;
}