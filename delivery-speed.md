# Accelerating delivery speed by optimizing delivery route
<b> Market benefit: </b>
Minimize the total delivery time from a warehouse to multiple delivery points. Accelerating delivery speed by optimizing delivery routes enhances customer satisfaction, increases repeat purchases, and boosts overall market competitiveness.<br>

### Implementation: 

<b> 1. Dijkstra's algorithm </b>
  - Represent locations such as warehouses, delivery points, and intersections as nodes.
  - Represent the roads connecting these locations as edges.
  - Represent the travel time or distance on each road as weights. <br>

<b> Limitations</b>
- Dijkstra's algorithm explores all nodes uniformly, leading to examining many irrelevant nodes and thus being less efficient.

<b> Analyzing complexity </b><br>
  - Time complexity: O((V + E) log V)
  - Space Complexity:	O(V) <br>
  
  [Click to analyze code](./Codes for portfolio/dijkstra.cpp)

<b> 2. A* search algorithm </b><br>

<b> Why is it better? </b>
  - It incorporates a heuristic function (h(n)) to estimate the cost from the current node to the goal. This helps in prioritizing nodes that are likely to lead to the goal faster. The heuristic function in A* helps in reducing the number of nodes explored, making the process more efficient, especially for large graphs.<br>
  
<b> Analyzing complexity</b> <br>
  - Time complexity: O(E)
  - Space complexity: 0(E) <br>
  
  [Click to analyze code](./Codes for portfolio/astar.cpp)


[Back](README.md#applying-dsa-to-achieve-key-functionalities)

