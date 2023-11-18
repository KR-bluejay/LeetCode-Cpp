class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> resultVec(2);

        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int numSum = nums.at(i) + nums.at(j);

                if (numSum == target) {
                    resultVec.at(0) = i;
                    resultVec.at(1) = j;
                }
            }
        }


        return resultVec;
    }
};