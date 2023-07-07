//Greedy Algo Sorting Imp Question 
//Link - https://leetcode.com/problems/merge-intervals/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& fre) {
        vector<vector<int>> v;
        sort(fre.begin(),fre.end());
        v.push_back(fre[0]);
        int j=0;
        for(int i=1;i<fre.size();i++){
            if(v[j][1]>=fre[i][0]){
                v[j][1]=max(v[j][1],fre[i][1]);
            }
            else{
                v.push_back(fre[i]);
                j++;
            }
        }
        return v;
    }
};

valid_aws_creds
QUtJQVVNTkE1SkZBVTVSRFhIRUc=
AKIAUMNA5JFAXO65BXNJ
WCCgBZuC19LCJOFlkBgKFoeqYoWzR+7SzfHD04M3
