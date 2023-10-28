#include<placement.h>
void Calculate(int bestgrathic[3][3], int grathic[3][3], const DieSize & die, int a, NumNets & numnets, int& minsum)
{
    
    if (a == 5)
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
            for (int w = 1; w < (numnets.nets[q])->size; w++)
            {
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        if (grathic[i][j] == (numnets.nets[q])->pins[w - 1])
                        {
                            x1 = i;
                            y1 = j;
                        }
                        else if (grathic[i][j] == (numnets.nets[q])->pins[w])
                        {
                            x2 = i;
                            y2 = j;
                        }
                    }
                }
                sum += ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
                if (sum > minsum)
                {
                    return;
                }
            }
        }
        minsum = sum;
        bestgrathic = grathic;
        ostream(bestgrathic);
        return;
    }
    for (int i = 0; i < die.width; i++)
    {
        for (int j = 0; j < die.heigth; j++)
        {
            if (grathic[i][j] == 0)
            {
                grathic[i][j] = a;
                Calculate(bestgrathic,grathic,die, a + 1,numnets,minsum);
                grathic[i][j] = 0;
            }
        }
    }
    return;
}
