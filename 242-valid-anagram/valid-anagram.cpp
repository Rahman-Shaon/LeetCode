class Solution {
public:
    bool isAnagram(string s, string t) {
        int size1 = s.length(), size2 = t.length(), count = 0;

        if(size1 != size2)
            count = 1;
        else{
        for(int i=0; i<size1; i++){
            for(int j=0; j<t.size(); j++){
                if(s[i] == t[j]){
                t.erase(j, 1);
                count = 0;
                break;
            }
            else
                count = 1;
            }
            if(count == 1)
                break;
        }
        }
        if(count == 0)
               return true;
        else
                return false;
    }
};