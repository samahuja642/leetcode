// Attempt #1 
// Here Basically i have squared all the elements inside the array and then sorted them using inbuilt sort. # NO MEHNAT 
// Complexity Analysis
// Space Complexity -> O(1)
// Time Complexity -> O(N logN)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i] = nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};

// Attempt #2 
// # Doing some MEHNAT
// Using Heap Sort 
// Basically what i have done is whole implementation for heaps because i am unaware of any technique with which we can compute heap sort without writing so much syntax.
// Question 1 -> If there is a question in interview will they allow us to use inbuilt sort or not? If they don't and we have to use inplace sorting as well which algorithm should we use then ?
// Complexity Analysis 
// Space Complexity -> O(1)
// Time Complexity -> O(N log N)
 
// Notes for me :)

// # Max_Heapify
// max_heapify is like comparing with its children and as we know for one based indexing two children will be 2*x and 2*x + 1 but here we are using zero based indexing so we have to change a little.
// and max_heapifty compares till the leaf Nodes 
// Complexity Analysis 
// Space Complexity -> O(1),As it is used in inplace sorting (Heap Sort).
// Time Complextiy -> O(log N)

// # Build_Heapify
// build_heapify will be making array a heap as you know heaps are different data structures and have different properties.

// Heap Properties :-
// 1. Element at the root is the maximum
// 2. Every Element is larger than its children or it doesn't have children
// 3. Tree should be a complete binary tree(in short filling should be done from left to right).

// So Now what we have done is just applying max_heapify from right to left and level wise too (that means n/2 to 0) and now we have a heap.
// Right to Left is very important But why Give it a thought.
// Complexity Analysis
// Space Complexity -> O(1)
// Time Complexity -> O(N) why it is a AGP,may be if i was good in math then i will be able to solve it. :")

// #Heap_Sort
// First of all we are making a heap from the array.
// Then just taking the Element at the Top and swaping it with the elemnet which is rightmost and you know the fact that why we have taken the size in max_heapify it was not a stupid as one might assume but it was a brilliant step and you know why because now the greatest element is already at its postion so we just decrease total size by 1 and apply max_heapify on remaining elements.
// So we have to Repeat these Steps N times.
// Complexity Analysis 
// Space Complexity -> O(1)
// Time Complexity -> O(N logN)

// Now finally You can get through the code. 
class Solution {
public:
    void max_heapify(vector<int>& nums,int n,int x){
        int largest = x;
        int l = 2*(x+1)-1<n?2*(x+1)-1:-1;
        int r = 2*(x+1)<n?2*(x+1):-1;
        if(l!=-1 && nums[largest] < nums[l] && nums[l] >= nums[r]){
            swap(nums[l],nums[largest]);
            largest = l;
        }
        else if(r!=-1 && nums[largest] < nums[r] && nums[r] >= nums[l]){
            swap(nums[r],nums[largest]);
            largest = r;
        }
        else{
            return;
        }
        max_heapify(nums,n,largest);
    }
    void build_heapify(vector<int>& nums,int n){
        for(int i=n/2;i>=0;i--){
            max_heapify(nums,n,i);
        }
    }
    void heap_sort(vector<int>& nums,int n){
        build_heapify(nums,n);
        swap(nums[0],nums[n]);
        for(int i=0;i<n;i++){
            max_heapify(nums,n-i-1,0);
        }
    }
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i] = nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};
