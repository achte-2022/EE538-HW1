#include "cpplib.h"
#include "limits"

std::string CPPLib::PrintHelloWorld() { return "**** Hello World ****"; }

// NOTE: write your own function declaration q2 here
int CPPLib::FindMedian(std::vector<int> &input_vector)
{
    if (input_vector.empty())
    {
        return -1;
    }
    std::sort(input_vector.begin(), input_vector.end());
    int input_length = input_vector.size();
    if ((input_length % 2) != 0)
    {
        return input_vector[(input_length - 1) / 2];
    }
    else
    {
        return (input_vector[input_length / 2] + input_vector[(input_length / 2) - 1]) / 2;
    }
}

// Question 5 Print your self-introduction
std::string CPPLib::PrintIntro(std::string &first_name, std::string &last_name, std::string &experience)
{
    // Please fill up this function.
    std::string message = "Hi, my name is " + first_name + " " + last_name + ", and my programming experiences are: " + experience;
    return message;
}

// Question 6
std::vector<int> CPPLib::Flatten3DVector(const std::vector<std::vector<std::vector<int>>> &input)
{
    // Please fill up this function.
    std::vector<int> res;
    return res;
}

// Question 7 Climbing Stairs
int CPPLib::climbStairs(int n)
{
    // Please fill up this function.
    return 0;
}
