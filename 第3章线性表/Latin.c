
# include <stdio.h>
# include <stdlib.h>


typedef struct node
{
    int data;
    struct node * next; }sqlist, *linklist;

linklist CreateLinkList(int CardNumber)
{
    linklist head = NULL;
    linklist s, r;
    int i;

    r = head;

    for(i=1; i <= CardNumber; i++)
    {
        s = (linklist)malloc(sizeof(sqlist));
        s->data = 0;

        if(head == NULL)
            head = s;
        else
            r->next = s;

        r = s;}

    r->next = head;
    r=head;
    for (int i = 1; i <=CardNumber; ++i)
    {
        r->data=i;
        r=r->next;
    }

    return head;
}

// 发牌顺序计算
linklist Latin(linklist head)
{
    head=head->next;
    return head;
}
// 销毁工作
void DestoryList(linklist list,int n)
{
    linklist q;
    for (int i=0; i < n; ++i)
    {
        q = list->next;
        free(list);
        list = q; }

}
void printlist(linklist head,int d)
{
    for (int i=0; i < d; i++)
    {
        printf("%d   ", head->data);
        head= head->next;
    }
    printf("\n");
}

int main()
{
    linklist p;
    int dim;
    printf("%s\n","please input the dimension:" );
    scanf("%d",&dim);
    printf("%s\n","please waiting..." );
    p = CreateLinkList(dim);
    printlist(p,dim);

    for (int i = 0; i <dim-1; ++i)
    {
        p=Latin(p);
        printlist(p,dim);
    }

    DestoryList(p,dim);

    return 0;}
