
// Interpreter.h : ��� ����
// class Interpreter 
// �߰� �ڵ带 �޾� ����Ѵ�.


#pragma once

#include "afxwin.h"
#include <stack>

class Interpreter
{
private:
	//�߰� �ڵ� ���
	int calc(CString subString, int* i);
	//void opr_Calc();
	//�߰��ڵ�
	CStringA intermediate;
	//��� 
	CStringA result;

	//������ ��Ƴ��� �迭
	char *oper[2];

public:
	//�߰��ڵ� ���ڷ� ����
	Interpreter(CStringA intermediate);

	//��� ����
	CStringA getResult();
};