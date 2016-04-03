#pragma once
# define MemSize 10
class TStack
{
	int top;//�������� �����
	int *pMem;
	int Size;
public:
	TStack(const TStack &s);

	TStack();

	TStack(int n);

	int isEmpty(void)const;

	int isFull(void)const;

	void put(const int Val);

	int Get(void);

	int Peek(void) const;

	~TStack(void);
};
