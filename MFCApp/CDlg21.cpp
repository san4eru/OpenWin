// CDlg21.cpp: файл реализации
//

#include "pch.h"
#include "MFCApp.h"
#include "CDlg21.h"
#include "afxdialogex.h"
#include "CDlg1.h"

// Диалоговое окно CDlg21

IMPLEMENT_DYNAMIC(CDlg21, CDialogEx)

CDlg21::CDlg21(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, m_num(0)
{
	m_pCDlg1 = (CDlg1*)pParent;
}

CDlg21::~CDlg21()
{
}

void CDlg21::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_num);
	DDX_Control(pDX, IDC_EDIT1, m_edit);
}


BEGIN_MESSAGE_MAP(CDlg21, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CDlg21::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CDlg21::OnBnClickedButton2)
END_MESSAGE_MAP()


// Обработчики сообщений CDlg21


void CDlg21::OnBnClickedButton1()
{
	//Передаем данные из edit'а в переменную m_sData
	UpdateData();
	//Передаем данные в основное окно
	m_pCDlg1->GetText(m_num);
}


void CDlg21::OnBnClickedButton2()
{
	UpdateData(true);
	m_num = 0;
	m_pCDlg1->OnBnClickedButton4();
	UpdateData(false);	
}
