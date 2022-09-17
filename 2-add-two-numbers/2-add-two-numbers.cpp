class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = nullptr;
        ListNode* tmp = nullptr;
        int carry=0;
        while(l1!=nullptr && l2!=nullptr){
            int sum = l1->val + l2->val + carry;
            ListNode* nn = new ListNode();
            nn->val = sum%10;
            if(l3==nullptr){
                l3 = nn;
                tmp = l3;
            }
            else{
                l3->next = nn;
                l3 = l3->next;
            }
            carry = sum/10;
            l1 = l1->next;
            l2 = l2->next;
        }
        if(l1==nullptr && l2!=nullptr){
            while(l2!=nullptr){
                int sum = l2->val + carry;
                ListNode* nn = new ListNode(sum%10);
                if(l3==nullptr){
                    l3 = nn;
                    tmp = l3;
                }
                else{
                    l3->next = nn;
                    l3 = l3->next;
                }
                carry = sum/10;
                l2 = l2->next;                
            }
        }
        if(l1!=nullptr && l2==nullptr){
            while(l1!=nullptr){
                int sum = l1->val + carry;
                ListNode* nn = new ListNode(sum%10);
                if(l3==nullptr){
                    l3 = nn;
                    tmp = l3;
                }
                else{
                    l3->next = nn;
                    l3 = l3->next;
                }
                carry = sum/10;
                l1 = l1->next;             
            }
        }
        if(carry){
            l3->next = new ListNode(carry);
        }
        return tmp;
    }
};