// �����Ϳ������á������ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CPage0 ��װ��

class CPage0 : public COleDispatchDriver
{
public:
	CPage0(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CPage0(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPage0(const CPage0& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// Page ����
public:
	LPDISPATCH get_LeftHeader()
	{
		LPDISPATCH result;
		InvokeHelper(0x3fa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_CenterHeader()
	{
		LPDISPATCH result;
		InvokeHelper(0x3f3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_RightHeader()
	{
		LPDISPATCH result;
		InvokeHelper(0x402, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_LeftFooter()
	{
		LPDISPATCH result;
		InvokeHelper(0x3f9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_CenterFooter()
	{
		LPDISPATCH result;
		InvokeHelper(0x3f2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_RightFooter()
	{
		LPDISPATCH result;
		InvokeHelper(0x401, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}

	// Page ����
public:

};