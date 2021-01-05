#pragma once


// Диалоговое окно CDlg21
class CDlg1;
class CDlg21 : public CDialogEx
{
	DECLARE_DYNAMIC(CDlg21)

public:
	CDlg21(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~CDlg21();
	CDlg1* m_pCDlg1;
// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
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
