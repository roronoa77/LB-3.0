/*
    link: https://practice.geeksforgeeks.org/problems/circular-linked-list/1#
*/


// ----------------------------------------------------------------------------------------------------------------------- //
bool isCircular(Node* head)
{
   // Your code here
    if (head->next == NULL) return 0;

    Node* curr = head->next;

    while (curr->next && curr->next != head) curr = curr->next;

    return curr->next == head;
}

struct Node* sortedIntersect(
    struct Node* a,
    struct Node* b)
{
    /* base case */
    if (a == NULL || b == NULL)
        return NULL;

    /* If both lists are non-empty */

    /* advance the smaller list and call recursively */
    if (a->data < b->data)
        return sortedIntersect(a->next, b);

    if (a->data > b->data)
        return sortedIntersect(a, b->next);

    // Below lines are executed only
    // when a->data == b->data
    struct Node* temp
        = (struct Node*)malloc(
            sizeof(struct Node));
    temp->data = a->data;

    /* advance both lists and call recursively */
    temp->next = sortedIntersect(a->next, b->next);
    return temp;
}struct Node* sortedIntersect(
    struct Node* a,
    struct Node* b)
{
    /* base case */
    if (a == NULL || b == NULL)
        return NULL;

    /* If both lists are non-empty */

    /* advance the smaller list and call recursively */
    if (a->data < b->data)
        return sortedIntersect(a->next, b);

    if (a->data > b->data)
        return sortedIntersect(a, b->next);

    // Below lines are executed only
    // when a->data == b->data
    struct Node* temp
        = (struct Node*)malloc(
            sizeof(struct Node));
    temp->data = a->data;

    /* advance both lists and call recursively */
    temp->next = sortedIntersect(a->next, b->next);
    return temp;
}struct Node* sortedIntersect(
    struct Node* a,
    struct Node* b)
{
    /* base case */
    if (a == NULL || b == NULL)
        return NULL;

    /* If both lists are non-empty */

    /* advance the smaller list and call recursively */
    if (a->data < b->data)
        return sortedIntersect(a->next, b);

    if (a->data > b->data)
        return sortedIntersect(a, b->next);

    // Below lines are executed only
    // when a->data == b->data
    struct Node* temp
        = (struct Node*)malloc(
            sizeof(struct Node));
    temp->data = a->data;

    /* advance both lists and call recursively */
    temp->next = sortedIntersect(a->next, b->next);
    return temp;
}struct Node* sortedIntersect(
    struct Node* a,
    struct Node* b)
{
    /* base case */
    if (a == NULL || b == NULL)
        return NULL;

    /* If both lists are non-empty */

    /* advance the smaller list and call recursively */
    if (a->data < b->data)
        return sortedIntersect(a->next, b);

    if (a->data > b->data)
        return sortedIntersect(a, b->next);

    // Below lines are executed only
    // when a->data == b->data
    struct Node* temp
        = (struct Node*)malloc(
            sizeof(struct Node));
    temp->data = a->data;

    /* advance both lists and call recursively */
    temp->next = sortedIntersect(a->next, b->next);
    return temp;
}