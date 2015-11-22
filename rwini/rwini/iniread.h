/*********************************
* @file rwini.c
* @author lxitj
* @data 2015-11-22
* @brief write and read .ini
**********************************/
#pragma once

class CReadIni
{
public:
	/**
	*       \brief Constructor
	*/
	CReadIni(char* szFileName);

	/**
	*       \dispaly name
	*/
	char* ReadString(char* szSection, char* szKey, const char* szDefaultValue);

	/**
	*       \display age
	*/
	int ReadInteger(char* szSection, char* szKey, int iDefaultValue);

	/**
	*       \display height
	*/
	float ReadFloat(char* szSection, char* szKey, float fltDefaultValue);

private:
	char m_szFileName[255];
};

