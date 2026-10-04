# leetcode-cpp

Rozwiązania zadań z [LeetCode](https://leetcode.com) w C++. Pomysł, kluczowa obserwacja i złożoność każdego zadania są w moich notatkach w Obsidianie, tutaj jest tylko kod.

## Struktura

- `problems/0001-two-sum.cpp` – jedno zadanie = jeden plik: klasa `Solution` (ta sama, która idzie na LeetCode) i `main()` z testami
- `include/check.h` – mini-testy: `check(wynik, oczekiwane, "opis")` wypisuje PASS albo FAIL
- `template.cpp` – szablon nowego zadania

## Nowe zadanie

1. Kopia `template.cpp` w `problems/` jako `NNNN-slug.cpp`, gdzie slug to końcówka adresu zadania, np. `0015-3sum.cpp`.
2. W CLionie: Tools → CMake → Reload CMake Project – zadanie pojawia się na liście konfiguracji obok przycisku Run.
3. Klasa z edytora LeetCode do pliku, przykłady z treści do `main()`, uruchomienie: Shift+F10.
