vector<string> Solution::fizzBuzz(int A) {
    vector <string> B ;
    string str ;
    int i ;
    for (i=1;i<=A;i++)
    {
        if (i%15==0)
        {
           B.push_back("FizzBuzz") ;
        }
        else if (i%3==0)
        {
            B.push_back("Fizz") ;
        }
        else if (i%5==0)
        {
            B.push_back("Buzz") ;
        }
        else 
        {
            str=to_string(i) ;
             B.push_back(str) ;
        }
    }
    return B ;
}

