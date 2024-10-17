class Solution {
public:
    int maximumSwap(int num) {
        string n = to_string(num);
        int maxN = num;

        for(int i=0;i<n.size();i++){
            for(int d=i+1;d<n.size();d++){
                swap(n[i],n[d]);
                maxN = max(maxN, stoi(n));
                swap(n[i],n[d]);
            }
        }
        return maxN;
    }
};