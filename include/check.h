#pragma once
// Mini-testy do zadań.
//   check(wynik, oczekiwane, "opis");  – PASS albo FAIL z obiema wartościami
//   return summary();                  – na końcu main(): podsumowanie, kod wyjścia 0 = wszystko przeszło

#include <cstddef>
#include <iostream>
#include <string>
#include <vector>

// Wypisywanie vectora przez cout, np. [0, 1]
template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v) {
    os << '[';
    for (std::size_t i = 0; i < v.size(); ++i) {
        os << (i ? ", " : "") << v[i];
    }
    return os << ']';
}

namespace check_detail {
inline int passed = 0;
inline int failed = 0;

template <typename T>
struct same_type { using type = T; };
}  // namespace check_detail

// Typ oczekiwanej wartości brany z wyniku (same_type), dzięki temu wystarczy
// check(wynik, {0, 1}, "...") zamiast check(wynik, vector<int>{0, 1}, "...").
template <typename T>
void check(const T& actual, const typename check_detail::same_type<T>::type& expected, const std::string& label) {
    if (actual == expected) {
        ++check_detail::passed;
        std::cout << "PASS  " << label << '\n';
    } else {
        ++check_detail::failed;
        std::cout << "FAIL  " << label << ": got " << actual << ", expected " << expected << '\n';
    }
}

inline int summary() {
    std::cout << '\n' << check_detail::passed << " passed, " << check_detail::failed << " failed\n";
    return check_detail::failed == 0 ? 0 : 1;
}
