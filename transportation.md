# Minimizing transportation costs from central warehouse to other warehouses
### Market benefit: ###
In a regional distribution network for a grocery chain, multiple warehouses should be connected strategically. Start from a central hub, gradually expanding to nearby warehouses, ensuring minimal additional transportation costs. Evaluates all potential connections to create a spanning network with the shortest routes between warehouses, optimizing distribution efficiency across the network.<br>
### Implementation: <br>
Represent warehouses as nodes and connections (roads or direct routes) as edges with weights representing transportation costs. Both the below algorithms generate a Minimum Spanning Tree (MST) where all warehouses are interconnected with minimal total transportation costs, ensuring efficient distribution from a central hub.
### 1. Prim's algorithm <br>
### Analyzing complexity <br>
  - Time complexity: O(V^2)
  - Space Complexity:	O(V^2) <br>
  [Click to analyze code](./Codes for portfolio/prims.cpp)

### 2. Kruskal's algorithm <br>
### Analyzing complexity <br>
- Time complexity: 	O(E log E)	
- Space complexity: O(E + V) <br>
[Click to analyze code](./Codes for portfolio/kruskal.cpp)


[Back](README.md#applying-dsa-to-achieve-key-functionalities)

