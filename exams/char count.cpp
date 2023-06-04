unordered_map<char, int> charCount;
    
    for (char ch : str) {
        if (charCount.find(ch) == charCount.end()) {
            charCount[ch] = 1;
        } else {
            charCount[ch]++;
        }
    }
    
    int nonRepeatedCount = 0;
    for (auto entry : charCount) {
        if (entry.second == 1) {
            nonRepeatedCount++;
        }
    }
