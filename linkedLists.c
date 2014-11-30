/*************************************
Linked Lists
*************************************/ 

/*************************************
Typedef for all variations
*************************************/

//Link1
typedef struct{
    int value;
    struct Link *next;
} Link;
//LList1
typedef struct{
    int size;
    Link *head;
}LList1;
//LList2
typedef struct{
    int size;
    Link *head;
    Link *tail;
}LList2;
//LList3
typedef struct{
    int size;
    Link *head;
}LList3;
//LList4
typedef struct{
    int size;
    Link *tail;
}LList4;


/*************************************
Main Operations - Variation 1 
*************************************/

void prepend(Link *l, LList1 *ll); //Prepend a link
{
    l->next = ll->head;
    ll->head = l;
    ll->size++;
}

void append(Link *l, LList1 *ll); //Append a link iteratively
{
    Link lastLink = ll->head;
    while(lastLink->next != NULL)
    {
        lastLink = lastLink->next;
    }
    lastLink->next = l;
    ll->size++;
}

void appendRecursive(Link *l, LList1 *ll); //Append a link iteratively

Link *removeFront(LList1 *ll); //Remove front and return link
{
    Link *link = NULL;
    if(ll!= NULL)
    {
        link = ll->head;
        if (link != NULL)
        {
            ll->head = link->next;
            ll->size--;
        }
    }
    return (link);
}
Link *removeEnd(LList1 *ll); //Remove last and return link
{
    Link *link1 = NULL, *link2 = NULL, *resultLink = NULL;
    if(ll != NULL)
    {
        link1 = ll->head;
        if(link1 != NULL)
        {
            link2 = link1->next;
            if (link2 != NULL)
            {
                while(link2->next != NULL)
                {
                    link1 = link2;
                    link2 = link1->next;
                }
                link1->next = NULL;
                resultLink = link2;
            } else
            {
                resultLink = link1;
            }
        }
    }
    return (resultLink);
}

int count(Link *l); //Count links in a list
{
    if (l->next != NULL)
    {
        return(count(l->next)+1);
    }
    return (0);
}







