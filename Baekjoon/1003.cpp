#include <stdio.h>
int T, N;
int zero[41];
int one[41];

int main()
{
    for(int i=0;i<=40;++i)
    {
        if(i==0)
        {
            zero[i] = 1;
            one[i] = 0;
        }
        else if(i==1)
        {
            zero[i] = 0;
            one[i] = 1;
        }
        else
        {
            zero[i] = zero[i-1] + zero[i-2];
            one[i] = one[i-1] + one[i-2];
        }
    }

    scanf("%d",&T);
    for(;T--;)
    {
        scanf("%d",&N);
        printf("%d %d\n",zero[N],one[N]);
    }

    return 0;
}