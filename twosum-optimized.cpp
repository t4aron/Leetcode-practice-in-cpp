// 12/10/2024 second solution with a hash map for an optimized O(n) implementation

#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> num_map;

            for (int i = 0; i < nums.size(); i++) {
                int complement = target - nums[i];
                if (num_map.find(complement) != num_map.end()) {
                    return {num_map[complement], i};
                }
                num_map[nums[i]] = i;
            }

            return {}; // When no solution is found an empty vector is returned.
        }
};