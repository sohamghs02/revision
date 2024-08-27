#include<bits/stdc++.h>
using namespace std;

int find_pivot(vector<int> v){
    int s = 0, e = v.size() - 1;
	int mid=(s + e) / 2;
	while (s < e){
		if(v[mid] < v[mid+1])
     		s=mid+1;
    	else
      		e = mid;
    
		mid = (s + e) / 2;
	}
	return s-1;
}
int peakIndexInMountainArray(vector<int>& arr) {
    return find_pivot(arr);
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int pivot = peakIndexInMountainArray(v);
    cout<<pivot<<endl;
    return 0;
}   
