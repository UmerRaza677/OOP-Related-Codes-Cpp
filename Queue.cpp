//Creating a queue
#include<iostream>
#include<string>
using namespace std;

#define SIZE 5

class Queue{
    private:
    int q[SIZE];
    int in, out;
    bool is_empty, is_full;

    //circular increement
    int inc(int val);

    public:
    Queue();
    void enqueue(int val); //Method to enter value in queue
    int dequeue();         //Methode to take value from queue

    void print_queue();
};

Queue::Queue(){
    for(int i=0; i<SIZE; i++){
        q[i] = 0;
    }
    in = out = 0;
    is_full = false;
    is_empty = true;
}

int Queue::inc(int val){
    if(val+1 == SIZE)
        val = 0;
    else
        val += 1;
    return val;
}

void Queue::enqueue(int val){
    //check if queue is full
    if(is_full){
        throw "Queue is full, cannot enqueue......";
    }

    q[in] = val;//Set val, where 'in' is
    in = inc(in); //setting 'in' to next index in queue

    //check if q is full or not
    if(in == out)
        is_full = true;

    //if queue is full, then it is definetly empty
    is_empty = false;
}

int Queue::dequeue(){
    //check if queue is empty 
    if(is_empty){
        throw "Queue is empty, cannot dequeue.......";
    }

    int ret = q[out]; //Get val from, where 'out' is
    q[out] = 0; //after getting value, we put zero just for easy understanding
    out = inc(out); //setting 'out' to next index in queue

    //check if queue is empty 
    if(in == out)
        is_empty = true;

    //if queue is empty, then it is definetly full
    is_full = false;

    return ret;
}

void Queue::print_queue(){
    cout << "[\t";
    for(int i=0; i<SIZE; i++)
        cout << q[i] << "\t";
    cout << "\t]" << endl;

    cout << " \t";
    for(int i=0; i<SIZE; i++)
        cout << i << "\t";
    cout << " " << endl;

    cout << " ";
    for(int i=0; i<=in; i++)
        cout << "\t";
    cout << "^in" << endl;

    cout << " ";
    for(int i=0; i<=out; i++)
        cout << "\t";
    cout << "^out" << endl;
}

int main(){
    Queue que;

    que.print_queue();

    que.enqueue(11); que.print_queue();
    que.enqueue(22); que.print_queue();
    que.enqueue(33); que.print_queue();
    que.enqueue(44); que.print_queue();
    que.enqueue(55); que.print_queue();

    try{
        //Dequeue 
        cout << "\nNow dequeue\n";
        cout << "Got val: " << que.dequeue() << endl; que.print_queue();
        cout << "Got val: " << que.dequeue() << endl; que.print_queue();
        cout << "Got val: " << que.dequeue() << endl; que.print_queue();
        cout << "Got val: " << que.dequeue() << endl; que.print_queue();
        cout << "Got val: " << que.dequeue() << endl; que.print_queue();
        cout << "Got val: " << que.dequeue() ; //last call to check queue is empty
    }
    catch(const char* msg){
        cout << msg << endl;
    }

return 0;
}