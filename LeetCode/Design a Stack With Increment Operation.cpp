class CustomStack {
    int arr[1000];
    int top;
    int s;
public:
    CustomStack(int maxSize) {
    
        top=-1;
        s = maxSize;
    }
    
    void push(int x) {
        if(top==s-1){
            return;
        }
        else{

            arr[++top] = x;
        }
    }
    
    int pop() {
        if(top==-1){
            return -1;
        }
        else{
            return arr[top--];
        }
        
    }
    
    void increment(int k, int val) {
        if(top+1<=k){
            for(int i=0;i<=top;i++){
                arr[i]+=val;
            }
            return;
        }
        for(int i=0;i<k;i++){
                arr[i]+=val;
            }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
