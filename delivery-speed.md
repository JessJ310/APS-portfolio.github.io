# Accelerating delivery speed by optimizing delivery route
### Market benefit: ###
Minimize the total delivery time from a warehouse to multiple delivery points. Accelerating delivery speed by optimizing delivery routes enhances customer satisfaction, increases repeat purchases, and boosts overall market competitiveness.<br>
### Implementation: <br>
### Dijkstra's algorithm <br>
  - Represent locations such as warehouses, delivery points, and intersections as nodes.
  - Represent the roads connecting these locations as edges.
  - Represent the travel time or distance on each road as weights. <br>

### Limitations
- Dijkstra's algorithm explores all nodes uniformly, leading to examining many irrelevant nodes and thus being less efficient.

### Analyzing complexity <br>
  - Time complexity: O((V + E) log V)
  - Space Complexity:	O(V) <br>
  [Click to analyze code](./Codes for portfolio/dijkstra.cpp)

### A* search algorithm <br>
### Why is it better? 
  - It incorporates a heuristic function (h(n)) to estimate the cost from the current node to the goal. This helps in prioritizing nodes that are likely to lead to the goal faster. The heuristic function in A* helps in reducing the number of nodes explored, making the process more efficient, especially for large graphs.<br>
### Analyzing complexity <br>
  - Time complexity: O(E)
  - Space complexity: 0(E) <br>
  [Click to analyze code](./Codes for portfolio/astar.cpp)


[Back](README.md#applying-dsa-to-achieve-key-functionalities)

