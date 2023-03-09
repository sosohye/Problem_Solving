#include <iostream>
using namespace std;
#define MAX 1000001

int N;
int DP[MAX];
int minDP;

void input()
{
    cin >> N;
}

void solve()
{
    DP[0] = MAX;
    DP[1] = 0;
    DP[2] = 1;
    for(int i=3;i<=N;++i)
    {
        minDP = MAX;
        if(DP[i-1] < minDP)   minDP = DP[i-1];
        if(i%2==0 && DP[i/2] < minDP) minDP = DP[i/2];
        if(i%3==0 && DP[i/3] < minDP) minDP = DP[i/3];

        DP[i] = minDP + 1;
        //cout << i << " : " << DP[i] << endl;
    }
}

void output()
{
    cout << DP[N] << endl;
}

int main()
{
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    input();
    solve();
    output();

    return 0;
}