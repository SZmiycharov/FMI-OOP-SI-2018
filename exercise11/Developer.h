#pragma once
class Developer
{
public:
	Developer(char* name = "", int salary = 0) : m_name(name), m_salary(salary) {};
	virtual ~Developer() {};

	virtual void PrintTodos() const = 0;
	virtual void Show() const = 0;
protected:
	virtual void Data() const; //print current class information
private:
	char* m_name;
	int m_salary;
};