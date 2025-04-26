class Solution {
    public:
        long long calculateScore(vector<string>& instructions, vector<int>& values) {
            long long n = 0, i=0;
            map<int,int>m;
            while(i>=0 && i<values.size()){
                if(m[i] == 1) break;
                m[i]++;
                if(instructions[i] == "add") {
                    n+=values[i];
                    i++;
                }
                else i+=values[i];
            }
            return n;
        }
};