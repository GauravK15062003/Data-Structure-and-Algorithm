#include<iostream>
using namespace std;
void selectionSort(int arr[] , int n){
    for(int i=0;i<n-1;i++){
        int min_index=i;
        
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j; 
            }
        }
    
        int temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }
} 

void displayArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter"<<n<<"Elements of an array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array before sorting :";
    displayArr(arr,n);
    cout<<"Array after sorting :";
    selectionSort(arr,n);
    displayArr(arr,n);
}
