/*approach : using hash for storing data*/

#include<stdio.h>
#include<string.h>
#include<math.h>

//fucntion for computing hash value of a string

long long int compute_hash(char s[]) 
{
    const int p = 31;
    const int m = 31541; //randong prime number for hasing 
    long long int hash_value = 0;
    long long int p_pow = 1; //storing power of a number in O(1) memory space
    int i;
    for (i=0;s[i]!='\0';i++) 
    {
        hash_value = (hash_value + (s[i] - 'a' + 1) * p_pow) % m; //hashing formula
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}

//structure for storing all data
struct book
{
    char genre[30],title[30],author[30],language[30];
    int id,year;
} store[100005];

//this fucntion will help us to merge for our mergesort sorting algorithm

void merge(struct book arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    struct book L[n1], R[n2];
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[m + 1 + j];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2) 
    {
        if (L[i].id <= R[j].id) 
        {
            arr[k] = L[i];
            i++;
        }
        else 
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) 
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) 
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
//main sorting algorithm with complexity O(n*log(n))
void mergeSort(struct book arr[],int l,int r)
{
    if(l>=r)
    {
        return;
    }
    int m =l+ (r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}
//these array will store id after sorting the books by theis id
int thash[31544][52],ghash[31544][52],ahash[31544][52],lhash[31544][52],yhash[100002][52];

int main()
{
    int n;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%s%s%s%s%d",&store[i].id,store[i].title,store[i].genre,store[i].author,store[i].language,&store[i].year);
    }
    
    //sroting 
    mergeSort(store,0,n-1);

    int tn[31544],gn[31544],an[31544],ln[31544],yn[10001];
    memset(gn,0,sizeof(gn));
    memset(tn,0,sizeof(tn));
    memset(an,0,sizeof(an));
    memset(ln,0,sizeof(ln));
    memset(yn,0,sizeof(yn));

    for(int i=0;i<n;i++)
    {
        long long int ht=compute_hash(store[i].title);
        long long int hg=compute_hash(store[i].genre);
        long long int ha=compute_hash(store[i].author);
        long long int hl=compute_hash(store[i].language);
        thash[ht][tn[ht]++]=i;
        ghash[hg][gn[hg]++]=i;
        ahash[ha][an[ha]++]=i;
        lhash[hl][ln[hl]++]=i;
        yhash[store[i].year][yn[store[i].year]++]=i;
    }
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int type;
        scanf("%d",&type);
        if(type==1)
        {
            char gnr[30];
            scanf("%s",gnr);
            long long int gethash=compute_hash(gnr);
            for(int i=0;i<gn[gethash];i++)
            {
                printf("%d %s %s %s %s %d\n",store[ghash[gethash][i]].id,store[ghash[gethash][i]].title,store[ghash[gethash][i]].genre,store[ghash[gethash][i]].author,store[ghash[gethash][i]].language,store[ghash[gethash][i]].year);
            }
        }
        else if(type==2)
        {
            int yr;
            scanf("%d",&yr);
            long long int gethash=yr;
            for(int i=0;i<yn[gethash];i++)
            {
                printf("%d %s %s %s %s %d\n",store[yhash[gethash][i]].id,store[yhash[gethash][i]].title,store[yhash[gethash][i]].genre,store[yhash[gethash][i]].author,store[yhash[gethash][i]].language,store[yhash[gethash][i]].year);
            }
        }
        else if(type==3)
        {
            char ttl[30];
            scanf("%s",ttl);
            long long int gethash=compute_hash(ttl);
            for(int i=0;i<tn[gethash];i++)
            {
                printf("%d %s %s %s %s %d\n",store[thash[gethash][i]].id,store[thash[gethash][i]].title,store[thash[gethash][i]].genre,store[thash[gethash][i]].author,store[thash[gethash][i]].language,store[thash[gethash][i]].year);
            }
        }
        else if(type==4)
        {
            char athr[30];
            scanf("%s",athr);
            long long int gethash=compute_hash(athr);
            for(int i=0;i<an[gethash];i++)
            {
                printf("%d %s %s %s %s %d\n",store[ahash[gethash][i]].id,store[ahash[gethash][i]].title,store[ahash[gethash][i]].genre,store[ahash[gethash][i]].author,store[ahash[gethash][i]].language,store[ahash[gethash][i]].year);
            }
        }
        else if(type==5)
        {
            char lng[30];
            scanf("%s",lng);
            long long int gethash=compute_hash(lng);
            for(int i=0;i<ln[gethash];i++)
            {
                printf("%d %s %s %s %s %d\n",store[lhash[gethash][i]].id,store[lhash[gethash][i]].title,store[lhash[gethash][i]].genre,store[lhash[gethash][i]].author,store[lhash[gethash][i]].language,store[lhash[gethash][i]].year);
            }
        }
        else if(type==6)
        {
            char lng[30],ath[30];
            scanf("%s%s",ath,lng);
            long long int gethasha=compute_hash(ath),gethashl=compute_hash(lng);
            for(int i=0;i<ln[gethashl];i++)
            {
                if(compute_hash(store[lhash[gethashl][i]].author)==gethasha)
                {
                    printf("%d %s %s %s %s %d\n",store[lhash[gethashl][i]].id,store[lhash[gethashl][i]].title,store[lhash[gethashl][i]].genre,store[lhash[gethashl][i]].author,store[lhash[gethashl][i]].language,store[lhash[gethashl][i]].year);
                }
            }
        }
        else if(type==7)
        {
            char ttl[30],ath[30];
            scanf("%s%s",ath,ttl);
            long long int gethasha=compute_hash(ath),gethasht=compute_hash(ttl);
            for(int i=0;i<tn[gethasht];i++)
            {
                if(compute_hash(store[thash[gethasht][i]].author)==gethasha)
                {
                    printf("%d %s %s %s %s %d\n",store[thash[gethasht][i]].id,store[thash[gethasht][i]].title,store[thash[gethasht][i]].genre,store[thash[gethasht][i]].author,store[thash[gethasht][i]].language,store[thash[gethasht][i]].year);
                }
            }
        }
        else if(type == 8)
        {
            char gnr[30],ath[30];
            scanf("%s%s",ath,gnr);
            long long int gethasha=compute_hash(ath),gethashg=compute_hash(gnr);
            for(int i=0;i<gn[gethashg];i++)
            {
                if(compute_hash(store[ghash[gethashg][i]].author)==gethasha)
                {
                    printf("%d %s %s %s %s %d\n",store[ghash[gethashg][i]].id,store[ghash[gethashg][i]].title,store[ghash[gethashg][i]].genre,store[ghash[gethashg][i]].author,store[ghash[gethashg][i]].language,store[ghash[gethashg][i]].year);
                }
            }
        }
        else
        {
            char gnr[30],lng[30];
            scanf("%s%s",gnr,lng);
            long long int gethashg=compute_hash(gnr),gethashl=compute_hash(lng);
            for(int i=0;i<gn[gethashg];i++)
            {
                if(compute_hash(store[ghash[gethashg][i]].language)==gethashl)
                {
                    printf("%d %s %s %s %s %d\n",store[ghash[gethashg][i]].id,store[ghash[gethashg][i]].title,store[ghash[gethashg][i]].genre,store[ghash[gethashg][i]].author,store[ghash[gethashg][i]].language,store[ghash[gethashg][i]].year);
                }
            }
        }
    }
    return 0;
}