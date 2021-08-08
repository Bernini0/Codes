#include <bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    node *next;
};
node *head;
void insert(int a){
    node *temp = new node();
    (*temp).val = a;
    node *temp1 = head;

    head = temp;
    (*temp).next = temp1;


}

void insertinn(int a, int l){
    node *temp = head;
    node *temp1 = new node();
    (*temp1).val = a;
    if(l==1){
        head = temp1;
        (*temp1).next = temp;
        return;
    }

    for(int i = 0; i < l-2; i++)
    {
        temp = (*temp).next;
        
    }
    (*temp1).next = temp;
    (*temp).next =  temp1;

}
void print(){
    node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", (*temp).val);
        temp = (*temp).next;
    }
    
}
int main()
{
    
    head = NULL;
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int c;
        scanf("%d", &c);
        insert(c);
    }
    int w , l;
    scanf("%d %d", &w, &l);
    if(l > n) l = n;
    insertinn(w,l);
    print();
    // printf("%d\n",head);
    
    
}