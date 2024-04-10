#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int maxSubarraySum(const vector<int>& nums) {
    int maxSum = 0;
    int currentSum = 0;

    for (int i = 0; i < nums.size(); ++i) {
        currentSum = max(0, currentSum + nums[i]);
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum;
}

int main() {
    string input;
    cout << "请输入一组整数，用空格分隔: ";
    getline(cin, input);

    vector<int> nums;
    stringstream ss(input);
    int num;
    while (ss >> num) {
        nums.push_back(num);
    }

    int maxSum = maxSubarraySum(nums);

    cout << "最大子段和为: " << maxSum << endl;

    return 0;
}
