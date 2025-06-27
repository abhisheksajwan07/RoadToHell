// array - mai pass by refrence hota - copy nahi banta orgiinal change hota
// mormal function mai pass by value hota vaha copy banti

//usually array mai size bejte kyuki arr yek pointer hota 
//usse bas first element ka address pata hota hai, kitne elem hain yeh nahi pata rehta

#include<iostream>
using namespace std;
void display(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" " ;
    }
    cout<<endl;
}
void change(int b[],int size){
    b[0]= 100;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
   

    display(arr,size);
    change(arr,size);
    display(arr,size);

}