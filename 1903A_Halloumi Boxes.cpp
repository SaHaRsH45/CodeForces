#include<iostream>
#include<vector>
using namespace std;
bool sorted(vector<int>&arr){
  int i=0;
  while(i<arr.size()-1){
    if(arr[i]>arr[i+1]){
      return false;
    }
    i++;
  }
  return true;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
  if(k==1){
    if(sorted(arr)){
      cout<<"YES";
    }
    else{
      cout<<"NO";
    }
  }
  else{
    cout<<"YES";
  }
  cout<<endl;
  }
  return 0;
}

