// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         int carry=0;
//         ListNode* temp1=l1;
//         ListNode* temp2=l2;
//         ListNode* c=new ListNode(100);
//         ListNode* tempc=c;
//         while(temp1 && temp2){
//             int c=temp1->val+temp2->val+carry;
//             if(c>=10){
//                 ListNode* no=new ListNode(c-10);
//                 carry=1;
//                 tempc->next=no;
//             }
//             else{
//                 ListNode* no=new ListNode(c);
//                 carry=0;
//                 tempc->next=no;
//             }
//             temp1=temp1->next;
//             temp2=temp2->next;
//             tempc=tempc->next;
//         }
//         if(temp1==NULL){
//             while(temp2){
//             int c=temp2->val+carry;
//             if(c>=10){
//                 ListNode* no=new ListNode(c-10);
//                 carry=1;
//                 tempc->next=no;
//             }
//             else{
//                 ListNode* no=new ListNode(c);
//                 carry=0;
//                 tempc->next=no;
//                 tempc=tempc->next;
//                 temp2=temp2->next;
//                 if(temp2){
//                     tempc->next=temp2;
//                 }
//                 break;
//             }
//             temp2=temp2->next;
//             tempc=tempc->next;
//             }
//         }
//         if(temp2==NULL){
//             while(temp1){
//             int c=temp1->val+carry;
//             if(c>=10){
//                 ListNode* no=new ListNode(c-10);
//                 carry=1;
//                 tempc->next=no;
//             }
//             else{
//                 ListNode* no=new ListNode(c);
//                 carry=0;
//                 tempc->next=no;
//                 tempc=tempc->next;
//                 temp1=temp1->next;
//                 if(temp1){
//                     tempc->next=temp1;
//                 }
//                 break;
//             }
//             temp1=temp1->next;
//             tempc=tempc->next;
//             }
//         }
//         if(carry==1){
//             ListNode* no= new ListNode(1);
//             tempc->next=no;
//         }
//         return c->next;
//     }
// };