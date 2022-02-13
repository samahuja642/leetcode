// Attempt # 1
// Brute Force Approach
// Complexity Analysis 
// Space Complexity -> O(1)
// Time Complexity -> O(N^2)

// Code 
int strstr(string s, string x)
{
	for(int i=0;i+x.length()-1<=s.length()-1;i++){
		string temp = "ab";
		temp.pop_back();
		temp.pop_back();
		for(int j=0;j<x.length();j++){
			temp.push_back(s[i+j]);
		}
		if(temp==x){
            return i;
		}
	}
	return -1;
}
