#include <vector>
#include <algorithm>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int n = height.size() - 1;
        int i = 0; 
        int area = 0;

        while (n > i) {
            int currarea = std::min(height[i], height[n]) * (n - i);
            area = std::max(currarea, area);

            if (height[i] > height[n]) {
                n--;
            } else {
                i++;
            }
        }

        return area;
    }
};

int main() {
    // Example usage:
    std::vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    Solution solution;
    int result = solution.maxArea(heights);
    std::cout << "Maximum Area: " << result << std::endl;

    return 0;
}
