// Should give TLE
#include<bits/stdc++.h>
using namespace std;

#define int long long

long long readInt(long long l,long long r,char endd){
  long long x=0;
  int cnt=0;
  int fi=-1;
  bool is_neg=false;
  while(true){
    char g=getchar();
    if(g=='-'){
      assert(fi==-1);
      is_neg=true;
      continue;
    }
    if('0'<=g && g<='9'){
      x*=10;
      x+=g-'0';
      if(cnt==0){
        fi=g-'0';
      }
      cnt++;
      assert(fi!=0 || cnt==1);
      assert(fi!=0 || is_neg==false);
 
      assert(!(cnt>19 || ( cnt==19 && fi>1) ));
    } else if(g==endd){
      if(is_neg){
        x= -x;
      }
      assert(l<=x && x<=r);
      return x;
    } else {
      assert(false);
    }
  }
}
string readString(int l,int r,char endd){
  string ret="";
  int cnt=0;
  while(true){
    char g=getchar();
    assert(g!=-1);
    if(g==endd){
      break;
    }
    cnt++;
    ret+=g;
  }
  assert(l<=cnt && cnt<=r);
  return ret;
}
long long readIntSp(long long l,long long r){
  return readInt(l,r,' ');
}
long long readIntLn(long long l,long long r){
  return readInt(l,r,'\n');
}
string readStringLn(int l,int r){
  return readString(l,r,'\n');
}
string readStringSp(int l,int r){
  return readString(l,r,' ');
}

const int mxN=1e6+5;
int t[4*mxN];
int sum_n=0;

void build(int a[], int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = min(t[v*2],t[v*2+1]);
    }
}

void update(int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr) {
        t[v] = new_val;
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val);
        else
            update(v*2+1, tm+1, tr, pos, new_val);
        t[v] = min(t[v*2],t[v*2+1]);
    }
}

int query(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return INT_MAX;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return min(query(v*2, tl, tm, l, min(r, tm))
           ,query(v*2+1, tm+1, tr, max(l, tm+1), r));
}

void solve()
{
  int n,p;
  n=readIntSp(1,1000000);
  p=readIntLn(1,n);

  assert(p<=n);

  sum_n+=n;

  int arr[n];

  for(int i=0;i<n;i++)
  {
    if(i!=n-1)
      arr[i]=readIntSp(0,1000);
    else
      arr[i]=readIntLn(0,1000);
  }

  if(n<=p)
  {
    cout<<0<<endl;
    return;
  }

  build(arr,1,0,n-1);


  for(int i=p+1;i<n;i++)
  {
    int l=i-(p+1);
    int r=i-1;

    int mi=query(1,0,n-1,l,r);

    update(1,0,n-1,i,arr[i]+mi);
  }

  int ans=query(1,0,n-1,n-1-p,n-1);
  cout<<ans<<"\n";
} 

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);


  int t;
  t=readIntLn(1,1000000);

  while(t--)
    solve();

//   assert(sum_n<=1000000);
//   assert(getchar() == EOF);

return 0;
}