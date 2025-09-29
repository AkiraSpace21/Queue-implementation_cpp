# Queue in C++

## Aim  
To study and implement Queue operations in C++, including insertion (enqueue), deletion (dequeue), and traversal, and to understand how queues differ from stacks and arrays in terms of memory allocation, order of processing, and efficiency.

## Theory  
A Queue is a linear data structure that follows the **FIFO (First In, First Out)** principle. The element inserted first is the one removed first, similar to a line at a ticket counter.

A queue has two primary pointers:  
- **frontIdx** → points to the first element in the queue.  
- **backIdx** → points to the last element in the queue.  

### Characteristics of Queues  
- **FIFO Order**: First element inserted is the first to be removed.  
- **Linear Structure**: Elements are arranged sequentially.  
- **Restricted Access**: Insertion happens at the rear, deletion happens at the front.  
- **Overflow/Underflow**: Overflow occurs when the queue is full; underflow occurs when the queue is empty.  

### Types of Queues  
- **Simple (Linear) Queue** → Basic FIFO structure.  
- **Circular Queue** → Reuses empty spaces by connecting rear to front.  
- **Double-Ended Queue (Deque)** → Insertion and deletion allowed at both ends.  
- **Priority Queue** → Elements dequeued based on priority, not order.  

## Algorithm  

1. Start  
2. Initialize `frontIdx = -1`, `backIdx = -1`, and define an array `data[MAX]`.  
3. Display the menu with options:
4. 1 → Enqueue
2 → Dequeue
3 → Display
4 → Peek
5 → Check if Empty
6 → Check if Full
7 → Size
8 → Clear
9 → Exit


4. Repeat until choice = 9:  

- **Enqueue**:  
  - If `backIdx == MAX - 1` → print "Queue Overflow".  
  - Else: if `frontIdx == -1`, set `frontIdx = 0`. Increment `backIdx`. Insert element at `data[backIdx]`.  

- **Dequeue**:  
  - If queue is empty (`frontIdx == -1` or `frontIdx > backIdx`) → print "Queue Underflow".  
  - Else: print element at `data[frontIdx]`. Increment `frontIdx`. Reset both pointers if queue becomes empty.  

- **Display**:  
  - If queue empty → print "Queue is empty".  
  - Else traverse from `frontIdx` to `backIdx` and print elements.  

- **Peek**:  
  - If queue empty → print "Queue is empty".  
  - Else → print element at `data[frontIdx]`.  

- **Check if Empty**:  
  - If `frontIdx == -1` or `frontIdx > backIdx` → print "Queue is empty".  
  - Else → print "Queue is not empty".  

- **Check if Full**:  
  - If `backIdx == MAX - 1` → print "Queue is full".  
  - Else → print "Queue is not full".  

- **Size**:  
  - If queue empty → size = 0.  
  - Else size = `backIdx - frontIdx + 1`.  

- **Clear**:  
  - Reset `frontIdx = backIdx = -1`.  
  - Print "Queue cleared successfully".  

- **Exit**:  
  - Print "Exiting..." and stop program.  

- **Default**:  
  - Print "Invalid choice".  

5. End  

## Applications of Queues  
- CPU scheduling (Round Robin, FCFS).  
- Disk scheduling.  
- Data buffering (IO Buffers, Print Queue, Keyboard Buffer).  
- Breadth-First Search (BFS) in graphs.  
- Order processing systems (ticket booking, call centers).  
- Resource management in operating systems.  

## Conclusion  
Queues are essential for managing data in a **FIFO** order. They provide efficient handling of sequential processes like scheduling and buffering.  

This experiment demonstrated:  
- Enqueue (insertion at rear).  
- Dequeue (deletion from front).  
- Traversal and utility functions (peek, size, isEmpty, isFull, clear).  

This forms the foundation for advanced queue structures such as circular queues, deques, and priority queues.  
Mastering queues is crucial for solving real-world scheduling, resource allocation, and graph traversal problems.



