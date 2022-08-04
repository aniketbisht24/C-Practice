class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        	map<int, int> mapObj;
	
	mapObj.insert({nums[0], 0});

	vector<int> result;

	for (int i=1; i<nums.size(); i++){
		int temp = (target - nums[i]);

		auto it = mapObj.find(temp);

		if (it != mapObj.end()){
			result.push_back(it-> second);

			result.push_back(i);

			return result;
		}
		mapObj.insert({nums[i], i});
	}
    return result;
    }
};