# Analyzing user engagement periods with products
<b> Market Benefit: </b>
Customers can rate products they purchase. You can analyze user engagement by tracking periods of positive and negative feedback for each product.
### Implementation: 
<b> Kadane's algorithm </b><br>

<b> How this works? </b><br>
- Each element represents aggregated feedback score for a specific time period, such as user ratings, reviews, etc.
- The feedback score can be represented on a numerical scale.
- Aggregate feedback scores for each product over time intervals and store these in an array where each index represents a specific time period.
- Analyze the results obtained from Kadane's Algorithm to understand patterns in user engagement with the product over time.
- Kadane's Algorithm identifies the maximum positive feedback periods for a product <br><br>

<b> Limitations </b><br>
- It only finds one such subarray. In real-life scenarios, there might be multiple significant periods of engagement.
- It assumes that the data is sequential and contiguous. In applications where feedback data might not be contiguous (e.g., missing time periods or irregularly spaced feedback), it might not accurately capture the desired patterns.
- For very large datasets, maintaining the maximum subarray efficiently could become challenging without additional optimizations. <br><br>

<b> Analyzing complexity </b><br>
- Time Complexity: O(N) where N is the size of input array
- Space complexity: O(N)<br><br>
[Click to analyze code](./Codes for portfolio/kadane.cpp)
  

[Back](README.md#applying-dsa-to-achieve-key-functionalities)
