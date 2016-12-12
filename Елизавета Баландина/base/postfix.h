#ifndef __POSTFIX_H__
#define __POSTFIX_H__

#include <string>
#include "stack.h"

using namespace std;

class TPostfix
{
  string infix;
  string postfix;
public:

	TPostfix(string s)
	{
		infix = s;
	}

  string GetInfix() { return infix; }
  string GetPostfix() { return postfix; }
  string ToPostfix();
  double Calculate(); // Ввод переменных, вычисление по постфиксной форме
  int TPostfix::priority(char c)
  {
	  if ((c == '*') || (c == '/')) return 2;
	  if ((c == '-') || (c == '+')) return 1;
	  if (c == '(') return 0;
	  return -2;
  }

};

#endif
