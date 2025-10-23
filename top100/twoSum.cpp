#include <vector>
#include <unordered_map>

using namespace std;

// 方法一：枚举
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size(); 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i + 1; j++) {
                if (nums[i] + nums[j] == target) {
					return { i, j };
                }
            }
        }
		return {};
    }
};

// 方法二：哈希表
class Solution_Hash {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash_map;
        for (int i = 0; i < nums.size();++i) {
            unordered_map<int, int>::iterator it = hash_map.find(target - nums[i]);
            //auto it = hash_map.find(target - nums[i]);
            if (it != hash_map.end()) {
				return { it->second, i };
            }
			hash_map[nums[i]] = i;
        }
		return {};
    }
};

