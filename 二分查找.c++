#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            //int middle = (left + right)/2;
            int middle = left + ((right - left) / 2);
            if (nums[middle] > target) {
                right = middle - 1;
            }
            else if (nums[middle] < target) {
                left = middle + 1;
            }
            else {
                return middle;
            }
        }
        return -1;
    }
};
int main() {
    int a[] = { -1,0,3,5,9,12,56,2 ,67,45,78,89,90};
    vector<int> nums(a,a+13);
    Solution solution;
    cout << solution.search(nums, 12) << endl;
}