#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int a[10], n;    
    cin >> n;    
    for (int i = 0; i < n; i++){
        cin >> a[i];
    } 
    sort(a, a+n); 
    cout << "Second largest number : " << a[n-2];
    cout << "\nSecond smallest number : " << a[1];
    return 0;
}