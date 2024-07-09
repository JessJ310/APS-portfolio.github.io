# Selection of nearest inventory based on user location
<b> Market Benefit: </b>
Selecting the nearest inventory based on user location in a grocery delivery application ensures timely delivery and optimal user experience by minimizing travel distance for deliveries. This approach is crucial for improving customer satisfaction by ensuring prompt delivery and reducing operational costs associated with transportation and fuel consumption.

### Implementation:

<b> KD trees </b><br>

<b> How this works? </b><br>
- Represent each warehouse location as a point in a multidimensional space. Typically, this space is defined by geographic coordinates (latitude and longitude).
- Prepare a list of warehouse locations, each represented by its coordinates in the multidimensional space.
- Use the KD-Tree construction algorithm to recursively partition the space based on the coordinates. 
- When a delivery request comes in, obtain the user's current location. Perform a nearest neighbor search in the KD-Tree to find the warehouse location closest to the user's location.
  
<b> Analyzing complexity</b> <br>
- Building a static k-d tree from n points has the following worst-case complexity:
  - O(n log2 n) if an O(n log n) sort such as Heapsort or Mergesort is used to find the median at each level of the nascent tree
  - O(n log n) if an O(n) median of medians algorithm is used to select the median at each level of the nascent tree
  - O(kn log n) if n points are presorted in each of k dimensions using an O(n log n) sort such as Heapsort or Mergesort prior to building the k-d tree.
- Insertion takes O(log n) time.
- Finding 1 nearest neighbour takes O(log n) time on average.<br>
  [Click to analyze code](./Codes for portfolio/kdtree.cpp)
  

[Back](README.md#applying-dsa-to-achieve-key-functionalities)
