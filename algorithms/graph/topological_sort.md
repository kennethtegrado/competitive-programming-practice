# Topological Sort

Topological sort is an algorithmic approach to arranging the nodes in a directed acyclic graph (DAG) in a linear order such that for every directed edge (u, v), node u comes before node v in the ordering. In other words, a topological sort of a DAG is a linear ordering of its nodes such that for every directed edge (u, v), node u comes before node v in the ordering.

Topological sorting is often used in task scheduling, where the nodes in the DAG represent tasks and the edges represent dependencies between tasks. In such cases, a topological sort gives a valid order in which to execute the tasks, taking into account their dependencies.

Topological sorting can be done using depth-first search (DFS) or breadth-first search (BFS). DFS-based algorithms are generally more efficient and widely used.

## Sample Problems

-   [Pick up sticks](https://open.kattis.com/problems/pickupsticks) - Kattis ([View Solution](./kattis/pickup_sticks.cpp))
