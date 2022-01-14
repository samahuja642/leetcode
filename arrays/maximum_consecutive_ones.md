// Attempt #1
// Traversing through the array and when we encounter 1 we enter the loop and traverse ahead with counting the number of ones till we encounter 0.
// Then returning the max value from the all will be our answer.
// Question #1 :- I think this solution is quite good but still it beats only 8% of people what i have done Wrong!! Its Complexity is fine i guess.
// Complexity Analysis
// Space Complexity -> O(1)
// Time Complexity -> O(N)
// As many of time if we see two loops we be like its O(N^2) , but you should check with copy pen using some math and my little brain that how many time an operation occured.

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                int temp = 0;
                temp += 1;
                while(i+1<nums.size() && nums[i+1]==1){
                    temp+=1;
                    i++;
                }
                sum = max(temp,sum);
            }
        }
        return sum;
    }
};
