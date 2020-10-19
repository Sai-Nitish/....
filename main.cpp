#include <iostream>

const int  MAX_SIZE = 100;

using namespace std;

class Queue {
private:
    int item, i;
    int arr_queue[MAX_SIZE];
    int rear;
    int front;

public:

    Queue() {
        rear = 0;
        front = 0;
    }

    void insert() {
        if (rear == MAX_SIZE)
            cout << "\n Queue Overflow";
        else {
            cout << "\nEnter The Value to be Insert : ";
            cin>>item;
            cout <<" Inserted Value  : " << item;
            arr_queue[rear++] = item;
        }
    }

    void remove() {
        if (front == rear)
            cout << "Queue is Empty!";
        else {
            cout<< " Removed Value  :" << arr_queue[front];
            front++;
        }
    }

    void display() {
        cout << "Queue Size : " << (rear - front)<<endl;
        for (i = front; i < rear; i++)
            cout << " Q[" << i << "] = " << arr_queue[i]<<endl;
    }
};

int main() {
    int choice, exit_queue = 1;
    Queue obj;
    do {
        cout << "\n\n Queue Main Menu";

        cout << "\n1.Insert \n2.Remove \n3.Display \nOthers to exit";
        cout << "\nEnter Your Choice : ";
        cin>>choice;
        switch (choice) {
            case 1:
                obj.insert();
                break;
            case 2:
                obj.remove();
                break;
            case 3:
                obj.display();
                break;
            case 4:
                exit_queue = 0;
            default:
                cout<<"Choose a valid output"<<endl;
        }
    } while (exit_queue);

    return 0;
}


