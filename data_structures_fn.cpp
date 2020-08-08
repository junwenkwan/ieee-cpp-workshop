#include "Header.h"


// Stack Functions
void my_push(char* stack, int& top, char val) {
    top++;
    stack[top] = val;
}

void pop(int* stack, int& top) {
    if (top < 0) {
        cout << "underflow";
    }
    else {

        cout << "Element Popped: " << stack[top] << endl;
        top--;

    }

}

void display_stack(char* stack, int&top) {
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";

    }
    cout << endl;
}

// Queue Functions
void enqueue(int* queue, int& tail, int val, int q_len) {
    queue[tail] = val;
    if (tail == q_len) {
        tail = 0;
    }
    else {
        tail++;
    }

}

void dequeue(int* queue, int& head, int q_len) {
    cout << queue[head] << " dequeued." << endl;
    if (head == q_len) {
        head = 0;
    }
    else {
        head++;
    }
}

void display_queue(int* queue, int& head, int& tail, int q_len) {
    if (head < tail) {
        for (int i = head; i < tail; i++) {
            cout << queue[i] << " ";
        }
    }
    else {
        for (int i = head; i < q_len; i++) {
            cout << queue[i] << " ";
        }
        for (int i = 0; i < tail; i++) {
            cout << queue[i] << " ";
        }
    }

    cout << endl;
}





