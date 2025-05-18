#include <iostream>
#include<cmath>
using namespace std;

inline void calculate(int x)
{
    int ans = (pow(x, 2)) + 2;
    cout << ans;
}

int main() 
{
    calculate(4);
    return 0;
}