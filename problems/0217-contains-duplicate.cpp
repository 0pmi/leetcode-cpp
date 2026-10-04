// 217. Contains Duplicate – https://leetcode.com/problems/contains-duplicate/

#include <unordered_set>
#include <vector>

#include "check.h"

using namespace std;
// Podejście: hash set.
// Złożoność czasowa: O(n)
// Złożoność pamięciowa: O(n)
class Solution {
public:
    bool containsDuplicate(vector<int> &nums) {
        unordered_set<int> s;

        for (int num: nums) {
            bool added = s.insert(num).second; // false = liczba już była w zbiorze
            if (!added) return true;
        }
        return false;
    }
};

int main() {
    auto solve = [](vector<int> nums) { return Solution().containsDuplicate(nums); };
    // Przykłady zadane
    check(solve({1, 2, 3, 1}), true, "Example 1");
    check(solve({1, 2, 3, 4}), false, "Example 2");
    check(solve({1, 1, 1, 3, 3, 4, 3, 2, 4, 2}), true, "Example 3");

    // Własne przypadki
    check(solve({-1, 1, 11, 3, -3, 4, 13, 2, -4, -2}), false, "Ujemne");
    check(solve({1}), false, "Pojedynczy element");
    check(solve({11233123, 1, -1, 3, -3, 4, -2, 2, -4, 11233123}), true, "Duże liczby");
    return summary();
}
