#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool IsOperator(char op){     
          if(op=='+'||op=='-'||op=='*'||op=='/')
          return true;
      return false;
}
bool IsNumericDigit(char op)
{
    if(op>=0&&op<=9)
    {
        return true;
    }
    return false;
}
int PerformOperation(char operation,char op1,char op2){
if(operation=='+')return op1+op2;
else if(operation=='-')return op1-op2;
else if(operation=='*')return op1*op2;
else if(operation=='/')return op1/op2;

else
     cout<<"Unexpected error";
     return -1;

}
int EvaluatePostfix(string exp){
    stack<int>S;
    for(int i=0;i<exp.length();i++)
    {
        if(exp[i]==' '||exp[i]==',') continue;
        else if(IsOperator(exp[i]))
        {
          int op2 = S.top();S.pop();
          int op1 = S.top();S.pop();
          int res = PerformOperation(exp[i],op1,op2);
          S.push(res);
        }
        else if(IsNumericDigit(exp[i]))
        {
            int operand = 0;
            while(i<exp.length()&&IsNumericDigit(exp[i]))
            {
                operand = (operand*10)+(exp[i] - '0');
                i++;
            }
            i--;
            S.push(operand);
   
        }

    }

  return S.top();

}
int main(){
    string exp;
    cout<<"Write the expression: ";
    cin>>exp;
    int res = EvaluatePostfix(exp);
    cout<<"Output is: "<<res;

}