#include"placement.h"
void Calculate(std::vector<std::vector<int>>& bestgrathic,std::vector<std::vector<int>>& grathic, DieSize& die, int a, NumNets& numnets, int& minsum,NumInstances instances,Net& net)//传入数据，完成布局操作，并找到最优解写入文件
{

    if (a>instances.size)
    {
        int sum = 0;
        int x1 = 0;
        int x2 = 0;
        int y1 = 0;
        int y2 = 0;
        for (int q = 0; q < numnets.size; q++)
        {
            x1 = 0;
            x2 = 0;
            y1 = 0;
            y2 = 0;
            for (int w = 1; w < net.size[w-1]; w++)
            {
                for (int i = 0; i < die.width; i++)
                {
                    for (int j = 0; j < die.heigth; j++)
                    {
                        if (grathic[i][j] == (net.pin[q][w-1]))
                        {
                            x1 = i;
                            y1 = j;
                        }
                        else if (grathic[i][j] == (net.pin[q][w]))
                        {
                            x2 = i;
                            y2 = j;
                        }
                    }
                }
                sum += ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
                if (sum >= minsum)//通过比较以完成减支的操作
                {
                    return;
                }
            }
        }
        minsum = sum;
        bestgrathic = grathic;
        ostream(bestgrathic,die);//调用函数，把结果写入txt
        return;
    }
    for (int i = 0; i < die.width; i++)//使用递归的方法遍历全部布局情况
    {
        for (int j = 0; j < die.heigth; j++)
        {
            if (grathic[i][j] == 0)
            {
                grathic[i][j] = a;
                Calculate(bestgrathic, grathic, die, a + 1, numnets, minsum,instances,net);
                grathic[i][j] = 0;
            }
        }
    }
    return;
}
