// Link - https://www.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1
// Delete nodes having greater value on right


The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    private:
    Node* reverseList(Node* head) {
        Node* prev = NULL;
        Node* current = head;
        Node* next = NULL;
        
        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        
        return prev;
    }
    
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        if (head == NULL || head->next == NULL) {
            return head;
        }
        
        head = reverseList(head);
        
        Node* current = head;
        Node* maxNode = head;
        
        while (current != NULL && current->next != NULL) {
            if (current->next->data < maxNode->data) {
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
            }
            else {
                current = current->next;
                maxNode = current;
            }
        }
        
        head = reverseList(head);
        
        return head;
    }
    
};