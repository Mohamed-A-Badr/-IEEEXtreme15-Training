ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode *res = new ListNode();
      ListNode *temp = res;
      int carry = 0;
      while(l1 != nullptr || l2 != nullptr || carry){
        int sum = 0;
        if(l1 != nullptr){
          sum += l1->val;
          l1 = l1->next;
        }
        if(l2 != nullptr){
          sum += l2->val;
          l2 = l2->next;
        }
        sum += carry;
        carry = sum / 10;
        ListNode *node = new ListNode(sum % 10);
        temp->next = node;
        temp = temp->next;
      }
      return res->next;
    }
