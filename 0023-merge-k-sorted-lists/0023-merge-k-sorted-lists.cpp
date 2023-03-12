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
        ListNode* merge(ListNode* list1, ListNode* list2) {

      ListNode* temp=  new ListNode;
      ListNode* merged =  temp;

      while(list1!=NULL && list2!=NULL)
      {
          if(list1->val<list2->val)
          {
              temp->next = list1;
              list1 = list1->next;
          }
          else
          {
              temp->next = list2;
              list2 = list2->next;
          }

          temp = temp->next;
      }  

      while(list1!=NULL)
      {
              temp->next = list1;
              list1 = list1->next;
              temp= temp->next;
      }


            while(list2!=NULL)
      {
              temp->next = list2;
              list2 = list2->next;
              temp= temp->next;
      }

      return merged->next;
    }

    ListNode * mergesort(vector<ListNode*>&lists,int low,int high)
    {
        if(low==high)
         return lists[low]; 
         
         if(low+1==high)
          return  merge(lists[low],lists[high]);

         int mid = low + (high-low)/2;

         ListNode * left = mergesort(lists,low,mid);
         ListNode * right = mergesort(lists,mid+1,high);

        return merge(left,right); 
    } 
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) {
            return nullptr;
        }
       return mergesort(lists,0,lists.size()-1);
    }
};