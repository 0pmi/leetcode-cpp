cmake_minimum_required(VERSION 3.20)
project(leetcode-cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Każdy plik w problems/ to osobny program o tej samej nazwie, np. 0001-two-sum.
# W CLionie: wybór z listy konfiguracji u góry, obok przycisku Run.
# Nowy plik nie pojawia się na liście sam – po dodaniu: Tools → CMake → Reload CMake Project.
file(GLOB PROBLEMS CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/problems/*.cpp")

foreach (source IN LISTS PROBLEMS)
    get_filename_component(name "${source}" NAME_WE)
    add_executable("${name}" "${source}")
    target_include_directories("${name}" PRIVATE "${CMAKE_SOURCE_DIR}/include")
    if (MSVC)
        target_compile_options("${name}" PRIVATE /W4)
    else ()
        # Ostrzeżenia łapią sporo błędów, np. porównanie int z size_t albo nieużytą zmienną.
        target_compile_options("${name}" PRIVATE -Wall -Wextra)
        # Debug: vector[i] sprawdza indeks – wyjście poza tablicę zatrzymuje program
        # z komunikatem zamiast po cichu czytać śmieci z pamięci.
        target_compile_definitions("${name}" PRIVATE $<$<CONFIG:Debug>:_GLIBCXX_ASSERTIONS>)
    endif ()
endforeach ()
