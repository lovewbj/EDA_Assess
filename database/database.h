#ifndef TEXT1_DATABASE_H
#define TEXT1_DATABASE_H

#include <vector>
#include <iostream>
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
    std::vector<int> size;
    std::vector<std::vector<int>> pin;
};

struct NumNets
{
    int size;
};
#endif //TEXT1_HHH_H
