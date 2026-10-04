// 1. Two Sum (Easy) – https://leetcode.com/problems/two-sum/

#include <algorithm>
#include <vector>

#include "check.h"

using namespace std;  // jak na LeetCode

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // TODO: Rozwiązanie
        return {};
    }
};

int main() {
    // Kolejność indeksów w odpowiedzi jest dowolna – wynik sortowany przed porównaniem.
    auto solve = [](vector<int> nums, int target) {
        vector<int> result = Solution().twoSum(nums, target);
        sort(result.begin(), result.end());
        return result;
    };

    // Przykłady z treści zadania
    check(solve({2, 7, 11, 15}, 9), {0, 1}, "Example 1");
    check(solve({3, 2, 4}, 6), {1, 2}, "Example 2");
    check(solve({3, 3}, 6), {0, 1}, "Example 3");

    // Własne przypadki

    return summary();
}
