class LRUCache {
public:
    
    class node{
        public:
            int key, value;
        node *prev, *next;
        
        node(){
            key = value = -1;
            prev = next = NULL;
        }
        
        node(int k, int val){
            key = k;
            value = val;
            prev = next = NULL;
        }
    };
    
    node *head = new node(-1, -1);
    node *tail = new node(-1, -1);
    
    int cap;
    unordered_map<int, node *> m;
    
    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    void addnode(node *newnode){
        node *temp = head->next;
        
        newnode->next = temp;
        newnode->prev = head;
        
        head->next = newnode;
        temp->prev = newnode;
    }
    
    void delnode(node *dnode){
        // delnode->next-prev = delnode->prev;
        // delnode->prev->next = delnode->next;
        
        node *prevnode = dnode->prev;
        node *nextnode = dnode->next;
        
        prevnode->next = nextnode;
        nextnode->prev = prevnode;
    }
    
    int get(int key) {
        if(m.find(key) != m.end()){
            
            node *resnode = m[key];
            int res = resnode->value;
            
            m.erase(key);
            delnode(resnode);
            
            addnode(resnode);
            m[key] = head->next;
            
            return res;
        }
        
        return -1;
    }
    
    void put(int key, int value) {
        if(m.find(key) != m.end()){
            node * existingNode = m[key];
            m.erase(key);
            delnode(existingNode);
        }
        
        if(m.size() == cap){
            m.erase(tail->prev->key);
            delnode(tail->prev);
        }
        
        addnode(new node(key, value));
        m[key] = head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */