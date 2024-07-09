# Search for products with autocomplete suggestions 
<b> Market Benefit:  </b>
Implementing product search with autocomplete offers real-time suggestions based on user input, thus improving navigation efficiency in our grocery delivery application and enhancing user experience.<br>
### Implementation:
<b> 1. Trie: </b><br><br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b>Why this works?</b>
 - Trie allows for efficient insertion and retrieval operations, making it ideal for storing and searching product names.
 - It enables alphabetical filtering, which is useful for categorizing and searching products by their names or categories.
 - It supports efficient prefix search and longest prefix matching, facilitating quick autocomplete suggestions..<br><br>
<b>Limitations  </b>
 - Tries can consume significant memory for large datasets of product names.
 - An efficiently constructed hash table has O(1) as lookup time which is way faster than O(l) in the case of a trie, where l is the length of the string. <br><br>
<b>Analyzing complexity </b>
 - Time Complexity: O(number of words * maxLengthOfWord)
 - Auxiliary Space: O(number of words * maxLengthOfWord)
 - For searching, time complexity is O(k) where K is the number of letters typed <br><br>
 [Click to analyze code](./Codes for portfolio/trie.cpp)
  
<b> 2. Pruning Radix trie </b><br><br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b>Why this works?</b>
  - It is up to 1000 times faster than an ordinary Radix Trie, making it ideal for providing instant autocomplete suggestions.
  - Its space-optimized structure handles large dictionaries of product names and categories.
  - By storing the maximum rank of all children in each node, it can quickly return the top-k most relevant results. <br><br>
<b>Analyzing complexity </b>
  - It reduces the complexity for searching of a radix trie by a factor of 1000. <br><br>
[Click to analyze code](https://github.com/otto-de/PyPruningRadixTrie)


<p align="center">
  <img src="images/trie-pruning.png" alt="Image 1" width="49%" style="display: inline-block; margin: 10px;">
  <img src="images/trie-pruning1.png" alt="Image 2" width="41%" style="display: inline-block; margin: 10px;">
</p>
<p align="center">
 <a href="https://github.com/wolfgarbe/PruningRadixTrie">Source</a>
</p>




  









[Back](README.md#applying-dsa-to-achieve-key-functionalities)

