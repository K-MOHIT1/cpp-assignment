// class Solution {
// public:
//     ListNode* swapNodes(ListNode* head, int k) {
//         int c=1;
//         ListNode* cfirst=head;
//         ListNode* clast=head;
//         ListNode* fast=head;
//         while(c!=k){
//             cfirst=cfirst->next;
//             c++;
//         }
//         for(int i=1;i<=k;i++){
//             fast=fast->next;
//         }
//         while(fast!=NULL){
//             fast=fast->next;
//             clast=clast->next;
//         }
//         swap(cfirst->val,clast->val);
//         return head;

//     }
// };