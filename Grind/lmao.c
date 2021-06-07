void swapPointer(LinkedListNode** a, LinkedListNode** b)
{
    node* t = *a;
    *a = *b;
    *b = t;
}
 

int getSize(struct LinkedListNode* node)
{
    int size = 0;
    while (node != NULL) {
        node = node->next;
        size++;
    }
    return size;
}

node* addSameSize(LinkedListNode* head1,
                  LinkedListNode* head2, int* carry)
{

    if (head1 == NULL)
        return NULL;
 
    int sum;

    LinkedListNode* res = (LinkedListNode*)malloc(sizeof(LinkedListNode));
 

    res->next
        = addSameSize(head1->next,
                      head2->next, carry);
 

    sum = head1->data + head2->data + *carry;
    *carry = sum / 10;
    sum = sum % 10;

    res->data = sum;
 
    return res;

void addCarryToRemaining(LinkedListNode* head1,
                         LinkedListNode* cur, int* carry,
                         LinkedListNode** res)
{
    int sum;

    if (head1 != cur) {
        addCarryToRemaining(head1->next,
                            cur, carry,
                            res);
 
        sum = head1->data + *carry;
        *carry = sum / 10;
        sum %= 10;
 
        push(res, sum);
    }
}
 

void addList(LinkedListLinkedListNode* head1,
             LinkedListNode* head2)
{
    LinkedListNode* cur;
 
    LinkedListNode* res = NULL;

    if (head1 == NULL) {
        *res = head2;
        return;
    }
 

    else if (head2 == NULL)
    {
        *res = head1;
        return;
    }
 
    int size1 = getSize(head1);
    int size2 = getSize(head2);
 
    int carry = 0;
 

    if (size1 == size2)
        *res = addSameSize(head1, head2, &carry);
 
    else {
        int diff = abs(size1 - size2);

        if (size1 < size2)
            swapPointer(&head1, &head2);
 

        for (cur = head1; diff--; cur = cur->next)
            ;
 
        *res = addSameSize(cur,
                              head2, &carry);
 
     
        addCarryToRemaining(head1,
                            cur, &carry, res);
    }
 
    if (carry)
        push(res, carry);
}