#include <string>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* next = curr->next;

            curr->next = prev;            struct ListNode {
                int val;
                ListNode* next;
                ListNode(int x) : val(x), next(nullptr) {}
            };

            prev = curr;
            curr = next;
        }

        return prev;
    }
};
