# Personalized product suggestions
### Market Benefit: 
 - Tailored recommendations based on user preferences and behavior improve satisfaction by presenting relevant products, reducing search time, and increasing convenience.
 - Personalization fosters deeper user interaction with the platform, encouraging repeat visits and higher engagement levels as users find products aligned with their needs and preferences.
### Implementation: <br>
### 1. Collaborative filtering algorithm <br>
  ### Why this works? <br>
  - Collaborative filtering is a recommendation technique that predicts a user’s preferences based on past behavior and similarities with other users. It relies on patterns of interactions among users and items to suggest personalized recommendations.
  ### Limitations <br>
  - Cold-start problem: Arises when the system needs help to make accurate recommendations for new users or items with limited interaction history.
  - “Grey sheep” problem: It encounters difficulty when faced with users who possess unique or unconventional preferences. In such cases, finding similar users with comparable tastes becomes challenging, resulting in suboptimal recommendations.
  [Click to analyze code](https://www.algolia.com/doc/guides/managing-results/must-do/custom-ranking/how-to/bayesian-average/)
### 2. Best first search <br>
  ### How this works? <br>
  - The Bayesian ranking algorithm adjusts product rankings based on average ratings and the number of ratings received, providing a statistically balanced measure that prioritizes items with reliable and significant feedback, enhancing relevance and fairness in product recommendations.<br>
  [Click to analyze code](https://www.algolia.com/doc/guides/managing-results/must-do/custom-ranking/how-to/bayesian-average/)
  
[Back](README.md#applying-dsa-to-achieve-key-functionalities)
