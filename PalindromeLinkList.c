/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


bool isPalindrome(struct ListNode* head){
    char arr[100001] = {0};
    struct ListNode *current = head;
    int i = 0;
    while(1)
    {
        arr[i] = current->val;
        i++;
        current = current->next;
        if (current == NULL)
        {
            arr[i] = '\0';
            break;
        }
    }
    
    int l = 0;
    int r = i-1;
    while(1)
    {
        if(arr[l] != arr[r])
        {
            return false;
        }
        if(l >= r)
        {
            return true;
        }
        l++;
        r--;
    }
}