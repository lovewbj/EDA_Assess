#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include<algorithm>
#include<placement.h>
#include<
int main()
{
    std::ifstream file("/home/spiderman/桌面/nihoz/test.txt");
    if (!file.is_open())
        return -1;
    DieSize die;
    die.width = 0;
    die.heigth = 0;
    parseDie(file, die);
    NumInstances instances;
    parseInstances(file, instances);
    Net N1,N2,N3;
    NumNets numnets;
    parseNumNets(file, numnets);
    parseNets(file,N1);
    parseNets(file,N2);
    parseNets(file,N3);
    parseNumNet(&amp;N1,&amp;N2,&amp;N3,numnets);
    int grathic[3][3] = {0};
    int minsum = 1000;
    int bestgrathic[3][3] = { 0 };
    Calculate(bestgrathic,grathic, die,1,numnets,minsum);
    for (int i = 0; i &lt; 3; i++)
    {
        for (int j = 0; j &lt; 3; j++)
        {
            if (bestgrathic[i][j] == 1)
                std::cout &lt;&lt; "C1" &lt;&lt; " " &lt;&lt; i &lt;&lt; " " &lt;&lt; j &lt;&lt; std::endl;
            else if (bestgrathic[i][j] == 2)
                std::cout &lt;&lt; "C2" &lt;&lt; " " &lt;&lt; i &lt;&lt; " " &lt;&lt; j &lt;&lt; std::endl;
            else if (bestgrathic[i][j] == 3)
                std::cout &lt;&lt; "C3" &lt;&lt; " " &lt;&lt; i &lt;&lt; " " &lt;&lt; j &lt;&lt; std::endl;
            else if (bestgrathic[i][j] == 4)
                std::cout &lt;&lt; "C4" &lt;&lt; " " &lt;&lt; i &lt;&lt; " " &lt;&lt; j &lt;&lt; std::endl;

        }
    }
    std::system("pause");
    return 0;
}
