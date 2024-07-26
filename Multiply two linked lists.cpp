class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        // code here
        long long m = 1000000007, n1=0, n2=0;

          Node *temp = first;
          while(temp!=NULL){
              n1 = (n1*10)%m+temp->data;
              temp = temp->next;
          }
          temp = second;
          while(temp!=NULL){
              n2 = (n2*10)%m + temp->data;
              temp = temp->next;
          }

          return (n1*n2) % m;
    }
};
