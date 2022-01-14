// Attempt #1
// This Program Uses builtin function to convert integer into string and then compares its length.
// Mainly We have used to_string function to convert integer into string.
// Complexity Analysis
// Space Complexity -> O(elements inside nums length)
// Time Complexity -> O(N^2) or O(N*size of elements inside nums)

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even_count = 0;
        for(int i=0;i<nums.size();i++){
            if(to_string(nums[i]).length()%2==0){
                even_count++;
            }
        }
        return even_count;
    }
};


// Attempt #2
// In This Approach I have used simple arithematics to Solve the problem by dividing number by 10 again and again untill it becomes 0.
// No of times the loop is running is depicting that how many digits are there in the number and return True and False (booleans) appropriately.
// Complexity Analysis 
// Space Complexity -> O(1)
// Time Complexity -> O(N log(N))
// Actually it is  O(N (log(N)/log(10))) but actually it doesn't matter as log to base 10 will lesser than log to the base 2 , so for upper bound it doesn't matter.
// As N is very large we can ignore constants.

// class Solution {
// public:
//     bool even_number_digit(int number){
//         int count = 0;
//         while(number>0){
//             count++;
//             number = number/10;
//         }
//         return (count&1)==0?1:0;
//     }
//     int findNumbers(vector<int>& nums) {
//         int even_count = 0;
//         for(int i=0;i<nums.size();i++){
//             if(even_number_digit(nums[i])){
//                 even_count++;
//             }
//         }
//         return even_count;
//     }
// };
