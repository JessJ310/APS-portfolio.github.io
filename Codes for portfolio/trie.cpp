#include <bits/stdc++.h>
using namespace std;

struct TrieNode {

    TrieNode* childNode[26];
    int wordCount;

    TrieNode()
    {
        wordCount = 0;
        for (int i = 0; i < 26; i++) {
            childNode[i] = NULL;
        }
    }
};

void insert_key(TrieNode* root, string& key)
{
    TrieNode* currentNode = root;

    for (auto c : key) {
        if (currentNode->childNode[c - 'a'] == NULL) {
            TrieNode* newNode = new TrieNode();
            currentNode->childNode[c - 'a'] = newNode;
}
        currentNode = currentNode->childNode[c - 'a'];
    }
    currentNode->wordCount++;
}

bool search_key(TrieNode* root, string& key)
{
    TrieNode* currentNode = root;
    for (auto c : key) {
        if (currentNode->childNode[c - 'a'] == NULL) {
            return false;
        }
        currentNode = currentNode->childNode[c - 'a'];
    }

    return (currentNode->wordCount > 0);
}

bool delete_key(TrieNode* root, string& word)
{
    TrieNode* currentNode = root;
    TrieNode* lastBranchNode = NULL;
    char lastBrachChar = 'a';

    for (auto c : word) {
        if (currentNode->childNode[c - 'a'] == NULL) {
            return false;
        }
        else {
            int count = 0;
            for (int i = 0; i < 26; i++) {
                if (currentNode->childNode[i] != NULL)
                    count++;
            }

            if (count > 1) {
                lastBranchNode = currentNode;
                lastBrachChar = c;
            }
            currentNode = currentNode->childNode[c - 'a'];
        }
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (currentNode->childNode[i] != NULL)
            count++;
    }

    if (count > 0) {
        currentNode->wordCount--;
        return true;
    }

    if (lastBranchNode != NULL) {
        lastBranchNode->childNode[lastBrachChar] = NULL;
        return true;
    }

    else {
        root->childNode[word[0]] = NULL;
        return true;
    }
}

int main()
{

    TrieNode* root = new TrieNode();

    vector<string> inputStrings
        = { "and", "ant", "do", "axe", "dad", "ball" };

    int n = inputStrings.size();

    for (int i = 0; i < n; i++) {
        insert_key(root, inputStrings[i]);
    }

    vector<string> searchQueryStrings
        = { "do", "axe", "bat" };

    int searchQueries = searchQueryStrings.size();

    for (int i = 0; i < searchQueries; i++) {
        cout << "Query String: " << searchQueryStrings[i]
             << "\n";
        if (search_key(root, searchQueryStrings[i])) {
            cout << "The query string is present in the "
                    "Trie\n";
        }
        else {
            cout << "The query string is not present in "
                    "the Trie\n";
        }
    }

    vector<string> deleteQueryStrings = { "axe", "tea" };

    int deleteQueries = deleteQueryStrings.size();

    for (int i = 0; i < deleteQueries; i++) {
        cout << "Query String: " << deleteQueryStrings[i]
             << "\n";
        if (delete_key(root, deleteQueryStrings[i])) {
            cout << "The query string is successfully "
                    "deleted\n";
        }
        else {
            cout << "The query string is not present in "
                    "the Trie\n";
        }
    }

    return 0;
}
