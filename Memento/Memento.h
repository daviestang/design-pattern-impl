// Memento.h
// write by larry
// 2009-6-10

#ifndef __MEMENTO_H__
#define __MEMENTO_H__

#include <string>
using namespace std;

class Memento;

class Originator
{
public:
	typedef string State;
	Originator();
	Originator(const State &sdt);
	~Originator();

	Memento *CreateMemento();
	void SetMemento(Memento *men);
	void RestoreToMemento(Memento *mt);
	State GetState();
	void SetState(const State &sdt);
	void PrintState();

private:
	State _sdt;
	Memento *_mt;
};

class Memento
{
private:
	// ������ؼ��ĵط�����OriginatorΪfriend�࣬���Է����ڲ���Ϣ�����������಻�ܷ���
	friend class Originator;
	typedef string State;
	Memento();
	Memento(const State &sdt);
	~Memento();
	void SetState(const State &sdt);
	State GetState();

private:
	State _sdt;
};

#endif