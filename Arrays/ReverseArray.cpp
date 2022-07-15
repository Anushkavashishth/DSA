#include<iostream>
using namespace std;

void reverse(int arr[], int size){
    int start =0;
    int end = size-1;
    
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
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
    int arr[10] = {5,7,-2, 10,22,-2,0,5,22,1};
    reverse(arr,10);
    PrintArray(arr,10);

}