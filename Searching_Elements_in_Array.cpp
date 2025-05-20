#include <iostream>
using namespace std;

int main(){
    int n,i,search, flag; 
    cout<<"Enter number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for ( i=0; i<n ; i++){
        cin>>arr[i];
    }
    cout<<"Elements in array are: ";
    for ( i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl<<"Enter element to search in array: ";
    cin>>search;
    for ( i=0 ; i<n ; i++){
        if (arr[i]==search){
            flag =1;
            break;
        }
        
    }
    if (flag==1){
        cout<<"Element "<<search<<" found at "<<i+1<< " position"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    int max = arr[0];
    int min= arr[0]; 
    for ( i=0 ; i<n ; i++){
        if (arr[i]>max){
            max=arr[i];
        }
        if (arr[i]<min){
            min=arr[i];
        }
    }
    cout<<endl<<"Maximum Element : "<<max<<endl;
    cout<<"Minimum Element : "<<min<<endl;

    int sum=0;
    for( i=0 ; i<n ; i++){
        sum+=arr[i];
    }
    cout<<"Sum of elements: "<<sum<<endl;
    cout<<"Average of elements: "<<sum/n<<endl;
    return 0;
}