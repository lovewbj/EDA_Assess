#include "exporter.h"
void ostream(int bestgrathic[3][3],DieSize& die)//把运行结果写入txt文件中
{
    std::ofstream ofs("/home/spiderman/code/text1/nihao.txt");
    for (int i = 0; i < die.width; i++)
    {
        for (int j = 0; j < die.heigth; j++)
        {
            if (bestgrathic[i][j] == 1)
                ofs << "C1" << " " << i << " " << j << std::endl;
            if (bestgrathic[i][j] == 2)
                ofs << "C2" << " " << i << " " << j << std::endl;
            if (bestgrathic[i][j] == 3)
                ofs << "C3" << " " << i << " " << j << std::endl;
            if (bestgrathic[i][j] == 4)
                ofs << "C4" << " " << i << " " << j << std::endl;
        }
    }
    ofs.close();
    return;
}
