
// mfc_test1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cmfc_test1App: 
// �йش����ʵ�֣������ mfc_test1.cpp
//

class Cmfc_test1App : public CWinApp
{
public:
	Cmfc_test1App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cmfc_test1App theApp;