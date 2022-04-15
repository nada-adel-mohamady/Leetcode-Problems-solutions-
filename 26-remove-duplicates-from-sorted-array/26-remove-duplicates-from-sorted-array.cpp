class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       if(!nums.size()){return 0;}
       if(nums.size()==1){return 1;}
       vector<int>arr;
	for (int i = 1; i < nums.size(); i++) {
		//cout << nums[i] << "  " << nums[i - 1] << endl;
		if (nums[i] == nums[i - 1]) {

			//nums.erase(nums.begin() + i-1);
			//   tmp.push_back(nums[i]);

		}
		else {
			arr.push_back(nums[i-1]);

		}
	}

	if (!arr.size()) {
		arr.push_back(nums[0]);
	}
	else if (nums[nums.size() - 1] != arr[arr.size() - 1]) {
		arr.push_back(nums[nums.size() - 1]);
	}
    nums=arr;
	return arr.size();
    }
};