class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index;
        if(nums.size() <= 1)
		    return index;
    	map<int, int> s;	
	    s[nums[0]] = 0;
    	for(int i = 1; i<nums.size(); i++){
		    map<int, int>::const_iterator temp = s.find(target-nums[i]);
		    if(temp != s.end()){
			    index.push_back(temp->second);
			    index.push_back(i);
			    return index;
		    }
		    s[nums[i]] = i; 
	    }
	    return index;
//for Test
    }
};
