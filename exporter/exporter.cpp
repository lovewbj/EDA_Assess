#include "exporter.h"
void ostream(int bestgrathic[3][3])//把运行结果写入txt文件中，没有进入文件的末尾，是为了写入最后一个结果
{
    std::ofstream ofs("C:/Users/wangbenjie/Desktop/新建 文本文档.txt");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
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
