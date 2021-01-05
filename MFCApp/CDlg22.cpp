// CDlg22.cpp: файл реализации
//

#include "pch.h"
#include "MFCApp.h"
#include "CDlg22.h"
#include "afxdialogex.h"
#include "CDlg1.h"

// Диалоговое окно CDlg22

IMPLEMENT_DYNAMIC(CDlg22, CDialogEx)

CDlg22::CDlg22(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG3, pParent)
	, m_num(0)
{
	m_pCDlg1 = (CDlg1*)pParent;
}

CDlg22::~CDlg22()
{
}

void CDlg22::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_num);
	DDX_Control(pDX, IDC_EDIT1, m_edit);
}


BEGIN_MESSAGE_MAP(CDlg22, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CDlg22::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CDlg22::OnBnClickedButton2)
END_MESSAGE_MAP()


// Обработчики сообщений CDlg22


void CDlg22::OnBnClickedButton1()
{
	//Передаем данные из edit'а в переменную m_sData
	UpdateData();
	//Передаем данные в основное окно
	m_pCDlg1->GetText(m_num);
}


void CDlg22::OnBnClickedButton2()
{
	UpdateData(true);
	m_num = 0;
	m_pCDlg1->OnBnClickedButton4();
	UpdateData(false);
}
