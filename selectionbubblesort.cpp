#include<bits/stdc++.h>
using namespace std;

void selection(int arr[], int n){
     for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }    
}

void bubble(int arr[], int n){
   for(int i=1; i<n; i++){
        bool swapped=false;
        for(int j=0; j<n-i; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped==false){
            break;
        }
    } 
}

int main(){
    int n;    
    cin>>n;   
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection(arr, n);
    //bubble(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
    return 0;
}