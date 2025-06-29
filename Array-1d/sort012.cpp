#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<< " ";
    }
    cout<<endl;
}

void sort012

int main(){
    vector<int>v;
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    cout<<"enter the array elements:";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);

}