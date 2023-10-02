struct ListNode {
     int val;
     ListNode *next;
    ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    void reorderList(ListNode* head) {

        
         int sz = 0 ;
         ListNode* curr = head;
         stack < ListNode* > nodes;

         while(curr != NULL){
              
              nodes.push(curr);
              sz++;
              curr = curr->next;

         }

         curr = head;

         for( int i = 0 ; i < sz/2 ; i++ ){
               
               ListNode* temp = curr->next;
               curr->next = nodes.top();
               nodes.pop();
               curr = curr->next;
               curr->next = temp;
               curr = temp;
         }
         curr->next = NULL;



        
        
    }
};