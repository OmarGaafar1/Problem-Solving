
// n is given at 2n * 2n matrix
int flippingMatrix(vector<vector<int>> list , int n)
{
    int sum = 0;
    for (int i = 0; i < list.size()/2; i++)
    {
        for (int j = 0; j < list.size()/2 ; j++)
        {
            int half_1 = max(list[i][j], list[i][(2 * n - 1) - j]);
            int half_2 = max(list[(2 * n - 1) - i][j], list[(2 * n - 1) - i][(2 * n - 1) - j]);
            sum += max(half_1, half_2);
        }
    }
    return sum;


}