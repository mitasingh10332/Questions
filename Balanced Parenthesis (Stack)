
#include <bits/stdc++.h>
using namespace std;

bool areBracketsBalanced(string s)
{
	stack<char> st;
	for (int i = 0; i < s.length(); i++) {
		if (st.empty()) {

			st.push(s[i]);
		}
		else if ((st.top() == '(' && s[i] == ')')
				|| (st.top() == '{' && s[i] == '}')
				|| (st.top() == '[' && s[i] == ']'))

				{
                    st.pop();
		        }
		else
            {
			  st.push(s[i]);
		     }
	}
	if (st.empty()) {

		return true;
	}
	return false;
}

int main()
{
	string s = "}()}[]";

	if (areBracketsBalanced(s))
		cout << "Balanced";
	else
		cout << "Not Balanced";
	return 0;
}
