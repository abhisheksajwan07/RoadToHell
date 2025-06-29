#include<iostream>
#include<vector>
using namespace std;
int main(){    
    vector<int> v;
    int n;
    cout<<"enter array size :";
    cin>>n;
    cout<<"enter array element:";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    int x;
    cout<<"enter the last occurence of x:"<<"";
    cin>>x;
    int idx=-1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            idx=i;
            break;
        }
    }
     if (idx != -1)
        cout << "Last occurrence of"<<" "<<idx;
    else
        cout << x << " not found in the array." << endl;
    
}