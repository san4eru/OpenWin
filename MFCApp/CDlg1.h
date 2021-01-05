#pragma once
#include "CDlg21.h"
#include "CDlg22.h"
#include "CDlg23.h"

// Диалоговое окно CDlg1
class CMFCAppDlg;

class CDlg1 : public CDialogEx
{
	DECLARE_DYNAMIC(CDlg1)

public:
	CDlg1(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~CDlg1();
	CMFCAppDlg* m_pCMFCAppDlg;
// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
	CDlg21* m_pDlg21;
	CDlg22* m_pDlg22;
	CDlg23* m_pDlg23;
public:
	afx_msg void OnBnClickedButton();
	int m_num;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton2();
	void GetText(int m_num);
	afx_msg void OnBnClickedButton4();
	CEdit m_edit;
};
