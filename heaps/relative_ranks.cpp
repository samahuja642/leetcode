class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>prizes(score.size());
        map<int,int,greater<int>>highs;
        for(int i=0;i<score.size();i++){
            highs[score[i]]=i;
        }
        int i=0;
        for(auto it=highs.begin();it!=highs.end();it++){
            if(i==0){
                prizes[it->second]="Gold Medal";
            }
            else if(i==1){
                prizes[it->second]="Silver Medal";
            }
            else if(i==2){
                prizes[it->second]="Bronze Medal";
            }
            else{
                prizes[it->second]=to_string(i+1);
            }
            i++;
        }
        return prizes;
    }
};
