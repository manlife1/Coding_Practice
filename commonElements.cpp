
class Solution
{   void removeDuplicate(vector<int>&v) {
        int n = v.size();
        if (v.size() == 0) {
            return;
        }
        sort(v.begin(), v.end());
        int i = 0;

        for (int k = 0; k < v.size(); k++) {
            if (v[k] != v[i]) {//end of duplicate characters
                i++;
                v[i] = v[k];
            }
        }
        int p = n - i - 1;
        while (p != 0) {
            v.pop_back();
            p--;
        }

    }
public:
    vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
    {   //  kind of 3-pointer approach
        vector<int> ans;

        int i = 0, j = 0, k = 0;

        while (i < n1 and j < n2 and k < n3) {
            if (A[i] == B[j] and B[j] == C[k]) {
                ans.push_back(A[i]);
                i++;
                j++;
                k++;
            } else if (A[i] < B[j]) {
                i++;
            } else if (B[j] < C[k]) {
                j++;
            } else { //We reach here when x > y and z < y, i.e., z is smallest
                k++;
            }
        }
        removeDuplicate(ans);
        return ans;
    }

};