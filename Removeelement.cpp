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
    ListNode* removeElements(ListNode* head, int val) {
        //create new node pointing to head
        ListNode* dump = new ListNode(-1);
        dump->next = head;
        ListNode* curr = dump;

        while(curr->next != nullptr){
            if(curr->next->val == val){
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete temp; //Free the memory 
            }
            else{
                curr = curr->next;

            }
        }
        ListNode* Newhead = dump->next;
        delete dump; //clean the memory 
        return Newhead; //Return ans
        
    }
};