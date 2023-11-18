
#ifndef TEXT1_PLACEMENT_H
#define TEXT1_PLACEMENT_H

#endif //TEXT1_PLACEMENT_H
#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include<algorithm>
#include"parser.h"
#include"exporter.h"
void Calculate(std::vector<std::vector<int>>& bestgrathic,std::vector<std::vector<int>>& grathic, DieSize& die, int a, NumNets& numnets, int& minsum,NumInstances instances,Net& net);
