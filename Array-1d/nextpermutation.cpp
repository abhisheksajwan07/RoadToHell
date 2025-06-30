#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void nextPermutation(vector<int>&v){
    // 1 3 5 2
    int n=v.size();
    int idx=-1;
    //step one 
    for(int i=n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            idx=i;
            break;
        }
    }
    if(idx == -1){
        reverse(v.begin(), v.end());
        return;
    }
    //idx=1
    //reverse idx+1 se n-1 --> 1 3 2 5
    reverse(v.begin()+idx+1,v.end());
    //find just greatest
    int j=-1;
    for(int i=idx+1;i<=n-1;i++){
        if(v[i]>v[idx]){
            j=i;
            break;
        }
    }
    int temp = v[idx];
    v[idx]=v[j];
    v[j]=temp;
    return;

    //   for(int i = idx + 1; i < n; i++){
    //     if(v[i] > v[idx]){
    //         swap(v[i], v[idx]);
    //         break;
    //     }
    // }
}
int main(){
    vector<int>v;
    int n;
    cout<<"enter the size of the array 1:";
    cin>>n;
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    cout<<"next permutation of the arrray:";
    nextPermutation(v);
    display(v);

    //1 2 4 6 7 3
    // idx=3 


}
