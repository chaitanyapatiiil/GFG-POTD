class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
       
        if(x == 1) {
            Node *temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        
        Node *tempHead = head;
        for(int pos=1;pos<x;pos++) {
            tempHead = tempHead->next;
        }  
     
        Node *temp = tempHead;
    
        tempHead->prev->next = temp->next;
        if(temp->next != nullptr) {
            temp->next->prev = temp->prev;
        }
      
        delete temp;
        return head;
    }
};
