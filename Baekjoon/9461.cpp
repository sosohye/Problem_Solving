#include <iostream>
using namespace std;

long long T;
long long N;
long long P[101] = {0,1,1,1,2,2,3,4,5,7,9,};

void output();

void input()
{
    cin >> T;
}

void solve()
{
    for(int i=0;i<T;i++)
    {
        cin >> N;
        if(P[N]==0)
        {
            for(int j=11;j<=N;j++)
            {
                P[j] = P[j-1] + P[j-5];
            }
        }
        output();
    }
}

void output()
{
    cout << P[N] << endl;
}

int main()
{
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    input();
    solve();
    //output();

    return 0;
}