# Priority Queue

A **priority queue** is an abstract data type that represents a collection of elements, each associated with a priority. The elements in a priority queue can be of any data type, such as numbers, strings, or objects.

In a priority queue, elements are organized based on their priorities, which determine the order in which they are accessed or removed. The element with the highest priority is always accessible or removable first. The priority can be defined in various ways depending on the application or problem domain.

## Operations

A priority queue typically supports the following basic operations:

-   **Insertion** (`push`): Adding an element to the priority queue with an associated priority.
-   **Deletion** (`pop`): Removing and returning the element with the highest priority from the priority queue.
-   **Peek** (`top`): Returning the element with the highest priority without removing it.
-   **Size** (`size`): Returning the number of elements in the priority queue.
-   **Empty** (`empty`): Checking whether the priority queue is empty.

## Implementation

Priority queues can be implemented using different data structures, but two common implementations are heap and unsorted array/list.
Heap

A **heap** is a complete binary tree that satisfies the heap property. In a min-heap, the parent node always has a smaller value than its children, while in a max-heap, the parent node has a greater value than its children. Heaps are efficient for maintaining the highest (or lowest) priority element at the root, allowing for efficient deletion and insertion operations.
Unsorted Array/List

An **unsorted array/list** can also be used to implement a priority queue. In this implementation, the elements are stored in an unordered collection, and the operations involve iterating through the elements to find the one with the highest priority. Insertion can be done at the end of the collection, and deletion typically requires searching for the highest priority element.

## C++ Implementation

C++ has a built-in library implementation of the priority queue. You can access it using the queue STL library. By default, the implementation of priority queue in C++ is in max heap.

```c++
#include <queue>
using namespace std;

int main() {
    // default is max heap
    priority_queue<int> x;
    // push
    x.push(1);
    x.push(2);
    // top, returns the first element
    int y = x.top(); // y = 2
    // return type is void
    x.pop();
    // size, returns the size of the pq
    int size = x.size();
    // empty, returns true if pq is empty
    bool isempty = x.empty();
    return 0;
}
```

### Creating a Min Heap

```c++
#include <queue>
using namespace std;

// Create a class Comparator
class Comparator {
public:
    bool operator()(int a, int b) {
        return a > b;

        /*
        IMAGINE:

        priority queue = [2]
        push 3

        if 2 is greater than 3, then swap places. In this case it is false

        priority queue = [2, 3]
        push 1

        Remember that priority_queue is implemented as a heap so new push will be compared to 2 instead of 3

        if 2 is greater than 1, then swap places. In this case it is true

        priority queue = [1, 3, 2]
        */
    }
};

int main () {
    priority_queue <int, vector<int>, Comparator> minHeap;
    return 0;
}
```

## Use Cases

Priority queues have various applications, including:

-   **Task scheduling**: Managing tasks with different priorities, where higher priority tasks need to be executed first.
-   **Event-driven simulations**: Ordering events based on their scheduled time for efficient simulation processing.
-   **Dijkstra's algorithm**: Finding the shortest path in a graph by assigning priorities to vertices based on the current shortest distance.

Priority queues provide an efficient way to manage elements based on their priorities, enabling the development of optimized algorithms for various scenarios where prioritization is crucial.

## Sample Problems

-   [Factions vs The Hegemon](https://codeforces.com/gym/104118/problem/F) Codeforces - ([View Solution](../online_judges/codeforces/factions_vs_hegemon.cpp))
