# Personalized product suggestions
### Market Benefit: 
 - Tailored recommendations based on user preferences and behavior improve satisfaction by presenting relevant products, reducing search time, and increasing convenience.
 - Personalization fosters deeper user interaction with the platform, encouraging repeat visits and higher engagement levels as users find products aligned with their needs and preferences.
### Implementation: <br>
### 1. Collaborative filtering algorithm <br>
### Why this works? <br>
- Collaborative filtering is a recommendation technique that predicts a user’s preferences based on past behavior and similarities with other users. It relies on patterns of interactions among users and items to suggest personalized recommendations.<br>
### Limitations <br>
- Cold-start problem: Arises when the system needs help to make accurate recommendations for new users or items with limited interaction history.
- “Grey sheep” problem: It encounters difficulty when faced with users who possess unique or unconventional preferences. In such cases, finding similar users with comparable tastes becomes challenging, resulting in suboptimal recommendations.<br>
### Analyzing complexity:
- Time complexity is O(m+n) for m users and n items <br>
[Click to analyze code](https://www.algolia.com/doc/guides/managing-results/must-do/custom-ranking/how-to/bayesian-average/)
### 2. Best first search <br>
### How this works? <br>
- Each node in the graph represents a product in your inventory.
- The edges between nodes represent the similarity or relevance between products. The weight of an edge can be determined by the number of shared features  between two products (e.g., category, price range, user purchase history, ratings).<br>
### Analyzing complexity:
- Time complexity: O(b^m) where b is the branching and m is the maximum depth of the search tree
- Space complexity can be polynomial. <br>
[Click to analyze code](./Codes for portfolio/bestfirst.cpp)
  
[Back](README.md#applying-dsa-to-achieve-key-functionalities)
