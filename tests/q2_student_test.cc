// NOTE: Add your own q2 tests in this file
#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(FindMedian, EmptyVector)
{
  CPPLib cpplib;
  std::vector<int> input = {};
  int actual_output = cpplib.FindMedian(input);
  int expected_output = -1;
  EXPECT_EQ(actual_output, expected_output);
}

TEST(FindMedian, SingleElement)
{
  CPPLib cpplib;
  std::vector<int> input = {3};
  int actual_output = cpplib.FindMedian(input);
  int expected_output = 3;
  EXPECT_EQ(actual_output, expected_output);
}

TEST(FindMedian, OddElements)
{
  CPPLib cpplib;
  std::vector<int> input = {3, 5, 2};
  int actual_output = cpplib.FindMedian(input);
  int expected_output = 3;
  EXPECT_EQ(actual_output, expected_output);
}

TEST(FindMedian, EvenElements)
{
  CPPLib cpplib;
  std::vector<int> input = {3, 5, 2, 1, 5, 7};
  int actual_output = cpplib.FindMedian(input);
  int expected_output = 4;
  EXPECT_EQ(actual_output, expected_output);
}

TEST(FindMedian, EvenElementsSame)
{
  CPPLib cpplib;
  std::vector<int> input = {3, 3, 3, 3, 3, 3};
  int actual_output = cpplib.FindMedian(input);
  int expected_output = 3;
  EXPECT_EQ(actual_output, expected_output);
}

TEST(FindMedian, OddElementsSame)
{
  CPPLib cpplib;
  std::vector<int> input = {2, 2, 2, 2, 2};
  int actual_output = cpplib.FindMedian(input);
  int expected_output = 2;
  EXPECT_EQ(actual_output, expected_output);
}

TEST(FindMedian, SortedElementsEven)
{
  CPPLib cpplib;
  std::vector<int> input = {4, 5, 6, 7};
  int actual_output = cpplib.FindMedian(input);
  int expected_output = 5;
  EXPECT_EQ(actual_output, expected_output);
}

TEST(FindMedian, SortedElementsOdd)
{
  CPPLib cpplib;
  std::vector<int> input = {4, 5, 6, 7, 9};
  int actual_output = cpplib.FindMedian(input);
  int expected_output = 6;
  EXPECT_EQ(actual_output, expected_output);
}

TEST(FindMedian, ReverseSortedElementsEven)
{
  CPPLib cpplib;
  std::vector<int> input = {10, 9, 4, 3};
  int actual_output = cpplib.FindMedian(input);
  int expected_output = 6;
  EXPECT_EQ(actual_output, expected_output);
}

TEST(FindMedian, ReverseSortedElementsOdd)
{
  CPPLib cpplib;
  std::vector<int> input = {10, 9, 4, 3, 1};
  int actual_output = cpplib.FindMedian(input);
  int expected_output = 4;
  EXPECT_EQ(actual_output, expected_output);
}