void move(int source, int destination, vector<vector<int>>& ans){
    ans.push_back({source, destination});
}

void towerOfHanoi(int n, int source, int auxiliary, int destination, vector<vector<int>>&ans){
    if(n == 1){
        move(source, destination, ans);
    }
    else{
        towerOfHanoi(n-1, source, destination, auxiliary, ans);
        move(source, destination, ans);
        towerOfHanoi(n-1, auxiliary, source, destination, ans);
    }
}

vector<vector<int>> towerOfHanoi(int n)
{
    //    Write your code here.
    vector<vector<int>> ans;
    towerOfHanoi(n, 1, 2, 3, ans);
    return ans;
}
