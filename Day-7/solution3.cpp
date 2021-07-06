/*question : https://leetcode.com/problems/flipping-an-image/submissions/*/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& img) {
        for (int i=0; i<img.size(); i++) {
            reverse(img[i].begin(), img[i].end());
            for (int j=0; j<img[i].size(); j++) {
                img[i][j] ^= 0x1;
            }
        }
        return img;
    }
};