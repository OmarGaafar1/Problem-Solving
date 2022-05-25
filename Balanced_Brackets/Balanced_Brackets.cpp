



string isBalanced(string str)
{
    string curly = "{}";
    string parenth = "()";
    string square_brackets = "[]";
    int i = 0;
    int x;
    while (i < 300)
    {
        if (str.find(curly, 0) != -1)
        {
            x = str.find(curly, 0);
            str.erase(x, 2);

        }
        if (str.find(parenth, 0) != -1)
        {
            x = str.find(parenth, 0);
            str.erase(x, 2);

        }
        if (str.find(square_brackets, 0) != -1)
        {
            x = str.find(square_brackets, 0);
            str.erase(x, 2);

        }

        if (str.length() == 0)
        {
            return "YES";
        }
        i++;
    }
    return "NO";
}