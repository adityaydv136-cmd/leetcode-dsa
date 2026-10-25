
class Solution {
public:


void reverse(ListNode* &head,ListNode* curr,ListNode* prev){

    //base case 
    if(curr==NULL){
        head=prev;
        return;
    }

    ListNode* forward=curr->next;
    reverse(head,forward,curr);
    curr->next=prev;
}

    ListNode* reverseList(ListNode* head) {

            ListNode* prev=NULL;
            ListNode* curr=head;
             reverse(head,curr,prev);

             /*
            while(curr!=NULL){
               ListNode* forward = curr->next;
                curr->next=prev;
                prev=curr;
                curr=forward;


            }

            return prev;


        */
        return head;
    }
};