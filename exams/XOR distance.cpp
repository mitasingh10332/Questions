int countPairs(const std::vector<std::pair<int, int>>& coordinates, int k) {
    int count = 0;
    int n = coordinates.size();

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int distance = coordinates[i].first ^ coordinates[i].second + coordinates[j].first ^ coordinates[j].second;
            if (distance == k) {
                count++;
            }
        }
    }

    return count;
}
