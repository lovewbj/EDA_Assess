#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include<algorithm>

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
    int pins[10];
};

struct NumNets
{
    int size;
    Net* nets[3];
};
