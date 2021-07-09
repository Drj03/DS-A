/*question : https://leetcode.com/problems/roman-to-integer/*/

class Solution {
public:
    int value(char r){
        //ROMAN TO INTEGER
    switch(r){
        case 'I' :return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
        return 0;
    }

    int romanToInt(string s) {
        int res=0;
         for (int i=0;i< s.length();i++){
        int s1 =value(s[i]);
 
        if (i + 1 < s.length()){
            int s2 = value(s[i + 1]);
            if (s1 >= s2){
                res = res + s1;}
            else {
                res = res + s2 - s1;
                i++;
            }
        }
        else {
            res = res + s1;
        }
    }
    return res;
    }
};