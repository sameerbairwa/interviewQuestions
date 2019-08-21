#include<iostream>
#include <vector>
using namespace std;

class PriorityQueue
{
    vector<int> pq;

public:
    PriorityQueue()
    {
    }
    bool isEmpty()
    {
        return pq.size() == 0;
    }

    int getSize()
    {
        return pq.size();
    }
    int getMin()
    {
        if (isEmpty())
        {
            return 0; // priority queue is empty
        }
        return pq[0];
    }

    void insert(int element)
    {
        pq.push_back(element);

        int childIndex = pq.size() - 1;
        while(childIndex > 0)
        {
            int parentIndex = (childIndex - 1) / 2;
            if (pq[childIndex] < pq[parentIndex])
            {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }
            else{
                break;
            }
            childIndex = parentIndex;
        }
    }
    void heapify()
    {
        int i = 0;          // i is parent index
        int lc = 2 * i + 1; // lc is left child index
        int rc = 2 * i + 2; // rc is right child index

        while (lc < pq.size())
        {
            int minIndex = i;
            if (pq[minIndex] > pq[lc])
            {
                minIndex = lc;
            }
            if (rc < pq.size() && pq[minIndex] > pq[rc])
            {
                minIndex = rc;
            }
            if (minIndex == i)
            {
                break;
            }
            int temp = pq[minIndex];
            pq[minIndex] = pq[i];
            pq[i] = temp;
            i = minIndex;
            lc = 2 * i + 1;
            rc = 2 * i + 2;
        }
    }

    int removeMin()
    {
        // Complete this function
        int min = getMin();
        int temp = pq[0];
        pq[0] = pq[pq.size() - 1];
        pq[pq.size() - 1] = temp;
        pq.pop_back();

        heapify();
        return min;
    }
};
int main()
{
    PriorityQueue pq;
    int choice;
    cout << "choice:";

    cin >> choice;
    while (choice != -1)
    {
        switch (choice)
        {
        case 1: // insert
            int element;
            cin >> element;
            pq.insert(element);
            break;
        case 2: // getMin
            cout << pq.getMin() << endl;
            break;
        case 3: // removeMin
            cout << pq.removeMin() << endl;
            break;
        case 4: // size
            cout << pq.getSize() << endl;
            break;
        case 5: // isEmpty
            if (pq.isEmpty())
            {
                cout << "true" << endl;
            }
            else
            {
                cout << "false" << endl;
            }
        default:
            return 0;
        }
        cout << "choice:";
        cin >> choice;
    }
}
