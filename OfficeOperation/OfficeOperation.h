// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� OFFICEOPERATION_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// OFFICEOPERATION_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef OFFICEOPERATION_EXPORTS
#define OFFICEOPERATION_API __declspec(dllexport)
#else
#define OFFICEOPERATION_API __declspec(dllimport)
#endif

// �����Ǵ� OfficeOperation.dll ������
class OFFICEOPERATION_API COfficeOperation {
public:
	COfficeOperation(void);
	// TODO: �ڴ�������ķ�����
};

extern OFFICEOPERATION_API int nOfficeOperation;

OFFICEOPERATION_API int fnOfficeOperation(void);
