#include <stdio.h>
int main()
{
    int N,i=1;
    int sum = 0;
    scanf("%d", &N);          // ����N
    for(i = 1; i <= N; i++)
    {
        int j = i;
        while(j % 5==0)
        {
            sum++;            // ͳ�ƹ�Լ��5���ֵ�Ƶ��
            j /= 5;
        }
    }

    printf("%d\n", sum);

    return 0;
}
