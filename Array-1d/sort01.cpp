#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&a){
  for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
void sort01(vector<int>&v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]==0) i++;
        else if (v[j]==1) j--;
        else if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;

        }
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
    // sort 1 1 0 0 1 1 0 1
    display(v);

}