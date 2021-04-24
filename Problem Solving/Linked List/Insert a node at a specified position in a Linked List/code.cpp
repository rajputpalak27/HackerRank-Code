

// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
SinglyLinkedListNode *new_node=new SinglyLinkedListNode(data);
SinglyLinkedListNode *temp;
temp=head;
int count=0;
while(count<position-1){
    temp=temp->next;
    count=count+1;
    }
    new_node->next=temp->next;
    temp->next=new_node;

return head;
}

