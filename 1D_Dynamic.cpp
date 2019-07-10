#include<iostream>
using namespace std;
int main(){
    int s;
    cout<<"enter the size"<<endl;
    cin>>s;
    int *arr = new int[s];
    for(int i=0;i<s;i++)
        cin>>arr[i];
    for(int i=0;i<s;i++)
        cout<<arr[i];

    delete[]arr;
}
