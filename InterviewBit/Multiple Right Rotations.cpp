vector<int> Solution::rotateArray(vector<int> &A, int B) {
	vector<int> ret; 
    int n=A.size();
    B=n-B;
	for (int i = 0; i < A.size(); i++) {
        int m=(i + B)%n;
		ret.push_back(A[m]);
	}
	return ret; 
}
