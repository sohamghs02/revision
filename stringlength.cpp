#include<iostream>
using namespace std;

int getLength(string name){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    string name;
    getline(cin,name);
    cout<<"Your Name is: ";
    cout<<name<<endl;

    cout<<"Length of name is: "<<getLength(name)<<endl;

}