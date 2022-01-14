// Attempt #1
// Simple question 
// Inserting in one of the array by comparing two's maximum values.
// Complexity Analysis 
// Space Complexity -> O(1)
// Time Complexity -> O(N) N is the addition of m and n

// Code
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left2 = n-1;
        int left1 = m-1;
        for(int i=m+n-1;i>=0;i--){
            if(left1<0){
                nums1[i]=nums2[left2];
                left2--;
            }
            else if(left2<0){
                nums1[i]=nums1[left1];
                left1--;
            }
            else if(nums1[left1]>nums2[left2]){
                nums1[i]=nums1[left1];
                left1--;
            }
            else{
                nums1[i]=nums2[left2];
                left2--;
            }
        }        
    }
};
