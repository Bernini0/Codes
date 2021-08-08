#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ifstream in("bye.in", ifstream::in);
    // ofstream out("bye.out", ofstream::out);
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        int hn,mn,hw,mw;
        scanf("%d %d %d %d", &hn, &mn,&hw, &mw);
        // in >> hn >> mn >> hw >> mw;
        int hour = (hw-hn)*60;
        hour += (mw -mn);
        printf("Case %d: %d\n",tc,hour);
    }
}