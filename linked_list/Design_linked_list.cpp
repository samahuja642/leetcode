// Attempt # 1
// Simple Implementation of Linked List
// Here We have used vectors to Implement Linked List but we can do without them in a better way.
class MyLinkedList {
public:
    vector<int>v;
    MyLinkedList() {
        
    }
    // get function takes index as a argument and returns the value at that index.
    int get(int index) {
        if(index<0 || index>=v.size()){
            return -1;
        }
        return v[index];
    }
    // addAtHead takes val as a argument and adds value in the front of Linked List
    void addAtHead(int val) {
        v.insert(v.begin(),val);
    }
    // addAtTail takes val as a arg and adds value at the last of Linked List
    void addAtTail(int val) {
        v.push_back(val);
    }  
    void addAtIndex(int index, int val) {
        if(index<0 || index>v.size())return;
        else if(index==v.size()){
            v.push_back(val);
            return;
        }
        v.insert(v.begin()+index,val);
    }
    // deletes value at specific index in Linked List
    void deleteAtIndex(int index) {
        if(index<0 || index>v.size()-1){
            return;
        }
        v.erase(v.begin()+index);
    }
};
