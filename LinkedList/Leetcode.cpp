
// class Solution {   //276
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode *temp = head;
//         int len = 0;
//         while(temp!=NULL){
//             len++;
//             temp = temp->next;
//         }
//         int idx = len/2;
//         ListNode *mid = head;
//         for(int i=0;i<=idx-1;i++){
//             mid = mid->next;
//         }
//         return mid;
//         // ListNode *sl = head;
//         // ListNode *fa = head;
//         // while(fa!=NULL && fa->next!=NULL){
//         //     sl = sl->next;
//         //     fa = fa->next->next;
//         // }
//         // return sl;
//     }
// };


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         bool flag = false; //no cycle
//         while(fast!=NULL && fast->next!=NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//             if(slow==fast) {
//                flag == true;  //has cycle
//                break;
//                 }
//             }
//             if(flag==false) return NULL;
//             else{
//                 ListNode* temp = head;
//                 while(slow!=temp){
//                     slow = slow->next;
//                     temp = temp->next;
//             }
//             return slow;
//         }
//     }
// };