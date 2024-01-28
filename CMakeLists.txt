cmake_minimum_required (VERSION 3.6)
project ("RLTest")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_COMPILER "clang++")

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  add_compile_options(
    -Wall
    -Wextra
    -pedantic
    # -Werror until all errors are fixed
    -Wconversion
    -Wsign-conversion
    -Wshadow
    -Wfloat-equal
    -Wmissing-include-dirs
    -Wmissing-declarations
    -Wpointer-arith
    -Wredundant-decls
    -Wuninitialized
    -Wunused
    -Wold-style-cast
    -Woverloaded-virtual
    -Wctor-dtor-privacy
    -Wformat=2
  )
endif()

include_directories(algorithm)
include_directories(SYSTEM eigen)
include_directories(policy)
include_directories(util)
include_directories(world)
include_directories(world/cartpoleworld)
include_directories(world/mazeworld)
include_directories(world/mountaincarworld)
include_directories(world/cliffworld)
include_directories(world/adapterworld)
include_directories(world/carworld)

add_subdirectory(util)
add_subdirectory(world/cartpoleworld)
add_subdirectory(world/mazeworld)
add_subdirectory(world/mountaincarworld)
add_subdirectory(world/cliffworld)
add_subdirectory(world/carworld)

add_executable(TDLearningTest
  TDLearningTest.cpp
)

target_link_libraries(TDLearningTest
  util
  mazeworld
  cliffworld
)

add_executable(SarsaTest
  SarsaTest.cpp
)

target_link_libraries(SarsaTest
  util
  mazeworld
  cliffworld
)

add_executable(QLearningTest
  QLearningTest.cpp
)

target_link_libraries(QLearningTest
  util
  cliffworld
)

add_executable(PowerTest
  PowerTest.cpp
)

target_link_libraries(PowerTest
  util
  cartpoleworld
  mountaincarworld
)

add_executable(GradientTest
  GradientTest.cpp
)

target_link_libraries(GradientTest
  util
  cartpoleworld
  mountaincarworld
)

add_executable(AdapterTest
  AdapterTest.cpp
)

target_link_libraries(AdapterTest
  util
  mazeworld
  cliffworld
)

add_executable(CarWorldTest
  CarWorldTest.cpp
)

target_link_libraries(CarWorldTest
  util
  carworld
)
