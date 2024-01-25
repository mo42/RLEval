# RLTest
RLTest is a C++ library for testing reinforcement learning algorithms. It was
developed in parallel to a course in reinforcement learning in 2016.

The main goal was to implement a couple of reinforcement learning [algorithms](#algorithms)
and a couple of artificial [worlds](#worlds) in which the actions of the algorithms can be
evaluated and compared.

## Requirements:
- C++ compiler
- CMake

## Installation
```sh
git clone https://github.com/mo42/RLEval.git && cd RLEval
git submodule update --init --recursive
mkdir build && cd build
cmake ../
make
```

## Algorithms
- PoWER
- Simple Policy Gradient
- SARSA (discrete)
- Q-learning (discrete)
- TDLearning (discrete)

## Worlds
- Cart pole world (balancing a pole on a cart)
- Mountain car world (drive car uphill by building up momentum)
- Simple and discrete maze world
- Discrete cliff world (
- Adapter world (a continuous world that can be instantiated with a discrete
  world. With one-hot coding, algorithms for continuous worlds can work on
  discrete worlds.)
