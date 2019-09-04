#include <stdio.h>
int main()
{
    int N,i=1;
    int sum = 0;
    scanf("%d", &N);          // 输入N
    for(i = 1; i <= N; i++)
    {
        int j = i;
        while(j % 5==0)
        {
            sum++;            // 统计公约数5出现的频次
            j /= 5;
        }
    }

    printf("%d\n", sum);

    return 0;
}
