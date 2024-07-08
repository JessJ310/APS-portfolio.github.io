# Real-time inventory updates
### Market Benefit: ###
- Ensuring accurate and real-time inventory management is crucial for providing a seamless customer experience. When new inventory arrives or is restocked, the application updates the stock levels. The system verifies and increases the available stock count in real-time, ensuring that products are available for immediate fulfillment when orders are placed, avoiding out-of-stock scenarios and customer dissatisfaction.
- As orders are processed and items are picked for delivery, the stock levels are decreased.This real-time update prevents overselling and informs customers promptly if certain items are no longer available.
- Customers browsing the application need to know if specific products are in stock. Each product listing displays real-time availability based on the current stock levels stored in the database. Queries are optimized for speed, leveraging efficient database indexing and caching mechanisms to provide instant responses.

### Segment trees with lazy propagation <br>
### Why this works?
- Segment trees excel at efficiently computing aggregate functions over ranges of elements, enables quick determination of total stock availability across various product categories or locations within the inventory.
- Lazy propagation minimizes the immediate impact of individual stock updates on the segment tree structure, allows the application to handle frequent stock modifications dynamically without immediately recalculating all affected segments.<br>
### Limitations
- Construction Time: Constructing a segment tree can be time-intensive, especially when dealing with a large number of product categories. As grocery inventories encompass a wide range of products, the initial construction of the segment tree involves recursively dividing the product list and setting up the tree structure. This process ensures efficient range queries but may require significant computational resources during the setup phase.
- Updates and Modifications: While segment trees excel in querying and aggregating data over ranges, updating individual stock levels can be comparatively slower. Frequent updates to stock levels are crucial due to dynamic inventory changes. When the quantity of a specific product changes, the corresponding segment tree nodes must be adjusted to reflect the modification. This process involves traversing multiple nodes, potentially impacting the responsiveness of inventory updates during peak transaction periods. <br>
### Analyzing complexity <br>
- Time complexity: Updating or querying a single product takes O(logN)
- Space complexity: 0(N)<br>
[Click to analyze code](./Codes for portfolio/segment-lazy.cpp)
  



[Back](README.md#applying-dsa-to-achieve-key-functionalities)

