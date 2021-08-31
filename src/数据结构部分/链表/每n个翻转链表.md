1. 
7 3
1 2 3 4 5 6 7
3 2 1 6 5 4 7
7 4
4 3 2 1 5 6 7

```c++
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x): val(x),next(NULL){}
    
};
ListNode *reversePart(ListNode *head)
{
    ListNode *pre = NULL;
    ListNode *cur = head; ;
    ListNode *temp;
    
    while(cur)
    {
        temp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = temp;
    }
    return pre;
}
ListNode *reverse(ListNode* head,int k)
{
    ListNode *unreversed = NULL;
    ListNode *reversing = NULL;
    ListNode *reversingTail = NULL;
    ListNode *reversed = NULL;
    ListNode * ans = NULL;
    ListNode *nowTail = NULL;
    
    unreversed = head;
    
    while(unreversed)
    {
        reversing = unreversed;
        reversingTail = NULL;
        
        int i =0;
        for(;i < k;i++)
        {
            if(!unreversed)
                break;
            else
               reversingTail = unreversed;
            unreversed = unreversed->next;
        }
        if(i == k)
        {
            // reversing -> ... -> reversingTail -> null
            ListNode *nowTail = reversing;
            reversingTail->next = NULL;
            ListNode *nowHead = reversePart(reversing);

            if(!reversed)
                ans = nowHead;
            else
                reversed->next = nowHead;
            reversed = nowTail;
            nowTail->next = unreversed;
        }
    }
    return ans; 
}


int main() {
    
    //int a;
    //cin >> a;
    cout << "Hello World!" << endl;
}
```