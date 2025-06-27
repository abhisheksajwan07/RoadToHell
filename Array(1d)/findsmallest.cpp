#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int smin = INT_MAX;
    for(int i=0;i<n;i++){
        if(smin>arr[i]) smin=arr[i];
    }
    cout<<"minimum number:"<<smin<<endl;

}