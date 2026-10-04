// 1. Two Sum (Easy) – https://leetcode.com/problems/two-sum/
// Notatka w Obsidianie: 30 LeetCode/0001 Two Sum
//
// Klasę Solution wklejasz na LeetCode bez zmian, main() z testami zostaje tutaj.

#include <algorithm>
#include <vector>

#include "check.h"

using namespace std;  // jak na LeetCode – dzięki temu kod klasy wklejasz tam bez poprawek

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // TODO: Twoje rozwiązanie
        return {};
    }
};

int main() {
    // Kolejność indeksów w odpowiedzi jest dowolna, więc przed porównaniem sortujemy wynik.
    auto solve = [](vector<int> nums, int target) {
        vector<int> result = Solution().twoSum(nums, target);
        sort(result.begin(), result.end());
        return result;
    };

    // Przykłady z treści zadania
    check(solve({2, 7, 11, 15}, 9), {0, 1}, "Example 1");
    check(solve({3, 2, 4}, 6), {1, 2}, "Example 2");
    check(solve({3, 3}, 6), {0, 1}, "Example 3");

    // Własne przypadki – dopisz np. liczby ujemne albo parę na samym końcu tablicy

    return summary();
}
