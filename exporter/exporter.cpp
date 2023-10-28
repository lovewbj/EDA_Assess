include<exporter.h>
void ostream(int bestgrathic[3][3])
{
    std:: ofstream ofs("C:/Users/wangbenjie/Desktop/新建 文本文档.txt");
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
    return;
}
