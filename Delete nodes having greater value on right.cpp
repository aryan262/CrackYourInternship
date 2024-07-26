class Solution
{
    public:
    Node *compute(Node *head)

{
        // your code goes here
        priority_queue<int> pq;
        
        return solve(head,pq);
    }
    Node* solve(Node *head,priority_queue<int> &pq)
    {
        if(head==nullptr)
            return NULL;
        head->next=solve(head->next,pq);
        pq.push(head->data);
        if(pq.top()>head->data)
        {
            Node *temp= head->next;
            delete head;
            return temp;
        }
        return head;
    
    }
    
};
