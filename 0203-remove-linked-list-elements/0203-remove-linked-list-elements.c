/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* th=head,*prev=NULL;
    int a[100000],b[100000];
    int i=0,k=0;
    while(th!=NULL){
        a[i]=th->val;
        th=th->next;
        i++;
    }
    for(int j=0;j<i;j++){
        if(a[j]!=val){
            b[k]=a[j];
            k++;
        }
    }
    if(k==0){
        return NULL;
    }
    for(int i=0;i<k;i++){
        printf("%d",b[i]);
    }
    th=head;
    i=0;
    
    while(k){
        th->val=b[i];
        prev=th;
        th=th->next;
        i++;
        k--;
    }
    prev->next=NULL;
    return head;
    
}