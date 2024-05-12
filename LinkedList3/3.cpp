// class Solution {
// public:
//     ListNode* oddEvenList(ListNode* head) {
//         //M-1
//         ListNode* a=new ListNode(100);
//         ListNode* b=new ListNode(100);
//         ListNode* tempa=a;
//         ListNode* tempb=b;
//         ListNode* temp=head;
//         int n=1;
//         while(temp){
//             if(n%2!=0){
//                 tempa->next=temp;
//                 tempa=tempa->next;
//             }
//             else if(n%2==0){
//                 tempb->next=temp;
//                 tempb=tempb->next;
//             }
//             temp=temp->next;
//             n++;    
//         }
//         tempb->next=NULL;
//         tempa->next=b->next;
//         return a->next;
//     }
// };