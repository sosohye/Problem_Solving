#include <iostream>
using namespace std;

int N;
int ans;

void input()
{
    cin >> N;
}

void solve()
{
    ans = N/5 + N/25 + N/125;
}

void output()
{
    cout << ans << endl;
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