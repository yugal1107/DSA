/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 ==NULL && list2==NULL){
            return NULL;
        }
        else if (list1 == NULL){
            return list2;
        }
        else if (list2 == NULL){
            return list1;
        }
        else {
            ListNode* ptr1=list1;
            ListNode* ptr2=list2;
            ListNode* temp_l = (ListNode*)malloc(sizeof(ListNode));
            ListNode* head = temp_l;
            if (ptr1 -> val <= ptr2 -> val){
                temp_l -> val = ptr1 -> val;
                ptr1 = ptr1 -> next; 
            }
            else{
                temp_l -> val = ptr2 -> val;
                ptr2 = ptr2 -> next;
            }
            while (ptr1 != NULL && ptr2 != NULL){
            

                if (ptr1 -> val <= ptr2 -> val){
                    temp_l -> next = (ListNode*)malloc(sizeof(ListNode));
                    temp_l = temp_l -> next;
                    temp_l -> val = ptr1 -> val;
                    ptr1 = ptr1 -> next;

                }
                else {
                    temp_l -> next = (ListNode*)malloc(sizeof(ListNode));
                    temp_l = temp_l -> next;
                    temp_l -> val = ptr2 -> val;
                    ptr2 = ptr2 -> next;

                }
            }

            if (ptr1 == NULL){
                temp_l -> next = ptr2;
            }
            else if (ptr2 == NULL) {
                temp_l -> next = ptr1;
            }
            return head;
        }
    }
};