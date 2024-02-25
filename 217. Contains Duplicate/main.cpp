#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Create a set 's' using the elements of the 'nums' vector
        set<int> s(nums.begin(), nums.end());
        
        // Get the size of the original vector 'nums'
        int x = nums.size();
        
        // Get the size of the set 's', which removes duplicate elements
        int y = s.size();

        // Check if the sizes are equal
        if (x == y) {
            // If sizes are equal, it means there are no duplicates
            return false;
        } else {
            // If sizes are not equal, it means there are duplicates
            return true;
        }
    }
};

int main() {
    // Example 1: Vector with duplicates
    vector<int> nums1 = {1, 2, 3, 4, 5, 1};
    Solution solution1;
    bool result1 = solution1.containsDuplicate(nums1);
    cout << "Example 1 Result: " << (result1 ? "true" : "false") << endl;

    // Example 2: Vector without duplicates
    vector<int> nums2 = {1, 2, 3, 4, 5};
    Solution solution2;
    bool result2 = solution2.containsDuplicate(nums2);
    cout << "Example 2 Result: " << (result2 ? "true" : "false") << endl;

    return 0;
}
