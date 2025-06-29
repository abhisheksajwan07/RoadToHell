#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<< " ";
    }
    cout<<endl;
}

void swapValues8(int i,int j,vector<int>&v){
    int temp;
    temp=v[i];
    v[i]=v[j];
    v[j]=temp;
}
void sort012(vector<int>&v){
    int lo=0;
    int mid=0;
    int hi=v.size()-1;
    while(mid<=hi){
        if(v[mid]==2){
            swapValues8(mid,hi,v);
            hi--;
        }
        else if (v[mid]==0){
            swapValues8(lo,mid,v);
            mid++;
            lo++;
        }
        else mid++;
    }
    
}

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

    sort012(v);
        display(v);


}