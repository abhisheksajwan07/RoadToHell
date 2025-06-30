#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
vector<int>merge(vector<int>&arr1,vector<int>&arr2){
    int n=arr1.size();
    int m=arr2.size();
    vector<int>res(m+n);
    int i=0;
    int j=0;
    int k=0;
    while(i<=n-1&&j<=m-1){
        if(arr1[i]<arr2[j]){
            res[k]=arr1[i];
            i++;
        }
        else{res[k]=arr2[j];
            j++;
        }
        k++;
    }
    if(i==n){
        while(j<=m-1){
            res[k]=arr2[j];
            k++;
            j++;
        }
    }
    if(j==m){
        while(i<=n-1){
            res[k]=arr1[i];
            k++;
            i++;
        }   
    } 
    return res;
}
    


int main(){
    vector<int>arr1;
    vector<int>arr2;
    int n;
    cout<<"enter the size of the array 1:";
    cin>>n;
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        arr1.push_back(q);
    }
    int m ;
    cout<<"enter the size of the array 2:";
    cin>>m;
    cout<<"enter the elements:";
    for(int i=0;i<m;i++){
        int q;
        cin>>q;
        arr2.push_back(q);
    };
    cout<<"array 1:";
    display(arr1);
    cout<<"array 2:";
    display(arr2);

    vector<int>final=merge(arr1,arr2);
    for(int i=0;i<final.size();i++){
        cout<<final[i]<<" ";
    }
};