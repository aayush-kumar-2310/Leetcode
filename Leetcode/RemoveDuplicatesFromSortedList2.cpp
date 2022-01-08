#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* deleteDuplicates(ListNode* head){

    ListNode* slow = head;
    ListNode* fast = head;
    
    while(slow != NULL){

        if(head == NULL or head->next == NULL)
            return head;

        if((fast->next->next != NULL and  fast->val != fast->next->val and fast->next->val != fast->next->next->val) or (fast->val != fast->next->val and fast->next->next == NULL) ){
            fast = fast->next;
            slow->next = fast;
        }

        else
            fast = fast->next;
        
    }
    return head;
}

int main(){

}