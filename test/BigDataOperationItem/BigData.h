#pragma once

#include <string>
#include <cassert>
#define UN_INT 0xcccccccccccccccc // long long 8 Byte
#define MAX_INT64 0x7FFFFFFFFFFFFFFF
#define MIN_INT64 0x8000000000000000
typedef long long INT64;

// ��������
// ������������ķ��� �ַ���ģ��

class BigData
{
	friend std::ostream& operator<<(std::ostream& _cout, const BigData& bigData);
public:
	BigData(INT64 value = UN_INT);
  	BigData(const char *pData);

	BigData operator+(const BigData& bigData);
private:
	std::string Add(std::string left, std::string right);
    std::string Sub(std::string left, std::string right);
	bool IsINT64Overflow() const;
	void INT64ToString();
private:
	INT64 _value;
	std::string _strData;
};