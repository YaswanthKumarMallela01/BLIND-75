#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> dict;

        for (int i = 0; i < nums.size(); i++) {
            int currentNumber = nums[i];
            int requiredNumber = target - currentNumber;

            if (dict.find(requiredNumber) != dict.end()) {
                return {dict[requiredNumber], i};
            }

            dict[currentNumber] = i;
        }

        return {};
    }
};
