// class Solution {
// public:
//     ListNode* deleteMiddle(ListNode* head) {
//         ListNode* slow=head;
//         ListNode* fast=head;
//          if(fast==NULL || fast->next==NULL){
//             return NULL;
//         }
//         while(fast->next->next!=NULL && fast->next->next->next!=NULL){
//             fast=fast->next->next;
//             slow=slow->next;
//         }
//         slow->next=slow->next->next;
//         return head;
        
//     }
// };