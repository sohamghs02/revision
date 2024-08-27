#include<bits/stdc++.h>
using namespace std;

bool isAutomorphic(int n)
{
	int sq = n*n;
	while (n > 0)
	{
		if (n % 10 != sq % 10)
		    return false;
		n/= 10;
		sq/= 10;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	if(isAutomorphic(n)){
        cout<<"automorphic";
    }
    else{
        cout<<"not";
    }
	return 0;
}