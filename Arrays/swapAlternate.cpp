#include<iostream>
using namespace std;
void Swap(int arr[],int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }

    }

}
void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
   int arr[6] = {2,5,8,7,4,6};
   PrintArray(arr,6);
   Swap(arr,6);

   
   PrintArray(arr,6);
}

