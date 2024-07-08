# Personalized product suggestions
<b> Market Benefit: </b> Tailored recommendations based on user preferences and behavior improve satisfaction by presenting relevant products, reducing search time, and increasing convenience. Personalization fosters deeper user interaction with the platform, encouraging repeat visits and higher engagement levels as users find products aligned with their needs and preferences.
### Implementation: 
<b> 1. Collaborative filtering algorithm </b><br><br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b> Why this works? </b>
- Collaborative filtering is a recommendation technique that predicts a user’s preferences based on past behavior and similarities with other users. It relies on patterns of interactions among users and items to suggest personalized recommendations.<br><br>
<b> Limitations </b>
- <b>Cold-start problem:</b> Arises when the system needs help to make accurate recommendations for new users or items with limited interaction history.
- <b>“Grey sheep” problem:</b> It encounters difficulty when faced with users who possess unique or unconventional preferences. In such cases, finding similar users with comparable tastes becomes challenging, resulting in suboptimal recommendations.<br><br>
<b> Analyzing complexity: </b>
- Time complexity is O(m+n) for m users and n items <br><br>
[Click to analyze code](https://www.algolia.com/doc/guides/managing-results/must-do/custom-ranking/how-to/bayesian-average/)<br><br>

<b>2. Best first search </b><br><br>
<b> How this works? </b>
- Each node in the graph represents a product in your inventory.
- The edges between nodes represent the similarity or relevance between products. The weight of an edge can be determined by the number of shared features  between two products (e.g., category, price range, user purchase history, ratings).<br><br>
<b> Analyzing complexity:</b>
- Time complexity: O(b^m) where b is branching and m is maximum depth of the search tree
- Space complexity can be polynomial. <br><br>
[Click to analyze code](./Codes for portfolio/bestfirst.cpp)
  
[Back](README.md#applying-dsa-to-achieve-key-functionalities)
