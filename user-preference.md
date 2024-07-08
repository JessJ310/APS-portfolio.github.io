# Tracking user preferences across different product categories
### Use case: ###
In a grocery delivery application, customers interact with various categories or types of products. To enhance the user experience and improve customer satisfaction, tracking user preferences can provide insights that can be used for demand forecasting to restock inventory and segment customers for targeted promotions, etc. <br>
### Implementation: <br><br>
### Bloom filter <br>
  ### How it works? 
  - When a user interacts with a product category (e.g., views or adds to cart), their preference is recorded in the Bloom filter. Inserting an element into a Bloom filter involves computing multiple hash functions (typically three or more) and setting the corresponding bits in the filter array. 
When generating recommendations, the Bloom filter is queried to check if a product category's identifier exists for a particular user. Checking membership in a Bloom filter also involves computing the hash functions for the queried item and checking the corresponding bits. 
The Bloom filter requires an array of size 𝑚, where each bit represents the status (set or unset) of a hash function output for each item stored.<br>

  ### Why this works? <br>
  - 
  <br>
  ### Limitations <br>
  - Tries can consume significant memory, especially when storing large datasets of product names.
  - An efficiently constructed hash table(i.e. a good hash function) has O(1) as lookup time which is way faster than O(l) in the case of a trie, where l is the length of the string.
  ### Analyzing complexity <br>
  - Time complexity: During entry and search, it is 0(k), where k is the maximum number of hash functions implemented.
  - Space complexity: 0(m), wherein m is the expected number of items (product categories)
  <br>
  [Click to analyze code](./analyze.py)
  



[Back](README.md#applying-dsa-to-achieve-key-functionalities)

