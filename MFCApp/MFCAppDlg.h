
// MFCAppDlg.h: файл заголовка
//
#include "CDlg1.h"
#pragma once


// Диалоговое окно CMFCAppDlg
class CMFCAppDlg : public CDialogEx
{
// Создание
public:
	CMFCAppDlg(CWnd* pParent = nullptr);	// стандартный конструктор

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPP_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

	CDlg1* m_pDlg1;

public:
	afx_msg void OnBnClickedButton1();
	int main_num;
	void GetText(int m_num);
	CEdit m_edit;
	afx_msg void OnBnClickedButton2();
};
