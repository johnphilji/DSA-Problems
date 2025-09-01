class MyCircularQueue {
public:
    int arr[1000];
    int f, r, k;

    MyCircularQueue(int size) {
        k = size;
        f = -1;
        r = -1;
    }
    
    bool enQueue(int value) {
        if (f == (r+1)%k) return false;
        if (f==-1 && r==-1) f = 0;
        r = (r + 1) % k;
        arr[r] = value;
        return true;
    }
    
    bool deQueue() {
        if (f==-1 && r==-1) return false;
        if (f == r) {
            f = -1;
            r = -1;
        } else {
            f = (f+1) % k;
        }
        return true;
    }
    
    int Front() {
        if (f==-1 && r==-1) return -1;
        return arr[f];
    }
    
    int Rear() {
        if (f==-1 && r==-1) return -1;
        return arr[r];
    }
    
    bool isEmpty() {
        return (f == -1 && r == -1);
    }
    
    bool isFull() {
        return ((r+1) % k==f);
    }
};



/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */