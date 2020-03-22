struct node{
int data;
node * next;
};
void push(struct node **head_ref, int data)
{
    struct node *node;
    node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->next = (*head_ref);
    (*head_ref) = node;
}
