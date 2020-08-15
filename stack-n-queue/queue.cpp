#include <iostream>   // std::cout
#include <string>     // std::string, std::stoi
#include <vector>
#include <cctype>

namespace Queue
{
    void enqueue(char* queue, int& tail, int val, int q_len)
    {
        queue[tail] = val;
        if (tail == q_len) {
            tail = 0;
        }
        else {
            tail++;
        }

    }

    void dequeue(char* queue, int& head, int q_len)
    {
        std::cout << queue[head] << " dequeued." << std::endl;
        if (head == q_len) {
            head = 0;
        }
        else {
            head++;
        }
    }

    void display_queue(char* queue, int& head, int& tail, int q_len)
    {
        if (head < tail) {
            for (int i = head; i < tail; i++) {
                std::cout << queue[i] << " ";
            }
        }
        else {
            for (int i = head; i < q_len; i++) {
                std::cout << queue[i] << " ";
            }
            for (int i = 0; i < tail; i++) {
                std::cout << queue[i] << " ";
            }
        }

        std::cout << std::endl;
    }
}


int main()
{
    std::string sequence = "EAS*Y*QUE***ST***IO*N***";
    char queue[100];
    int head = 0;
    int tail = 0;
    for (auto x : sequence) {
        if(x == '*'){
            Queue::dequeue(queue, head, 100);
        }
        else {
            Queue::enqueue(queue, tail, x, 100);
        }
    }
}