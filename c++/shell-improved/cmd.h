#include <vector>

class CCmd
{
protected:
	string m_strCmdName;
public:
	CCmd(){}
	CCmd(string cmdName)
	{
		this->m_strCmdName = cmdName;
	}
	bool operator==(const string &s)
	{
	return s==m_strCmdName;
	}
	/*
	string GetName()
	{
		return m_strCmdName;
	}*/
	virtual int Run()= 0;
};

class CShell
{
private:
	vector<CCmd*> m_veCCmdList;
	CShell();
public:
	int ParseCmd(string name);
	int AddCmd(CCmd *cmd);
	static CShell *GetInstance();
};
