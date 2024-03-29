#include <iostream>

#include <CliffWorld.h>
#include <MazeWorld.h>
#include <Parameter.h>
#include <TDLearning.h>

using namespace RL;

void testMazeWorld() {
  MazeWorld world;
  Value value(world.getNumberStates(), 0.0);
  Parameter parameter;
  parameter.alpha = 0.1;
  parameter.gamma = 0.9;
  parameter.epsilon = 0.1;
  parameter.episodeLength = 1000;
  parameter.walks = 100;
  tdlearning(world, value, parameter);
}

void testCliffWorld() {
  CliffWorld world;
  Value value(world.getNumberStates(), 0.0);
  Parameter parameter;
  parameter.alpha = 0.1;
  parameter.gamma = 1.0;
  parameter.epsilon = 0.1;
  parameter.episodeLength = 100;
  parameter.walks = 500;
  tdlearning(world, value, parameter);
}

int main() {
  testMazeWorld();
  testCliffWorld();
  return 0;
}
