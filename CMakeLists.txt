cmake_minimum_required (VERSION 3.6)
project ("RLTest")

include_directories(algorithm)
include_directories(eigen)
include_directories(policy)
include_directories(util)
include_directories(world)
include_directories(world/cartpoleworld)
include_directories(world/mazeworld)

add_subdirectory(util)
add_subdirectory(world/cartpoleworld)
add_subdirectory(world/mazeworld)

add_executable(SarsaTest
  SarsaTest.cpp
)

target_link_libraries(SarsaTest
  util
  mazeworld
)

add_executable(PowerTest
  PowerTest.cpp
)

target_link_libraries(PowerTest
  util
  cartpoleworld
)