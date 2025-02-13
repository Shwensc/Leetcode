#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int>& arr,int n){
    for(int i=0;i<=n-2;i++){ //go till second last
        int minimum=i; //minimum is index to first element
        for(int j=i+1;j<=n-1;j++){// go til last
            if(arr[j]<arr[minimum]){
                minimum=j;
            }
        }//end of range
        int temp=arr[i];
        arr[i]=arr[minimum];
        arr[minimum]=temp;
    }//end
    cout << "After selection sort: " << "\n";
  for (int i = 0; i <=n-1; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}
int main(){
    vector<int> arr={13,69,12,15,56};
    int n=sizeof(arr)/sizeof(arr[0]); //total size divided by one data type size
    cout<<"Before Selection Sort: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; //blank space
    }
    cout<<"\n";
    selection_sort(arr,n);
    return 0;
}