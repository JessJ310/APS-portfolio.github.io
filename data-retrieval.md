# Management of customer and product data
### Use case: ###
In a grocery delivery application, managing and retrieving customer data efficiently is crucial to ensuring a smooth and responsive user experience. As the customer base grows, the system must handle a vast amount of data, including customer profiles, order histories, preferences, and search behaviors.<br>
### Implementation: <br><br>
### 1. B/B+ trees <br>
  ### Why this works? <br>
  - In B+ trees, rows or documents of a table are clubbed in B+ tree nodes, and each node holds a maximum of some n rows. For example, if one B+ tree node is 4KB big (same as a disk block size) and the row size is 40B, then each node will hold a maximum of 100 rows. This makes disk reads efficient since reading one node from a disk means reading 100 rows at once. Non-leaf nodes in a B+ tree hold routing information, while leaf nodes hold the actual rows. The leaf nodes are linked so that linear traversal of the actual rows is possible. The B+ tree structure thus ensures that the table is always logically and physically arranged by its primary key
  - B-trees effortlessly handle range queries, which involve retrieving data within a specified range of keys. Since the keys are sorted within each node, the storage engine can quickly identify the starting and ending points of the desired range.
  ### Limitations <br>
  - B-trees have a higher space overhead as each node in a B-tree typically contains multiple keys and child pointers, which can consume more memory than nodes in simpler tree structures.
  - Maintaining the balance of a B-tree is crucial for efficient data access. As the database grows and shrinks, rebalancing the tree becomes necessary to prevent it from becoming skewed. Ensuring that nodes have a roughly equal number of keys requires careful splitting and merging operations, which can introduce overhead.
  ### Analyzing complexity <br>
  - CRUD operations are performed in O(log n)
  <br>
  [Click to analyze code](./analyze.py)

### 2. MemReader for handling product ratings<br>
  ### Why this works? <br>
  - MemReader stores each rating in two hash tables, one indexed by user ID and one by product ID
  -  To store the ratings themselves, it is observed that neither the user ID nor the product ID take more than 24 bits to store. Since an int in Java is 32 bits, we shift the user ID or product ID over to the upper 24 bits and store the rating in the lower bits.
  -  Since bitwise operations are very fast, this technique reduces memory usage without slowing down access very much.
  -  Additionally, a hash table containing the number of movies rated by each user and the sum of the ratings for each user (and similarly the number and sum of ratings for each movies) is stored.
  ### Limitations <br>
  - MemReader is highly specialized for storing and retrieving ratings. Extending it to support other types of data or more complex relationships between data entities can be challenging.
  - As the dataset grows, the in-memory storage requirements increase proportionally. Scaling up to accommodate larger datasets can be challenging and costly
  - MemReader operates in-memory, meaning that data is volatile and can be lost if the application crashes or is restarted.
  ### Analyzing complexity <br>
  - Search (lookup) complexity: O(1) on average.
  <br>
  [Click to analyze code](./analyze.py)
  


  











[Back to homepage](./README.md)