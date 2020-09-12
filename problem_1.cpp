#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

        
        bool ans = false;
        
        void solve(vector<vector<char>>& board,string word, int i,int j,int index){
        
        if(index == word.size() - 1){
            ans = true;
        }
        
        if(i >= board.size() || j >=board[0].size() || i < 0 || j < 0){
            return;
        }
        
        if(board[i][j] == word[index]){
            solve(board,word,i+1,j,index + 1);
            solve(board,word,i,j+1,index + 1);
            solve(board,word,i-1,j,index + 1);
            solve(board,word,i,j-1,index + 1);
            
        }
        
    }

    bool exist(vector<vector<char>>& board, string word) {
        
        int n = word.size();
        int row = board.size();
        int col = board[0].size();
        
        solve(board,word,0,0,0);
        return ans;
        
    }
    
    
    
int main()
{
    
    vector<vector<char>> board{{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
     string w = "ABCCED";
    cout<<exist(board,w);

    return 0;
}

