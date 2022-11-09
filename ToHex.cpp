#include"ToHex.h"
void ToHex(int *answer, int HowMuch)
{
    FILE *GoldenHex = fopen("golden.hex","w");
    int tem = *answer;
    for (int n = 1; n <= HowMuch; n++)
    {
        for (int i = 7, j = 0; i >= 0; i--, j++)
        {
            int dig = tem / pow(16, i);
            if (dig <= 9)
            {
                Hex[j] = dig + 48;
            }
            else if (dig >= 10)
            {
                Hex[j] = dig + 55;
            }
            tem %= int(pow(16, i));
        }
        fprintf(GoldenHex,"%s%c",Hex,'\n');
        tem = *(++answer);
    }
}