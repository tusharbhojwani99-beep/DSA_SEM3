// 206 leetcode reverse linked list

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head)
//     {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         while(curr != NULL){
//             ListNode* nextNode = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = nextNode;
//         }
//         return prev;
//     }
// };



// 876 leetcode middle of the linked list

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* slow = head;
//         ListNode* fast = head;

//         while(fast != NULL && fast->next != NULL)
//         {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     }
// };


// 141 leetcode linked list cycle

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {

//         ListNode* slow = head;
//         ListNode* fast = head;

//         while(fast != NULL && fast->next != NULL)
//         {
//             slow = slow->next;           // move 1 step
//             fast = fast->next->next;     // move 2 steps

//             if(slow == fast)
//             {
//                 return true; // cycle found
//             }
//         }

//         return false; // no cycle
//     }
// };