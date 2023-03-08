#include <iostream>
using namespace std;

int n;
int DP[1001];

void input()
{
    cin >> n;
}

void solve()
{
    DP[1] = 1;
    DP[2] = 3;
    for(int i=3;i<=n;++i)
    {
        DP[i] = (DP[i-1] + DP[i-2]*2) % 10007;
    }
}

void output()
{
    cout << DP[n] << endl;
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