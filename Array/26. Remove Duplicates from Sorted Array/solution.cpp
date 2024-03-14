class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left_pointer = 1;
        for (int i = 0; i < int(nums.size()); i++) {
            if (i == int(nums.size()) - 1) {
                break;
            } else if (nums[i] == nums[i+1]) {
                continue;
            } else {
                nums[left_pointer] = nums[i+1];
                left_pointer++;
            }
        }
        return left_pointer;
    }
};