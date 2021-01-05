#pragma once


// Диалоговое окно CDlg23
class CDlg1;
class CDlg23 : public CDialogEx
{
	DECLARE_DYNAMIC(CDlg23)

public:
	CDlg23(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~CDlg23();
	CDlg1* m_pCDlg1;
// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
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
