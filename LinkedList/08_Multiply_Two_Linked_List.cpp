// Link - https://www.geeksforgeeks.org/problems/multiply-two-linked-lists/1
// Multiply two linked lists


/* Linked list node structure
struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

/*The method multiplies
two  linked lists l1 and l2
and returns their product*/

/* Multiply contents of two linked lists */
class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        // code here
        const long long mod =  1000000007;
        
        long long num1 = 0;
        while (first != NULL) {
            num1 = (num1 * 10 + first->data) % mod;
            first = first->next;
        }
        
        long long num2 = 0;
        while (second != NULL) {
            num2 = (num2 * 10 + second->data) % mod;
            second = second->next;
        }
        
        return (num1 * num2) % mod;
    }
};