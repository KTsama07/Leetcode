class MinStack {
private: 
    struct Node {
    int val;
    int minSofar;
    Node* next;
    Node(int x, int mn ) : val(x), minSofar(mn) ,next(nullptr) {} 
    };
    Node* topNode = nullptr;
public:
    MinStack() {
    }
    
    void push(int value) {
        int mn;
        if(topNode == nullptr) mn = value;
        else 
            mn = min(value, topNode->minSofar);
        Node* temp = new Node(value,mn);
        temp->next = topNode;
        topNode = temp;
    }
    
    void pop() {
        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
    }
    
    int top() {
        if(topNode == nullptr) return -1;
        return topNode->val;
    }
    
    int getMin() {
        if(topNode == nullptr) return -1;
        return topNode->minSofar;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->topNode();
 * int param_4 = obj->getMin();
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna