#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include<algorithm>
void parseDie(std::ifstream& ifs, DieSize& die);
void parseInstances(std::ifstream& ifs, NumInstances& instance);
void parseNumNets(std::ifstream& ifs, NumNets& numnets);
void parseNets(std::ifstream& ifs, Net& net);
