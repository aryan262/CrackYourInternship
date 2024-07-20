class Solution {
public:
    vector<vector<bool>> isThere;
    bool exist(vector<vector<char>>& board, string word) {
        string ans;
        isThere = vector<vector<bool>>(board.size(), vector<bool>(board[0].size(), false));
        bool result = false;
        ans.push_back(word[0]);
        for(int i=0; i<board.size(); i++)
            for(int j=0; j<board[0].size(); j++)
                if(board[i][j] == word[0]){
                    isThere[i][j] = true;
                    result |= helper(ans, board, word, i, j, 1);
                    if(result)
                        return true;
                    isThere[i][j] = false;
                }
        return result;
    }

    bool helper(string &ans, vector<vector<char>> &board, string &word, int i, int j, int index){
        if(ans.size() == word.size())
            if(ans == word)
                return true;
            else
                return false;
        bool result = false;
        if(j>0 && isThere[i][j-1] == false && board[i][j-1] == word[index]){
            ans.push_back(word[index]);
            isThere[i][j-1] = true;
            result |= helper(ans, board, word, i, j-1, index + 1);
            if(result)
                return true;
            ans.pop_back();
            isThere[i][j-1] = false;
        }
        if(i>0 && isThere[i-1][j] == false && board[i-1][j] == word[index]){
            ans.push_back(word[index]);
            isThere[i-1][j] = true;
            result |= helper(ans, board, word, i-1, j, index + 1);
            if(result)
                return true;
            ans.pop_back();
            isThere[i-1][j] = false;
        }
        if(j<board[0].size()-1 && isThere[i][j+1] == false && board[i][j+1] == word[index]){
            ans.push_back(word[index]);
            isThere[i][j+1] = true;
            result |= helper(ans, board, word, i, j+1, index + 1);
            if(result)
                return true;
            ans.pop_back();
            isThere[i][j+1] = false;
        }
        
        if(i<board.size()-1 && isThere[i+1][j] == false && board[i+1][j] == word[index]){
            ans.push_back(word[index]);
            isThere[i+1][j] = true;
            result |= helper(ans, board, word, i+1, j, index + 1);
            if(result)
                return true;
            ans.pop_back();
            isThere[i+1][j] = false;
        }
        return result;
    }
};
