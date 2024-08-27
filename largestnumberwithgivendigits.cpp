#include <bits/stdc++.h>
using namespace std;

/*string findMaxNum(int arr[], int n){	
	sort(arr, arr + n, greater<int>()); //descending order
	string num = to_string(arr[0]);	
	for (int i=1;i<n;i++){        
		num += to_string(arr[i]);
	}    
	return num;
}

int main(){
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	cout << findMaxNum(arr, n);
	return 0;
}*/

int main(){
    string str;
    getline(cin, str);
    string newstr;
    for(char c : str){
        if(c != ' '){
            newstr += c;
        }
    }
    vector<char> arr(newstr.begin(), newstr.end());
    sort(arr.begin(), arr.end());
    for (auto it = arr.rbegin(); it != arr.rend(); it++) {
        cout << *it;
    }
    return 0;
}
