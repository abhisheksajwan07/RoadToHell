#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<"";
    }
    cout<<endl;

}
void reversepart(int i, int j, vector<int> &v){
    while(i<=j){
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
int main(){
    vector<int>v ;
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    cout<<"enter the elements :";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    // 1 6 2 4 7 5
    int k;
    cout<<"rotate the array by :";
    cin>>k;
    n=v.size();
    // n-k ,k

    reversepart(0,n-k-1,v);
    reversepart(n-k,n-1,v);
    reversepart(0,n-1,v);
    display(v);


}