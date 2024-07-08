# Promotion and pricing strategy to attract customers
### Use case: ###
Design attractive bundle offers that combine multiple products at a discounted price to maximize customer satisfaction, optimize inventory, and boost revenue. Offers tailored to customer preferences increase satisfaction and encourage repeat purchases. Efficient use of inventory reduces wastage and ensures products are sold before expiration. Effective bundling strategies attract larger orders and increase average order value, boosting overall revenue.
### Implementation: <br>
### 0/1 Knapsack problem <br>
  ### How this works? <br>
  - Identify groups of products that can be bundled together based on customer purchasing patterns, seasonal demand, or complementary items. For example, pasta, sauce, and garlic bread might be frequently purchased together for a family meal.
  - Utilize historical data and customer preferences to understand which products are frequently bought together. This analysis helps in determining which product combinations are likely to be most attractive to customers.
  - Treat each potential bundle of products as a variation of the knapsack problem where:
      - Each product has a weight (representing its cost or value, possibly its price).
      - Each product has a profit (representing its attractiveness or contribution to the bundle's appeal).
      - The goal is to maximize the total profit (customer appeal) of the bundle while not exceeding constraints (e.g., total cost or weight of the bundle).
  - Determine the discount or promotional price for the bundle to attract customers while maintaining profitability.
  - Adjust pricing dynamically based on real-time data and market conditions to optimize sales and revenue.
<br>
### Limitations <br>
  - Implementing dynamic pricing strategies based on real-time market data becomes more complex with the 0/1 knapsack approach. Adjusting prices dynamically for bundles that have fixed compositions (all-or-nothing inclusion) can be less responsive to market fluctuations compared to more flexible approaches.
  - As the number of products and potential bundles increases, the computational complexity of the 0/1 knapsack algorithm grows significantly. This can result in longer processing times and higher resource requirements, potentially impacting real-time responsiveness and scalability of the application.
  - Since the 0/1 knapsack problem focuses on maximizing profit based on predefined bundle compositions, it may not always optimize inventory usage efficiently.

### Analyzing complexity <br>
  - Time Complexity: O(N*W) where n is the number of items available for selection to form bundles and w represents maximum budget constraint
  - Auxillary Space: O(N*W) + O(N).

  <br>
  [Click to analyze code](./analyze.py)
  

[Back](README.md#applying-dsa-to-achieve-key-functionalities)
