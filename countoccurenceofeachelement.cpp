#include<bits/stdc++.h>
using namespace std;

/*unordered_map<int, int> countOccurrences(int arr[], int size) {
    unordered_map<int, int> count;
    for (int i = 0; i < size; i++) {
        if (count.find(arr[i]) != count.end()) {
            count[arr[i]] += 1;
        }
        else{
            count[arr[i]] = 1;
        }
    }
    return count;
}*/

//count occurence of target element code: 
int countOccurences(int arr[], int n, int t){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==t){
            count++;
        }
    }
    return count;
}

int main(){
    int n;    
    cin>>n;
    int arr[n];    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t;
    cin>>t;
    /*unordered_map<int, int> result = countOccurrences(arr, n);
    for (auto pair : result) {
        cout << pair.first << ": " << pair.second << endl;
    }*/
   int target = countOccurences(arr,n,t);
   cout<<target;
   return 0;
}

/*//occurences of each element in a simple way:- 
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
}*/