class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
        string d=s+s;
        if(d.find(goal)!=string::npos){
            return true;
        }
        return false;
    }
};