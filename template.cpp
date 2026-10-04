// N. Tytuł (Poziom) – https://leetcode.com/problems/slug/
//
// Nowe zadanie: kopia tego pliku w problems/ jako NNNN-slug.cpp
// (np. 0015-3sum.cpp), potem Tools → CMake → Reload CMake Project.

#include <vector>

#include "check.h"

using namespace std;  // jak na LeetCode

// Klasa Solution z edytora LeetCode (na start sama sygnatura metody)
class Solution {
public:
};

int main() {
    // Metody z LeetCode biorą vector<int>& (referencję do istniejącej zmiennej),
    // więc {1, 2, 3} nie przejdzie wprost – stąd lambda, która bierze kopię:
    // auto solve = [](vector<int> nums) { return Solution().method(nums); };

    // Przykłady z treści zadania, np.:
    // check(solve({1, 2, 3}), expected, "Example 1");

    // Własne przypadki

    return summary();
}
