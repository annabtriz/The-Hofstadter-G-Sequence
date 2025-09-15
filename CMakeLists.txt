cmake_minimum_required(VERSION 3.24)

project(the_hofstadter_g_sequence)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1
)

FetchContent_MakeAvailable(Catch2)

add_executable(lab3_test tests/lab3_test.cpp src/lab3.cpp)
add_executable(main main.cpp src/lab3.cpp)
target_link_libraries(lab3_test PRIVATE Catch2::Catch2WithMain)
