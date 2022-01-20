class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>missingele;
        for(int i=1;i<=nums.size();i++){
            bool found = false;
            for(int j=0;j<nums.size();j++){
                if(i==nums[j]){
                    found = true;
                }
            }
            if(found == false){
                missingele.push_back(i);
            }
        }
        return missingele;
    }
};

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>missingele;
        unordered_map<int,bool>hashmap;
        for(int i=0;i<nums.size();i++){
            hashmap[nums[i]]=true;
        }
        for(int i=1;i<=nums.size();i++){
            if(hashmap[i]==false)missingele.push_back(i);            
        }
        return missingele;
    }
};
