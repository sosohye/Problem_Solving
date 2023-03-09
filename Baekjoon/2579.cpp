#include <iostream>
using namespace std;

int N;
int Score[301];
int DP[301];

void input()
{
    cin >> N;
}

void solve()
{
    for(int i=1;i<=N;i++)    cin >> Score[i];
    DP[0] = 0;
    DP[1] = Score[1];
    DP[2] = Score[1] + Score[2];
    DP[3] = Score[1] + Score[3] > Score[2] + Score[3] ? Score[1] + Score[3] : Score[2] + Score[3];

    for(int i=4;i<=N;i++)  
    {
        DP[i] = DP[i-3] + Score[i-1] > DP[i-2] ? DP[i-3] + Score[i-1] : DP[i-2];
        DP[i] += Score[i];
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