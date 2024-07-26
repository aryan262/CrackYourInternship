class Solution
{
    public:
    Node* segregate(Node *head) {
        
        // Add code here
        Node* zeros = new Node(-1);
        Node* zp = zeros;
        Node* ones = new Node(-1);
        Node* op = ones;
        Node* twos = new Node(-1);
        Node* tp = twos;
        
        Node* temp = head;
        
        while(temp){
            
            if(temp->data == 0){
                zp->next = temp;
                zp = zp->next;
            }
            else if(temp->data == 1){
                op->next = temp;
                op = op->next;
            }
            else{
                tp->next = temp;
                tp = tp->next;
            }
            
            temp = temp->next;
            
        }
        
        zp->next = ones->next ? ones->next : twos->next;
        op->next = twos->next;
        tp->next = NULL;
        
        head = zeros->next;
        
        delete zeros;
        delete ones;
        delete twos;
        
        return head;
        
    }
};
