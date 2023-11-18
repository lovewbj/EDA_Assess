#include "database.h"
#include "placement.h"
#include "parser.h"
#include "exporter.h"

int main()
{
    std::ifstream file("/home/spiderman/code/EDA_Assess/test.txt");
    if (!file.is_open())
        return -1;
    DieSize die;
    die.width = 0;
    die.heigth = 0;
    parseDie(file, die);
    NumInstances instances;
    parseInstances(file, instances);
    Net net;
    NumNets numnets;
    parseNumNets(file, numnets);
    parseNets(file, net,numnets);
    std::vector<std::vector<int>> grathic(die.width,std::vector<int>(die.heigth,0));
    int minsum = 1000;
    std::vector<std::vector<int>> bestgrathic(die.width,std::vector<int>(die.heigth,0));
    Calculate(bestgrathic, grathic, die, 1, numnets, minsum,instances,net);
    return 0;
}
