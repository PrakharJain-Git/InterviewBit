stack<int> A ;
stack<int> B ;
MinStack::MinStack() {
    
    B.push(INT_MAX) ;
}

void MinStack::push(int x) {
    A.push(x) ;
    if(x<B.top())
    B.push(x) ;
    else
    B.push(B.top()) ;
    
}

void MinStack::pop() {
    if(A.empty())
    {
        
    }
    else
    {
        A.pop() ;
    }
    B.pop() ;
}

int MinStack::top() {
    if(A.empty())
    {
        return -1 ;
    }
    else
    {
        return A.top() ;
    }
}

int MinStack::getMin() {
    if(A.empty())
    {
        return -1 ;
    }
    return B.top() ;
}


