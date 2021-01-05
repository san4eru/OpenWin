// CDlg1.cpp: файл реализации
//

#include "pch.h"
#include "MFCApp.h"
#include "CDlg1.h"
#include "afxdialogex.h"
#include "MFCAppDlg.h"

// Диалоговое окно CDlg1

IMPLEMENT_DYNAMIC(CDlg1, CDialogEx)

CDlg1::CDlg1(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, m_num(0)
{
	m_pCMFCAppDlg = (CMFCAppDlg*)pParent;
	m_pDlg21 = NULL;
	m_pDlg22 = NULL;
	m_pDlg23 = NULL;
}

CDlg1::~CDlg1()
{
}

void CDlg1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Text(pDX, IDC_EDIT1, m_s);
	DDX_Text(pDX, IDC_EDIT1, m_num);
	DDX_Control(pDX, IDC_EDIT1, m_edit);
}


BEGIN_MESSAGE_MAP(CDlg1, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON, &CDlg1::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON1, &CDlg1::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &CDlg1::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON2, &CDlg1::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON4, &CDlg1::OnBnClickedButton4)
END_MESSAGE_MAP()


// Обработчики сообщений CDlg1


void CDlg1::OnBnClickedButton()
{
	//Передаем данные из edit'а в переменную m_sData
	UpdateData();
	//Передаем данные в основное окно
	m_pCMFCAppDlg->GetText(m_num);
}


void CDlg1::OnBnClickedButton1()
{
	if (m_pDlg21 == NULL) {
		m_pDlg21 = new CDlg21(this);
		m_pDlg21->Create(IDD_DIALOG2);
		m_pDlg21->ShowWindow(SW_SHOWNORMAL);
	}
	else
		m_pDlg21->ShowWindow(SW_SHOWNORMAL);

}

void CDlg1::OnBnClickedButton2()
{
	if (m_pDlg22 == NULL) {
		m_pDlg22 = new CDlg22(this);
		m_pDlg22->Create(IDD_DIALOG3);
		m_pDlg22->ShowWindow(SW_SHOWNORMAL);
	}
	else
		m_pDlg22->ShowWindow(SW_SHOWNORMAL);
}

void CDlg1::OnBnClickedButton3()
{
	if (m_pDlg23 == NULL) {
		m_pDlg23 = new CDlg23(this);
		m_pDlg23->Create(IDD_DIALOG4);
		m_pDlg23->ShowWindow(SW_SHOWNORMAL);
	}
	else
		m_pDlg23->ShowWindow(SW_SHOWNORMAL);
}

void CDlg1::GetText(int num)
{
	UpdateData();
	m_num = m_num + num;
	UpdateData(false);
	OnBnClickedButton();
}

void CDlg1::OnBnClickedButton4()
{
	UpdateData(true);
	m_num = 0;
	m_pCMFCAppDlg->OnBnClickedButton2();
	UpdateData(false);
}
