#include <iostream>
#include <vector>
using namespace std;

class MinHeap
{
public:
    vector<int> arr;
    int idx;
    MinHeap(int x)
    {
        idx = 1;
        for (int i = 1; i <= x; i++)
        {
            arr.push_back(0);
        }
    }
    int top()
    {
        return arr[1];
    }
    void push(int x)
    {
        arr[idx] = x;
        int i = idx;
        idx++;
        // swapping at i with parent till i == 1
        while (i != 1)
        {
            int parent = i / 2;
            if (arr[i] < arr[parent])
            {
                swap(arr[i], arr[parent]);
            }
            else
                break;
            i = parent;
        }
    }
    int size()
    {
        return idx - 1;
    }
    void pop()
    {
        idx--;
        arr[1] = arr[idx];
        // rearrangement
        int i = 1;
        while (true)
        {
            int left = 2 * i, right = 2 * i + 1;
            if (left > idx - 1)
                break;
            if (right > idx - 1)
            {
                if (arr[i] > arr[left])
                {
                    swap(arr[i], arr[left]);
                    i = left;
                }
                break;
            }
            if (arr[left] < arr[right])
            {
                if (arr[i] > arr[left])
                {
                    swap(arr[i], arr[left]);
                    i = left;
                }
                else
                    break;
            }
            else
            {
                if (arr[i] > arr[right])
                {
                    swap(arr[i], arr[right]);
                    i = right;
                }
                else
                    break;
            }
        }
    }
    void display()
    {
        for (int i = 1; i <= idx - 1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    MinHeap pq(25);
    pq.push(10);
    pq.push(20);
    cout << pq.top() << " " << pq.size() << endl;
    pq.push(11);
    cout << pq.top() << " " << pq.size() << endl;
    pq.push(2);
    cout << pq.top() << " " << pq.size() << endl;
    pq.display();
    pq.pop();
    cout << pq.top() << " " << pq.size() << endl;
    pq.display();
}
