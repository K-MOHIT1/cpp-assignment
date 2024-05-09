// class Solution {
// public:
//     ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
//         ListNode* headA=list1;
//         ListNode* headB=list2;
//         long long n=0;
//         ListNode* temp=list2;
//         while(temp->next!=NULL){
//             temp=temp->next;
//         }
//         ListNode* tailB=temp;
//         ListNode* chead;
//         ListNode* ctail;
//         temp=list1;
//         while(temp!=NULL){
//             if((n+1)==a) chead=temp;
//             if(n==b) ctail=temp;
//             n++;
//             temp=temp->next;
//         }
//         chead->next=headB;
//         tailB->next=ctail->next;
//         return  headA;
//     }
// };