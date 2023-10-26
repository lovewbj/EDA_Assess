#include <iostream>
#include <vector>
#include <string>
struct DieSize
{
    int width;
    int heigth;
};

struct NumInstances
{
    int size;
    std::vector<std::string> instances;
};

struct Net
{
    int size;
    std::vector<std::string> pins;
};

struct NumNets
{
    int size;
    Net* nets[3];
};

