#include<bits//stdc++.h>
using namespace std;
void sorting(vector<int>& arr,int k){
  int i = 0;
  while(i+k<arr.size()){
    make_heap(arr.begin()+i,arr.begin()+i+k+1,greater<int>());
    i++;
  }
  while(i<arr.size()){
    k--;
    make_heap(arr.begin()+i,arr.begin()+i+k+1,greater<int>());
    i++;
  }
}
void print(vector<int>& arr){
  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main(){
  vector <int> arr = {6,5,3,2,8,10,9};
  int k = 3;
  print(arr);
  sorting(arr,k);
  print(arr);
  return 0;
}
