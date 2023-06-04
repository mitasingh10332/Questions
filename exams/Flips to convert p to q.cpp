int countBitFlips(int p, int q) {
    int xorResult = p ^ q;
    int count = 0;

    while (xorResult != 0) {
        if (xorResult & 1) {
            count++;
        }
        xorResult = xorResult & (xorResult - 1); // Clears the rightmost set bit
    }

    return count;
}
