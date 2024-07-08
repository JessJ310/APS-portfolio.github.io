# Promotion and pricing strategy to attract customers
<b> Market benefit: </b>
Design attractive bundle offers that combine multiple products at a discounted price to maximize customer satisfaction and boost revenue. Offers tailored to customer preferences increase satisfaction and encourage repeat purchases. 

### Implementation: 

<b> 0/1 Knapsack problem </b><br>

<b> How this works? </b><br>
- Identify products that can be bundled together based on customer purchasing patterns, seasonal demand, or complementary items. For example, pasta, sauce, and garlic bread might be frequently purchased together for a family meal.
- Treat each potential bundle of products as a variation of the knapsack problem where:
    - Each product has a weight (representing its cost or value, possibly its price).
    - Each product has a profit (representing its attractiveness or contribution to the bundle's appeal).
    - The goal is to maximize the total profit (customer appeal) of the bundle while not exceeding constraints (e.g., total cost or weight of the bundle).
- Determine the discount or promotional price for the bundle to attract customers while maintaining profitability.<br>

<b> Limitations </b><br>
- Implementing dynamic pricing strategies based on real-time market data becomes more complex with the 0/1 knapsack approach. 
- As the number of products and potential bundles increases, the computational complexity of the 0/1 knapsack algorithm grows significantly, impacting scalability of the application.
- Since the 0/1 knapsack problem focuses on maximizing profit based on predefined bundle compositions, it may not always optimize inventory usage efficiently.<br>

<b> Analyzing complexity </b><br>
- Time Complexity: O(N*W) where n is the number of items available for selection to form bundles and w represents maximum budget constraint
- Auxillary Space: O(N*W) + O(N). <br>
[Click to analyze code](./Codes for portfolio/knapsack.cpp)
  

[Back](README.md#applying-dsa-to-achieve-key-functionalities)
