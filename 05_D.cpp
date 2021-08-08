#include <bits/stdc++.h>
using namespace std;
typedef struct library
{
    int id, year;
    char title[30], genre[30], author[30], language[30];
} library;
library books[100005];
int hashing(char str[])
{
    //Hashing formula = (summasion(s[i]-'a'+1)*p)%mod
    //This will give us a integer [0~mod] which represents given string
    //then we can compare two strings in O(1)
    long long int p = 31; //google says it should be closer to number of possible characters
    long long int mod = 30103;
    long long int hash_value = 0;
    long long int p_in = 1;
    for (int i = 0; str[i] > 0; i++)
    {
        hash_value += ((str[i] - 'a' + 1) * p_in) % mod;
        p_in = (p * p_in) % mod;
    }
    return hash_value;
}
void merge(library b[], int l, int mid, int r)
{
    int s1 = mid - l + 1;
    int s2 = r - mid;
    library temp1[s1], temp2[s2];
    for (int i = 0; i < s1; i++)
    {
        temp1[i] = b[l + i];
    }
    for (int i = 0; i < s2; i++)
    {
        temp2[i] = b[mid + 1 + i];
    }
    int i = 0, j = 0, k = l;
    while (i < s1 && j < s2)
    {
        if (temp1[i].id >= temp2[j].id)
        {
            b[k] = temp2[j];
            j++;
            k++;
        }
        else
        {
            b[k] = temp1[i];
            i++;
            k++;
        }
    }
    while (i < s1)
    {
        b[k] = temp1[i];
        i++;
        k++;
    }
    while (j < s2)
    {
        b[k] = temp2[j];
        j++;
        k++;
    }
}
void merge_sort(library b[], int l, int r)
{
    if (l >= r)
    {
        return; //returns recursively
    }
    int m = l + (r - l) / 2;
    //sorting the left side
    merge_sort(b, l, m);
    //sorting the right side
    merge_sort(b, m + 1, r);
    //then marging both to get the original array
    merge(b, l, m, r);
}
// Columns is 51 because it is said in the problem descripsion, max ans size is 50
int title_hash[30103][51], genre_hash[30103][51], author_hash[30103][51], language_hash[30103][51], year_hash[100000 + 5][51];
int titles[30103], genres[30103], authors[30103], languages[30103], years[100005];
//Arrays with 's' in the last position will count number of occurances of same titles, genres, authors, languages, years respectively 
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %s %s %s %d", &books[i].id, books[i].title, books[i].genre, books[i].author, books[i].language, &books[i].year);
    }

    memset(titles, 0, sizeof(titles));
    memset(genres, 0, sizeof(genres));
    memset(authors, 0, sizeof(authors));
    memset(languages, 0, sizeof(languages));
    memset(years, 0, sizeof(years));
    //Sorting the books in terms of their id's
    merge_sort(books, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        // genereting unique hash keys
        int hash_title = hashing(books[i].title);
        int hash_genre = hashing(books[i].genre);
        int hash_author = hashing(books[i].author);
        int hash_language = hashing(books[i].language);
        //Taking a 2-d array and sorting the books in terms of year
        year_hash[books[i].year][years[books[i].year]] = i;
        years[books[i].year]++;
        //Taking a 2-d array and sorting the books in terms of title
        title_hash[hash_title][titles[hash_title]] = i;
        titles[hash_title]++;
        //Taking a 2-d array and sorting the books in terms of genre
        genre_hash[hash_genre][genres[hash_genre]] = i;
        genres[hash_genre]++;
        //Taking a 2-d array and sorting the books in terms of author
        author_hash[hash_author][authors[hash_author]] = i;
        authors[hash_author]++;
        //Taking a 2-d array and sorting the books in terms of language
        language_hash[hash_language][languages[hash_language]] = i;
        languages[hash_language]++;
    }
    int query;
    scanf("%d", &query);
    while (query--)
    {
        int t;
        scanf("%d", &t);
        if (t == 1)
        {
            char genre[30];
            scanf("%s", genre);
            int hash = hashing(genre);
            //answers will be the books with tha same hash as the input hash
            //we counted the number of occurances of each hash with "genres" array
            // printf("%d\n",genres[hash]);
            for (int i = 0; i < genres[hash]; i++)
            {
                printf("%d %s %s %s %s %d\n", books[genre_hash[hash][i]].id, books[genre_hash[hash][i]].title, books[genre_hash[hash][i]].genre, books[genre_hash[hash][i]].author, books[genre_hash[hash][i]].language, books[genre_hash[hash][i]].year);
            }
        }
        if (t == 2)
        {
            int hash;
            scanf("%d", &hash);
            //answers will be the books with tha same hash as the input hash
            //we counted the number of occurances of each hash with "years" array
            for (int i = 0; i < years[hash]; i++)
            {
                printf("%d %s %s %s %s %d\n", books[year_hash[hash][i]].id, books[year_hash[hash][i]].title, books[year_hash[hash][i]].genre, books[year_hash[hash][i]].author, books[year_hash[hash][i]].language, books[year_hash[hash][i]].year);
            }
        }
        if (t == 3)
        {
            char t[30];
            scanf("%s", t);
            int hash = hashing(t);
            //answers will be the books with tha same hash as the input hash
            //we counted the number of occurances of each hash with "titles" array
            for (int i = 0; i < titles[hash]; i++)
            {
                printf("%d %s %s %s %s %d\n", books[title_hash[hash][i]].id, books[title_hash[hash][i]].title, books[title_hash[hash][i]].genre, books[title_hash[hash][i]].author, books[title_hash[hash][i]].language, books[title_hash[hash][i]].year);
            }
        }
        if (t == 4)
        {
            char au[30];
            scanf("%s", au);
            int hash = hashing(au);
            //answers will be the books with tha same hash as the input hash
            //we counted the number of occurances of each hash with "authors" array
            for (int i = 0; i < authors[hash]; i++)
            {
                printf("%d %s %s %s %s %d\n", books[author_hash[hash][i]].id, books[author_hash[hash][i]].title, books[author_hash[hash][i]].genre, books[author_hash[hash][i]].author, books[author_hash[hash][i]].language, books[author_hash[hash][i]].year);
            }
        }
        if (t == 5)
        {
            char l[30];
            scanf("%s", l);
            int hash = hashing(l);
            //answers will be the books with tha same hash as the input hash
            //we counted the number of occurances of each hash with "languages" array
            for (int i = 0; i < languages[hash]; i++)
            {
                printf("%d %s %s %s %s %d\n", &books[language_hash[hash][i]].id, books[language_hash[hash][i]].title, books[language_hash[hash][i]].genre, books[language_hash[hash][i]].author, books[language_hash[hash][i]].language, &books[language_hash[hash][i]].year);
            }
        }
        if (t == 6)
        {
            char au[30], l[30];
            scanf("%s %s", au, l);
            int hash1 = hashing(au);
            int hash2 = hashing(l);
            //answers will be the books with tha same hash as the input hash and among them, has the same language
            //we counted the number of occurances of each hash with "authors" array then if the language is same,
            //it is a valid answer
            for (int i = 0; i < authors[hash1]; i++)
            {
                if (hashing(books[author_hash[hash1][i]].language) == hash2)
                {
                    printf("%d %s %s %s %s %d\n", books[author_hash[hash1][i]].id, books[author_hash[hash1][i]].title, books[author_hash[hash1][i]].genre, books[author_hash[hash1][i]].author, books[author_hash[hash1][i]].language, books[author_hash[hash1][i]].year);
                }
            }
        }
        if (t == 7)
        {
            char au[30], t[30];
            scanf("%s %s", au, t);
            int hash1 = hashing(au);
            int hash2 = hashing(t);
            //answers will be the books with tha same hash as the input hash and among them, has the same title
            //we counted the number of occurances of each hash with "authors" array then if the genre is same,
            //it is a valid answer
            for (int i = 0; i < authors[hash1]; i++)
            {
                if (hashing(books[author_hash[hash1][i]].title) == hash2)
                {
                    printf("%d %s %s %s %s %d\n", books[author_hash[hash1][i]].id, books[author_hash[hash1][i]].title, books[author_hash[hash1][i]].genre, books[author_hash[hash1][i]].author, books[author_hash[hash1][i]].language, books[author_hash[hash1][i]].year);
                }
            }
        }
        if (t == 8)
        {
            char au[30], g[30];
            scanf("%s %s", au, g);
            int hash1 = hashing(au);
            int hash2 = hashing(g);
            //answers will be the books with tha same hash as the input hash and among them, has the same genre
            //we counted the number of occurances of each hash with "authors" array then if the genre is same,
            //it is a valid answer
            for (int i = 0; i < authors[hash1]; i++)
            {
                if (hashing(books[author_hash[hash1][i]].genre) == hash2)
                {
                    printf("%d %s %s %s %s %d\n", books[author_hash[hash1][i]].id, books[author_hash[hash1][i]].title, books[author_hash[hash1][i]].genre, books[author_hash[hash1][i]].author, books[author_hash[hash1][i]].language, books[author_hash[hash1][i]].year);
                }
            }
        }
        if (t == 9)
        {
            char g[30], l[30];
            scanf("%s %s", g, l);
            int hash1 = hashing(g);
            int hash2 = hashing(l);
            //answers will be the books with tha same hash as the input hash and among them, has the same language
            //we counted the number of occurances of each hash with "genre" array then if the language is same,
            //it is a valid answer
            for (int i = 0; i < authors[hash1]; i++)
            {
                if (hashing(books[genre_hash[hash1][i]].language) == hash2)
                {
                    printf("%d %s %s %s %s %d\n", books[genre_hash[hash1][i]].id, books[genre_hash[hash1][i]].title, books[genre_hash[hash1][i]].genre, books[genre_hash[hash1][i]].author, books[genre_hash[hash1][i]].language, books[genre_hash[hash1][i]].year);
                }
            }
        }
    }
}