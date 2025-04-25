// Leetcode Problem: Find the Champion
// Problem Link: https://leetcode.com/problems/find-the-champion/

class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        // Step 1: Create an indegree array to track number of incoming edges for each node
        vector<int> indegree(n, 0);
        
        // Step 2: Count indegree for each node
        for (auto edge : edges) {
            indegree[edge[1]]++;  // Increase indegree for the destination node
        }

        // Step 3: Check how many nodes have indegree == 0
        // Only one such node can be the champion
        int ans = -1;
        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0) {
                if (ans != -1)
                    return -1; // More than one node with indegree 0, no unique champion
                ans = i; // Potential champion
            }
        }

        // Step 4: Return the champion's index or -1 if no unique champion
        return ans;
    }
};
