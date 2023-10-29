#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include<algorithm>
#include"parser.h"
#include"exporter.h"
void Calculate(int bestgrathic[3][3], int grathic[3][3], const DieSize& die, int a, NumNets& numnets, int& minsum);
