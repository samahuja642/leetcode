class Solution {
public:
    vector<int> insert(vector<int>&arr,int temp){
        if(arr.size()==0 || temp>arr[arr.size()-1]){
            arr.push_back(temp);
            return arr;
        }
        int val = arr[arr.size()-1];
        arr.pop_back();
        insert(arr,temp);
        arr.push_back(val);
        return arr;
    }
    vector<int> sortArray(vector<int>& arr) {
        if(arr.size()==1)return arr;
        int temp = arr[arr.size()-1];
        arr.pop_back();
        sortArray(arr);
        return insert(arr,temp);
    }
};
