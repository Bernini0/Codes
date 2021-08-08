#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
struct info
{
    int count;
    char string[5];
};

int lexi(char string1[], char string2[])
{
    for (int i = 0;; i++)
    {
        if (string1[i] != string2[i])
        {
            return string1[i] < string2[i] ? -1 : 1;
        }

        if (string1[i] == 0)
        {
            return 0;
        }
    }
}
int strl(char x[])
{
    int i = 0;
    while (x[i] != 0)
    {
        i++;
    }
    return i;
}
void strcpy1(char (&dest)[5], char (&source)[5])
{
    for (int i = 0; i < 5; i++)
    {
        dest[i] = source[i];
    }
}
void merge(char arr[][5], int l, int m, int r)
{
    int length1 = m - l + 1;
    int length2 = r - m;

    // Create temp arrays
    char L[length1][5], R[length2][5];

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < length1; i++)
    {
        strcpy1(L[i], arr[l + i]);
    }
    for (int j = 0; j < length2; j++)
    {
        strcpy1(R[j], arr[m + 1 + j]);
    }

    // Merge the temp arrays back into arr[l..r]

    int i = 0, j = 0, k = l;

    while (i < length1 && j < length2)
    {
        if (lexi(L[i], R[j]) <= 0)
        {
            strcpy1(arr[k], L[i]);
            i++;
        }
        else
        {
            strcpy1(arr[k], R[j]);
            j++;
        }
        k++;
    }

    // Copy the remaining elements of
    // L[], if there are any
    while (i < length1)
    {
        strcpy1(arr[k], L[i]);
        i++;
        k++;
    }

    // Copy the remaining elements of
    // R[], if there are any
    while (j < length2)
    {
        strcpy1(arr[k], R[j]);
        j++;
        k++;
    }
}

// l is for left index and r is
// right index of the sub-array
// of arr to be sorted */
void mergeSort(char arr[][5], int l, int r)
{
    if (l >= r)
    {
        return; //returns recursively
    }
    int m = l + (r - l) / 2;
    //sorting the left side
    mergeSort(arr, l, m);
    //sorting the right side
    mergeSort(arr, m + 1, r);
    //then marging both to get the original array
    merge(arr, l, m, r);
}
int main()
{
    char str[1000000 + 1];
    scanf("%s", str);
    int n = strl(str) - 3;
    // printf("%d\n",n);
    // if no substring of length four can be generated then there is no ans
    if (n <= 0)
    {
        printf("NO SUCH STRING\n");
        return 0;
    }
    char substrs[n][5];
    //Generating substrings
    for (int i = 0; i < n; i++)
    {

        substrs[i][0] = str[i];
        substrs[i][1] = str[i + 1];
        substrs[i][2] = str[i + 2];
        substrs[i][3] = str[i + 3];
        substrs[i][4] = 0;
    }
    // int n = strl(str) - 3;

    info arr[n];//stores count of each different substrings
    //sorting the substrings in lexicographical order
    mergeSort(substrs, 0, n - 1);
    int mx = 1;//Count of the most frequent substring
    int p = 0;
    for (int i = 0; i < n - 1;)
    {
        arr[p].count = 1;
        int cnt = 1;
        strcpy1(arr[p].string, substrs[i]);
        if (i == n - 2 && lexi(substrs[i], substrs[i + 1]) != 0)
        {
            strcpy1(arr[p + 1].string, substrs[i + 1]);
            arr[p + 1].count = 1;
            p++;
        }
        if (lexi(substrs[i], substrs[i + 1]) == 0)
        {
            while (lexi(substrs[i], substrs[i + 1]) == 0 && i < n - 1)
            {
                arr[p].count++;
                cnt++;
                i++;
            }
            if (cnt > mx)
            {
                mx = cnt;
            }
            p++;
        }
        else
        {
            i++;
            p++;
        }
    }
    // printf("%d\n",mx);
    for (int i = 0; i < p; i++)
    {
        if (arr[i].count == mx)
        {
            printf("%s\n", arr[i].string);
        }
    }
}