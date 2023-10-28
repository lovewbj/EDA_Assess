#include<parser.h>
void parseDie(std::ifstream& ifs, DieSize& die)
{
    std::string line;
    while (getline(ifs, line))
    {
        if (line.empty())
            return;
        std::istringstream ss(line);
        std::string num;
        int pos = 0;
        while (ss >> num)
        {
            if (pos == 1)
                die.width = std::stoi(num);
            else if (pos == 2)
                die.heigth = std::stoi(num);
            pos++;
        }
    }
}
void parseInstances(std::ifstream& ifs, NumInstances& instance)
{
    std::string line;
    std::string title = "NumInstances";
    getline(ifs, line);
    int pos = line.find(title);
    int start = -1;
    for (int i = pos + title.size(); i < line.size(); i++)
    {
        int start = i;
        if (line[i] == ' ')
        {
            if (start == -1)
                continue;
            else
            {
                instance.size = std::stoi(line.substr(start, i));
                break;
            }
        }
        else if (line[i] == '#')
            break;
        else
        {
            if (start == -1)
                start = i;
        }
    }
    std::string name = "Inst";

    for (int i = 0; i < instance.size; i++)
    {
        start = -1;
        getline(ifs, line);
        pos = line.find(name);
        for (int j = pos + name.size(); j < line.size(); j++)
        {
            if (line[j] == ' ')
            {
                if (start == -1)
                    continue;
                instance.instances.push_back(line.substr(start, j - start));
            }
            else if (line[j] == '#')
                break;
            else if (j == line.size() - 1 && start != -1)
                instance.instances.push_back(line.substr(start, j));
            else
            {
                if (start == -1)
                    start = j;
            }
        }
    }
    getline(ifs, line);
}
void parseNumNets(std::ifstream& ifs, NumNets& numnets)
{
    std::string line;
    getline(ifs, line);

    std::istringstream ss(line);
    std::string num;
    ss >> num;
    ss >> num;
    numnets.size = std::stoi(num);
}
void parseNets(std::ifstream& ifs, Net& net)
{ 
    std::string line;
    getline(ifs, line);
    net.size = std::stoi(line.substr(7, 1));
    for (int i = 0; i < net.size; i++)
    {
        getline(ifs, line);
        net.pins [i] = std::stoi(line.substr(5, 1));
    }
}
void parseNumNet(Net* net1, Net* net2, Net* net3, NumNets& numnets)
{
    numnets.nets[0] = net1;
    numnets.nets[1] = net2;
    numnets.nets[2] = net3;
}
