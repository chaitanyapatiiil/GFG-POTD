class Solution
{
    public:
    
   void sort(Node **head)
    {
         // Code here
         Node *head1=new Node(0),*head2=new Node(0);
         Node *temp1=head1,*temp2=head2,*temp=*head;
         bool indication=true;
         while(temp){
             if(indication){
                 temp1->next=temp;
                 temp1=temp1->next;
             }
             else{
                 temp2->next=temp;
                 temp2=temp2->next;
             }
             temp=temp->next;
             indication=!indication;
         }
         temp1->next=NULL;
         temp2->next=NULL;
         Node *curr=head2,*prev=NULL,*nxt=head2->next;
         while(curr){
             nxt=curr->next;
             curr->next=prev;
             prev=curr;
             curr=nxt;
         }
         temp=prev;
         while(prev){
             if(prev->next==head2){
                 prev->next=NULL;
             }
             prev=prev->next;
         }
         Node *ans = new Node(0);
         head2=ans;
         head1=head1->next;
         while(head1 and temp){
             if(head1->data<=temp->data){
                 ans->next=head1;
                 head1=head1->next;
             }
             else{
                 ans->next=temp;
                 temp=temp->next;
             }
             ans=ans->next;
         }
         while(head1){
             ans->next=head1;
             head1=head1->next;
             ans=ans->next;
         }
         while(temp){
             ans->next=temp;
             temp=temp->next;
             ans=ans->next;
         }
         *head=head2->next;
    }

};
