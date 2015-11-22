#pragma once

class CWriteIni
{
public:
	/**
	*     \brief Constructor
	*/
	CWriteIni(char* szFileName);

	/**
	*     \record name
	*/
	void WriteString(char* szSection, char* szKey, char* szValue);

	/**
	*     \record age
	*/
	void WriteInteger(char* szSection, char* szKey, int iValue);

	/**
	*     \record height
	*/
	void WriteFloat(char* szSection, char* szKey, float fltValue);

private:
	char m_szFileName[255];
};

