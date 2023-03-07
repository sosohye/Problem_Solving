#include <iostream>
using namespace std;

int T;
int N;
int DP[11];

void input()
{
    cin >> T;
}

void solve()
{
    cin >> N;

    DP[0] = 1;
    DP[1] = 1;
    DP[2] = 2;
    for(int i=3;i<=N;++i)
    {
        DP[i] = DP[i-1] + DP[i-2] + DP[i-3];
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
    for(;T--;)
    {
        solve();
        output();
    }

    return 0;
}