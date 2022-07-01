#ifndef TEMPLATE_CPPLIB_H
#define TEMPLATE_CPPLIB_H

#include <map>
#include <string>
#include <vector>
#include <algorithm>

/**
 *  Example class used for GTest demo
 */
class CPPLib
{
public:
  std::string PrintHelloWorld();

  // NOTE: write your own function declaration q2 here
  int FindMedian(std::vector<int> &);

  // Print your self-introduction
  std::string PrintIntro(std::string &, std::string &, std::string &);

  // q6
  std::vector<int> Flatten3DVector(const std::vector<std::vector<std::vector<int>>> &input);

  // Climbing Stairs
  int climbStairs(int n);

private:
};

#endif
