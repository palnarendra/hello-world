#include<iostream>
#include<string>
#include <cstring>
#include<stack>


using namespace std;

bool paranthesis(string &s, int n){
//s="23";
//cout<<s[1];
stack <char> st;
//int n = strlen(s);
	for(int i =0 ;i<n;i++){

		if(s[i]=='(' || s[i]=='{' || s[i]=='['){
			st.push(s[i]);		
		}

		else if(s[i]==')'){

			if( st.empty() )	{
				return 0;//false exp
			}
			
			else if (st.top() =='('){
				st.pop();
			}	
			else
				return 0; //false exp	
		}
	
		else if(s[i] == '}'){

			if( st.empty() )	{
				return 0;//false exp
			}
			
			else if (st.top() =='{'){
				st.pop();
			}	
			else
				return 0; //false exp
		}
		
		else if(s[i] == ']'){

			if( st.empty() )	{
				return 0;//false exp
			}
			
			else if (st.top() =='['){
				st.pop();
			}	
			else
				return 0; //false expresssion
		}
		else if (s[i]!= '(' || s[i] != '{' || s[i] != '[' || s[i] !=')' || s[i]!='}'|| s[i]!=']'){
			// dont do anything
			}
	}


	return 1 ;// correct expression
};


int main(){

string s;
	//s = "{{}[](2*4+5)(5-*6+)))----}";
cin>>"enter the expression">> s;
int n= s.size();

bool c = paranthesis(s,n);
string res = c==1? "correct expression : ":"uncorrect expression : ";
cout<< c <<"\t"<< res <<endl;
return 0;
}
