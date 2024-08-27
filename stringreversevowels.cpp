#include <bits/stdc++.h>
using namespace std;

void reverseVowel(string &s){
   int n,low = 0,high;
   for(n=0; s[n]!='\0'; n++);
   high=n-1;
   while(low<high){
      if(!(s[low]=='a' || s[low]=='e' || s[low]=='i' || s[low]=='o' || s[low]=='u' || s[low]=='A' || s[low]=='E' || s[low]=='I' || s[low]=='O' || s[low]=='U')){
         low++;
      }
      if(!(s[high]=='a' || s[high]=='e' || s[high]=='i' || s[high]=='o' || s[high]=='u' || s[high]=='A' || s[high]=='E' || s[high]=='I' || s[high]=='O' || s[high]=='U')){
         high--;
      }
      else{
         swap(s[low++],s[high--]);
      }
   }
   cout<<s;
}

int main(){
   string a;
   cin>>a;
   reverseVowel(a);
   return 0;
}