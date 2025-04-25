# Leetcode-2924.-Find-Champion-II
🏆 Find the Champion
📘 Problem Statement
Given a directed graph of n nodes (labeled from 0 to n - 1) and a list of directed edges, determine the champion node — the only node with 0 incoming edges (indegree).

If more than one node has an indegree of 0, return -1. If exactly one node has an indegree of 0, return its label.

✅ Constraints
1 <= n <= 100

0 <= edges.length <= n * (n - 1) / 2

edges[i].length == 2

0 <= edges[i][0], edges[i][1] < n

edges[i][0] != edges[i][1]

🧠 Approach
Calculate indegree for each node.

Traverse all nodes to find which have indegree == 0.

If more than one such node exists → return -1.

If only one → that’s your champion.

🔍 Example
cpp
Copy
Edit
Input:
n = 3
edges = [[0,1], [1,2]]

Output:
0

Explanation:
- Node 0 has indegree 0.
- Nodes 1 and 2 have incoming edges.
- Hence, node 0 is the champion.

---

💡 Key Concepts
Graph traversal

Indegree counting

Simple topological insight

📦 Useful For
Understanding topological properties

Detecting leaders or roots in directed acyclic graphs (DAGs)

Beginner-level graph problems

👨‍💻 Author
Ridham Garg
B.Tech CSE | Thapar University

