#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    void helper(std::vector<int>& candidates, std::vector<int>& temp, int target, std::vector<std::vector<int>>& ans, int n) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        for (int i = n; i < candidates.size(); i++) {
            if (candidates[i] > target) break;
            if (i > n && candidates[i] == candidates[i - 1])
                continue;

            temp.push_back(candidates[i]);
            helper(candidates, temp, target - candidates[i], ans, i + 1);
            temp.pop_back();
        }
    }

    std::vector<std::vector<int>> combinationSum2(std::vector<int>& candidates, int target) {
        std::sort(candidates.begin(), candidates.end());
        std::vector<std::vector<int>> ans;
        std::vector<int> temp;
        helper(candidates, temp, target, ans, 0);
        return ans;
    }
};

int main() {
    Solution solution;

    // Example usage
    std::vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;

    std::vector<std::vector<int>> result = solution.combinationSum2(candidates, target);

    // Displaying the result
    std::cout << "Combination sums for target " << target << ":\n";
    for (const auto& combination : result) {
        std::cout << "[ ";
        for (int num : combination) {
            std::cout << num << " ";
        }
        std::cout << "]\n";
    }

    return 0;
}
