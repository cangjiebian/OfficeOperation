/********************************************************************
	created:	2014/03/24
	created:	24:3:2014   22:46
	filename: 	c:\Users\ya\Documents\Visual Studio 2008\Projects\OfficeOperation\OfficeOperation\ExcelSourse.h
	file path:	c:\Users\ya\Documents\Visual Studio 2008\Projects\OfficeOperation\OfficeOperation
	file base:	ExcelSourse
	file ext:	h
	author:		siler_ya
	
	purpose:	excelSourse
*********************************************************************/
#ifndef ExcelSourse_h__
#define ExcelSourse_h__

//#include "excel8.h"
class _Application;
class Workbooks;
class _Workbook;
class Worksheets;
class  _Worksheet;
class Range;

enum ExcelColor
{
  black = 1,
  white = 2,
  red   = 3,
  green = 4,
  blue  = 5,
  yellow = 6,
  NullColor = -4142
};
////////////////////////////////////////////////
/// \class  ExcelSourse
/// \brief  ʵ��excel��������
/// \author siler_ya
////////////////////////////////////////////////
class _OFFICE_PORT ExcelSourse
{
  private:
	  _Application *App;
	  Workbooks *workbooks;
	  _Workbook *workbook;
	  _Worksheet *sheet;
	  Worksheets *sheets;
	  Range * range;
	  Range * Allrage;
	  Range *Usedrage;
	 int m_RowNum;
	 int m_ColNum;
	 TCHAR m_strCol[256];
	 TCHAR m_strRow[256];
	 TCHAR m_str[256];

   public: 
	   ExcelSourse();
	   ~ExcelSourse();

   public:
          ////////////////////////////////////////////////
          /// \fn     virtual int SetVisible(bool visible);
          /// \brief  ����excel�ɼ����
          /// \param  [IN]  bool visible  --trueΪ�ɼ�
          /// \author siler_ya
          /// \return �ɹ����� 0
          ////////////////////////////////////////////////
	   virtual int SetVisible(bool visible);

	   ////////////////////////////////////////////////
	   /// \fn     virtual int Open(LPCTSTR lpszFileName);
	   /// \brief  ��excel
	   /// \param  [IN]  LPCTSTR lpszFileName  --excel����(��·��) 
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int Open(LPCTSTR lpszFileName);

	   ////////////////////////////////////////////////
	   /// \fn     virtual int SaveAs(LPCTSTR lpszFileName);
	   /// \brief  ���excel
	   /// \param  [IN]  LPCTSTR lpszFileName  --excel����(��·��) 
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int SaveAs(LPCTSTR lpszFileName);
	   ////////////////////////////////////////////////
	   /// \fn     virtual int Save(LPCTSTR lpszFileName);
	   /// \brief  ����excel
	   /// \param  [IN]  LPCTSTR lpszFileName  --excel����(��·��) 
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int Save(LPCTSTR lpszFileName);
	   ////////////////////////////////////////////////
	   /// \fn     virtual int Save();
	   /// \brief  ����excel
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int Save();

	   ////////////////////////////////////////////////
	   /// \fn     virtual int Close();
	   /// \brief  �ر�excel
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int Close();

	   ////////////////////////////////////////////////
	   /// \fn     virtual int SetCell(int row,int col,LPCTSTR strValue);
	   /// \brief  ���õ�Ԫ������
	   /// \param  [IN]  int row                 --�к�
	   /// \param  [IN]  int col                 --�к�
	   /// \param  [IN]  LPCTSTR strValue        --ֵ
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int SetCell(int row,int col,LPCTSTR strValue);
	   ////////////////////////////////////////////////
	   /// \fn     virtual int SetCell(int row,int col,long lValue);
	   /// \brief  ���õ�Ԫ������
	   /// \param  [IN]  int row                 --�к�
	   /// \param  [IN]  int col                 --�к�
	   /// \param  [IN]  long lValue             --ֵ
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int SetCell(int row,int col,long lValue);
	   ////////////////////////////////////////////////
	   /// \fn     virtual int SetCell(int row,int col,int nValue);
	   /// \brief  ���õ�Ԫ������
	   /// \param  [IN]  int row                 --�к�
	   /// \param  [IN]  int col                 --�к�
	   /// \param  [IN]  int nValue              --ֵ
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int SetCell(int row,int col,int nValue);
	   ////////////////////////////////////////////////
	   /// \fn     virtual int SetCell(int row,int col,LPCTSTR strValue);
	   /// \brief  ���õ�Ԫ������
	   /// \param  [IN]  int row                 --�к�
	   /// \param  [IN]  int col                 --�к�
	   /// \param  [IN]  double dValue           --ֵ
	   /// \param  [IN]  int n                   --��ȷ��
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int SetCell(int row,int col,double dValue,int n);
	   //virtual int SetSheetName(LPCTSTR lpszName);

	   ////////////////////////////////////////////////
	   /// \fn     virtual int SelectActiveSheet(LPCTSTR lpszSheetName);
	   /// \brief  ���û��sheet
	   /// \param  [IN] LPCTSTR lpszSheetName    --sheet����
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int SelectActiveSheet(LPCTSTR lpszSheetName);

	   ////////////////////////////////////////////////
	   /// \fn     virtual int SelectCurSheet(LPCTSTR lpszSheetName);
	   /// \brief  ���û��sheet
	   /// \param  [IN] LPCTSTR lpszSheetName    --sheet����
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int SelectCurSheet(LPCTSTR lpszSheetName);

	   ////////////////////////////////////////////////
	   /// \fn     virtual int SelectCurSheet(int nSheetIndex);
	   /// \brief  ���û��sheet
	   /// \param  [IN] int nSheetIndex         --sheet���
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int SelectCurSheet(int nSheetIndex);

	   ////////////////////////////////////////////////
	   /// \fn     virtual int DeleteSheet(LPCTSTR lpszName);
	   /// \brief  ɾ��sheet
	   /// \param  [IN] LPCTSTR lpszName        --sheet����
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int DeleteSheet(LPCTSTR lpszName);

	   ////////////////////////////////////////////////
	   /// \fn     virtual int GetCell(int row,int col,LPTSTR strValue);
	   /// \brief  ��ȡ��Ԫ������
	   /// \param  [IN]  int row                 --�к�
	   /// \param  [IN]  int col                 --�к�
	   /// \param  [OUT] LPTSTR strValue         --ֵ
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int GetCell(int row,int col,LPTSTR strValue);

	   ////////////////////////////////////////////////
	   /// \fn     virtual int GetCell(int row,int col,COleVariant *strValue);
	   /// \brief  ��ȡ��Ԫ������
	   /// \param  [IN]  int row                 --�к�
	   /// \param  [IN]  int col                 --�к�
	   /// \param  [OUT] COleVariant *strValue   --ֵ
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int GetCell(int row,int col,COleVariant *strValue);

	   ////////////////////////////////////////////////
	   /// \fn      virtual int GetRow(int row,int nStartCol,int nEndCol,CStringArray *strArr);
	   /// \brief  ��ȡָ�������ݣ�ָ����ʼ�к���ֹ�У�
	   /// \param  [IN]  int row                 --�к�
	   /// \param  [IN]  int nStartCol           --��ʼ�к�
	   /// \param  [IN]  int nEndCol             --��ֹ�к�
	   /// \param  [OUT] CStringArray *strArr    --ֵ
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int GetRow(int row,int nStartCol,int nEndCol,CStringArray *strArr);

	   ////////////////////////////////////////////////
	   /// \fn     virtual int GetRow(int row,int nStartCol,int nEndCol,CStringArray *strArr);
	   /// \brief  ��ȡָ�������ݣ�ָ����ʼ�к���ֹ�У�
	   /// \param  [IN]  int col                 --�к�
	   /// \param  [IN]  int nStartRow           --��ʼ�к�
	   /// \param  [IN]  int nEndRow             --��ֹ�к�
	   /// \param  [OUT] CStringArray *strArr    --ֵ
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int GetCol(int col,int nStartRow,int nEndRow,CStringArray *strArr);

	   ////////////////////////////////////////////////
	   /// \fn     virtual int GetColCell(int col,CStringArray *strArr);
	   /// \brief  ��ȡָ��������
	   /// \param  [IN]  int col                 --�к�
	   /// \param  [OUT] CStringArray *strArr    --ֵ
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int GetColCell(int col,CStringArray *strArr);

	   ////////////////////////////////////////////////
	   /// \fn     virtual int GetRowCell(int row,CStringArray *strArr);
	   /// \brief  ��ȡָ��������
	   /// \param  [IN]  int row                 --�к�
	   /// \param  [OUT] CStringArray *strArr    --ֵ
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int GetRowCell(int row,CStringArray *strArr);
	   
	   ////////////////////////////////////////////////
	   /// \fn     virtual int SetColWidth(int col,int nWidth);
	   /// \brief  �����п�
	   /// \param  [IN]  int col           --�к� 
	   /// \param  [IN]  int nWidth        --�п�
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int SetColWidth(int col,int nWidth);

	   ////////////////////////////////////////////////
	   /// \fn    virtual int SetRowHeight(int row,int nHeight);
	   /// \brief  �����и�
	   /// \param  [IN]  int row           --�к� 
	   /// \param  [IN]  int nWidth        --�и�
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int SetRowHeight(int row,int nHeight);

	   ////////////////////////////////////////////////
	   /// \fn      virtual int GetCellWidth(int row,int col,int &nWeigth);
	   /// \brief  ��ȡ��Ԫ����
	   /// \param  [IN]  int row           --�к� 
	   /// \param  [IN]  int col           --�к�
	   /// \param  [OUT] int &nWeigth      --���
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int GetCellWidth(int row,int col,int &nWeigth);

	   ////////////////////////////////////////////////
	   /// \fn      virtual int GetCellHeight(int row,int col,int &nHeight);
	   /// \brief  ��ȡ��Ԫ��߶�
	   /// \param  [IN]  int row           --�к� 
	   /// \param  [IN]  int col           --�к�
	   /// \param  [OUT] int &nHeight      --�߶�
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int GetCellHeight(int row,int col,int &nHeight);

	   ////////////////////////////////////////////////
	   /// \fn     virtual int SetCellPostill(int row,int col,LPCTSTR lpszstr);
	   /// \brief  ���õ�Ԫ����ע
	   /// \param  [IN]  int row           --�к� 
	   /// \param  [IN]  int col           --�к�
	   /// \param  [IN]  LPCTSTR lpszstr   --��ע
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
       virtual int SetCellPostill(int row,int col,LPCTSTR lpszstr);

	   ////////////////////////////////////////////////
	   /// \fn     virtual int SetCellPostill(int row,int col,LPCTSTR lpszstr);
	   /// \brief  ���õ�Ԫ����ע
	   /// \param  [IN]  int row           --�к� 
	   /// \param  [IN]  int col           --�к�
	   /// \param  [IN]  LPCTSTR lpszstr   --��ע
	   /// \param  [IN]  LPCTSTR lpszauthor--����
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int SetCellPostill(int row,int col,LPCTSTR lpszstr,LPCTSTR lpszauthor);

	   ////////////////////////////////////////////////
	   /// \fn     virtual int ClearCellPostill(int row,int col);
	   /// \brief  ��յ�Ԫ����ע
	   /// \param  [IN]  int row           --�к� 
	   /// \param  [IN]  int col           --�к�
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int ClearCellPostill(int row,int col);

	   ////////////////////////////////////////////////
	   /// \fn    virtual int GetCellPostill(int row,int col,LPTSTR lpszstr);
	   /// \brief  ��ȡ��Ԫ����ע
	   /// \param  [IN]  int row           --�к� 
	   /// \param  [IN]  int col           --�к�
	   /// \param  [OUT] LPTSTR lpszstr    --��ע����
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int GetCellPostill(int row,int col,LPTSTR lpszstr);

	   ////////////////////////////////////////////////
	   /// \fn     virtual int SetCellColor(int row,int col,ExcelColor color);
	   /// \brief  ���õ�Ԫ����ɫ
	   /// \param  [IN]  int row           --�к� 
	   /// \param  [IN]  int col           --�к�
	   /// \param  [IN]  ExcelColor colorr  --��ɫ
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int SetCellColor(int row,int col,ExcelColor color);

	   ////////////////////////////////////////////////
	   /// \fn     virtual int GetCellColor(int row,int col,ExcelColor &color);
	   /// \brief  ��ȡ��Ԫ����ɫ
	   /// \param  [IN]  int row             --�к� 
	   /// \param  [IN]  int col             --�к�
	   /// \param  [OUT] ExcelColor &colorr  --��ɫ
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int GetCellColor(int row,int col,ExcelColor &color);

	   ////////////////////////////////////////////////
	   /// \fn     virtual int SetRowColor(int row,ExcelColor color);
	   /// \brief  �������������ɫ
	   /// \param  [IN]  int row            --�к� 
	   /// \param  [IN]  ExcelColor colorr  --��ɫ
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int SetRowColor(int row,ExcelColor color);
	  
	   ////////////////////////////////////////////////
	   /// \fn     virtual int GetAllRow();
	   /// \brief  ��ȡ���õ�����
	   /// \author siler_ya
	   /// \return int ��������
	   ////////////////////////////////////////////////
	   virtual int GetAllRow();

	   ////////////////////////////////////////////////
	   /// \fn     virtual int GetAllCol();
	   /// \brief  ��ȡ���õ�����
	   /// \author siler_ya
	   /// \return int ��������
	   ////////////////////////////////////////////////
	   virtual int GetAllCol();

	   ////////////////////////////////////////////////
	   /// \fn     virtual int GetSheetNum();
	   /// \brief  ��ȡsheet��Ŀ
	   /// \author siler_ya
	   /// \return int ����sheet��Ŀ
	   ////////////////////////////////////////////////
	   virtual int GetSheetNum();

	   ////////////////////////////////////////////////
	   /// \fn     virtual int GetSheetName(int num,LPTSTR lpszSheetName);
	   /// \brief  ��ȡָ�������ŵ�sheet���� 
	   /// \param  [IN]  int num                 --������
	   /// \param  [OUT] LPTSTR lpszSheetName    --sheet����
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int GetSheetName(int num,LPTSTR lpszSheetName);

	   ////////////////////////////////////////////////
	   /// \fn     virtual int GetAllSheetName(CStringArray *strarr);
	   /// \brief  ��ȡ���е�sheet����
	   /// \param  [OUT] CStringArray *strarr   --sheet����
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int GetAllSheetName(CStringArray *strarr);

	   ////////////////////////////////////////////////
	   /// \fn     virtual VARIANT GetSlectRange(int row,int col);
	   /// \brief  ѡ��ָ��range
	   /// \param  [IN]  int row  --��
	   /// \param  [IN]  int col  --��
	   /// \author siler_ya
	   /// \return VARIANT
	   ////////////////////////////////////////////////
       virtual VARIANT GetSlectRange(int row,int col);

	   ////////////////////////////////////////////////
	   /// \fn     virtual int ClearComment(int nStartRow,int nStartCol );
	   /// \brief  ���ָ����ʼ���е���ע 
	   /// \param  [IN]  int nStartRow    --��ʼ��
	   /// \param  [IN]  int nStartCol    --��ʼ��
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int ClearComment(int nStartRow,int nStartCol );

	   ////////////////////////////////////////////////
	   /// \fn     virtual int ClearAllComment();
	   /// \brief  ���������ע
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int ClearAllComment();

	   ////////////////////////////////////////////////
	   /// \fn     virtual int ClearAllColor();
	   /// \brief  ������������ɫ
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int ClearAllColor();

	   ////////////////////////////////////////////////
	   /// \fn     virtual int ClearClolar(int nStartRow,int nStartCol );
	   /// \brief  ���ָ����ʼ���е���ɫ 
	   /// \param  [IN]  int nStartRow    --��ʼ��
	   /// \param  [IN]  int nStartCol    --��ʼ��
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int ClearClolar(int nStartRow,int nStartCol );

	   ////////////////////////////////////////////////
	   /// \fn     virtual int GetRow(int row,int nStartCol,int nEndCol,VARIANT &varvalue);
	   /// \brief  ��ȡָ�������ݣ�ָ����ʼ�к���ֹ�У�
	   /// \param  [IN]  int row                 --�к�
	   /// \param  [IN]  int nStartCol           --��ʼ�к�
	   /// \param  [IN]  int nEndCol             --��ֹ�к�
	   /// \param  [OUT] VARIANT &varvalue       --ֵ
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int GetRow(int row,int nStartCol,int nEndCol,VARIANT &varvalue);

	   ////////////////////////////////////////////////
	   /// \fn     virtual int GetCol(int row,int nStartCol,int nEndCol,VARIANT &varvalue);
	   /// \brief  ��ȡָ�������ݣ�ָ����ʼ�к���ֹ�У�
	   /// \param  [IN]  int row                 --�к�
	   /// \param  [IN]  int nStartCol           --��ʼ�к�
	   /// \param  [IN]  int nEndCol             --��ֹ�к�
	   /// \param  [OUT] VARIANT &varvalue       --ֵ
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int GetCol(int col,int nStartRow,int nEndRow,VARIANT &varvalue);

	   ////////////////////////////////////////////////
	   /// \fn     virtual int IsExcelAlradyOpen(LPCTSTR lpszExcelName);
	   /// \brief  �ж�excel�Ƿ�ռ�� 
	   /// \param  [IN]  LPCTSTR lpszExcelName       --excel���֣���·����
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   virtual int IsExcelAlradyOpen(LPCTSTR lpszExcelName);

	   ////////////////////////////////////////////////
	   /// \fn     static int ShowExcel(LPCTSTR lpszExcelName);
	   /// \brief  ��ʾexcel
	   /// \param  [IN]  LPCTSTR lpszExcelName       --excel���֣���·����
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
       static int ShowExcel(LPCTSTR lpszExcelName);

	   ////////////////////////////////////////////////
	   /// \fn     static int Showstatic int ShowExcel(LPCTSTR lpszExcelName,LPCTSTR lpszSheetName);
	   /// \brief  ��ʾexcel��ָ��sheet
	   /// \param  [IN]  LPCTSTR lpszExcelName       --excel���֣���·����
	   /// \param  [IN]  LPCTSTR lpszSheetName       --sheet����
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   static int ShowExcel(LPCTSTR lpszExcelName,LPCTSTR lpszSheetName);

	   ////////////////////////////////////////////////
	   /// \fn     static int ShowExcel(LPCTSTR lpszExcelName,LPCTSTR lpszSheetName,int row,int col);
	   /// \brief  ��ʾexcel��ָ����Ԫ��
	   /// \param  [IN]  LPCTSTR lpszExcelName       --excel���֣���·����
	   /// \param  [IN]  LPCTSTR lpszSheetName       --sheet����
	   /// \param  [IN]  int row                     --��
	   /// \param  [IN] int co                       --��
	   /// \author siler_ya
	   /// \return �ɹ����� 0
	   ////////////////////////////////////////////////
	   static int ShowExcel(LPCTSTR lpszExcelName,LPCTSTR lpszSheetName,int row,int col);
protected:
	   int Show(LPCTSTR lpszFileName);
	   int Show(LPCTSTR lpszFileName,LPCTSTR lpszSheetName);
	   int Show(LPCTSTR lpszFileName,LPCTSTR lpszSheetName,int row,int col);
	   int Transition(int row,int col,LPTSTR RCstr);
};
#endif // ExcelSourse_h__