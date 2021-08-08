#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    vector<string>v(24);
    v[0] = "C";
    v[1] = "C#";
    v[2] = "D";
    v[3] = "D#";
    v[4] = "E";
    v[5] = "F";
    v[6] = "F#";
    v[7] ="G";
    v[8] = "G#";
    v[9] = "A";
    v[10] ="A#";
    v[11] = "B";
    for (int i = 12; i < 24; i++)
    {
        v[i] = v[i-12];
    }
    
    while (t--)
    {
        string s1,s2,s3;
        cin >> s1 >> s2 >> s3;
        bool yes = false;
        for (int i = 0; i < 24; i++)
        {
            if(v[i]==s1 && v[i+4]==s2 && v[i+7] == s3){
                printf("Major triad\n");
                yes = true;
                break;
            }
            else if(v[i]==s1 && v[i+3]==s2 && v[i+7] == s3){
                printf("Minor triad\n");
                yes = true;
                break;
            }
        }
        if(!yes){
            printf("Dissonance\n");
        }
    }
    
}