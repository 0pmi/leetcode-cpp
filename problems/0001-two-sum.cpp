// 1. Two Sum (Easy) – https://leetcode.com/problems/two-sum/

#include <algorithm>
#include <vector>
#include <unordered_map>

#include "check.h"


using namespace std; // jak na LeetCode

// Podejście: hash mapa.
// Złożoność czasowa: O(n)
// Złożoność pamięciowa: O(n)
class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> m; // K: liczba → V: jej indeks
        const int n = nums.size();
        // Zapełnianie mapy, duplikaty mogą nadpisywać klucze - dobrze.
        for (int i = 0; i < n; i++) {
            m[nums[i]] = i;
        }

        for (int i = 0; i < n; i++) {
            auto it = m.find(target - nums[i]);
            if (it != m.end()) {
                if (it->second == i) { continue; } // Liczba nie może być parą sama ze sobą
                return {i, it->second};
            }
        }

        return {}; // Nie wykona się - zadanie gwarantuje rozwiązanie.
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
    check(solve({-1, 0, 22, 2}, 21), {0, 2}, "Example 4: ujemne");
    check(solve({-1, -2, 22, -3}, -4), {0, 3}, "Example 5: ujemne");
    return summary();
}
