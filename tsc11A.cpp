#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        if ((n >= 21 && s == "Mar") || (n < 21 && s == "Apr"))
        {
            printf("Aries\n");
        }
        else if ((n >= 21 && s == "Apr") || (n < 21 && s == "May"))
        {
            printf("Taurus\n");
        }
        else if ((n >= 21 && s == "May") || (n <= 21 && s == "Jun"))
        {
            printf("Gemini\n");
        }
        else if ((n > 21 && s == "Jun") || (n <= 22 && s == "Jul"))
        {
            printf("Cancer\n");
        }
        else if ((n > 22 && s == "Jul") || (n < 23 && s == "Aug"))
        {
            printf("Leo\n");
        }
        else if ((n > 22 && s == "Aug") || (n <= 21 && s == "Sep"))
        {
            printf("Virgo\n");
        }
        else if ((n > 21 && s == "Sep") || (n <= 22 && s == "Oct"))
        {
            printf("Libra\n");
        }
        else if ((n >= 23 && s == "Oct") || (n <= 22 && s == "Nov"))
        {
            printf("Scorpio\n");
        }
        else if ((n >= 23 && s == "Nov") || (n <= 21 && s == "Dec"))
        {
            printf("Sagittarius\n");
        }
        else if ((n >= 22 && s == "Dec") || (n < 21 && s == "Jan"))
        {
            printf("Capricorn\n");
        }
        else if ((n >= 21 && s == "Jan") || (n < 20 && s == "Feb"))
        {
            printf("Aquarius\n");
        }
        else if ((n >= 20 && s == "Feb") || (n < 21 && s == "Mar"))
        {
            printf("Pisces\n");
        }
    }
}