#include <stdio.h>
int n;
int ans[1001] = {1, 1, 2,};

int main()
{
    scanf("%d",&n);

    for(int i=3;i<=n;i++)
    {
        ans[i] = ans[i-1] + ans[i-2];
        if(ans[i]>10007)    ans[i]=ans[i]-10007;
    }
    printf("%d\n",ans[n]);

    return 0;
}