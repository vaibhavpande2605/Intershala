#include <iostream>
using namespace std;

bool isSubset(int arr1[],int arr2[],int m, int n){
    for(int i=0; i<n;i++){
        for( int j=0; j<m; i++){
            if(arr1[i]==arr2[j])
            break;
        }
    }
        return 1;

}

int main(){
    int m,n;
    cout<<"Enter the size of first array: ";
    cin>>m;
    cout<<"Enter the sizs of second array: ";
    cin>>n;

   int arr1[m],arr2[n];
   cout<<"Eter the elements of first array: ";

  for(int i=0;i<m;i++){
    cin>>arr1[i];
  }

   cout<<"Eter the elements of second array: ";

    for( int j=0;j<n;j++){
          cin>>arr2[j];
    }


  if(isSubset(arr1,arr2,m,n)){
    cout<<"Subset";
  }
  else{
    cout<<"Not subset";
  }



    
    return 0;
}