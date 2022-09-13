class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] == newColor) return image;
        floodFill(image, sr, sc, newColor, image[sr][sc]);
        return image;
    }

        void floodFill(vector<vector<int>>& image, int r, int c, int newColor, int oldColor){
            if(r < 0 || c < 0 || r >= image.size() || c >= image[0].size() ||
               oldColor != image[r][c])
                return;
            
            image[r][c] = newColor;
            floodFill(image, r+1, c, newColor, oldColor);
            floodFill(image, r-1, c, newColor, oldColor);
            floodFill(image, r, c+1, newColor, oldColor);
            floodFill(image, r, c-1, newColor, oldColor);
        }
};