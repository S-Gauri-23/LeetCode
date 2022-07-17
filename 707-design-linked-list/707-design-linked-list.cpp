class Node{
    public:
        int data;
        Node* next;
    
        Node(){
            data = 0;
            next = NULL;
        }
    
        Node(int x){
            data = x;
            next = NULL;
        }
};
class MyLinkedList {
public:
    Node* head;
    
    MyLinkedList() {
        head = NULL;
    }
    
    int count(){
        int count = 0;
        Node *p = head;
        while(p!=NULL){
            count++;
            p = p->next;
        }
        return count;
    }
    
    //get value of the node at the given index
    int get(int index) {
        int n = count();
        if(index<0 || index>n-1)
            return -1;
        if(index == 0){
            return head->data;
        }
        else{
                Node *p = head;
                for(int i=0; i<index; i++){
                    p=p->next;
                }
                return p->data;
            }
        
    }
    
    void addAtHead(int data) {
        Node *p = new Node(data);
        p->next = head;
        head = p;   
    }
    
    void addAtTail(int data) {
        
        if(head == NULL){
            addAtHead(data);
        }
        else
        {
            Node *p = head;
            Node *q = new Node(data);
        
            while(p->next!=NULL){
                p = p->next;
            }
            p->next = q;
        }
    }
    
    void addAtIndex(int index, int data) {
        int n = count();
        if(index<0 || index>n){
             return;
        }
        
        if(index == 0){
            addAtHead(data);
        }
        
        else
        {
            Node *q = new Node(data);
            Node *p = head;
            
            for(int i=0; i<index-1; i++){
                p = p->next;
            }
            q->next = p->next;
            p->next = q;
        }
        
    }
    
    void deleteAtIndex(int index) {
        int n = count();
        Node *p = head;
        Node *q = head;
        
        if(index < 0 || index > n-1){
            return;
        }
        
        if(index == 0){
            head = p->next;
            p->next = NULL;
        }
        
        else{
            Node *q = NULL;
            
            for(int i=0; i<index ;i++){
                q = p;
                p = p->next;
            }
            q->next = p->next;
            p->next = NULL;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(data);
 * obj->addAtTail(data);
 * obj->addAtIndex(index,data);
 * obj->deleteAtIndex(index);
 */