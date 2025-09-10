#include <iostream>
#include <stack>
using namespace std;
void insert_at_bottom(stack<int>&st,int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int top1=st.top();
    st.pop();
    insert_at_bottom(st,x);
    st.push(top1);
}
void reverse(stack<int>&st){
    if(st.empty())  return;
    int top=st.top();
    st.pop();
    reverse(st);
    insert_at_bottom(st,top);
}
void display(stack<int>st){
    stack<int>temp=st;
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
}
int main()
{
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<"original stack is "<<endl;
    display(st);
    reverse(st);
    display(st);
    return 0;
}


//4321
//1234
