#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(PrintIntro, EmptyInputs)
{
  CPPLib cpplib;
  std::string first_name = "";
  std::string last_name = "";
  std::string experience = "";
  std::string actual_output = cpplib.PrintIntro(first_name, last_name, experience);
  std::string expected_output = "Hi, my name is  , and my programming experiences are: ";
  EXPECT_EQ(expected_output, actual_output);
}

TEST(PrintIntro, EmptyFirstName)
{
  CPPLib cpplib;
  std::string first_name = "";
  std::string last_name = "Smith";
  std::string experience = "Novice";
  std::string actual_output = cpplib.PrintIntro(first_name, last_name, experience);
  std::string expected_output = "Hi, my name is  Smith, and my programming experiences are: Novice";
  EXPECT_EQ(expected_output, actual_output);
}

TEST(PrintIntro, EmptyLastName)
{
  CPPLib cpplib;
  std::string first_name = "Adam";
  std::string last_name = "";
  std::string experience = "Novice";
  std::string actual_output = cpplib.PrintIntro(first_name, last_name, experience);
  std::string expected_output = "Hi, my name is Adam , and my programming experiences are: Novice";
  EXPECT_EQ(expected_output, actual_output);
}

TEST(PrintIntro, EmptyExperience)
{
  CPPLib cpplib;
  std::string first_name = "Adam";
  std::string last_name = "Smith";
  std::string experience = "";
  std::string actual_output = cpplib.PrintIntro(first_name, last_name, experience);
  std::string expected_output = "Hi, my name is Adam Smith, and my programming experiences are: ";
  EXPECT_EQ(expected_output, actual_output);
}

TEST(PrintIntro, NumberStrings)
{
  CPPLib cpplib;
  std::string first_name = "123";
  std::string last_name = "456";
  std::string experience = "789";
  std::string actual_output = cpplib.PrintIntro(first_name, last_name, experience);
  std::string expected_output = "Hi, my name is 123 456, and my programming experiences are: 789";
  EXPECT_EQ(expected_output, actual_output);
}

TEST(PrintIntro, InputsMixed)
{
  CPPLib cpplib;
  std::string first_name = "Adam";
  std::string last_name = "Smith";
  std::string experience = "Novice";
  std::string actual_output = cpplib.PrintIntro(last_name, experience, first_name);
  std::string expected_output = "Hi, my name is Smith Novice, and my programming experiences are: Adam";
  EXPECT_EQ(expected_output, actual_output);
}