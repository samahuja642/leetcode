// Attempt # 1
// This Basic Brute Force Approach I am just traversing through the list and checking if the element is 0, if the element is zero adding another element into it with value 0.
// As we Want same sized array then we should pop one value from last so that our array size is maintained.
// Question 1 : What is the complexity of accessing itertor as (arr.begin() + N) ? 
// Complexity Analysis 
// Space Complexity -> O(1)
// Time Complexity -> O(N^2) or O(N^3) depends on the question which i mentioned above , but surely we can do it using iterators in O(N^2)

// Code
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                arr.insert(arr.begin()+i,0);
                arr.pop_back();
                i++;
            }
        }
    }
};

// Attempt # 2
// Two Pointer Approach
// Basically we have taken another array and storing the values into it.
// Then left and right are assigned their respective values.
// So if value at left is 0 then we have to reduce the value of right as to maintain size and left is always increasing.
// But take care for the corner cases when left is equal to right that means there is only one space left for another element in this case value can be anything but it will be pushed only one time.
// Then we are just coping the values from temporary array to our array and its done.
// Complexity Analysis 
// Space Complexity -> O(N)
// Time Complexity -> O(N)

// Code
// class Solution {
// public:
//     void duplicateZeros(vector<int>& arr) {
//         vector<int> temp;
//         int left = 0;
//         int right = arr.size() - 1;
//         while(left<=right){
//             if(left==right){
//                 temp.push_back(arr[left]);
//                 left++;
//             }
//             else{
//                 if(arr[left]==0){
//                     temp.push_back(0);
//                     temp.push_back(0);
//                     left++;
//                     right--;
//                 }           
//                 else{
//                     temp.push_back(arr[left]);
//                     left++;
//                 }
//             }
//         }
//         for(int i=0;i<arr.size();i++){
//             arr[i]=temp[i];
//         }
//     }
// };

// Attempt # 3
// This Approach is best Actually the problem with upper one was that if we were using auxilary space then it kind of doesn't explain the beauty of two pointer.
// Here we are just doing everything in the same array because you know if there are two zeroes in the array till the size goes out of bounds that means that last two elements of the array are of no use as they will be poped out according to our Brute force approach.
// So its better to start retriving new array from the last.
// Complexity Analysis
// Space Complexity -> O(1)
// Time Complexity -> O(N)

// Code 
// class Solution {
// public:
//     void duplicateZeros(vector<int>& arr) {
//         int left = 0;
//         int right = arr.size()-1;
//         while(left<right){
//             if(arr[left]==0){
//                 left++;
//                 right--;
//             }
//             else{
//                 left++;
//             }
//         }
//         for(int i=arr.size()-1;i>=0;i--){
//             if(left==right && i==arr.size()-1){
//                 arr[i]=arr[right];
//                 right--;
//             }
//             else{
//                 if(arr[right]==0){
//                     arr[i]=0;
//                     i--;
//                     arr[i]=0;
//                     right--;
//                 }
//                 else{
//                     arr[i]=arr[right];
//                     right--;
//                 }
//             }
//         }
//     }
// };


// Code Below this segment is also the same as Attempt 3 but it is not organized so i don't suggest you to read it.
// When I was Solving it Random.

//Code
// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     void duplicateZeros(vector<int>& arr) {
//         int start = 0;
//         int end = arr.size()-1;
//         int zeroes = 0;
//         // cout<<start<<endl;
//         // cout<<end<<endl;
//         while(start<=end){
//             if(arr[start]==0){end--;zeroes++;
//             // cout<<start<<" "<<end;
//             }
//             // cout<<start<<" "<<end<<endl;
//             start++;
//         }
//         int non_zeroes = start - zeroes;
//         start--;
//         for(int i=arr.size()-1;i>=0;i--){
//             if(i==arr.size()-1 && non_zeroes+2*zeroes>arr.size()){
//                 arr[i]=arr[start];
//             }
//             else if(arr[start]==0){
//                 arr[i]=0;
//                 i--;
//                 arr[i]=0;
//             }
//             else{
//                 arr[i]=arr[start];
//             }
//             start--;
//         }
//         // cout<<zeroes<<endl;
//         // cout<<non_zeroes<<endl;
//         // cout<<arr.size()<<endl;
//         // cout<<end<<endl;
//         // cout<<start<<endl;
//     }
// };
// int main(){
//     Solution * obj = new Solution();
//     vector<int> arr = {1,5,2,0,6,8,0,6,0};
//     obj->duplicateZeros(arr);
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";	
//     }
//     cout<<endl;
//     return 0;
// }
