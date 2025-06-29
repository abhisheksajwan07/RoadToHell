#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
       cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reverse(int i,int j,vector<int>&v){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
int main(){
    vector<int>v;
    int n;
    cout<<"enter the size of an array:";
    cin>>n;
    cout<<"enter the elements :";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    reverse(0,v.size()-1,v);
    display(v);
}