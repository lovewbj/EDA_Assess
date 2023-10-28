#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include<algorithm>
#include<database.h>
void parseDie(std::ifstream& ifs, DieSize& die);
void parseInstances(std::ifstream& ifs, NumInstances& instance);
void parseNets(std::ifstream& ifs, Net& net)
void parseNumNet(Net* net1, Net* net2, Net* net3, NumNets& numnets);
