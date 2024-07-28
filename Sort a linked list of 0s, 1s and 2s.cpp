class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
   Node* segregate(Node *head) {
        
        if(head == NULL || head->next == NULL) return head;
        Node* temp = head;
        int zeroCount = 0;
        int oneCount=0;
        int twoCount=0;
        while(temp != NULL){
            if(temp->data==0) zeroCount++;
            if(temp->data==1) oneCount++;
            if(temp->data==2) twoCount++;
            temp=temp->next;
        }
        
        Node* t = head;
        while(t !=NULL && zeroCount>0){
            t->data=0;
            zeroCount--;
            t=t->next;
        }
        while(t != NULL && oneCount>0){
            t->data=1;
            oneCount--;
            t=t->next;
        }
        while(t != NULL && twoCount>0){
            t->data=2;
            twoCount--;
            t=t->next;
        }
        return head;
        
    }
};
