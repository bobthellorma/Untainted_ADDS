#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <sstream>
#include <stack>
#include <queue>

int multiply(std::string a, std::string b)
{
    int aint = stoi(a);
    int bint = stoi(b);
    return aint*bint;
}

int divide (std::string a, std::string b)
{
    int aint = stoi(a);
    int bint = stoi(b);
    return aint/bint;
}

int add(std::string a, std::string b)
{
    int aint = stoi(a);
    int bint = stoi(b);
    return aint + bint;
}

int subtract(std::string a, std::string b)
{
    int aint = stoi(a);
    int bint = stoi(b);
    return aint - bint;
}

void operate(std::vector<std::string> functionin)
{
    int swita;
    std::stack<std::string> operations;
    std::queue<std::string> numbers;

    // Separate into operations and numbers
    for (int i = 0; i < functionin.size(); i++)
    {
        if(functionin.at(i) == "+" || functionin.at(i) == "/" || functionin.at(i) == "*" || functionin.at(i) == "-")
        {
            if (swita == 1)
            {
                //std::cout << "Error";
                //return;
            }
            operations.push(functionin.at(i));
        }
        else
        {
            swita = 1;
            numbers.push(functionin.at(i));
        }
    }

    //Operate on the numbers
    int result;
    while (numbers.size() != 1)
    {
        // Obtain values for calculations - operation
        if(operations.empty())
        {
            //std::cout << "Error";
            //return;
        }
        std::string operation = operations.top();
        operations.pop();

        // Obtain values for calculations - numbers
        std::string firstval = numbers.front();
        numbers.pop();
        std::string secondval = numbers.front();

        // Make calculation
        if (operation == "*")
        {
            result = multiply(firstval,secondval);
        }
        else if (operation == "/")
        {
            result = divide(firstval,secondval);
        }
        else if (operation == "+")
        {
            result = add(firstval,secondval);
        }
        else if (operation == "-")
        {
            result = subtract(firstval,secondval);
        }

        // update front of numbers queue
        std::string &first = numbers.front();
        first = std::to_string(result);
    }
    //if (!operations.empty())
    //{
        //std::cout << "Error";
    //}
    //else
    //{
        std::cout << result;
    //}
    return;
}

int main()
{

std::array<int,100> values;
int size = 0;

// Get Input
std::string input;
std::getline(std::cin, input);
std::istringstream ss(input);

// Enter Input Into Vector
std::vector<std::string> tokens;
std::string token;
while (ss >> token)
{
    tokens.push_back(token);
}
    operate(tokens);
}