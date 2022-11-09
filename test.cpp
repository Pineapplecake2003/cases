#include"ToHex.h"
#include<math.h>
#include<stdlib.h>
int main(){
    int answer[9] ;
    int a = 9;
    int b = -13;
    int ans0 = (a*5 + 30) * 7 + b*3;
    int ans1 = a*(-3)+ b*(-5);
    int ans2 = abs(a)+abs(b);
    int ans3 = a%4 + b%4;
    int ans4 = (int)(a/8) + (int)(b/8);

    int c = 7;
    int d = -15;
    int ans5 = 100*5.625;
    int ans6 = -5*3.5;
    int ans7 = 3*0.75;
    int ans8 = (int)(c*0.75) + (int)(d*0.75);
    
    answer[0] = ans0;
    answer[1] = ans1;
    answer[2] = ans2;
    answer[3] = ans3;
    answer[4] = ans4;
    answer[5] = ans5;
    answer[6] = ans6;
    answer[7] = ans7;
    answer[8] = ans8;
    ToHex(answer,9);
    return 0;

}