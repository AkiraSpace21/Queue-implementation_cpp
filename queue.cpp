#include <iostream>
using namespace std;

#define MAX 5

class Queue {
    int frontIdx, backIdx;
    int data[MAX];

public:
    Queue() {
        frontIdx = -1;
        backIdx = -1;
    }

    void enqueue(int element) {
        if (backIdx == MAX - 1) {
            cout << "Queue Overflow" << endl;
        } else {
            if (frontIdx == -1) 
                frontIdx = 0;
            backIdx++;
            data[backIdx] = element;
            cout << element << " inserted into queue" << endl;
        }
    }

    void dequeue() {
        if (frontIdx == -1 || frontIdx > backIdx) {
            cout << "Queue Underflow" << endl;
        } else {
            cout << data[frontIdx] << " removed from queue" << endl;
            frontIdx++;
        }
    }

    void display() {
        if (frontIdx == -1 || frontIdx > backIdx) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Queue contents: ";
            for (int i = frontIdx; i <= backIdx; i++) {
                cout << data[i] << " ";
            }
            cout << endl;
        }
    }

    int peek() {
        if (frontIdx == -1 || frontIdx > backIdx) {
            cout << "Queue is empty" << endl;
            return -1;
        } else {
            return data[frontIdx];
        }
    }

    bool isEmpty() {
        return (frontIdx == -1 || frontIdx > backIdx);
    }

    bool isFull() {
        return (backIdx == MAX - 1);
    }

    int size() {
        if (frontIdx == -1 || frontIdx > backIdx) {
            return 0;
        } else {
            return backIdx - frontIdx + 1;
        }
    }

    void clear() {
        frontIdx = -1;
        backIdx = -1;
        cout << "Queue cleared successfully" << endl;
    }
};

int main() {
    Queue myQ;
    int option, val;

    do {
        cout << "\nMenu:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Peek\n";
        cout << "5. Check if Empty\n";
        cout << "6. Check if Full\n";
        cout << "7. Size\n";
        cout << "8. Clear\n";
        cout << "9. Exit\n";
        cout << "Enter choice: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Enter element to enqueue: ";
                cin >> val;
                myQ.enqueue(val);
                break;

            case 2:
                myQ.dequeue();
                break;

            case 3:
                myQ.display();
                break;

            case 4:
                val = myQ.peek();
                if (val != -1)
                    cout << "Front element: " << val << endl;
                break;

            case 5:
                cout << (myQ.isEmpty() ? "Queue is empty" : "Queue is not empty") << endl;
                break;

            case 6:
                cout << (myQ.isFull() ? "Queue is full" : "Queue is not full") << endl;
                break;

            case 7:
                cout << "Queue size: " << myQ.size() << endl;
                break;

            case 8:
                myQ.clear();
                break;

            case 9:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice, try again!" << endl;
        }
    } while (option != 9);

    return 0;
}
