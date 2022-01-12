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
