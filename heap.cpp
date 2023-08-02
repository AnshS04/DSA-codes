#include<iostream>
#include<queue>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size++;
        int index =size;
        arr[index] = val;

        while(index > 1)
        {
            int parent = index/2;

            if(arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void deleteFromHeap()
    {
        if(size == 0)
        {
            cout << "Heap is empty" << endl;
            return;
        }

        arr[1] = arr[size];

        size--;

        int index = 1;
        while(index < size){
            int leftIndex = 2 * index;
            int rightIndex = 2 * index + 1;

            int swapIndex = index;

            if(leftIndex <= size && arr[swapIndex] < arr[leftIndex]){
                swapIndex = leftIndex;
            }
            if(rightIndex <= size && arr[swapIndex] < arr[rightIndex]){
                swapIndex = rightIndex;
            }

            if(index != swapIndex){
                swap(arr[index], arr[swapIndex]);
                index = swapIndex;
            }
            else{
                return ;
            }
        }
    }

    

    void print()
    {
        for(int i=1; i<=size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

    void heapify(int arr[], int n, int i)
    {
        int largest = i;
        int left = 2*i;
        int right = 2*i + 1;

        if(left <= n && arr[largest] < arr[left])
        {
            largest = left;
        }

        if(right <= n && arr[largest] < arr[right])
        {
            largest = right;
        }

        if(largest != i)
        {
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }
    }

    void heapSort(int arr[], int n)
    {
        int size = n;

        while(size > 1)
        {
            swap(arr[1], arr[size]);
            size--;

            heapify(arr, size, 1);
        }
    }

int main(){

    heap h;
    h.insert(60);
    h.insert(53);
    h.insert(54);
    h.insert(50);
    h.insert(51);

    h.print();

    h.deleteFromHeap();
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;

    //heap creation
    for(int i=n/2; i>0; i--)
    {
        heapify(arr, n, i);
    }

    //printing heaped array
    cout << "printing heaped array " << endl;
    for(int i=1; i<=n; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;

    heapSort(arr, n);

    cout << "printing sorted array " << endl;
    for(int i=1; i<=n; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;

    //priority queue
    priority_queue<int> pq;

    pq.push(54);
    pq.push(53);
    pq.push(55);
    pq.push(52);
    pq.push(50);

    cout << "printing pq elements" << endl;

    while(!pq.empty())
    {
        int element = pq.top();
        pq.pop();

        cout << element << " ";
    }

    return 0;
}