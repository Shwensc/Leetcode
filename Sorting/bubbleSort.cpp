#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int n){
    for(int i=n-1;i>=0;i--)//counter, as no. of repititons is n-1
    {
        for(int j=0;j<i;j++)// cpz i-1 isw second last elements
        {
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }// inner loop
    } //counter loop
    
    cout<<"\nArray after sorting: ";
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }   
}

int main(){
    vector<int> arr={13,59,12,15,56};
    int n=arr.size();
    cout<<"Array before sorting: ";
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    bubbleSort(arr,n);
    return 0;
}
