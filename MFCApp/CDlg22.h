#pragma once


// Диалоговое окно CDlg22
class CDlg1;
class CDlg22 : public CDialogEx
{
	DECLARE_DYNAMIC(CDlg22)

public:
	CDlg22(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~CDlg22();
	CDlg1* m_pCDlg1;
// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	int m_num;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	CEdit m_edit;
};
