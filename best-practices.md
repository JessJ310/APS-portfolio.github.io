# Analyzing user engagement periods with products
### Market Benefit: ###
Customers can rate products they purchase. You can analyze user engagement by tracking periods of positive and negative feedback for each product.
### Implementation: <br>
### Kadane's algorithm <br>
  ### How this works? <br>
  - Data Representation: Each element in the input array represents the aggregated feedback score for a specific time period (e.g., a day or another time interval). This score can be derived from various sources such as user ratings, reviews, or other forms of feedback.
  - Feedback Score: The feedback score can be represented on a numerical scale.
  - Collect and aggregate feedback scores for each product over time intervals (e.g., daily, weekly). Store these aggregated scores in an array where each index represents a specific time period, and the value at each index represents the aggregated feedback score for that period.
  - Analyze the results obtained from Kadane's Algorithm to understand patterns in user engagement with the product over time.
  - Kadane's Algorithm finds the maximum sum subarray, which means it identifies the longest streak of consecutive positive or negative feedback periods based on the given criteria <br>
### Limitations <br>
  - It only finds one such subarray. In real-life scenarios, there might be multiple significant periods of engagement that you want to analyze separately.
  - Kadane's Algorithm assumes that the data is sequential and contiguous. In applications where feedback data might not be contiguous (e.g., missing time periods or irregularly spaced feedback), Kadane's Algorithm might not accurately capture the desired patterns.
  - For very large datasets, maintaining and updating the maximum subarray efficiently could become challenging without additional optimizations.

### Analyzing complexity <br>
  - Time Complexity: O(N) where N is the size of input array
  - Space complexity: O(N)

  <br>
  [Click to analyze code](./analyze.py)
  

[Back](README.md#applying-dsa-to-achieve-key-functionalities)
