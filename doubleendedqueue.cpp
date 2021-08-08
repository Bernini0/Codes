#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    string a = "pushLeft", b ="pushRight", c = "popLeft", d = "popRight";
    for(int tc =1; tc <= t; tc++)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        int cnt = 0;
        printf("Case %d:\n",tc);
        int arr[300];
        memset(arr,0,sizeof(arr));
        int i = 101, j = 102;
        while (m--)
        {
            string s;
            int p;
            cin >> s;
            if(s==a){
                cin >> p;
                if(cnt < n){
                    printf("Pushed in left: %d\n",p);
                    arr[i] = p;
                    i--;
                    cnt++;
                }
                else
                {
                    printf("The queue is full\n");
                }
            }
            else if(s==b){
                cin >> p;
                if(cnt < n){
                    printf("Pushed in right: %d\n", p);
                    arr[j] = p;
                    j++;
                    cnt++;
                }
                else
                {
                    printf("The queue is full\n");
                }
                
            }
            else if(s==c){
                if(cnt > 0){
                    printf("Popped from left: %d\n", arr[i+1]);
                    cnt--;
                    i++;
                }
                else
                {
                    printf("The queue is empty\n");
                }
                
            }
            else if(s==d){
                if(cnt > 0){
                    printf("Popped from right: %d\n", arr[j-1]);
                    cnt--;
                    j--;
                }
                else
                {
                    printf("The queue is empty\n");
                }
            }

        }
        
    }
}