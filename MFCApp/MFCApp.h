﻿
// MFCApp.h: главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить pch.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CMFCAppApp:
// Сведения о реализации этого класса: MFCApp.cpp
//

class CMFCAppApp : public CWinApp
{
public:
	CMFCAppApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CMFCAppApp theApp;
