#include <Equation.hpp>
#include <stack>
#include <string>
#include <iostream>

using namespace std;
class ExpParser {

private: 
	Equation eq;
	map<string, char> map;
	//std::vector<std::map<string,char>> mapVector;

public:

	ExpParser(String str) {
		eq.str = str;
	}
	parse(Equation eq) {
		Stack<int> opIndexStack;
		Stack<int> paranStartIndexStack;
		Stack<int> paranCloseIndexStack;
		for (int i = 0; i < eq.str.length(); i++) {
			if (eq.str[i] == '+' || eq.str[i] == '-' || eq.str[i] == '*' || eq.str[i] == '/' || eq.str[i] == '^' || eq.str[i] == '%') opIndexStack.push(i);
			else if (eq.str[i] == '(') paranStartIndexStack.push(i);
			else if (eq.str[i] == ')') paranCloseIndexStack.push(i);
		}
		int opIndex = 0;
		while (!opIndexStack.isEmpty()) {
			
			string leftStrExp = eq.str.substring(index, opIndexStack.top());
			int leftOpIndex = opIndexStack.top();
			opIndexStack.pop();
			string rightStrExp = eq.sr.substring(leftOpIndex, opIndexStack.top());
			int left = Integer.parseInt(leftStrExp);
			int rightOpIndex = opIndexStack.top();
			int right = Integer.parseInt(rightStrExp);
			switch (eq.str[opIndex])

			opIndex = rightOpIndex;
		}
	}
}

//2*x+34^2*33