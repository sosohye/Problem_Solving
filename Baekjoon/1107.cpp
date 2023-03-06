#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int N;
int M;
bool button[10];
bool flag;
int count;
int min_count=500000;

void input()
{
    cin >> N;
    cin >> M;
    for(int i = 0 ; i < M ; ++i) 
    {
        int temp;
        cin >> temp;
        button[temp] = true; 
    }
}

void solve()
{
    for(int i = 0 ; i <= 1000000 ; i++)
    {
        flag = false;
        count = 0;

        if(i==0)
        {
            if(button[0])   continue;
            else    count = 1;
        }

        if(i!=100)
        {
            int temp = i;
            while(temp)
            {
                if(button[temp%10])
                {
                    flag = true;
                }
                count++;
                temp /=  10;
            }
        }

        count += abs(N - i);

        if(!flag && min_count>count) 
        {
            //cout << i << "Update " << min_count << " to " << count << endl;
            min_count = count;
        }
    }
}

void output()
{
    cout << min_count << endl;
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