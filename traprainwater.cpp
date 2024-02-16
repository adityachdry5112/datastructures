#include <iostream>
#include <vector>

using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    int r = n - 2;
    int l = 1;

    if (n < 3) return 0;

    int Lmax = height[0];
    int Rmax = height[r + 1];
    int area = 0;

    while (l <= r) {
        if (Lmax < Rmax) {
            if (height[l] >= Lmax) {
                Lmax = height[l];
            } else {
                area += Lmax - height[l];
            }
            l++;
        } else {
            if (height[r] >= Rmax) {
                Rmax = height[r];
            } else {
                area += Rmax - height[r];
            }
            r--;
        }
    }

    return area;
}

int main() {
    // Example usage
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    int result = trap(height);

    cout << "Trapped rainwater: " << result << " units" << endl;

    return 0;
}
