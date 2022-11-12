#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { &p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5* p5)
	{
		void* params[5] = { p1, &p2, &p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693;
// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>
struct EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF;
// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50;
// System.EventHandler`1<GoogleMobileAds.Common.NativeClientEventArgs>
struct EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.Collections.Generic.HashSet`1<System.Int32Enum>
struct HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4;
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>
struct HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<GoogleMobileAds.Api.NativeAdType>
struct IEqualityComparer_1_tDF6D725D3C1AB54410BA5A4B191B7EF503CEA43A;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t95FD5642BC2C9C7777B7A737F21A78E0AFDD8AA0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t067B6565DAB51831954BD36DF5F65A806EDBEF99;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Boolean>[]
struct EntryU5BU5D_t3A6696E01E2E8EE835C72A4B0C9E75120C7A122D;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.HashSet`1/Slot<GoogleMobileAds.Api.NativeAdType>[]
struct SlotU5BU5D_t857611F300C9CB2FC1E2FA1826D7F33CAA58AE0D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// <Module>/?????????????????????????????????????????[]
struct U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20;
// <Module>/?????????????????????????????????????????[]
struct U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF;
// <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????[]
struct U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202EU5BU5D_t9433998B2C2434C99C02EFD586A87AAB5EB1BC04;
// GoogleMobileAds.iOS.AdLoaderClient
struct AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8;
// GoogleMobileAds.Common.AdLoaderClientArgs
struct AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D;
// GoogleMobileAds.Api.AdValue
struct AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD;
// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// GoogleMobileAds.Common.CustomNativeClientEventArgs
struct CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// GoogleMobileAds.Common.DummyNativeClient
struct DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// GoogleMobileAds.GoogleMobileAdsNativeClientFactory
struct GoogleMobileAdsNativeClientFactory_t56A85695ED415D0555B943F8286F9D133C1E5A17;
// GoogleMobileAds.Common.IAdLoaderClient
struct IAdLoaderClient_tF8A7D1DD7900EBB40ED3BB947225A08502443B15;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// GoogleMobileAds.Common.ICustomNativeAdClient
struct ICustomNativeAdClient_t64801043F3A7F59D9B72FC2076C0CC861EBB3798;
// GoogleMobileAds.Common.ILoadAdErrorClient
struct ILoadAdErrorClient_t82CFD9A1EFB235DD188F81112DF3EAE96806A8D9;
// GoogleMobileAds.Common.INativeAdClient
struct INativeAdClient_t7F9453021411EFCCC382978EBD9D107501DBA784;
// GoogleMobileAds.Common.INativeAdInteractionHandlerClient
struct INativeAdInteractionHandlerClient_t5FC9C293E2875D64B63C1978DA33891687D3D898;
// GoogleMobileAds.Common.IResponseInfoClient
struct IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7;
// GoogleMobileAds.iOS.LoadAdErrorClient
struct LoadAdErrorClient_t576EE4D06F4BCE6CFA7709746249AC09BAC752BC;
// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// GoogleMobileAds.iOS.NativeAdInteractionHandlerClient
struct NativeAdInteractionHandlerClient_t67E48A14F0DE4196E5B988AF4C286978320E51B8;
// GoogleMobileAds.Common.NativeClientEventArgs
struct NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809;
// GoogleMobileAds.iOS.ResponseInfoClient
struct ResponseInfoClient_t03446D1122701240801753551A07C20E71012BB3;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo
struct _5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73;
// _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B
struct _V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06;
// _HFkddgMsrMSEe0kDU5USBUe5hBeA._leywBKM5fjI6opBI8cQhAyEfj1e
struct _leywBKM5fjI6opBI8cQhAyEfj1e_t574DF15E8F437D9C02FB9DD36CE090561E17AE81;
// _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA
struct _za1hl4laeXrpCPhipDgCWTaGcooA_tF5B39C9A9F283D873FD617339BF0DE90C04400A9;
// <Module>/?????????????????????????????????????????
struct U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6;
// <Module>/?????????????????????????????????????????
struct U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88;
// <Module>/?????????????????????????????????????????
struct U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102;
// GoogleMobileAds.iOS.AdLoaderClient/_GofQR4EAfX2hD0bdVIwCH0WZwGz
struct _GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70;
// GoogleMobileAds.iOS.AdLoaderClient/_J1FI8fM30wJSEAEhDXGuOFvey9B
struct _J1FI8fM30wJSEAEhDXGuOFvey9B_t74CFBBDB154001865D1B340A267C7E2F02265476;
// GoogleMobileAds.iOS.AdLoaderClient/_QIxxmcONDiLd99UXYm2TFDihCVS
struct _QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2;
// GoogleMobileAds.iOS.AdLoaderClient/_RLv7HtUdTeAbp0VxmvKZJm3Yu0M
struct _RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E;
// GoogleMobileAds.iOS.AdLoaderClient/_Ui1Bn8WovkwTw1Yuu8VyX54juCf
struct _Ui1Bn8WovkwTw1Yuu8VyX54juCf_t7667EE495E1804E1816160CCF0D4715742F75B11;
// GoogleMobileAds.iOS.AdLoaderClient/_fz51zdLhxoaDkS13yalGYMD9apl
struct _fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218;
// GoogleMobileAds.iOS.AdLoaderClient/_oYCq6VgAsLvfIJRn9pDMOfQveh6
struct _oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F;
// GoogleMobileAds.iOS.AdLoaderClient/_pkatmrHxDeDh1gMbaNJt63dgPbDA
struct _pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100;
// GoogleMobileAds.iOS.AdLoaderClient/_vXfQseAIE9IbPtrDH4WEEXJFdiA
struct _vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo/_sqjDBw8QBlRLHS2SQPm0hC18Ngq
struct _sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B;
// _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B/_hJLCzgFsr5XwEFNZUdsLyRBbY1n
struct _hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E;
// <Module>/?????????????????????????????????????????/?????????????????????????????????????????
struct U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141;
// <Module>/?????????????????????????????????????????/?????????????????????????????????????????
struct U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadAdErrorClient_t576EE4D06F4BCE6CFA7709746249AC09BAC752BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeAdInteractionHandlerClient_t67E48A14F0DE4196E5B988AF4C286978320E51B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResponseInfoClient_t03446D1122701240801753551A07C20E71012BB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202EU5BU5D_t9433998B2C2434C99C02EFD586A87AAB5EB1BC04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CModuleU3E_tE84BC75BE4CCFBD4F664F8E59152CF872EF5DDEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _J1FI8fM30wJSEAEhDXGuOFvey9B_t74CFBBDB154001865D1B340A267C7E2F02265476_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _Ui1Bn8WovkwTw1Yuu8VyX54juCf_t7667EE495E1804E1816160CCF0D4715742F75B11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CModuleU3E_tE84BC75BE4CCFBD4F664F8E59152CF872EF5DDEC____U206EU206DU200FU202AU202CU206FU206DU202DU206EU200EU206DU200FU200FU202CU200CU206CU206EU202CU200FU206DU200CU206DU206DU206CU200EU206BU202CU200DU206AU202CU202BU200BU202DU202EU206CU200CU200BU200FU200BU202EU202E_3_FieldInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdLoaderClient__GbDZM1zGDd62YIKWvo34aLoK0hJ_mF8668A784452427A8F3B2DF569AE2AEFDD295057_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdLoaderClient__KXiot2XhBIWIVBIyEBvKgzJXRiO_m16C218EAE6C95C2685E458717EE50FEEC009EE2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdLoaderClient__hwkIXdvVTMzmXJbCjLlHx4afHwA_mBFFEF67DB0FD6E8C8BA3B971D7397BF3E7F6902C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdLoaderClient__mL3lFUhDMo1C1G0gcZjWUWEBOTD_mADD4D33CCC6B477230E0C02E51CA3C1F0CE7E2CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdLoaderClient__ntP80MzJDFgLG7rla6v0fAaliBf_m043B63534047341D9C2C2870A8BE3B2E0E152405_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdLoaderClient__puFBI5ScfwSMkuQg05abil8OXCEA_mADA4297DB604AC3CDC23E1A98AC186E3C2CD9A3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdLoaderClient__tQ8p2ZSMHwgUIO5TT8bZ33raxjD_m53EDCE6C64AA5AEA7F6177DF076A2D935B92F258_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE029B6A6F149DDDE86FCF5B3D2CA2EDDBC7F4A6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mF539FDC7C25A8DF152D95DE0711708F1806E424A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mB0D824DF87A2347FE9B6F7EDF88397FBC825008F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_get_Count_m79A3D1AF30F9D23D4B094A34F713E5C519258A8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_CopyTo_m87398D95BED8C0626A669D782ECE31DE73392BDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _5cABXlEfG0XrM4WXXDifxKEqMEo__uyQChhTuYAD4XmnCPT7w5kYlPWK_mF117471058E918D701EDBCAE2C6BB56449A77822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _J1FI8fM30wJSEAEhDXGuOFvey9B__exVCA6yRpJN887O3jLHeg5pK3YA_m140204F04A67A363422469F7489A2E7AF5DF217C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _V1fgpHIlEfdgcIGdMwPd9AxlM8B__x9YfnbZGadeTOhHhoBbvwtcBB7F_mFBB41A45952F2B4E1AFD794E1F198DE074783FE2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20;
struct U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF;
struct U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202EU5BU5D_t9433998B2C2434C99C02EFD586A87AAB5EB1BC04;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t3A6696E01E2E8EE835C72A4B0C9E75120C7A122D* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t95FD5642BC2C9C7777B7A737F21A78E0AFDD8AA0* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t067B6565DAB51831954BD36DF5F65A806EDBEF99* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>
struct HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t857611F300C9CB2FC1E2FA1826D7F33CAA58AE0D* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t95FD5642BC2C9C7777B7A737F21A78E0AFDD8AA0  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* ____dictionary_0;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// GoogleMobileAds.Common.AdLoaderClientArgs
struct AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9  : public RuntimeObject
{
	// System.String GoogleMobileAds.Common.AdLoaderClientArgs::<AdUnitId>k__BackingField
	String_t* ___U3CAdUnitIdU3Ek__BackingField_0;
	// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType> GoogleMobileAds.Common.AdLoaderClientArgs::<AdTypes>k__BackingField
	HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4* ___U3CAdTypesU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> GoogleMobileAds.Common.AdLoaderClientArgs::<FormatIds>k__BackingField
	Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* ___U3CFormatIdsU3Ek__BackingField_2;
	// System.Int32 GoogleMobileAds.Common.AdLoaderClientArgs::<NumberOfAdsToLoad>k__BackingField
	int32_t ___U3CNumberOfAdsToLoadU3Ek__BackingField_3;
};

// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___U3CKeywordsU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CExtrasU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376* ___U3CMediationExtrasU3Ek__BackingField_4;
};

struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D_StaticFields
{
	// System.String GoogleMobileAds.Api.AdRequest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;
};

// GoogleMobileAds.Api.AdValue
struct AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD  : public RuntimeObject
{
	// GoogleMobileAds.Api.AdValue/PrecisionType GoogleMobileAds.Api.AdValue::<Precision>k__BackingField
	int32_t ___U3CPrecisionU3Ek__BackingField_0;
	// System.Int64 GoogleMobileAds.Api.AdValue::<Value>k__BackingField
	int64_t ___U3CValueU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Api.AdValue::<CurrencyCode>k__BackingField
	String_t* ___U3CCurrencyCodeU3Ek__BackingField_2;
};
struct Il2CppArrayBounds;

// GoogleMobileAds.Common.DummyNativeClient
struct DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F  : public RuntimeObject
{
	// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs> GoogleMobileAds.Common.DummyNativeClient::OnAdFailedToLoad
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* ___OnAdFailedToLoad_0;
	// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs> GoogleMobileAds.Common.DummyNativeClient::OnCustomNativeAdLoaded
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ___OnCustomNativeAdLoaded_1;
	// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs> GoogleMobileAds.Common.DummyNativeClient::OnCustomNativeAdClicked
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ___OnCustomNativeAdClicked_2;
	// System.EventHandler`1<GoogleMobileAds.Common.NativeClientEventArgs> GoogleMobileAds.Common.DummyNativeClient::OnNativeAdLoaded
	EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* ___OnNativeAdLoaded_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyNativeClient::OnNativeAdImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnNativeAdImpression_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyNativeClient::OnNativeAdClicked
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnNativeAdClicked_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyNativeClient::OnNativeAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnNativeAdOpening_6;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyNativeClient::OnNativeAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnNativeAdClosed_7;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// GoogleMobileAds.GoogleMobileAdsNativeClientFactory
struct GoogleMobileAdsNativeClientFactory_t56A85695ED415D0555B943F8286F9D133C1E5A17  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// GoogleMobileAds.Common.NativeUtils
struct NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E  : public RuntimeObject
{
};

struct NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_StaticFields
{
	// System.String GoogleMobileAds.Common.NativeUtils::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// _HFkddgMsrMSEe0kDU5USBUe5hBeA._leywBKM5fjI6opBI8cQhAyEfj1e
struct _leywBKM5fjI6opBI8cQhAyEfj1e_t574DF15E8F437D9C02FB9DD36CE090561E17AE81  : public RuntimeObject
{
};

// _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA
struct _za1hl4laeXrpCPhipDgCWTaGcooA_tF5B39C9A9F283D873FD617339BF0DE90C04400A9  : public RuntimeObject
{
};

// <Module>/?????????????????????????????????????????
struct U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6  : public RuntimeObject
{
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U202AU206AU202EU206AU200CU200CU200EU206DU206FU202BU202DU202AU202CU206BU202AU206EU202DU206FU202CU202DU200FU202BU206BU200BU200FU200EU206EU200EU200EU202CU206EU200EU206FU202CU202BU202AU202EU202EU200DU200EU202E_0;
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U202AU202DU200CU206EU200EU202CU202BU200CU202DU206DU206BU206EU202BU206BU206BU206EU206DU200CU200BU206FU206CU206EU206AU206EU206DU206CU206BU200BU206BU206BU206EU202EU200DU206DU206DU206AU200CU206BU200EU200CU202E_1;
	// System.IO.Stream <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___U202BU200CU200FU202CU202DU200FU202AU206BU202CU202BU202BU202DU206CU202AU202BU202DU206AU206CU200FU202AU202BU206CU206EU206FU206EU206BU200FU202AU206EU200BU202AU206CU202DU200BU202CU200BU202BU206EU206CU200FU202E_2;
};

// <Module>/?????????????????????????????????????????
struct U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88  : public RuntimeObject
{
	// System.Byte[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U202AU206BU206BU206DU202EU202BU200CU202DU200BU202BU200FU206BU200CU202CU206AU202DU206DU200FU202CU202DU206FU200DU202EU206FU200CU202AU202EU202CU202DU206BU202BU202DU202AU200EU200CU206CU200CU202DU200FU200FU202E_0;
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U202CU206FU202EU200FU200EU200BU202BU200FU200FU200DU202CU202CU202EU202AU202CU200BU200DU206BU200BU202BU206FU200DU200DU202BU202CU200CU206CU206DU206EU202DU200DU206EU206DU200FU200CU202BU206DU200CU206FU206EU202E_1;
	// System.IO.Stream <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___U200CU202DU202DU200BU206BU200BU200FU200FU202CU202BU206FU206BU206EU202DU202DU202BU202EU206EU206EU200BU200CU206AU206BU206AU202EU202CU206AU202EU206AU206FU202EU200EU206CU206CU206DU206EU200DU206BU206AU206AU202E_2;
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U202CU202AU206BU202EU206CU206DU202BU200FU200BU202CU206EU206FU202CU202AU202DU202BU202AU200CU206BU200EU200FU200DU200FU206DU202BU206FU206DU200EU200DU206DU206BU202DU200FU206EU202AU200BU206EU206FU202CU206DU202E_3;
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U206FU206DU206AU206DU206CU206AU206AU206CU206FU202EU200BU202DU202EU206FU200CU206CU202AU200EU202BU200DU200EU202CU200CU206CU206EU202CU206EU200DU206AU200FU206CU206DU202CU206AU206AU206BU206BU206AU202DU202CU202E_4;
};

// GoogleMobileAds.iOS.AdLoaderClient/_J1FI8fM30wJSEAEhDXGuOFvey9B
struct _J1FI8fM30wJSEAEhDXGuOFvey9B_t74CFBBDB154001865D1B340A267C7E2F02265476  : public RuntimeObject
{
	// System.WeakReference GoogleMobileAds.iOS.AdLoaderClient/_J1FI8fM30wJSEAEhDXGuOFvey9B::_uKTbPfgunggunRhi7MQCbZdmk9O
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ____uKTbPfgunggunRhi7MQCbZdmk9O_0;
	// GoogleMobileAds.iOS.AdLoaderClient/_Ui1Bn8WovkwTw1Yuu8VyX54juCf GoogleMobileAds.iOS.AdLoaderClient/_J1FI8fM30wJSEAEhDXGuOFvey9B::_f4CW6i607PYNzeddDqQ3sM60y9P
	_Ui1Bn8WovkwTw1Yuu8VyX54juCf_t7667EE495E1804E1816160CCF0D4715742F75B11* ____f4CW6i607PYNzeddDqQ3sM60y9P_1;
};

// GoogleMobileAds.iOS.AdLoaderClient/_Ui1Bn8WovkwTw1Yuu8VyX54juCf
struct _Ui1Bn8WovkwTw1Yuu8VyX54juCf_t7667EE495E1804E1816160CCF0D4715742F75B11  : public RuntimeObject
{
	// GoogleMobileAds.iOS.AdLoaderClient GoogleMobileAds.iOS.AdLoaderClient/_Ui1Bn8WovkwTw1Yuu8VyX54juCf::_y03NhX1PuNhkoE1SpQgzxEuM00f
	AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* ____y03NhX1PuNhkoE1SpQgzxEuM00f_0;
};

// <Module>/?????????????????????????????????????????/?????????????????????????????????????????
struct U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3  : public RuntimeObject
{
	// <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????/?????????????????????????????????????????::????????????????????????????????????????
	U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202EU5BU5D_t9433998B2C2434C99C02EFD586A87AAB5EB1BC04* ___U200FU200FU206BU200BU202EU202CU202DU200BU200FU202DU206BU202DU200CU200EU202BU206BU200BU206CU200DU202AU202CU200DU202DU200EU202DU200CU206AU202DU206DU202DU202DU206EU206AU206AU206DU206AU200FU200FU200CU202E_0;
	// System.Int32 <Module>/?????????????????????????????????????????/?????????????????????????????????????????::????????????????????????????????????????
	int32_t ___U206DU200EU202DU206BU202AU206CU202DU206AU202CU202EU206DU202DU200FU206AU200CU200EU206CU202BU202CU202AU206CU200DU202CU200BU206BU206EU202BU206FU202AU202DU202AU200DU202CU200CU202AU206CU206DU200BU206AU202E_1;
	// System.Int32 <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????
	int32_t ___U200DU206EU200CU200CU206EU206CU206AU202BU202AU202CU202DU200CU206DU206EU200FU200CU202BU202AU206DU200CU202AU200EU206BU200EU206EU206BU202EU206DU200BU200EU200BU202AU200FU206EU200FU200FU200FU202EU206CU202AU202E_2;
	// System.UInt32 <Module>/?????????????????????????????????????????/?????????????????????????????????????????::????????????????????????????????????????
	uint32_t ___U206BU206CU202EU200DU202AU202DU202BU206BU202AU202BU200FU202DU200EU206AU206BU202AU206FU206FU206CU206AU206AU200DU200EU202CU206EU206DU206BU206AU200BU200DU202DU200BU202BU200BU206AU200CU202CU200FU202AU202E_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::<AdValue>k__BackingField
	AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* ___U3CAdValueU3Ek__BackingField_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// GoogleMobileAds.Common.CustomNativeClientEventArgs
struct CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Common.ICustomNativeAdClient GoogleMobileAds.Common.CustomNativeClientEventArgs::<nativeAdClient>k__BackingField
	RuntimeObject* ___U3CnativeAdClientU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Common.CustomNativeClientEventArgs::<assetName>k__BackingField
	String_t* ___U3CassetNameU3Ek__BackingField_2;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::<LoadAdErrorClient>k__BackingField
	RuntimeObject* ___U3CLoadAdErrorClientU3Ek__BackingField_1;
};

// GoogleMobileAds.iOS.NativeAdTypes
struct NativeAdTypes_t667526929D789B3FAE35DF13A63FBAF70A5E8733 
{
	// System.Int32 GoogleMobileAds.iOS.NativeAdTypes::CustomNativeAd
	int32_t ___CustomNativeAd_0;
	// System.Int32 GoogleMobileAds.iOS.NativeAdTypes::NativeAd
	int32_t ___NativeAd_1;
};

// GoogleMobileAds.Common.NativeClientEventArgs
struct NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Common.INativeAdClient GoogleMobileAds.Common.NativeClientEventArgs::<nativeAdClient>k__BackingField
	RuntimeObject* ___U3CnativeAdClientU3Ek__BackingField_1;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <Module>/?????????????????????????????????????????
#pragma pack(push, tp, 1)
struct U202AU202CU200EU202DU202BU200FU202EU200CU200CU206EU202BU200EU200BU200EU206FU206FU206CU202CU200EU206FU202DU202BU200BU206DU200FU202AU202CU202DU202AU206CU200DU206DU200BU206AU206AU206EU202DU206CU206AU206CU202E_tE2459D7D1D4C4B413021311A71366C14E02044FB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U202AU202CU200EU202DU202BU200FU202EU200CU200CU206EU202BU200EU200BU200EU206FU206FU206CU202CU200EU206FU202DU202BU200BU206DU200FU202AU202CU202DU202AU206CU200DU206DU200BU206AU206AU206EU202DU206CU206AU206CU202E_tE2459D7D1D4C4B413021311A71366C14E02044FB__padding[64];
	};
};
#pragma pack(pop, tp)

// <Module>/?????????????????????????????????????????
struct U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382 
{
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U202CU202BU206AU200BU200FU200DU200DU206DU200FU202DU206AU206FU202BU202CU200EU206FU206CU206BU206CU200CU202AU202BU206BU200BU200EU202DU206CU202EU200DU206BU206DU200BU202EU202EU206AU206FU206BU206BU206FU202DU202E_0;
};

// <Module>/?????????????????????????????????????????
struct U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475 
{
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* ___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0;
	// System.Int32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	int32_t ___U206DU202EU202CU206CU206CU202BU206BU206CU200BU200FU206CU200CU202CU206BU202AU206BU200CU206EU202EU206BU202CU206FU202AU206EU200BU202CU206EU202DU200BU200EU202EU202AU206DU206FU206FU206DU202DU206FU206DU206FU202E_1;
};
// Native definition for P/Invoke marshalling of <Module>/?????????????????????????????????????????
struct U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475_marshaled_pinvoke
{
	U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF* ___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0;
	int32_t ___U206DU202EU202CU206CU206CU202BU206BU206CU200BU200FU206CU200CU202CU206BU202AU206BU200CU206EU202EU206BU202CU206FU202AU206EU200BU202CU206EU202DU200BU200EU202EU202AU206DU206FU206FU206DU202DU206FU206DU206FU202E_1;
};
// Native definition for COM marshalling of <Module>/?????????????????????????????????????????
struct U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475_marshaled_com
{
	U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF* ___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0;
	int32_t ___U206DU202EU202CU206CU206CU202BU206BU206CU200BU200FU206CU200CU202CU206BU202AU206BU200CU206EU202EU206BU202CU206FU202AU206EU200BU202CU206EU202DU200BU200EU202EU202AU206DU206FU206FU206DU202DU206FU206DU206FU202E_1;
};

// <Module>/?????????????????????????????????????????
struct U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF 
{
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U202BU206AU206BU202AU206DU206BU206EU200FU200EU202CU206BU200EU202AU202CU200DU206CU200FU206AU202CU200BU206FU206FU206BU202EU200DU202AU206CU202DU206CU206FU200CU200FU200CU202BU202AU200BU206FU200BU206DU202EU202E_0;
};

// <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????
struct U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07 
{
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????
	U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* ___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0;
};
// Native definition for P/Invoke marshalling of <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????
struct U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07_marshaled_pinvoke
{
	U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF* ___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0;
};
// Native definition for COM marshalling of <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????
struct U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07_marshaled_com
{
	U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF* ___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0;
};

// <Module>
struct U3CModuleU3E_tE84BC75BE4CCFBD4F664F8E59152CF872EF5DDEC 
{
};

struct U3CModuleU3E_tE84BC75BE4CCFBD4F664F8E59152CF872EF5DDEC_StaticFields
{
	// System.Byte[] <Module>::?????????????????????????????????????????
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U206CU200DU200BU202CU206EU206FU202CU200EU202EU202AU206BU202EU202AU206DU202EU200BU200FU202BU200CU206CU206EU200FU200CU202BU206CU206DU200BU206CU202AU206FU206FU202CU202AU202CU200CU206BU206FU202BU200FU202CU202E_2;
	// <Module>/????????????????????????????????????????? <Module>::?????????????????????????????????????????
	U202AU202CU200EU202DU202BU200FU202EU200CU200CU206EU202BU200EU200BU200EU206FU206FU206CU202CU200EU206FU202DU202BU200BU206DU200FU202AU202CU202DU202AU206CU200DU206DU200BU206AU206AU206EU202DU206CU206AU206CU202E_tE2459D7D1D4C4B413021311A71366C14E02044FB ___U206EU206DU200FU202AU202CU206FU206DU202DU206EU200EU206DU200FU200FU202CU200CU206CU206EU202CU200FU206DU200CU206DU206DU206CU200EU206BU202CU200DU206AU202CU202BU200BU202DU202EU206CU200CU200BU200FU200BU202EU202E_3;
};

// GoogleMobileAds.iOS.AdLoaderClient
struct AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8  : public RuntimeObject
{
	// System.IntPtr GoogleMobileAds.iOS.AdLoaderClient::_bvTzjqlnTwk0qmycf0HogQ2Bb0Q
	intptr_t ____bvTzjqlnTwk0qmycf0HogQ2Bb0Q_0;
	// System.IntPtr GoogleMobileAds.iOS.AdLoaderClient::_dRkT5MyUguF3xXYV4ZZo31lbNfj
	intptr_t ____dRkT5MyUguF3xXYV4ZZo31lbNfj_1;
	// System.IntPtr GoogleMobileAds.iOS.AdLoaderClient::_04Jnarhm2tR0cJ1nQidElTJJixn
	intptr_t ____04Jnarhm2tR0cJ1nQidElTJJixn_2;
	// GoogleMobileAds.iOS.NativeAdTypes GoogleMobileAds.iOS.AdLoaderClient::_rscWxY3wnvdbnLGD2oQEvlFkedi
	NativeAdTypes_t667526929D789B3FAE35DF13A63FBAF70A5E8733 ____rscWxY3wnvdbnLGD2oQEvlFkedi_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> GoogleMobileAds.iOS.AdLoaderClient::_LHSgsAlw54ubFgRL393JGnRmbqBA
	Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* ____LHSgsAlw54ubFgRL393JGnRmbqBA_4;
	// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs> GoogleMobileAds.iOS.AdLoaderClient::_eUxqo0ZGBuDWzNGv69GKZOMLgLf
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ____eUxqo0ZGBuDWzNGv69GKZOMLgLf_5;
	// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs> GoogleMobileAds.iOS.AdLoaderClient::_1uTdEAfal6KWOmlsnUtgCoceOPBb
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ____1uTdEAfal6KWOmlsnUtgCoceOPBb_6;
	// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs> GoogleMobileAds.iOS.AdLoaderClient::_nusz6z1H5plNUJAx1m37sNu0WlD
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* ____nusz6z1H5plNUJAx1m37sNu0WlD_7;
	// System.EventHandler`1<GoogleMobileAds.Common.NativeClientEventArgs> GoogleMobileAds.iOS.AdLoaderClient::_aDGwi6zfbBrhxAg39YlzrSlUXo
	EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* ____aDGwi6zfbBrhxAg39YlzrSlUXo_8;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.AdLoaderClient::_arWxo3PYiXdhwATjPRqTJydQ0uh
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ____arWxo3PYiXdhwATjPRqTJydQ0uh_9;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.AdLoaderClient::_VynBjqN6ZSsQORpuxm4cMtY2tLq
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ____VynBjqN6ZSsQORpuxm4cMtY2tLq_10;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.AdLoaderClient::_8zQnnOydVdq4E0dEB6XrpGIXAuN
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ____8zQnnOydVdq4E0dEB6XrpGIXAuN_11;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.AdLoaderClient::_BgkMwCmIfooMhkDLFVCZdUbGPZb
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ____BgkMwCmIfooMhkDLFVCZdUbGPZb_12;
};

struct AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields
{
	// GoogleMobileAds.iOS.AdLoaderClient/_pkatmrHxDeDh1gMbaNJt63dgPbDA GoogleMobileAds.iOS.AdLoaderClient::_z4rTkE1tJtIDXEBhz83AtBa5iei
	_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* ____z4rTkE1tJtIDXEBhz83AtBa5iei_13;
	// GoogleMobileAds.iOS.AdLoaderClient/_vXfQseAIE9IbPtrDH4WEEXJFdiA GoogleMobileAds.iOS.AdLoaderClient::_6ai65su3oR3b7hjWasYZCGL5N3A
	_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* ____6ai65su3oR3b7hjWasYZCGL5N3A_14;
	// GoogleMobileAds.iOS.AdLoaderClient/_GofQR4EAfX2hD0bdVIwCH0WZwGz GoogleMobileAds.iOS.AdLoaderClient::_HMfyqYXBB9LMg7alsU2ungNM0P0
	_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* ____HMfyqYXBB9LMg7alsU2ungNM0P0_15;
	// GoogleMobileAds.iOS.AdLoaderClient/_oYCq6VgAsLvfIJRn9pDMOfQveh6 GoogleMobileAds.iOS.AdLoaderClient::_xc9xEOzd1P0cvqTNfASCRStOXlD
	_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* ____xc9xEOzd1P0cvqTNfASCRStOXlD_16;
	// GoogleMobileAds.iOS.AdLoaderClient/_fz51zdLhxoaDkS13yalGYMD9apl GoogleMobileAds.iOS.AdLoaderClient::_0SshYjbXCrT6Xv4vOXu53C6DJFq
	_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218* ____0SshYjbXCrT6Xv4vOXu53C6DJFq_17;
	// GoogleMobileAds.iOS.AdLoaderClient/_RLv7HtUdTeAbp0VxmvKZJm3Yu0M GoogleMobileAds.iOS.AdLoaderClient::_JYGF3O2kfHTWs3knRWt32FUbSZC
	_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E* ____JYGF3O2kfHTWs3knRWt32FUbSZC_18;
	// GoogleMobileAds.iOS.AdLoaderClient/_QIxxmcONDiLd99UXYm2TFDihCVS GoogleMobileAds.iOS.AdLoaderClient::_ZBbL6m53IjZuwew6qaeSDg1wCYG
	_QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2* ____ZBbL6m53IjZuwew6qaeSDg1wCYG_19;
	// _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo/_sqjDBw8QBlRLHS2SQPm0hC18Ngq GoogleMobileAds.iOS.AdLoaderClient::_dVYYJ2OBFHKCLXdEjo39GHgUnlC
	_sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B* ____dVYYJ2OBFHKCLXdEjo39GHgUnlC_20;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// GoogleMobileAds.iOS.LoadAdErrorClient
struct LoadAdErrorClient_t576EE4D06F4BCE6CFA7709746249AC09BAC752BC  : public RuntimeObject
{
	// System.IntPtr GoogleMobileAds.iOS.LoadAdErrorClient::error
	intptr_t ___error_0;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// GoogleMobileAds.iOS.NativeAdInteractionHandlerClient
struct NativeAdInteractionHandlerClient_t67E48A14F0DE4196E5B988AF4C286978320E51B8  : public RuntimeObject
{
	// System.IntPtr GoogleMobileAds.iOS.NativeAdInteractionHandlerClient::_h8R8tAmk7RkNLJCCbDABkkUrmXaA
	intptr_t ____h8R8tAmk7RkNLJCCbDABkkUrmXaA_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.iOS.NativeAdInteractionHandlerClient::assetIDMappings
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___assetIDMappings_1;
};

// GoogleMobileAds.iOS.ResponseInfoClient
struct ResponseInfoClient_t03446D1122701240801753551A07C20E71012BB3  : public RuntimeObject
{
	// System.IntPtr GoogleMobileAds.iOS.ResponseInfoClient::_iosResponseInfo
	intptr_t ____iosResponseInfo_0;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo
struct _5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73  : public RuntimeObject
{
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::_seVs0aajbbSrYwUUne4mC9qwqsE
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ____seVs0aajbbSrYwUUne4mC9qwqsE_0;
	// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::_h8R8tAmk7RkNLJCCbDABkkUrmXaA
	intptr_t ____h8R8tAmk7RkNLJCCbDABkkUrmXaA_1;
	// GoogleMobileAds.iOS.NativeAdInteractionHandlerClient _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::_JraWJG4bYLMuGhZjQ4LEZRSUL8D
	NativeAdInteractionHandlerClient_t67E48A14F0DE4196E5B988AF4C286978320E51B8* ____JraWJG4bYLMuGhZjQ4LEZRSUL8D_2;
};

// _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B
struct _V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06  : public RuntimeObject
{
	// System.Action`1<System.String> _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::_jnUZFCWC8xB4HKolPN7GG1qFpEZ
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ____jnUZFCWC8xB4HKolPN7GG1qFpEZ_0;
	// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::_bQFLfZbRK2wvbyfGf6MJDQzImUY
	intptr_t ____bQFLfZbRK2wvbyfGf6MJDQzImUY_1;
	// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::_AekAyMieaX7EpOjH56b5SNuE1NiA
	intptr_t ____AekAyMieaX7EpOjH56b5SNuE1NiA_2;
};

struct _V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06_StaticFields
{
	// _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B/_hJLCzgFsr5XwEFNZUdsLyRBbY1n _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::_z4rTkE1tJtIDXEBhz83AtBa5iei
	_hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E* ____z4rTkE1tJtIDXEBhz83AtBa5iei_3;
};

// <Module>/?????????????????????????????????????????
struct U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102  : public RuntimeObject
{
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????::????????????????????????????????????????
	U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* ___U202BU200DU200FU206CU202BU200BU202BU200FU206EU202AU202EU202BU202BU206BU202CU200BU206CU206EU202DU202EU202CU206FU206AU200BU206AU206CU206AU200EU202EU200CU202DU200BU202CU206EU206DU206BU202DU200FU200EU202E_0;
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* ___U202EU200FU206CU206AU200CU206EU202DU206BU202EU200DU206EU206BU200EU206BU206BU202DU206CU206AU206FU200DU200DU206BU202CU200FU200EU200CU202BU206DU202BU206DU206AU206EU206EU200EU200DU202CU202AU202BU200FU200CU202E_1;
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* ___U200CU206AU202EU200BU206DU200DU200CU206FU206DU206FU200FU206AU206FU200CU200CU206DU206CU200CU200CU200DU202DU200BU200CU200BU206EU206CU206CU206BU206DU202AU206FU200EU206EU202EU206EU202CU200BU200FU200CU206AU202E_2;
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* ___U206EU200BU206DU200BU206EU206BU202EU202BU202CU200BU206AU206AU206CU200DU200BU200BU206CU200CU202CU200DU206EU206EU202AU206AU202AU206BU206DU200BU206BU200BU200FU202BU206BU200DU202EU200DU206CU206CU206DU200FU202E_3;
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* ___U200DU206CU202BU200FU206DU200DU206CU200DU202CU206AU202BU206AU202DU202DU206FU202CU202AU206BU202BU206EU206CU202CU202BU202BU202AU206AU200CU200FU202CU206EU202DU206EU200BU206DU206DU200FU206DU202BU200BU206AU202E_4;
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* ___U206BU200BU200BU202AU202DU200DU202EU206FU200EU206EU200EU202BU206EU206AU206DU202AU202EU206CU200FU200EU200FU200BU202CU200CU200DU206EU206FU200EU200BU206AU202AU202EU200FU200CU206EU200BU200BU206EU202AU200DU202E_5;
	// <Module>/?????????????????????????????????????????/????????????????????????????????????????? <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141* ___U200FU202AU202CU200CU202BU206FU200FU200CU202AU200BU200EU200CU200EU200FU200BU206BU200BU200EU200CU202CU200FU206EU202BU206BU200CU200FU202DU206BU202DU206AU200EU202CU206EU206FU200FU202CU202CU202DU200DU206DU202E_6;
	// <Module>/?????????????????????????????????????????/????????????????????????????????????????? <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3* ___U206FU202BU200FU200DU200EU200EU202AU202EU200FU200DU202EU200CU202DU202EU202AU200CU200CU206BU200CU206FU206FU200BU202EU200EU200DU206DU200EU206FU206EU202CU202BU202EU200FU200DU200BU200EU200FU202AU206EU200EU202E_7;
	// <Module>/????????????????????????????????????????? <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* ___U200EU206BU202BU206CU202DU206EU200BU206DU206FU200EU202BU202CU200CU200BU206AU200FU202AU202CU200FU206EU206FU206FU206CU206FU200EU202DU200DU200DU206FU206AU206FU202DU202BU202DU200BU206EU202AU206BU206CU206FU202E_8;
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* ___U200DU206EU200DU202BU206CU200BU206DU200BU206CU200EU206BU206CU206FU200CU200FU202DU206EU206BU202AU202BU206CU206AU206DU200CU202DU206FU200FU200BU202DU206BU200DU200EU202EU206CU202EU202EU202BU202DU200FU202AU202E_9;
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????::????????????????????????????????????????
	U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20* ___U202AU202EU202CU200BU202AU206AU200FU206BU202CU206EU202AU202DU206EU206BU206EU200BU200EU202EU200BU200CU200BU200CU206AU206AU200BU206FU202BU202BU206CU200DU206FU200EU200DU200DU200CU206FU202EU202BU206BU202E_10;
	// <Module>/????????????????????????????????????????? <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* ___U202BU200BU206DU206FU200FU202CU202DU200CU206AU206AU202EU206FU206AU206CU206AU200CU200FU206CU200EU200CU202EU206DU200DU200FU202BU206DU200CU202BU202AU206FU200BU200BU206EU206AU202EU202CU200DU202AU206AU206FU202E_11;
	// <Module>/?????????????????????????????????????????/????????????????????????????????????????? <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141* ___U202DU200DU206BU202EU206EU202AU206FU200FU202DU202AU202CU206BU206DU206BU202BU202CU206AU202AU200DU200EU206DU200BU200EU200FU200CU200EU200DU206DU206EU206AU206BU200FU206CU202EU202DU206BU206CU200DU202AU202DU202E_12;
	// System.Boolean <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	bool ___U200EU200EU206EU202CU202BU206CU206AU202DU200FU202DU200EU200CU206DU200DU200EU206DU206CU206BU200FU202DU206FU202AU200FU206CU200EU202DU200EU202DU206CU202BU200BU202EU206CU200EU202BU200FU202EU206AU202BU202EU202E_13;
	// System.UInt32 <Module>/?????????????????????????????????????????::????????????????????????????????????????
	uint32_t ___U206FU200FU202DU202CU200DU202DU206FU206DU202AU202CU200DU202DU200FU200EU206CU202BU206DU202EU202EU206CU202BU206AU206EU200EU200EU206CU200CU206BU206AU206CU200FU206EU206FU200CU202BU206EU206EU206EU206BU202E_14;
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U202DU202BU206FU200DU206DU202DU202EU206DU200EU202BU202DU200BU200CU202DU202DU202EU206CU202DU200DU206EU200BU200BU206EU202CU200DU200CU200BU200DU202BU200CU202BU200FU200CU200CU202EU206DU202EU206CU202DU206FU202E_15;
	// <Module>/????????????????????????????????????????? <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475 ___U200EU202EU200CU200FU202DU206EU202BU200BU200BU200FU206AU202DU200CU206EU202AU206FU206CU206BU206CU200EU206AU200EU206AU202CU202AU202CU202BU202EU206BU200EU200CU200DU202BU202DU202AU202AU206BU202BU200DU202DU202E_16;
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U206EU200CU200DU202EU200CU202BU202DU200DU202EU206FU206DU206BU200BU206AU200DU206BU202EU202CU202AU202BU206BU202BU200DU200BU202EU202EU202AU206CU206DU202EU202AU202CU206EU202AU200FU200FU202DU200EU206DU206CU202E_17;
};

// <Module>/?????????????????????????????????????????/?????????????????????????????????????????
struct U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141  : public RuntimeObject
{
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????
	U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20* ___U206FU202EU200FU200CU200DU202DU200EU202BU206CU202AU200CU200FU202CU202DU206EU206AU202AU202EU206AU202EU202BU206FU202AU202AU200FU206DU202AU202AU202DU206FU200DU206DU200CU202CU202AU200DU206AU202BU206EU202BU202E_0;
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????
	U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20* ___U200BU202AU202AU202EU202DU202DU206BU202DU202AU202BU202AU202CU206FU202BU202BU206AU202EU200BU200EU206AU200BU202AU206CU206FU202CU202AU200CU202EU200BU200BU202EU206AU202BU206BU200EU202CU206FU206EU202AU200FU202E_1;
	// <Module>/????????????????????????????????????????? <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????
	U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF ___U200DU206DU206FU206AU206CU200BU206EU200EU202AU200BU200FU206EU202DU200BU206FU200CU202BU200DU200FU206EU206DU202EU206EU202DU200FU202EU206AU200EU202EU200CU206CU206EU200EU200BU206DU206DU206DU200BU200CU206CU202E_2;
	// <Module>/????????????????????????????????????????? <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????
	U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF ___U200DU200FU200BU200DU206FU202DU202BU202EU200EU200FU206AU206EU200DU206CU202BU206AU200EU200EU202BU206CU206DU202DU206DU206FU206BU202DU202AU202BU206CU206BU206CU202CU206BU200EU202AU206CU206BU206FU200DU206FU202E_3;
	// <Module>/????????????????????????????????????????? <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????
	U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475 ___U200DU200DU206DU206DU202BU202BU200EU206CU200FU200DU200FU206DU200FU206BU206CU200DU206CU206FU206EU202DU200CU200DU202EU202EU202BU206DU202DU202BU202CU206EU206CU200DU200DU206AU202DU200EU200EU200DU206EU200EU202E_4;
	// System.UInt32 <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U200DU202DU202CU206EU206CU206AU206DU200CU202AU206AU206AU200FU202CU206AU202BU202EU206CU200DU206CU200BU200DU202CU206AU202AU206BU206DU206FU206EU202DU202BU206DU206CU202BU202DU206EU206DU206FU206BU206CU206DU202E_5;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E  : public RuntimeObject
{
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gcHandle_1;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>
struct EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Common.NativeClientEventArgs>
struct EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// GoogleMobileAds.iOS.AdLoaderClient/_GofQR4EAfX2hD0bdVIwCH0WZwGz
struct _GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70  : public MulticastDelegate_t
{
};

// GoogleMobileAds.iOS.AdLoaderClient/_QIxxmcONDiLd99UXYm2TFDihCVS
struct _QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2  : public MulticastDelegate_t
{
};

// GoogleMobileAds.iOS.AdLoaderClient/_RLv7HtUdTeAbp0VxmvKZJm3Yu0M
struct _RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E  : public MulticastDelegate_t
{
};

// GoogleMobileAds.iOS.AdLoaderClient/_fz51zdLhxoaDkS13yalGYMD9apl
struct _fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218  : public MulticastDelegate_t
{
};

// GoogleMobileAds.iOS.AdLoaderClient/_oYCq6VgAsLvfIJRn9pDMOfQveh6
struct _oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F  : public MulticastDelegate_t
{
};

// GoogleMobileAds.iOS.AdLoaderClient/_pkatmrHxDeDh1gMbaNJt63dgPbDA
struct _pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100  : public MulticastDelegate_t
{
};

// GoogleMobileAds.iOS.AdLoaderClient/_vXfQseAIE9IbPtrDH4WEEXJFdiA
struct _vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3  : public MulticastDelegate_t
{
};

// _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo/_sqjDBw8QBlRLHS2SQPm0hC18Ngq
struct _sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B  : public MulticastDelegate_t
{
};

// _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B/_hJLCzgFsr5XwEFNZUdsLyRBbY1n
struct _hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// <Module>/?????????????????????????????????????????[]
struct U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF  : public RuntimeArray
{
	ALIGN_FIELD (8) U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF m_Items[1];

	inline U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF value)
	{
		m_Items[index] = value;
	}
};
// <Module>/?????????????????????????????????????????[]
struct U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20  : public RuntimeArray
{
	ALIGN_FIELD (8) U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475 m_Items[1];

	inline U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0), (void*)NULL);
	}
	inline U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0), (void*)NULL);
	}
};
// <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????[]
struct U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202EU5BU5D_t9433998B2C2434C99C02EFD586A87AAB5EB1BC04  : public RuntimeArray
{
	ALIGN_FIELD (8) U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07 m_Items[1];

	inline U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0), (void*)NULL);
	}
	inline U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0), (void*)NULL);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08* Dictionary_2_get_Keys_mFDF56AF2BA76C6CCAF215187B66751FC03E474FD_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyCollection_get_Count_m1F39D479F9DEA1AE1A208D2B717A4059D2C4AC5D_gshared (KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mDA4751F464411AB4C757C63C6EDBF4891BFD6891_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32Enum>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mC7FB9D44EF9B75D89964DC508B4B08D8DA98339E_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_get_Item_mB8DAA0FB328D474EEE65CAF7F132DD9569BBC3A8_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;

// System.Void <Module>::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E_U202BU200BU202BU206EU202DU200CU202BU206FU206EU200CU206DU202DU202DU206CU200DU200CU206DU206DU206CU200BU200FU206BU200FU206EU206EU202BU206BU202CU206EU200BU202DU200BU206CU200BU206DU200DU206BU206DU200CU202BU202E_m33E4B591667369C0D48479CE7A67444B97D0E206 (const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E__ctor_mD7346A4A2A72B79843602A8D72FFED4E3A6A3C4C (U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_U200FU206DU206DU200EU202CU202DU200DU200CU200BU200BU200EU202EU202DU200DU200EU200BU202EU206BU206FU206FU200CU206EU200DU200DU202BU202DU206DU206EU206CU206FU200BU202CU202AU206FU200EU200FU202CU200DU200FU202EU202E_m4648D6DDE9FCCC2E2DA23733A4168DD845A3FE07 (U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* p0, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.IO.Stream,System.IO.Stream,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_U206DU202AU206DU200EU200FU206CU206AU206DU202BU206EU202BU206BU202DU202CU200DU200DU206AU200BU206AU202EU202DU200DU206DU206BU206DU200FU206FU202CU206CU200DU202CU202DU206BU200CU206EU206CU206FU200BU206BU206EU202E_m7F3472B3C84AEA7D2C8A1DD5B12CD51E717D2758 (U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p1, int64_t p2, int64_t p3, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m5BAFB4CE0C3BB700DB05907C334DD64834D75D1B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, bool ___writable1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Byte[] <Module>::?????????????????????????????????????????(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* U3CModuleU3E_U202CU206AU206AU202EU200BU206CU206FU202BU202AU200DU200EU202AU206CU200FU200DU202EU200EU200FU202BU206EU202EU200DU202CU202DU200CU206FU206EU206FU202AU200DU202DU200CU202EU202DU200EU200EU206FU202AU206BU206BU202E_mB18B6D829F0F218E0D08EC5B2F17B178751645DC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* p0, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202BU206FU200DU200EU200BU202BU202DU200FU206EU200DU206CU206DU202EU200DU206CU202BU202CU200CU202AU200FU206DU206BU202AU206FU200FU202AU202CU200EU202EU206FU206EU202BU200EU206EU206FU202EU200EU200EU206FU206EU202E_m06B03079972D7E477C0573912085484A7C019AFD (U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF* __this, const RuntimeMethod* method) ;
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202CU200EU200FU206FU200EU202BU202CU206EU206FU200EU200CU200CU202CU200DU206BU200EU200BU206EU206FU202AU206AU206DU202EU202EU206EU206BU206EU206DU202DU202DU206BU200EU206EU206CU202EU206CU200DU200FU202DU206AU202E_m4BC344CC5E999A9A82A1D574E36B5BE43CAB6793 (U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF* __this, U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* p0, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E__ctor_m372A617E298A608CB3361DEB5DA2E8CE2AC5A165 (U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475* __this, int32_t p0, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U200CU206BU202DU200BU206DU206AU206AU200DU202BU206BU200EU200CU200EU202AU202AU202DU200BU206DU206DU202BU200DU202BU202DU202CU200FU200FU200BU200BU206DU202EU206AU200DU206BU206FU200CU200CU206EU200EU200FU200EU202E_m802B57CB47B9B1CDBD8A26D1C10E44EC2247CCFA (U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475* __this, const RuntimeMethod* method) ;
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U200BU200DU206DU202DU200BU206DU206AU206AU200CU206AU206FU200DU200EU202BU202CU200EU202DU202DU206FU206FU200FU206EU202CU200FU202DU206CU206EU202BU206EU202DU200FU206AU206AU202EU200BU206FU206DU202CU200BU200FU202E_m110AF332C1D3EBAB0ED019DFB3F4ED6341A2F4B5 (U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475* __this, U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* p0, const RuntimeMethod* method) ;
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U200FU202CU200DU206EU200CU206FU206DU202AU206DU202AU206DU206FU202AU206AU206DU206AU206AU206DU200DU200CU202CU202DU206AU200BU206EU206EU206BU206DU200CU200BU202BU206AU206EU206CU200CU200FU202BU206AU200BU202AU202E_mCFC4B0F295A359B806920E4006C1517C4B774A34 (U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475* __this, U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* p0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E__ctor_m0096BD8DDA00E7775883CF15CEA629C5E3AE6454 (U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E__ctor_m211147541F0787B61909776C02DD8326BEF2A7F9 (U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E__ctor_mAA8E008A58B7327E1879050C651DE555420A2BA8 (U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E__ctor_mCB979A30555FD801D162AC852A6BFAE4546D57F2 (U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* __this, const RuntimeMethod* method) ;
// System.UInt32 System.Math::Max(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7 (uint32_t ___val10, uint32_t ___val21, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U200DU202DU202DU206AU202CU200BU206FU206EU202BU206AU200CU200EU202EU200DU202EU200BU200EU206FU200EU206EU200EU200CU202DU206AU202AU206BU202CU202EU202BU202DU206EU200FU206EU206DU200FU202AU206EU202EU200FU206EU202E_m4180F1BD21601BF722C7E2F0A27BE27ADB1A6E4A (U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* __this, uint32_t p0, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::????????????????????????????????????????(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_U202EU200FU202AU200DU202DU206BU202AU206CU202DU206BU206FU200BU206AU206FU200BU200CU206BU202AU202EU206EU206DU202BU202DU202CU200EU206DU206EU200CU202AU202BU200DU202AU206CU200DU206BU202CU202EU202DU202BU202E_m3E09060FBB177F4B8C0F385B97C94868C2C31540 (U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_U206DU202EU202AU200EU202EU206BU202EU200DU202AU202CU206DU200EU206DU206EU202CU200EU206DU202AU206CU200FU202EU202EU206EU206CU206BU206DU202BU200BU200DU200DU206DU202AU206CU206FU202DU206FU206EU206CU206DU200FU202E_mD37094EBBA336EE5C3A52A4AEA825F93D323F464 (U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141* __this, uint32_t p0, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_U206DU206CU200CU206DU200EU206FU200BU202EU200CU202DU206FU200BU200CU202EU202EU206CU206AU202BU202BU200EU206DU206AU206AU202EU202BU206CU200DU202AU206BU206DU202BU206EU200FU202BU206DU200BU202EU200FU200FU200FU202E_mEE5C0C49771E4A9B0C7FEF47D0F6732A22130BB1 (U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p0, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U206EU206FU206DU202CU206BU206CU206BU206EU200CU202AU206BU206DU206AU206CU206BU206DU206AU200CU206DU206DU202AU206FU206BU202EU200FU200BU200DU206DU200FU200FU206CU206FU200BU202DU206AU200BU200FU206FU202DU202BU202E_m10979CBF33ADA2BB92AA4BB3B1DCA04FE0686508 (U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p0, bool p1, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_U202EU202BU202BU206CU200FU206BU200FU202DU202DU200DU206EU206CU202AU206CU206DU200DU200CU202DU200EU202AU206FU202DU202AU200CU200EU200FU200BU206CU202BU206AU200DU202AU200BU202CU202AU202BU206FU206EU202EU202DU202E_mD9AA1FF89BC7CEF593E90FB1CA2F3E4316469B2B (U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_U206FU200BU206CU200CU200FU206DU200DU202DU206BU206EU206BU206EU200FU202AU200DU206EU202EU206BU202AU200DU202AU200DU202AU202BU206FU202EU206CU202BU202DU200EU202DU206FU206EU206FU206DU206FU206AU206BU206BU206FU202E_mF0FC1D44EE6A9B64944163728BA1517D891BD9DE (U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.IO.Stream,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_U206BU202DU202EU200FU200CU206AU206BU206EU206DU200EU202CU200DU206FU200FU200EU202BU206AU206EU206EU202EU200EU202EU202CU202EU206DU206FU202BU200DU202EU206AU206DU200CU200DU200CU202BU206EU206DU200CU202BU206AU202E_mEF8FFAFCB264FABB957326F19302214DADABB905 (U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p1, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U202DU202BU200BU206FU206CU200CU202BU206CU200CU200FU202DU202EU206AU202CU200CU200DU200FU206BU206EU200EU206BU202BU206DU206EU206DU202EU206CU206EU200FU200DU202BU206DU206AU202EU206BU202AU200EU206BU202DU206EU202E_m5F09A40A44CB0567F660E6BEC0339ABD81DE61D1 (U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* __this, uint8_t p0, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U200DU206AU206EU206DU206EU202BU202EU206FU202EU202BU206DU200FU206FU206CU206AU200DU206DU206DU202CU200BU202AU202CU206AU206AU200BU202BU200FU200BU202EU202CU200DU200DU200CU200FU200CU200CU206BU202EU206DU202EU202E_m22D5925512D8B10871F3FDDFF7F3F00EBE6D41D2 (U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U200DU202CU202DU200EU202DU202DU206DU202DU200FU206EU206EU202BU202DU200BU200FU202DU202BU206BU200CU202AU206AU202AU202AU202AU200EU202AU206CU202CU200FU200FU200DU206FU202EU202BU200BU206BU206EU206BU202EU206DU202E_m0519F9383125F57206536E5E3B2772F5FF86F9A2 (U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U200EU200FU200CU200EU202CU202CU206BU206FU202DU206BU200DU206DU202BU206BU202EU202CU200DU200DU206FU200BU206BU202EU206AU200CU206CU200DU202CU200DU206CU206AU206BU206DU206CU200BU200CU200CU202EU200CU202BU206EU202E_mC5F309EC4B87BA6C493B3D0D510D03CF957EBA37 (U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* __this, uint32_t p0, uint32_t p1, const RuntimeMethod* method) ;
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????[],System.UInt32,<Module>/?????????????????????????????????????????,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U206AU206DU200DU206DU206EU206CU206EU206BU200CU200CU200BU202EU206CU202CU206BU206DU200EU200DU206FU200DU206FU202BU202BU200BU200CU202BU206EU202DU202AU206EU206CU206EU202BU200DU202DU202AU200FU200EU206EU200CU202E_mDD1235FA317D81A1BBAE4E9DEEC60176E5DF7EA8 (U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* p0, uint32_t p1, U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* p2, int32_t p3, const RuntimeMethod* method) ;
// System.UInt32 <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_U206BU202CU206DU202EU200BU200FU200DU206AU206DU206CU206CU202EU200DU202DU206DU206FU202EU206DU206BU206FU206EU200DU206AU206DU200FU206DU206CU206AU202CU202BU202BU202CU202DU200EU206DU206EU206CU206DU202AU200DU202E_mBC2A0925E49228FE5EA91F13AA884EC97A3CADDE (U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141* __this, U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* p0, uint32_t p1, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U200DU200EU200FU202BU200CU202BU206DU202EU206DU200EU200CU202BU206EU206FU202DU206DU206DU202AU202DU202BU202AU200CU206BU206EU200EU202BU202CU206DU200FU206FU206FU200BU206BU200FU200DU202EU202AU200BU206EU202BU202E_m44463DF00F56202E3BF2B244041DE37CD2120B5C (U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* __this, const RuntimeMethod* method) ;
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_U206AU206BU206CU200BU202DU202AU206BU200BU200DU202CU202EU200DU206AU200BU206AU202DU202DU202AU200EU206AU206DU202BU206DU200BU206BU202CU202EU202CU200BU202DU200EU206FU200EU206CU202BU202EU200DU206DU200CU202BU202E_m28D185D96E0F137A9A917FF3D591FBD0EA88613F (uint32_t p0, const RuntimeMethod* method) ;
// System.Byte <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_U206DU202BU206AU200EU200EU206CU202CU206BU206EU200EU206DU202BU206FU200BU206EU206BU206AU206FU202AU206AU202DU200DU200EU202EU206CU206EU202DU206DU200FU200FU200BU206BU206EU206EU206FU206AU202AU206BU206AU202AU202E_mE429CF5015A06D29E7EB17A1BAEBE7C65DD48338 (U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3* __this, U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* p0, uint32_t p1, uint8_t p2, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U202AU206CU202CU206BU202CU200EU202CU206BU206DU206AU206CU206DU206BU202BU202DU206CU202DU206CU202CU200CU202BU202AU206AU200CU206EU202BU206FU200EU206EU200CU206AU200DU206CU206BU200DU206DU200CU202AU206CU206EU202E_mDB1C53CF5383FEED950DDFA275300763C638940F (U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U202AU206BU206FU202AU202DU202EU200EU202AU202DU202BU206CU200BU200BU202DU202CU206FU200CU200FU206DU200CU200EU202DU200DU206EU200EU200FU202AU206DU206FU200BU202DU200CU200CU206EU202BU206DU200EU202DU202DU206DU202E_m893D26780D5AF493975DC15D030473A474937579 (U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* __this, const RuntimeMethod* method) ;
// System.Byte <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U200CU200FU200BU202EU202EU206AU206DU202DU202EU200EU206BU200CU206CU206FU200DU200CU206EU206DU202BU200EU202EU202AU200BU206DU202AU202BU202BU202BU200BU200FU206AU206CU206BU206DU200FU206DU200CU202EU200EU206AU202E_m2B049B2D18E32FBDF36F6B89C39A401E5B772A57 (U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* __this, uint32_t p0, const RuntimeMethod* method) ;
// System.Boolean <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U202AU206EU200CU202CU200DU206DU200EU202CU206EU200EU206FU202AU200EU202CU206DU202BU200DU206AU200CU206BU206AU200FU206EU200EU206CU206BU202AU200FU200DU206CU206EU200FU202DU206EU200DU200EU206CU202AU200CU202BU202E_m3C206BEA2DD7805E7C3A4718CDA5AE1939AD37E9 (U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U206BU200EU200DU202BU202EU202DU202CU206BU202AU200DU200DU202DU200BU206EU206FU200BU200DU200BU206CU200BU202EU202DU200CU206AU206DU206AU200EU200DU200CU206CU202DU206FU206CU206EU206EU200DU200FU200EU200DU200FU202E_mDF07A0ED825F0CAC70837227DF02D57E90A72777 (U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* __this, const RuntimeMethod* method) ;
// System.Byte <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.UInt32,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_U206AU206CU202EU206AU200CU206CU206AU200FU202DU206AU206AU200BU206DU202EU206AU206CU200FU206AU206AU206BU200CU202CU200BU206BU206DU202BU206CU206DU202BU202CU200DU200FU200CU206DU206AU206EU206BU202AU202DU202AU202E_m040809AC3E3744488C02E69312466EA3B03F9527 (U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3* __this, U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* p0, uint32_t p1, uint8_t p2, uint8_t p3, const RuntimeMethod* method) ;
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_U200DU200EU206DU206BU202DU202EU200EU200BU202CU200BU202AU202CU202EU202CU200DU202CU202AU200CU200CU206DU206EU206DU202BU206FU206DU206DU200EU206AU206AU206AU206AU202DU206AU202AU200EU202AU202DU202BU202BU202BU202E_mB18EA6A960AC6D7BFC69FDD36986AA6F18F1F560 (U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* __this, int32_t p0, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U202DU202DU206DU206AU202BU202EU202BU206FU200DU200BU202CU202AU200BU202CU202EU206AU206DU202CU200DU206FU200EU200BU200DU206BU200CU206BU200FU200DU202EU206BU200FU202CU206FU202BU206CU206BU206FU200CU202DU206DU202E_m30F50279A60F19DFAFF286E448233A8E8F760E90 (U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_U206FU200BU206DU206AU200EU202EU200CU202DU200DU200BU200FU200DU206BU202DU202EU200FU202BU206AU200FU206FU206DU202BU202BU206CU206EU206FU202EU200CU206EU202BU202DU202CU206AU200FU206DU202EU206AU202EU200DU206CU202E_m7E2433129BFC97EF0DB5AEDA132B057B236D55C5 (U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_U202EU202BU206AU206DU202BU202EU200DU202CU206AU202CU206FU200CU206BU206BU202AU200EU200EU200DU200DU202EU206DU206FU206FU202DU206BU200DU200FU202AU206AU202CU206FU206DU200FU206DU200DU206AU202DU200FU206DU200CU202E_mB44710D9DEE28BCF06B0C9AB6DC759780B47F593 (U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102* __this, int32_t p0, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_U200CU202CU200BU200BU206EU202CU206CU206CU206AU206EU202BU200CU206CU200BU200EU206AU202AU202EU202CU200DU200DU202DU200EU200CU202CU206AU200BU200FU200DU202EU206DU206FU200FU202AU206BU200CU200CU200EU206DU200CU202E_m69105B39181EE99847F4E0127EF3DBDE2B131CBB (U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102* __this, uint32_t p0, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_U206DU206FU202CU202CU200FU206FU206CU202CU206DU200CU200DU200FU202DU200FU206DU200BU206BU200CU202CU202DU202EU206DU202BU200BU206DU206BU206EU202CU202DU200EU206AU202CU200FU206EU202AU206EU206EU206CU200FU206FU202E_mDF957E5AA76D86A6F187A2CFC64405B2439C2D40 (U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_U200EU206FU206DU202DU202EU202AU206EU200EU200DU202CU206DU202CU202DU202EU200FU206CU202BU200CU206FU206FU206FU202CU200CU202BU202BU202DU200EU206EU200EU206EU200CU202AU200CU200CU200CU202BU200CU206EU200FU200FU202E_m79509F07E3375C52D9E358BE53910E7F6CAD734F (U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_U206AU206BU200FU200EU206FU202BU202DU202EU200FU200FU200FU206CU202EU202DU200DU202CU206DU206CU202DU200DU206AU202BU206BU206DU200DU202CU200EU202AU206EU200FU200DU202BU206CU200DU202EU200BU200EU202EU206CU202AU202E_mA972F0C0C84140F33C078052AE0D8414FA5A542C (U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07* __this, const RuntimeMethod* method) ;
// System.UInt32 <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_U206FU202DU206EU200EU206FU206FU202AU202CU206CU202CU206CU202BU206BU202AU202DU200EU202EU202DU202EU200FU202EU202AU206DU206BU202DU206CU200BU200EU200BU206FU202AU202CU206DU206DU206CU206BU202AU202DU202DU202DU202E_mB34D901AB774E993B05984B97CE064FDA6400D7C (U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3* __this, uint32_t p0, uint8_t p1, const RuntimeMethod* method) ;
// System.Byte <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_U200DU200FU206AU202AU206CU206EU206BU202AU200DU200BU202EU202CU206EU202CU206DU200CU200CU206AU202AU206FU200CU200FU202AU206EU206EU206BU206EU200EU206BU200EU200DU206DU202EU202AU200DU206BU200CU206FU200FU206FU202E_mA7E00E241547337B60B52E771BC074958BF4192C (U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07* __this, U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* p0, const RuntimeMethod* method) ;
// System.Byte <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????::????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_U206CU202CU200CU200FU200EU200EU200DU202AU200DU202AU200BU200CU202AU200CU202CU202AU206EU206AU206AU202BU202AU202EU200FU202BU206AU202BU206BU202AU202EU200CU200BU206BU200CU206AU202BU206FU206EU206BU206AU202E_m8AAE542266808B69B0FECCB8C0FB554152260F8F (U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07* __this, U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* p0, uint8_t p1, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::_ntP80MzJDFgLG7rla6v0fAaliBf(System.IntPtr,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient__ntP80MzJDFgLG7rla6v0fAaliBf_m043B63534047341D9C2C2870A8BE3B2E0E152405 (intptr_t p0, intptr_t p1, String_t* p2, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::_puFBI5ScfwSMkuQg05abil8OXCEA(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient__puFBI5ScfwSMkuQg05abil8OXCEA_mADA4297DB604AC3CDC23E1A98AC186E3C2CD9A3D (intptr_t p0, intptr_t p1, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::_mL3lFUhDMo1C1G0gcZjWUWEBOTD(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient__mL3lFUhDMo1C1G0gcZjWUWEBOTD_mADD4D33CCC6B477230E0C02E51CA3C1F0CE7E2CD (intptr_t p0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::_hwkIXdvVTMzmXJbCjLlHx4afHwA(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient__hwkIXdvVTMzmXJbCjLlHx4afHwA_mBFFEF67DB0FD6E8C8BA3B971D7397BF3E7F6902C (intptr_t p0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::_GbDZM1zGDd62YIKWvo34aLoK0hJ(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient__GbDZM1zGDd62YIKWvo34aLoK0hJ_mF8668A784452427A8F3B2DF569AE2AEFDD295057 (intptr_t p0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::_tQ8p2ZSMHwgUIO5TT8bZ33raxjD(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient__tQ8p2ZSMHwgUIO5TT8bZ33raxjD_m53EDCE6C64AA5AEA7F6177DF076A2D935B92F258 (intptr_t p0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::_KXiot2XhBIWIVBIyEBvKgzJXRiO(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient__KXiot2XhBIWIVBIyEBvKgzJXRiO_m16C218EAE6C95C2685E458717EE50FEEC009EE2E (intptr_t p0, intptr_t p1, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::op_Explicit(System.Runtime.InteropServices.GCHandle)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GCHandle_op_Explicit_m03DD8D9FB45D565431455A6EE5C30A87305EF73C_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> GoogleMobileAds.Common.AdLoaderClientArgs::get_FormatIds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* AdLoaderClientArgs_get_FormatIds_m6731C0FF425BE0CC73D07B3C07A81D5A5C33CF4A_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Keys()
inline KeyCollection_t95FD5642BC2C9C7777B7A737F21A78E0AFDD8AA0* Dictionary_2_get_Keys_mF539FDC7C25A8DF152D95DE0711708F1806E424A (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t95FD5642BC2C9C7777B7A737F21A78E0AFDD8AA0* (*) (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C*, const RuntimeMethod*))Dictionary_2_get_Keys_mFDF56AF2BA76C6CCAF215187B66751FC03E474FD_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::get_Count()
inline int32_t KeyCollection_get_Count_m79A3D1AF30F9D23D4B094A34F713E5C519258A8A (KeyCollection_t95FD5642BC2C9C7777B7A737F21A78E0AFDD8AA0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyCollection_t95FD5642BC2C9C7777B7A737F21A78E0AFDD8AA0*, const RuntimeMethod*))KeyCollection_get_Count_m1F39D479F9DEA1AE1A208D2B717A4059D2C4AC5D_gshared)(__this, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::CopyTo(T[])
inline void List_1_CopyTo_m87398D95BED8C0626A669D782ECE31DE73392BDC (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___array0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*))List_1_CopyTo_mDA4751F464411AB4C757C63C6EDBF4891BFD6891_gshared)(__this, ___array0, method);
}
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType> GoogleMobileAds.Common.AdLoaderClientArgs::get_AdTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4* AdLoaderClientArgs_get_AdTypes_m3286F08DA89AEF0941C3580385F858CE95635BD4_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>::Contains(T)
inline bool HashSet_1_Contains_mB0D824DF87A2347FE9B6F7EDF88397FBC825008F (HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4* __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4*, int32_t, const RuntimeMethod*))HashSet_1_Contains_mC7FB9D44EF9B75D89964DC508B4B08D8DA98339E_gshared)(__this, ___item0, method);
}
// System.String GoogleMobileAds.Common.AdLoaderClientArgs::get_AdUnitId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdLoaderClientArgs_get_AdUnitId_m9CB2CEDA6950AE81735C721A64024FEE084C1095_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) ;
// System.Int32 GoogleMobileAds.Common.AdLoaderClientArgs::get_NumberOfAdsToLoad()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AdLoaderClientArgs_get_NumberOfAdsToLoad_m16518458445D87FF740EE67FB2117837684591E0_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) ;
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_mKIQ1lKbrY4wFOSCkKFs3LPHi8R(System.IntPtr,System.String,System.Int32,System.String[],System.Int32,GoogleMobileAds.iOS.NativeAdTypes&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__mKIQ1lKbrY4wFOSCkKFs3LPHi8R_m1449A05966D46A26C0C4F2A5524273ADAF803DB6 (intptr_t p0, String_t* p1, int32_t p2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* p3, int32_t p4, NativeAdTypes_t667526929D789B3FAE35DF13A63FBAF70A5E8733* p5, bool p6, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::_27WkZ2tzRnEL1KY3lGwBaN9JfCU(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient__27WkZ2tzRnEL1KY3lGwBaN9JfCU_mF47356F9A72EA52802EE073495131F83F91B5031 (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, intptr_t p0, const RuntimeMethod* method) ;
// System.IntPtr GoogleMobileAds.iOS.AdLoaderClient::_jeiOgb5chxB6W7oubrqfMOdSXGC()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t AdLoaderClient__jeiOgb5chxB6W7oubrqfMOdSXGC_m32E9CB66FFE1630C904F88E645D96A941ED4D14A_inline (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_pkatmrHxDeDh1gMbaNJt63dgPbDA::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _pkatmrHxDeDh1gMbaNJt63dgPbDA__ctor_m2569D7A248D290B96796FE0E1D685F26B0A14F1F (_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_vXfQseAIE9IbPtrDH4WEEXJFdiA::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _vXfQseAIE9IbPtrDH4WEEXJFdiA__ctor_m0DF7FE81BF952B416B1C1D0097DDE8060DC85E12 (_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_GofQR4EAfX2hD0bdVIwCH0WZwGz::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GofQR4EAfX2hD0bdVIwCH0WZwGz__ctor_m663D7B7657711F3F5FEAE32D4F28C78B4F0C9701 (_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_oYCq6VgAsLvfIJRn9pDMOfQveh6::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _oYCq6VgAsLvfIJRn9pDMOfQveh6__ctor_mF331BB189B4FD82D843A9E1617FE3D388A642F55 (_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_fz51zdLhxoaDkS13yalGYMD9apl::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _fz51zdLhxoaDkS13yalGYMD9apl__ctor_m457123DA1D2A5AD1EFAB763941DBBE2004D53255 (_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_RLv7HtUdTeAbp0VxmvKZJm3Yu0M::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _RLv7HtUdTeAbp0VxmvKZJm3Yu0M__ctor_mEAD3661ED7C543F77CC2AA57B47680FFC23C106D (_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_QIxxmcONDiLd99UXYm2TFDihCVS::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _QIxxmcONDiLd99UXYm2TFDihCVS__ctor_mDE9137F76F41DAAB80D1BCD32514AA7B94936426 (_QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) ;
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_H4HqX5w5COrC5eq3907KChaofbM(System.IntPtr,GoogleMobileAds.iOS.AdLoaderClient/_pkatmrHxDeDh1gMbaNJt63dgPbDA,GoogleMobileAds.iOS.AdLoaderClient/_vXfQseAIE9IbPtrDH4WEEXJFdiA,GoogleMobileAds.iOS.AdLoaderClient/_GofQR4EAfX2hD0bdVIwCH0WZwGz,GoogleMobileAds.iOS.AdLoaderClient/_oYCq6VgAsLvfIJRn9pDMOfQveh6,GoogleMobileAds.iOS.AdLoaderClient/_fz51zdLhxoaDkS13yalGYMD9apl,GoogleMobileAds.iOS.AdLoaderClient/_RLv7HtUdTeAbp0VxmvKZJm3Yu0M,GoogleMobileAds.iOS.AdLoaderClient/_QIxxmcONDiLd99UXYm2TFDihCVS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _za1hl4laeXrpCPhipDgCWTaGcooA__H4HqX5w5COrC5eq3907KChaofbM_m767C94EF06B8D99112EC10AF7909A20102FA8B68 (intptr_t p0, _pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* p1, _vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* p2, _GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* p3, _oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* p4, _fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218* p5, _RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E* p6, _QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2* p7, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.iOS.Externs::GADURelease(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADURelease_mE4B18030411CF16E761BA1AEA7FCF0807B7EA92E (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String GoogleMobileAds.Common.NativeUtils::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NativeUtils_get_Version_mB8F63B5B552D940B0351BE63FA0ED6E4B93B04D2_inline (const RuntimeMethod* method) ;
// System.String GoogleMobileAds.Api.AdRequest::BuildVersionString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdRequest_BuildVersionString_mE20A7E8289BA107C2409CE7A3DCFEC5770EEC513 (String_t* ___nativePluginVersion0, const RuntimeMethod* method) ;
// System.IntPtr GoogleMobileAds.iOS.Utils::BuildAdRequest(GoogleMobileAds.Api.AdRequest,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utils_BuildAdRequest_m5236B8F2180BCC7C45ED6C21B7FF2465AC6E5D68 (AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request0, String_t* ___nativePluginVersion1, const RuntimeMethod* method) ;
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_Nraa7uPS7MD4p9FZPayBGOLj3CD(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _za1hl4laeXrpCPhipDgCWTaGcooA__Nraa7uPS7MD4p9FZPayBGOLj3CD_m92A9031889212240D2BD59D0366A78183D1623F9 (intptr_t p0, intptr_t p1, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::DestroyAdLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_DestroyAdLoader_m82DF957E61D7556734FD13FA5AF885180A4BFFA3 (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_op_Explicit_mA5F28206637454AD677BE13DF86C6152190B6F0F (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_Dispose_mDD73AC292F99EEE1D8C6145AEF9BF715B40AC9B1 (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_Ui1Bn8WovkwTw1Yuu8VyX54juCf::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Ui1Bn8WovkwTw1Yuu8VyX54juCf__ctor_m0D1E6D0EDBB7140AA29D99B8474193904F3CCDF6 (_Ui1Bn8WovkwTw1Yuu8VyX54juCf_t7667EE495E1804E1816160CCF0D4715742F75B11* __this, const RuntimeMethod* method) ;
// GoogleMobileAds.iOS.AdLoaderClient GoogleMobileAds.iOS.AdLoaderClient::_6HbAhoOAuNsGbaUU3LSk6zQXuIg(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* AdLoaderClient__6HbAhoOAuNsGbaUU3LSk6zQXuIg_m45F418EFAD9772FC4E0AF12EF042A3BC3151A4CB (intptr_t p0, const RuntimeMethod* method) ;
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _V1fgpHIlEfdgcIGdMwPd9AxlM8B__ctor_m78C4BC218BD6A167CF5DBFCD9ECB0B3029AA2F85 (_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* __this, intptr_t p0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Common.CustomNativeClientEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomNativeClientEventArgs__ctor_mB86D8364F64424DC0778551C310DC8F0B71A46FB (CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Common.CustomNativeClientEventArgs::set_nativeAdClient(GoogleMobileAds.Common.ICustomNativeAdClient)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomNativeClientEventArgs_set_nativeAdClient_m7C4578E96709771F4B4E26B0EF01FD72C1CF0E75_inline (CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Common.CustomNativeClientEventArgs::set_assetName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomNativeClientEventArgs_set_assetName_m0FFF03346E29AB4599BEB94FD9E2CB5BD6D163C4_inline (CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Item(TKey)
inline bool Dictionary_2_get_Item_mE029B6A6F149DDDE86FCF5B3D2CA2EDDBC7F4A6F (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB8DAA0FB328D474EEE65CAF7F132DD9569BBC3A8_gshared)(__this, ___key0, method);
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_J1FI8fM30wJSEAEhDXGuOFvey9B::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _J1FI8fM30wJSEAEhDXGuOFvey9B__ctor_m130FACCFE4AE270E34B1BFE5E1C414BE8C3C001D (_J1FI8fM30wJSEAEhDXGuOFvey9B_t74CFBBDB154001865D1B340A267C7E2F02265476* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m23461BB0B5DF74CDA38E5E94CC0CEADB138F06C5_inline (EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* __this, RuntimeObject* ___sender0, CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*, RuntimeObject*, CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void System.WeakReference::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241 (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* __this, RuntimeObject* ___target0, const RuntimeMethod* method) ;
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo/_sqjDBw8QBlRLHS2SQPm0hC18Ngq::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _sqjDBw8QBlRLHS2SQPm0hC18Ngq__ctor_mF8556B4C13E0FC755628E50B0F91DEEDD8B35973 (_sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) ;
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_jG2Tvm1kBshtAy8RTI7CedIoDaY(System.IntPtr,System.IntPtr,_HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo/_sqjDBw8QBlRLHS2SQPm0hC18Ngq)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _za1hl4laeXrpCPhipDgCWTaGcooA__jG2Tvm1kBshtAy8RTI7CedIoDaY_m9CAC0548AEA42DE3A8CD4485E43AB585B58178BA (intptr_t p0, intptr_t p1, _sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B* p2, const RuntimeMethod* method) ;
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _5cABXlEfG0XrM4WXXDifxKEqMEo__ctor_m115C0979B589832B5A4FE26A0B7FFF91A39E9298 (_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* __this, intptr_t p0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Common.NativeClientEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mE7BEDD3511C7196786EEA138E2CCB15EDFBA079E_inline (EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* __this, RuntimeObject* ___sender0, NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*, RuntimeObject*, NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void GoogleMobileAds.Common.NativeClientEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeClientEventArgs__ctor_mF7DEA301F79DC4E7B2B76ECC00B6AD55D15FF636 (NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Common.NativeClientEventArgs::set_nativeAdClient(GoogleMobileAds.Common.INativeAdClient)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeClientEventArgs_set_nativeAdClient_mCEDBB0459BE0B3E308DA85F15E98E31D740B97FA_inline (NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void GoogleMobileAds.Common.LoadAdErrorClientEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdErrorClientEventArgs__ctor_m2D09A984965A5EDB0506CDAC47BE1675E80AE0AB (LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.iOS.LoadAdErrorClient::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdErrorClient__ctor_mA07305CC473E15C70165E245E1CBE43164F0BDF1 (LoadAdErrorClient_t576EE4D06F4BCE6CFA7709746249AC09BAC752BC* __this, intptr_t ___error0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Common.LoadAdErrorClientEventArgs::set_LoadAdErrorClient(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadAdErrorClientEventArgs_set_LoadAdErrorClient_m6E865CB1B347CEF0B75F55CE43EE3FDBF8353353_inline (LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m10AA45946252533013704CF408E2DDD0B3BACA82_inline (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* __this, RuntimeObject* ___sender0, LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*, RuntimeObject*, LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::_x9YfnbZGadeTOhHhoBbvwtcBB7F(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _V1fgpHIlEfdgcIGdMwPd9AxlM8B__x9YfnbZGadeTOhHhoBbvwtcBB7F_mFBB41A45952F2B4E1AFD794E1F198DE074783FE2 (intptr_t p0, String_t* p1, const RuntimeMethod* method) ;
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B/_hJLCzgFsr5XwEFNZUdsLyRBbY1n::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _hJLCzgFsr5XwEFNZUdsLyRBbY1n__ctor_m6D0CA49E1FE826DE9B1A12DCB3A2838275820F35 (_hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) ;
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_ibxz0UHGSQhjjx1HSuobaufiEwg(System.IntPtr,_HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B/_hJLCzgFsr5XwEFNZUdsLyRBbY1n)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _za1hl4laeXrpCPhipDgCWTaGcooA__ibxz0UHGSQhjjx1HSuobaufiEwg_m81E3F6EF8B42948DBB65E84DB204E3C878CA9FEA (intptr_t p0, _hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E* p1, const RuntimeMethod* method) ;
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_YN2IWM1qgUZSKdBhtOJa3BJjSDH(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _za1hl4laeXrpCPhipDgCWTaGcooA__YN2IWM1qgUZSKdBhtOJa3BJjSDH_m294A15EC59A4C10427B1D1CAE1927F053BA5B4FB (intptr_t p0, intptr_t p1, const RuntimeMethod* method) ;
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::_W1SFDbUnUAixSccQswseUd4j6CG()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t _V1fgpHIlEfdgcIGdMwPd9AxlM8B__W1SFDbUnUAixSccQswseUd4j6CG_m19DFAA037FF2A405D05F6F95DFA4FE9D4C1F7C4E_inline (_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* __this, const RuntimeMethod* method) ;
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_AAKiTtRAAtSE22SKaqHSO0lGt4i(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__AAKiTtRAAtSE22SKaqHSO0lGt4i_m3872838C0AB31C4185D75EC399BFFACCCCD390EB (intptr_t p0, const RuntimeMethod* method) ;
// System.Int32 _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_qncAEMgRTY2BgAhaaJJImuoWka2(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _za1hl4laeXrpCPhipDgCWTaGcooA__qncAEMgRTY2BgAhaaJJImuoWka2_m27B05FC591F93F9B71C676F098D48DF600F04654 (intptr_t p0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.iOS.Utils::PtrArrayToManagedList(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Utils_PtrArrayToManagedList_m5D7AAAB3FA2CA145D2149AE68D736CEFC4B42A05 (intptr_t ___arrayPtr0, int32_t ___numOfAssets1, const RuntimeMethod* method) ;
// System.String _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_YciJAsA6I19uIJP6mPVBeYyFmDj(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _za1hl4laeXrpCPhipDgCWTaGcooA__YciJAsA6I19uIJP6mPVBeYyFmDj_m868E25B9D7EA7D26E0767FC0C24AAE8CBFF3DFAB (intptr_t p0, const RuntimeMethod* method) ;
// System.String _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_F6QbdpiYvARdMfabkzi6V6sotD4(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _za1hl4laeXrpCPhipDgCWTaGcooA__F6QbdpiYvARdMfabkzi6V6sotD4_mB4CEB5290AA8C6B3E3A162C759F14BCB7A033FD9 (intptr_t p0, String_t* p1, const RuntimeMethod* method) ;
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___s0, const RuntimeMethod* method) ;
// System.String _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_0ifA2aTdWYhk4RnFm3CHi3lcZCW(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _za1hl4laeXrpCPhipDgCWTaGcooA__0ifA2aTdWYhk4RnFm3CHi3lcZCW_m7AF3DF8242D9AA094E4598DA73AC7EC6CDF5A70A (intptr_t p0, String_t* p1, const RuntimeMethod* method) ;
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_Qi0zsQa21U0Vcy36eYbpfkjllPB(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _za1hl4laeXrpCPhipDgCWTaGcooA__Qi0zsQa21U0Vcy36eYbpfkjllPB_mEB5D18947953723F796D7B2BC236CF74A985F4B3 (intptr_t p0, String_t* p1, bool p2, const RuntimeMethod* method) ;
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_oxlFQF0u2DBJGekgybCDEAEpnBw(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _za1hl4laeXrpCPhipDgCWTaGcooA__oxlFQF0u2DBJGekgybCDEAEpnBw_mEA8AF5FA096109F9575700EDC606CFA23B2EB427 (intptr_t p0, const RuntimeMethod* method) ;
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::_TqNucJrnfEtVBxjEkEgEXjQKGSj(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _V1fgpHIlEfdgcIGdMwPd9AxlM8B__TqNucJrnfEtVBxjEkEgEXjQKGSj_m4EBAC6D3B8C46FD4B4A114703C2467D10F7A87A4 (_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* __this, intptr_t p0, const RuntimeMethod* method) ;
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::_ev2o48KRW7HbAIGCO74YEfEDkhH()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _V1fgpHIlEfdgcIGdMwPd9AxlM8B__ev2o48KRW7HbAIGCO74YEfEDkhH_mA95499C5AE41EF9D30A79FDBD3B7114CF88C2140 (_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* __this, const RuntimeMethod* method) ;
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _V1fgpHIlEfdgcIGdMwPd9AxlM8B_Dispose_m2C8098EABF6B1EA9958057419CF40CD6E75C4C3D (_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* __this, const RuntimeMethod* method) ;
// _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::_Gq2sJTnCZkFRzwYSza1nTFaNTIh(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* _V1fgpHIlEfdgcIGdMwPd9AxlM8B__Gq2sJTnCZkFRzwYSza1nTFaNTIh_m59562BBB55C9A8FB1A4B58C9766303D9219ABC81 (intptr_t p0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::.ctor(GoogleMobileAds.Common.AdLoaderClientArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient__ctor_mAFBE1F5B092352C194AF1755487E1EBCF031A6E6 (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* p0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Common.DummyNativeClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNativeClient__ctor_m116A1174D312D713C92ADBB744748987A37D15C1 (DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F* __this, const RuntimeMethod* method) ;
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::_uyQChhTuYAD4XmnCPT7w5kYlPWK(System.IntPtr,System.Int32,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _5cABXlEfG0XrM4WXXDifxKEqMEo__uyQChhTuYAD4XmnCPT7w5kYlPWK_mF117471058E918D701EDBCAE2C6BB56449A77822 (intptr_t p0, int32_t p1, int64_t p2, String_t* p3, const RuntimeMethod* method) ;
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_kTWX9GpiTVfOr7dimO6CIxdb3UW(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__kTWX9GpiTVfOr7dimO6CIxdb3UW_m367A249AC3800738EAA5C50FE5F6B7292E52B14C (intptr_t p0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.iOS.NativeAdInteractionHandlerClient::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAdInteractionHandlerClient__ctor_m86D96A37A95A4621B9C9CA21AFC1AA57DF0B7DE5 (NativeAdInteractionHandlerClient_t67E48A14F0DE4196E5B988AF4C286978320E51B8* __this, intptr_t p0, const RuntimeMethod* method) ;
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_t7yhA3nJYckCEyX1l0SAL51ip23(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__t7yhA3nJYckCEyX1l0SAL51ip23_m029B0FCF5675D3695C924DB9B0AF66478D2810BA (intptr_t p0, const RuntimeMethod* method) ;
// System.String GoogleMobileAds.iOS.Utils::PtrToString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_PtrToString_mCBE79FE8ECC8CB98B62B9AE89B572F576EA0A08C (intptr_t ___stringPtr0, const RuntimeMethod* method) ;
// System.Object Google.MiniJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Json_Deserialize_m1823918610311F093CBF1E0C77B52C348008763B (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
inline Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419 (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_hXKXtP3Q0VQAhB3a9lNcUrBCFKpA(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__hXKXtP3Q0VQAhB3a9lNcUrBCFKpA_mA10E41E0D1231160481F07FDF148F61AFD40920A (intptr_t p0, const RuntimeMethod* method) ;
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_mbZHGU1NGn2yUkvG8m33kkfIAod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__mbZHGU1NGn2yUkvG8m33kkfIAod_m48C45CD730A288681DD65CD6779E373B8D4081CF (intptr_t p0, const RuntimeMethod* method) ;
// System.Double _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_DWc3Rd4i6AS04RdTCEnlk98nOrP(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double _za1hl4laeXrpCPhipDgCWTaGcooA__DWc3Rd4i6AS04RdTCEnlk98nOrP_mA1B10DE1E987D88851A26AAD14C6C4C2BBCEF4C6 (intptr_t p0, const RuntimeMethod* method) ;
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_WDCDUwJ5OfEKCY0Io3ukTaT2eSH(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__WDCDUwJ5OfEKCY0Io3ukTaT2eSH_m094B44F7AB60450CB7F4686E9CEB7A521E1245D4 (intptr_t p0, const RuntimeMethod* method) ;
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_uWrZG4X0g4xz7ZcWN7vkHw29uHg(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__uWrZG4X0g4xz7ZcWN7vkHw29uHg_m4C5A4BE6AECA76F503EF33479B0AA6F6B82B8796 (intptr_t p0, const RuntimeMethod* method) ;
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_WBjHLdy0u2OPvLcberYaz4E5lkm(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__WBjHLdy0u2OPvLcberYaz4E5lkm_m4D8E5909E3E658962014C661A33EEE63417F0BBF (intptr_t p0, const RuntimeMethod* method) ;
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_vFIadokDOTtgJ2SiWH4eqbx3GE6(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__vFIadokDOTtgJ2SiWH4eqbx3GE6_m03175F446BC6562E1EB19284D8C72183360057BF (intptr_t p0, const RuntimeMethod* method) ;
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_gFmfUNK8EYjhw3mp5MXbIsT6A2P(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__gFmfUNK8EYjhw3mp5MXbIsT6A2P_mF3C274BE668F7FF9510EABB91544F8D1B348F6ED (intptr_t p0, const RuntimeMethod* method) ;
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_iCtP0CTRXdgzVLvcFVQ0TKs8TLA(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__iCtP0CTRXdgzVLvcFVQ0TKs8TLA_m452124A2ABEA28BEEB321B47F9E875DBF7CCD51D (intptr_t p0, const RuntimeMethod* method) ;
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_p5UYp9tuvsNktz0mhJB955cWwRC(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__p5UYp9tuvsNktz0mhJB955cWwRC_m0F44FA1F23E93DEE7DA66852FA6B2D0BC12FD628 (intptr_t p0, const RuntimeMethod* method) ;
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_aWdBBUAAFBu145bGA3Db8heAy1Qb(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__aWdBBUAAFBu145bGA3Db8heAy1Qb_mAE6730ADE44CD76E983C4AAF2C80666C15231C68 (intptr_t p0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.iOS.ResponseInfoClient::.ctor(GoogleMobileAds.Common.ResponseInfoClientType,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseInfoClient__ctor_m6C344F37F0C39F6CF7E3418872CA408DB9BB3560 (ResponseInfoClient_t03446D1122701240801753551A07C20E71012BB3* __this, int32_t ___type0, intptr_t ___ptr1, const RuntimeMethod* method) ;
// _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::_vcXuBmJV5TgQLULq7qkzpcabczL(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* _5cABXlEfG0XrM4WXXDifxKEqMEo__vcXuBmJV5TgQLULq7qkzpcabczL_m526952D3B43C6C527D650E92C1A70A707FA59994 (intptr_t p0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdValue__ctor_mC8469F36ABE33454B249EBBA51574A1CFAC01010 (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdValue::set_Precision(GoogleMobileAds.Api.AdValue/PrecisionType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValue_set_Precision_m488B0F9CAEBACDD5013E094660C3DD58B362FD03_inline (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdValue::set_Value(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValue_set_Value_m7DF76A9D4ED62FE1F5FDBA6FEBBACD4E92115BE9_inline (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdValueEventArgs::set_AdValue(GoogleMobileAds.Api.AdValue)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValueEventArgs_set_AdValue_mFDB2656F4BDBCC3CE719341385666747D72F357E_inline (AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* __this, AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* __this, RuntimeObject* ___sender0, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*, RuntimeObject*, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void GoogleMobileAds.Api.AdValue::set_CurrencyCode(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValue_set_CurrencyCode_mA493466D946C6484F0F20604EF0B013EA0571F71_inline (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdValueEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdValueEventArgs__ctor_m2786F476E77E35470958434534FA8976541ED4E0 (AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.iOS.NativeAdInteractionHandlerClient::BuildAssetIDMappings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* NativeAdInteractionHandlerClient_BuildAssetIDMappings_mD4ED672CFBC9C8DA7E24CF78FA3EE1D8DB3976C1 (NativeAdInteractionHandlerClient_t67E48A14F0DE4196E5B988AF4C286978320E51B8* __this, const RuntimeMethod* method) ;
// System.String Google.MiniJSON.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m695EB36DCD38B14656ECDCD9C5DB32A04E31AA50 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_rXvGpBRd3xFdZ8twrb5h6IStzZq(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _za1hl4laeXrpCPhipDgCWTaGcooA__rXvGpBRd3xFdZ8twrb5h6IStzZq_mBDEE4C1523CBBDE17746B65EC191ACAE1C8D1B4C (intptr_t p0, String_t* p1, const RuntimeMethod* method) ;
// System.Boolean _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_0KaMHBxhInYeusWI1TneKQxj0hC(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _za1hl4laeXrpCPhipDgCWTaGcooA__0KaMHBxhInYeusWI1TneKQxj0hC_m3E1F144DBE433ABE90D7D0BFF1ADABD62769EA36 (intptr_t p0, String_t* p1, const RuntimeMethod* method) ;
// System.Boolean _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_PqqGVwEk5CoaTqwXLnC42G68Rep(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _za1hl4laeXrpCPhipDgCWTaGcooA__PqqGVwEk5CoaTqwXLnC42G68Rep_m53378701ABE8E00E2C1848766732DB63AC4E0666 (intptr_t p0, String_t* p1, const RuntimeMethod* method) ;
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_tK1sRL4sKtjp37IZU4HQcR7CeCh(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__tK1sRL4sKtjp37IZU4HQcR7CeCh_m910F0B75F07F0DE476E3CA2EC235166EB754C5FE (intptr_t p0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Common.NativeUtils::CastAssetIDMappings(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* NativeUtils_CastAssetIDMappings_m7E3C8BCCFD5A11C1B344838C26028076B70D52C2 (String_t* ___jsonMappings0, const RuntimeMethod* method) ;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9 (intptr_t ___hglobal0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GADUCreateAdLoader(intptr_t, char*, int32_t, char**, int32_t, NativeAdTypes_t667526929D789B3FAE35DF13A63FBAF70A5E8733*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL GADURequestNativeAd(intptr_t, intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL GADUSetAdLoaderCallbacks(intptr_t, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL GADUSetNativeAdCallback(intptr_t, intptr_t, Il2CppMethodPointer);
IL2CPP_EXTERN_C char* DEFAULT_CALL GADUCustomNativeAdFormatID(intptr_t);
IL2CPP_EXTERN_C char* DEFAULT_CALL GADUCustomNativeAdImageAsBytesForKey(intptr_t, char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL GADUCustomNativeAdStringForKey(intptr_t, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL GADUCustomNativeAdRecordImpression(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL GADUCustomNativeAdPerformClickOnAssetWithKey(intptr_t, char*, int32_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GADUCustomNativeAdAvailableAssetKeys(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GADUCustomNativeAdNumberOfAvailableAssetKeys(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL GADUSetCustomNativeAdUnityClient(intptr_t, intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL GADUSetCustomNativeAdCallbacks(intptr_t, Il2CppMethodPointer);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GADURecordPossibleImpressionForNativeAd(intptr_t, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GADUPerformClickOnNativeAd(intptr_t, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GADUReportTouchEventOnNativeAd(intptr_t, char*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GADUNativeAdAssetIDMappings(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GADUGetNativeAd(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GADUNativeAdMainImagesURLs(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GADUNativeAdIconURL(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GADUNativeAdAdChoicesLogoURL(intptr_t);
IL2CPP_EXTERN_C double DEFAULT_CALL GADUNativeAdStarRating(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GADUNativeAdHeadline(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GADUNativeAdBody(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GADUNativeAdCallToAction(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GADUNativeAdAdvertiser(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GADUNativeAdPrice(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GADUNativeAdStore(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GADUMediationAdapterClassNameForNativeAd(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GADUGetNativeAdResponseInfo(intptr_t);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <Module>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E__cctor_mC9190503EA574CC5AAE7F1B0BE9F601C02EB1578 (const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		U3CModuleU3E_U202BU200BU202BU206EU202DU200CU202BU206FU206EU200CU206DU202DU202DU206CU200DU200CU206DU206DU206CU200BU200FU206BU200FU206EU206EU202BU206BU202CU206EU200BU202DU200BU206CU200BU206DU200DU206BU206DU200CU202BU202E_m33E4B591667369C0D48479CE7A67444B97D0E206(NULL);
		return;
	}
}
// System.Byte[] <Module>::?????????????????????????????????????????(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* U3CModuleU3E_U202CU206AU206AU202EU200BU206CU206FU202BU202AU200DU200EU202AU206CU200FU200DU202EU200EU200FU202BU206EU202EU200DU202CU202DU200CU206FU206EU206FU202AU200DU202DU200CU202EU202DU200EU200EU206FU202AU206BU206BU202E_mB18B6D829F0F218E0D08EC5B2F17B178751645DC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_7 = NULL;
	int64_t V_8 = 0;
	uint32_t V_9 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = p0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_1, L_0, NULL);
		V_0 = L_1;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)717774242);
	}

IL_000c:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)1781217633)));
		V_9 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_00dc;
			}
			case 1:
			{
				goto IL_0084;
			}
			case 2:
			{
				goto IL_00f6;
			}
			case 3:
			{
				goto IL_0113;
			}
			case 4:
			{
				goto IL_004a;
			}
			case 5:
			{
				goto IL_0007;
			}
			case 6:
			{
				goto IL_0145;
			}
			case 7:
			{
				goto IL_006e;
			}
			case 8:
			{
				goto IL_00bd;
			}
			case 9:
			{
				goto IL_009d;
			}
		}
	}
	{
		goto IL_0145;
	}

IL_004a:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.IO.Stream::ReadByte() */, L_3);
		V_5 = L_4;
		int64_t L_5 = V_3;
		int32_t L_6 = V_5;
		int32_t L_7 = V_4;
		V_3 = ((int64_t)(L_5|((int64_t)(((int64_t)((int32_t)(uint8_t)L_6))<<((int32_t)(((int32_t)il2cpp_codegen_multiply(8, L_7))&((int32_t)63)))))));
		int32_t L_8 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		G_B2_0 = ((int32_t)2046393900);
		goto IL_000c;
	}

IL_006e:
	{
		int32_t L_9 = V_4;
		if ((((int32_t)L_9) < ((int32_t)8)))
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_10 = ((int32_t)1146410000);
		G_B8_0 = L_10;
		G_B8_1 = L_10;
		goto IL_0081;
	}

IL_007b:
	{
		int32_t L_11 = ((int32_t)1486726891);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
	}

IL_0081:
	{
		G_B2_0 = G_B8_1;
		goto IL_000c;
	}

IL_0084:
	{
		U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102* L_12 = (U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102*)il2cpp_codegen_object_new(U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E__ctor_mD7346A4A2A72B79843602A8D72FFED4E3A6A3C4C(L_12, NULL);
		V_1 = L_12;
		uint32_t L_13 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)1295168345)))^((int32_t)-1381389744)));
		goto IL_000c;
	}

IL_009d:
	{
		U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		NullCheck(L_14);
		U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_U200FU206DU206DU200EU202CU202DU200DU200CU200BU200BU200EU202EU202DU200DU200EU200BU202EU206BU206FU206FU200CU206EU200DU200DU202BU202DU206DU206EU206CU206FU200BU202CU202AU206FU200EU200FU202CU200DU200FU202EU202E_m4648D6DDE9FCCC2E2DA23733A4168DD845A3FE07(L_14, L_15, NULL);
		V_3 = ((int64_t)0);
		V_4 = 0;
		uint32_t L_16 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_16, ((int32_t)-2077910534)))^((int32_t)198853562)));
		goto IL_000c;
	}

IL_00bd:
	{
		U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102* L_17 = V_1;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_18 = V_0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_19 = V_7;
		int64_t L_20 = V_8;
		int64_t L_21 = V_3;
		NullCheck(L_17);
		U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_U206DU202AU206DU200EU200FU206CU206AU206DU202BU206EU202BU206BU202DU202CU200DU200DU206AU200BU206AU202EU202DU200DU206DU206BU206DU200FU206FU202CU206CU200DU202CU202DU206BU200CU206EU206CU206FU200BU206BU206EU202E_m7F3472B3C84AEA7D2C8A1DD5B12CD51E717D2758(L_17, L_18, L_19, L_20, L_21, NULL);
		uint32_t L_22 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_22, ((int32_t)861303276)))^((int32_t)500609597)));
		goto IL_000c;
	}

IL_00dc:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)5);
		V_2 = L_23;
		uint32_t L_24 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_24, ((int32_t)154003216)))^((int32_t)1575495901)));
		goto IL_000c;
	}

IL_00f6:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_25 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_25, L_26, 0, 5);
		uint32_t L_28 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_28, ((int32_t)-1001985720)))^((int32_t)-1308175386)));
		goto IL_000c;
	}

IL_0113:
	{
		int64_t L_29 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)L_29));
		V_6 = L_30;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_6;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_32 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		MemoryStream__ctor_m5BAFB4CE0C3BB700DB05907C334DD64834D75D1B(L_32, L_31, (bool)1, NULL);
		V_7 = L_32;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_33 = V_0;
		NullCheck(L_33);
		int64_t L_34;
		L_34 = VirtualFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_33);
		V_8 = ((int64_t)il2cpp_codegen_subtract(L_34, ((int64_t)((int32_t)13))));
		uint32_t L_35 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_35, ((int32_t)-1789113905)))^((int32_t)300536816)));
		goto IL_000c;
	}

IL_0145:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_6;
		return L_36;
	}
}
// System.Void <Module>::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E_U202BU200BU202BU206EU202DU200CU202BU206FU206EU200CU206DU202DU202DU206CU200DU200CU206DU206DU206CU200BU200FU206BU200FU206EU206EU202BU206BU202CU206EU200BU202DU200BU206CU200BU206DU200DU206BU206DU200CU202BU202E_m33E4B591667369C0D48479CE7A67444B97D0E206 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tE84BC75BE4CCFBD4F664F8E59152CF872EF5DDEC____U206EU206DU200FU202AU202CU206FU206DU202DU206EU200EU206DU200FU200FU202CU200CU206CU206EU202CU200FU206DU200CU206DU206DU206CU200EU206BU202CU200DU206AU202CU202BU200BU202DU202EU206CU200CU200BU200FU200BU202EU202E_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tE84BC75BE4CCFBD4F664F8E59152CF872EF5DDEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_7 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B25_1 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B30_1 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B38_1 = 0;
	{
		V_0 = ((int32_t)16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CModuleU3E_tE84BC75BE4CCFBD4F664F8E59152CF872EF5DDEC____U206EU206DU200FU202AU202CU206FU206DU202DU206EU200EU206DU200FU200FU202CU200CU206CU206EU202CU200FU206DU200CU206DU206DU206CU200EU206BU202CU200DU206AU202CU202BU200BU202DU202EU206CU200CU200BU200FU200BU202EU202E_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		V_1 = L_1;
	}

IL_0016:
	{
		G_B2_0 = ((int32_t)-1683016007);
	}

IL_001b:
	{
		int32_t L_3 = ((int32_t)(G_B2_0^((int32_t)-185304183)));
		V_12 = L_3;
		switch (((int32_t)((uint32_t)(int32_t)L_3%(uint32_t)(int32_t)((int32_t)35))))
		{
			case 0:
			{
				goto IL_0447;
			}
			case 1:
			{
				goto IL_00f1;
			}
			case 2:
			{
				goto IL_02d5;
			}
			case 3:
			{
				goto IL_039e;
			}
			case 4:
			{
				goto IL_03b7;
			}
			case 5:
			{
				goto IL_01cc;
			}
			case 6:
			{
				goto IL_0217;
			}
			case 7:
			{
				goto IL_024d;
			}
			case 8:
			{
				goto IL_04a9;
			}
			case 9:
			{
				goto IL_02a8;
			}
			case 10:
			{
				goto IL_01f7;
			}
			case 11:
			{
				goto IL_0016;
			}
			case 12:
			{
				goto IL_0419;
			}
			case 13:
			{
				goto IL_043a;
			}
			case 14:
			{
				goto IL_0169;
			}
			case 15:
			{
				goto IL_01b2;
			}
			case 16:
			{
				goto IL_045a;
			}
			case 17:
			{
				goto IL_0384;
			}
			case 18:
			{
				goto IL_0110;
			}
			case 19:
			{
				goto IL_047b;
			}
			case 20:
			{
				goto IL_00d7;
			}
			case 21:
			{
				goto IL_0187;
			}
			case 22:
			{
				goto IL_03c8;
			}
			case 23:
			{
				goto IL_0228;
			}
			case 24:
			{
				goto IL_0337;
			}
			case 25:
			{
				goto IL_031b;
			}
			case 26:
			{
				goto IL_03e7;
			}
			case 27:
			{
				goto IL_02f0;
			}
			case 28:
			{
				goto IL_0270;
			}
			case 29:
			{
				goto IL_0353;
			}
			case 30:
			{
				goto IL_00bd;
			}
			case 31:
			{
				goto IL_02c2;
			}
			case 32:
			{
				goto IL_0153;
			}
			case 33:
			{
				goto IL_04bf;
			}
			case 34:
			{
				goto IL_0292;
			}
		}
	}
	{
		goto IL_04bf;
	}

IL_00bd:
	{
		int32_t L_4 = V_9;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)16))))
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_5 = ((int32_t)-1031203286);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
		goto IL_00d1;
	}

IL_00cb:
	{
		int32_t L_6 = ((int32_t)-941905767);
		G_B7_0 = L_6;
		G_B7_1 = L_6;
	}

IL_00d1:
	{
		G_B2_0 = G_B7_1;
		goto IL_001b;
	}

IL_00d7:
	{
		uint32_t L_7 = V_3;
		uint32_t L_8 = V_3;
		V_3 = ((int32_t)((int32_t)L_7^((int32_t)((int32_t)L_8<<((int32_t)25)))));
		uint32_t L_9 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)1638152667)))^((int32_t)-277963399)));
		goto IL_001b;
	}

IL_00f1:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_7;
		NullCheck(L_11);
		int32_t L_12 = 5;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15 = 5;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)((int32_t)L_13^(int32_t)L_16)));
		uint32_t L_17 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, ((int32_t)-1292707553)))^((int32_t)-91110762)));
		goto IL_001b;
	}

IL_0110:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_7;
		NullCheck(L_19);
		int32_t L_20 = ((int32_t)13);
		uint32_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = ((int32_t)13);
		uint32_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint32_t)((int32_t)((int32_t)L_21^(int32_t)L_24)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_7;
		NullCheck(L_26);
		int32_t L_27 = ((int32_t)14);
		uint32_t L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_2;
		NullCheck(L_29);
		int32_t L_30 = ((int32_t)14);
		uint32_t L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)((int32_t)((int32_t)L_28^(int32_t)L_31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = V_7;
		NullCheck(L_33);
		int32_t L_34 = ((int32_t)15);
		uint32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37 = ((int32_t)15);
		uint32_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)((int32_t)((int32_t)L_35^(int32_t)L_38)));
		V_10 = 0;
		uint32_t L_39 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_39, ((int32_t)1416987025)))^((int32_t)-1213532804)));
		goto IL_001b;
	}

IL_0153:
	{
		V_4 = 0;
		uint32_t L_40 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_40, ((int32_t)88221988)))^((int32_t)-1332767614)));
		goto IL_001b;
	}

IL_0169:
	{
		uint32_t L_41 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_41, 4))));
		V_8 = L_42;
		uint32_t L_43 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_43, ((int32_t)-2005119596)))^((int32_t)436330996)));
		goto IL_001b;
	}

IL_0187:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = V_7;
		NullCheck(L_45);
		int32_t L_46 = 0;
		uint32_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = V_2;
		NullCheck(L_48);
		int32_t L_49 = 0;
		uint32_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)((int32_t)L_47^(int32_t)L_50)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_7;
		NullCheck(L_52);
		int32_t L_53 = 1;
		uint32_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = V_2;
		NullCheck(L_55);
		int32_t L_56 = 1;
		uint32_t L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)((int32_t)L_54^(int32_t)L_57)));
		uint32_t L_58 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_58, ((int32_t)506779667)))^((int32_t)-895062624)));
		goto IL_001b;
	}

IL_01b2:
	{
		int32_t L_59 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_59, ((int32_t)16)));
		uint32_t L_60 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_60, ((int32_t)1962456386)))^((int32_t)-343728568)));
		goto IL_001b;
	}

IL_01cc:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = V_7;
		NullCheck(L_62);
		int32_t L_63 = 6;
		uint32_t L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = 6;
		uint32_t L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)((int32_t)L_64^(int32_t)L_67)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = V_7;
		NullCheck(L_69);
		int32_t L_70 = 7;
		uint32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = V_2;
		NullCheck(L_72);
		int32_t L_73 = 7;
		uint32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)((int32_t)L_71^(int32_t)L_74)));
		uint32_t L_75 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_75, ((int32_t)2096525738)))^((int32_t)1076650984)));
		goto IL_001b;
	}

IL_01f7:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = V_8;
		int32_t L_77 = V_6;
		int32_t L_78 = L_77;
		V_6 = ((int32_t)il2cpp_codegen_add(L_78, 1));
		uint32_t L_79 = V_11;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(L_78), (uint8_t)((int32_t)(uint8_t)L_79));
		uint32_t L_80 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_80, ((int32_t)-952306636)))^((int32_t)913874435)));
		goto IL_001b;
	}

IL_0217:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = V_7;
		int32_t L_82 = V_10;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		uint32_t L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		V_11 = L_84;
		G_B2_0 = ((int32_t)-1080220855);
		goto IL_001b;
	}

IL_0228:
	{
		uint32_t L_85 = V_3;
		uint32_t L_86 = V_3;
		V_3 = ((int32_t)((int32_t)L_85^((int32_t)((uint32_t)L_86>>((int32_t)27)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = V_2;
		int32_t L_88 = V_4;
		uint32_t L_89 = V_3;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(L_88), (uint32_t)L_89);
		int32_t L_90 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		uint32_t L_91 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_91, ((int32_t)1182435813)))^((int32_t)-2017131578)));
		goto IL_001b;
	}

IL_024d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = V_8;
		int32_t L_93 = V_6;
		int32_t L_94 = L_93;
		V_6 = ((int32_t)il2cpp_codegen_add(L_94, 1));
		uint32_t L_95 = V_11;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_94), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_95>>((int32_t)24)))));
		uint32_t L_96 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_96, ((int32_t)369751350)))^((int32_t)586650601)));
		goto IL_001b;
	}

IL_0270:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_97 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_98 = V_7;
		NullCheck(L_98);
		int32_t L_99 = ((int32_t)10);
		uint32_t L_100 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_101 = V_2;
		NullCheck(L_101);
		int32_t L_102 = ((int32_t)10);
		uint32_t L_103 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)((int32_t)((int32_t)L_100^(int32_t)L_103)));
		uint32_t L_104 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_104, ((int32_t)-682106848)))^((int32_t)382275203)));
		goto IL_001b;
	}

IL_0292:
	{
		V_6 = 0;
		uint32_t L_105 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_105, ((int32_t)80585855)))^((int32_t)122752350)));
		goto IL_001b;
	}

IL_02a8:
	{
		int32_t L_106 = V_4;
		if ((((int32_t)L_106) < ((int32_t)((int32_t)16))))
		{
			goto IL_02b6;
		}
	}
	{
		int32_t L_107 = ((int32_t)-1084467349);
		G_B25_0 = L_107;
		G_B25_1 = L_107;
		goto IL_02bc;
	}

IL_02b6:
	{
		int32_t L_108 = ((int32_t)-1401217927);
		G_B25_0 = L_108;
		G_B25_1 = L_108;
	}

IL_02bc:
	{
		G_B2_0 = G_B25_1;
		goto IL_001b;
	}

IL_02c2:
	{
		uint32_t L_109 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_109, ((int32_t)1052081145)))^((int32_t)1306281307)));
		goto IL_001b;
	}

IL_02d5:
	{
		int32_t L_110 = V_5;
		uint32_t L_111 = V_0;
		if ((((int64_t)((int64_t)L_110)) >= ((int64_t)((int64_t)(uint64_t)L_111))))
		{
			goto IL_02e4;
		}
	}
	{
		int32_t L_112 = ((int32_t)-169239763);
		G_B30_0 = L_112;
		G_B30_1 = L_112;
		goto IL_02ea;
	}

IL_02e4:
	{
		int32_t L_113 = ((int32_t)-479036499);
		G_B30_0 = L_113;
		G_B30_1 = L_113;
	}

IL_02ea:
	{
		G_B2_0 = G_B30_1;
		goto IL_001b;
	}

IL_02f0:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_114 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_115 = V_7;
		NullCheck(L_115);
		int32_t L_116 = 3;
		uint32_t L_117 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_118 = V_2;
		NullCheck(L_118);
		int32_t L_119 = 3;
		uint32_t L_120 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)((int32_t)L_117^(int32_t)L_120)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_121 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_122 = V_7;
		NullCheck(L_122);
		int32_t L_123 = 4;
		uint32_t L_124 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_125 = V_2;
		NullCheck(L_125);
		int32_t L_126 = 4;
		uint32_t L_127 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)((int32_t)L_124^(int32_t)L_127)));
		uint32_t L_128 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_128, ((int32_t)-1106516425)))^((int32_t)425482662)));
		goto IL_001b;
	}

IL_031b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_129 = V_7;
		int32_t L_130 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_131 = V_1;
		int32_t L_132 = V_5;
		int32_t L_133 = V_9;
		NullCheck(L_131);
		int32_t L_134 = ((int32_t)il2cpp_codegen_add(L_132, L_133));
		uint32_t L_135 = (L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(L_130), (uint32_t)L_135);
		int32_t L_136 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_136, 1));
		G_B2_0 = ((int32_t)-335242440);
		goto IL_001b;
	}

IL_0337:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_137 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_7 = L_137;
		uint32_t L_138 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_138, ((int32_t)1335710903)))^((int32_t)979055410)));
		goto IL_001b;
	}

IL_0353:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_139 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_140 = V_7;
		NullCheck(L_140);
		int32_t L_141 = ((int32_t)11);
		uint32_t L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_143 = V_2;
		NullCheck(L_143);
		int32_t L_144 = ((int32_t)11);
		uint32_t L_145 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		NullCheck(L_139);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)((int32_t)((int32_t)L_142^(int32_t)L_145)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_146 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_147 = V_7;
		NullCheck(L_147);
		int32_t L_148 = ((int32_t)12);
		uint32_t L_149 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_150 = V_2;
		NullCheck(L_150);
		int32_t L_151 = ((int32_t)12);
		uint32_t L_152 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		NullCheck(L_146);
		(L_146)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint32_t)((int32_t)((int32_t)L_149^(int32_t)L_152)));
		uint32_t L_153 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_153, ((int32_t)-1766484089)))^((int32_t)-2077767473)));
		goto IL_001b;
	}

IL_0384:
	{
		int32_t L_154 = V_10;
		if ((((int32_t)L_154) < ((int32_t)((int32_t)16))))
		{
			goto IL_0392;
		}
	}
	{
		int32_t L_155 = ((int32_t)-621967373);
		G_B38_0 = L_155;
		G_B38_1 = L_155;
		goto IL_0398;
	}

IL_0392:
	{
		int32_t L_156 = ((int32_t)-369095379);
		G_B38_0 = L_156;
		G_B38_1 = L_156;
	}

IL_0398:
	{
		G_B2_0 = G_B38_1;
		goto IL_001b;
	}

IL_039e:
	{
		int32_t L_157 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_157, 1));
		uint32_t L_158 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_158, ((int32_t)129010754)))^((int32_t)494495888)));
		goto IL_001b;
	}

IL_03b7:
	{
		uint32_t L_159 = V_3;
		uint32_t L_160 = V_3;
		V_3 = ((int32_t)((int32_t)L_159^((int32_t)((uint32_t)L_160>>((int32_t)12)))));
		G_B2_0 = ((int32_t)-405108105);
		goto IL_001b;
	}

IL_03c8:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_161 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_162 = V_7;
		NullCheck(L_162);
		int32_t L_163 = 2;
		uint32_t L_164 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_165 = V_2;
		NullCheck(L_165);
		int32_t L_166 = 2;
		uint32_t L_167 = (L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_166));
		NullCheck(L_161);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)((int32_t)L_164^(int32_t)L_167)));
		uint32_t L_168 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_168, ((int32_t)-1165074323)))^((int32_t)721565277)));
		goto IL_001b;
	}

IL_03e7:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_169 = V_8;
		int32_t L_170 = V_6;
		int32_t L_171 = L_170;
		V_6 = ((int32_t)il2cpp_codegen_add(L_171, 1));
		uint32_t L_172 = V_11;
		NullCheck(L_169);
		(L_169)->SetAt(static_cast<il2cpp_array_size_t>(L_171), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_172>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_173 = V_8;
		int32_t L_174 = V_6;
		int32_t L_175 = L_174;
		V_6 = ((int32_t)il2cpp_codegen_add(L_175, 1));
		uint32_t L_176 = V_11;
		NullCheck(L_173);
		(L_173)->SetAt(static_cast<il2cpp_array_size_t>(L_175), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_176>>((int32_t)16)))));
		uint32_t L_177 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_177, ((int32_t)816796224)))^((int32_t)-1816234391)));
		goto IL_001b;
	}

IL_0419:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_178 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_2 = L_178;
		V_3 = ((int32_t)1502542327);
		uint32_t L_179 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_179, ((int32_t)-882253330)))^((int32_t)-1194746274)));
		goto IL_001b;
	}

IL_043a:
	{
		V_9 = 0;
		G_B2_0 = ((int32_t)-335242440);
		goto IL_001b;
	}

IL_0447:
	{
		uint32_t L_180 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_180, ((int32_t)-926881223)))^((int32_t)-172514947)));
		goto IL_001b;
	}

IL_045a:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_181 = V_2;
		int32_t L_182 = V_10;
		NullCheck(L_181);
		uint32_t* L_183 = ((L_181)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_182)));
		int32_t L_184 = *((uint32_t*)L_183);
		uint32_t L_185 = V_11;
		*((int32_t*)L_183) = (int32_t)((int32_t)(L_184^(int32_t)L_185));
		uint32_t L_186 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_186, ((int32_t)861447622)))^((int32_t)-574669223)));
		goto IL_001b;
	}

IL_047b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_187 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_188 = V_7;
		NullCheck(L_188);
		int32_t L_189 = 8;
		uint32_t L_190 = (L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_191 = V_2;
		NullCheck(L_191);
		int32_t L_192 = 8;
		uint32_t L_193 = (L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_192));
		NullCheck(L_187);
		(L_187)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint32_t)((int32_t)((int32_t)L_190^(int32_t)L_193)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_194 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_195 = V_7;
		NullCheck(L_195);
		int32_t L_196 = ((int32_t)9);
		uint32_t L_197 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_196));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_198 = V_2;
		NullCheck(L_198);
		int32_t L_199 = ((int32_t)9);
		uint32_t L_200 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		NullCheck(L_194);
		(L_194)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)((int32_t)((int32_t)L_197^(int32_t)L_200)));
		uint32_t L_201 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_201, ((int32_t)-2131166706)))^((int32_t)-940955735)));
		goto IL_001b;
	}

IL_04a9:
	{
		V_5 = 0;
		uint32_t L_202 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_202, ((int32_t)-1125892798)))^((int32_t)637388429)));
		goto IL_001b;
	}

IL_04bf:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_203 = V_8;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE84BC75BE4CCFBD4F664F8E59152CF872EF5DDEC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_204;
		L_204 = U3CModuleU3E_U202CU206AU206AU202EU200BU206CU206FU202BU202AU200DU200EU202AU206CU200FU200DU202EU200EU200FU202BU206EU202EU200DU202CU202DU200CU206FU206EU206FU202AU200DU202DU200CU202EU202DU200EU200EU206FU202AU206BU206BU202E_mB18B6D829F0F218E0D08EC5B2F17B178751645DC(L_203, NULL);
		((U3CModuleU3E_tE84BC75BE4CCFBD4F664F8E59152CF872EF5DDEC_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tE84BC75BE4CCFBD4F664F8E59152CF872EF5DDEC_il2cpp_TypeInfo_var))->___U206CU200DU200BU202CU206EU206FU202CU200EU202EU202AU206BU202EU202AU206DU202EU200BU200FU202BU200CU206CU206EU200FU200CU202BU206CU206DU200BU206CU202AU206FU206FU202CU202AU202CU200CU206BU206FU202BU200FU202CU202E_2 = L_204;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CModuleU3E_tE84BC75BE4CCFBD4F664F8E59152CF872EF5DDEC_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tE84BC75BE4CCFBD4F664F8E59152CF872EF5DDEC_il2cpp_TypeInfo_var))->___U206CU200DU200BU202CU206EU206FU202CU200EU202EU202AU206BU202EU202AU206DU202EU200BU200FU202BU200CU206CU206EU200FU200CU202BU206CU206DU200BU206CU202AU206FU206FU202CU202AU202CU200CU206BU206FU202BU200FU202CU202E_2), (void*)L_204);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202BU206FU200DU200EU200BU202BU202DU200FU206EU200DU206CU206DU202EU200DU206CU202BU202CU200CU202AU200FU206DU206BU202AU206FU200FU202AU202CU200EU202EU206FU206EU202BU200EU206EU206FU202EU200EU200EU206FU206EU202E_m06B03079972D7E477C0573912085484A7C019AFD (U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		__this->___U202BU206AU206BU202AU206DU206BU206EU200FU200EU202CU206BU200EU202AU202CU200DU206CU200FU206AU202CU200BU206FU206FU206BU202EU200DU202AU206CU202DU206CU206FU200CU200FU200CU202BU202AU200BU206FU200BU206DU202EU202E_0 = ((int32_t)1024);
		return;
	}
}
IL2CPP_EXTERN_C  void U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202BU206FU200DU200EU200BU202BU202DU200FU206EU200DU206CU206DU202EU200DU206CU202BU202CU200CU202AU200FU206DU206BU202AU206FU200FU202AU202CU200EU202EU206FU206EU202BU200EU206EU206FU202EU200EU200EU206FU206EU202E_m06B03079972D7E477C0573912085484A7C019AFD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF*>(__this + _offset);
	U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202BU206FU200DU200EU200BU202BU202DU200FU206EU200DU206CU206DU202EU200DU206CU202BU202CU200CU202AU200FU206DU206BU202AU206FU200FU202AU202CU200EU202EU206FU206EU202BU200EU206EU206FU202EU200EU200EU206FU206EU202E_m06B03079972D7E477C0573912085484A7C019AFD(_thisAdjusted, method);
}
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202CU200EU200FU206FU200EU202BU202CU206EU206FU200EU200CU200CU202CU200DU206BU200EU200BU206EU206FU202AU206AU206DU202EU202EU206EU206BU206EU206DU202DU202DU206BU200EU206EU206CU202EU206CU200DU200FU202DU206AU202E_m4BC344CC5E999A9A82A1D574E36B5BE43CAB6793 (U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF* __this, U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	{
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_0 = p0;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___U202AU202DU200CU206EU200EU202CU202BU200CU202DU206DU206BU206EU202BU206BU206BU206EU206DU200CU200BU206FU206CU206EU206AU206EU206DU206CU206BU200BU206BU206BU206EU202EU200DU206DU206DU206AU200CU206BU200EU200CU202E_1;
		uint32_t L_2 = __this->___U202BU206AU206BU202AU206DU206BU206EU200FU200EU202CU206BU200EU202AU202CU200DU206CU200FU206AU202CU200BU206FU206FU206BU202EU200DU202AU206CU202DU206CU206FU200CU200FU200CU202BU202AU200BU206FU200BU206DU202EU202E_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((uint32_t)L_1>>((int32_t)11))), (int32_t)L_2));
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_3 = p0;
		NullCheck(L_3);
		uint32_t L_4 = L_3->___U202AU206AU202EU206AU200CU200CU200EU206DU206FU202BU202DU202AU202CU206BU202AU206EU202DU206FU202CU202DU200FU202BU206BU200BU200FU200EU206EU200EU200EU202CU206EU200EU206FU202CU202BU202AU202EU202EU200DU200EU202E_0;
		uint32_t L_5 = V_0;
		if ((!(((uint32_t)L_4) < ((uint32_t)L_5))))
		{
			goto IL_0161;
		}
	}

IL_001d:
	{
		G_B2_0 = ((int32_t)-705613321);
	}

IL_0022:
	{
		int32_t L_6 = ((int32_t)(G_B2_0^((int32_t)-435849874)));
		V_1 = L_6;
		switch (((int32_t)((uint32_t)(int32_t)L_6%(uint32_t)(int32_t)((int32_t)12))))
		{
			case 0:
			{
				goto IL_0067;
			}
			case 1:
			{
				goto IL_0084;
			}
			case 2:
			{
				goto IL_00ca;
			}
			case 3:
			{
				goto IL_0155;
			}
			case 4:
			{
				goto IL_00a1;
			}
			case 5:
			{
				goto IL_0108;
			}
			case 6:
			{
				goto IL_0161;
			}
			case 7:
			{
				goto IL_0179;
			}
			case 8:
			{
				goto IL_0128;
			}
			case 9:
			{
				goto IL_01a6;
			}
			case 10:
			{
				goto IL_01da;
			}
			case 11:
			{
				goto IL_001d;
			}
		}
	}
	{
		goto IL_01da;
	}

IL_0067:
	{
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_7 = p0;
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_8 = L_7;
		NullCheck(L_8);
		uint32_t L_9 = L_8->___U202AU202DU200CU206EU200EU202CU202BU200CU202DU206DU206BU206EU202BU206BU206BU206EU206DU200CU200BU206FU206CU206EU206AU206EU206DU206CU206BU200BU206BU206BU206EU202EU200DU206DU206DU206AU200CU206BU200EU200CU202E_1;
		NullCheck(L_8);
		L_8->___U202AU202DU200CU206EU200EU202CU202BU200CU202DU206DU206BU206EU202BU206BU206BU206EU206DU200CU200BU206FU206CU206EU206AU206EU206DU206CU206BU200BU206BU206BU206EU202EU200DU206DU206DU206AU200CU206BU200EU200CU202E_1 = ((int32_t)((int32_t)L_9<<8));
		uint32_t L_10 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)-618964874)))^((int32_t)1345425284)));
		goto IL_0022;
	}

IL_0084:
	{
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_11 = p0;
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_12 = L_11;
		NullCheck(L_12);
		uint32_t L_13 = L_12->___U202AU206AU202EU206AU200CU200CU200EU206DU206FU202BU202DU202AU202CU206BU202AU206EU202DU206FU202CU202DU200FU202BU206BU200BU200FU200EU206EU200EU200EU202CU206EU200EU206FU202CU202BU202AU202EU202EU200DU200EU202E_0;
		uint32_t L_14 = V_0;
		NullCheck(L_12);
		L_12->___U202AU206AU202EU206AU200CU200CU200EU206DU206FU202BU202DU202AU202CU206BU202AU206EU202DU206FU202CU202DU200FU202BU206BU200BU200FU200EU206EU200EU200EU202CU206EU200EU206FU202CU202BU202AU202EU202EU200DU200EU202E_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)L_14));
		uint32_t L_15 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, ((int32_t)253028994)))^((int32_t)580552322)));
		goto IL_0022;
	}

IL_00a1:
	{
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_16 = p0;
		NullCheck(L_16);
		uint32_t L_17 = L_16->___U202AU202DU200CU206EU200EU202CU202BU200CU202DU206DU206BU206EU202BU206BU206BU206EU206DU200CU200BU206FU206CU206EU206AU206EU206DU206CU206BU200BU206BU206BU206EU202EU200DU206DU206DU206AU200CU206BU200EU200CU202E_1;
		if ((!(((uint32_t)L_17) >= ((uint32_t)((int32_t)16777216)))))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_18 = ((int32_t)60890709);
		G_B9_0 = L_18;
		G_B9_1 = L_18;
		goto IL_00bc;
	}

IL_00b6:
	{
		int32_t L_19 = ((int32_t)901617437);
		G_B9_0 = L_19;
		G_B9_1 = L_19;
	}

IL_00bc:
	{
		uint32_t L_20 = V_1;
		G_B2_0 = ((int32_t)(G_B9_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_20, ((int32_t)2019697640)))));
		goto IL_0022;
	}

IL_00ca:
	{
		uint32_t L_21 = __this->___U202BU206AU206BU202AU206DU206BU206EU200FU200EU202CU206BU200EU202AU202CU200DU206CU200FU206AU202CU200BU206FU206FU206BU202EU200DU202AU206CU202DU206CU206FU200CU200FU200CU202BU202AU200BU206FU200BU206DU202EU202E_0;
		uint32_t L_22 = __this->___U202BU206AU206BU202AU206DU206BU206EU200FU200EU202CU206BU200EU202AU202CU200DU206CU200FU206AU202CU200BU206FU206FU206BU202EU200DU202AU206CU202DU206CU206FU200CU200FU200CU202BU202AU200BU206FU200BU206DU202EU202E_0;
		__this->___U202BU206AU206BU202AU206DU206BU206EU200FU200EU202CU206BU200EU202AU202CU200DU206CU200FU206AU202CU200BU206FU206FU206BU202EU200DU202AU206CU202DU206CU206FU200CU200FU200CU202BU202AU200BU206FU200BU206DU202EU202E_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, ((int32_t)((uint32_t)L_22>>5))));
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_23 = p0;
		NullCheck(L_23);
		uint32_t L_24 = L_23->___U202AU202DU200CU206EU200EU202CU202BU200CU202DU206DU206BU206EU202BU206BU206BU206EU206DU200CU200BU206FU206CU206EU206AU206EU206DU206CU206BU200BU206BU206BU206EU202EU200DU206DU206DU206AU200CU206BU200EU200CU202E_1;
		if ((!(((uint32_t)L_24) < ((uint32_t)((int32_t)16777216)))))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_25 = ((int32_t)-457400160);
		G_B13_0 = L_25;
		G_B13_1 = L_25;
		goto IL_00fa;
	}

IL_00f4:
	{
		int32_t L_26 = ((int32_t)-316281106);
		G_B13_0 = L_26;
		G_B13_1 = L_26;
	}

IL_00fa:
	{
		uint32_t L_27 = V_1;
		G_B2_0 = ((int32_t)(G_B13_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_27, ((int32_t)909137751)))));
		goto IL_0022;
	}

IL_0108:
	{
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_28 = p0;
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_29 = L_28;
		NullCheck(L_29);
		uint32_t L_30 = L_29->___U202AU202DU200CU206EU200EU202CU202BU200CU202DU206DU206BU206EU202BU206BU206BU206EU206DU200CU200BU206FU206CU206EU206AU206EU206DU206CU206BU200BU206BU206BU206EU202EU200DU206DU206DU206AU200CU206BU200EU200CU202E_1;
		NullCheck(L_29);
		L_29->___U202AU202DU200CU206EU200EU202CU202BU200CU202DU206DU206BU206EU202BU206BU206BU206EU206DU200CU200BU206FU206CU206EU206AU206EU206DU206CU206BU200BU206BU206BU206EU202EU200DU206DU206DU206AU200CU206BU200EU200CU202E_1 = ((int32_t)((int32_t)L_30<<8));
		uint32_t L_31 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_31, ((int32_t)1955866162)))^((int32_t)1185012095)));
		goto IL_0022;
	}

IL_0128:
	{
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_32 = p0;
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_33 = p0;
		NullCheck(L_33);
		uint32_t L_34 = L_33->___U202AU206AU202EU206AU200CU200CU200EU206DU206FU202BU202DU202AU202CU206BU202AU206EU202DU206FU202CU202DU200FU202BU206BU200BU200FU200EU206EU200EU200EU202CU206EU200EU206FU202CU202BU202AU202EU202EU200DU200EU202E_0;
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_35 = p0;
		NullCheck(L_35);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_36 = L_35->___U202BU200CU200FU202CU202DU200FU202AU206BU202CU202BU202BU202DU206CU202AU202BU202DU206AU206CU200FU202AU202BU206CU206EU206FU206EU206BU200FU202AU206EU200BU202AU206CU202DU200BU202CU200BU202BU206EU206CU200FU202E_2;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.IO.Stream::ReadByte() */, L_36);
		NullCheck(L_32);
		L_32->___U202AU206AU202EU206AU200CU200CU200EU206DU206FU202BU202DU202AU202CU206BU202AU206EU202DU206FU202CU202DU200FU202BU206BU200BU200FU200EU206EU200EU200EU202CU206EU200EU206FU202CU202BU202AU202EU202EU200DU200EU202E_0 = ((int32_t)(((int32_t)((int32_t)L_34<<8))|((int32_t)(uint8_t)L_37)));
		uint32_t L_38 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_38, ((int32_t)1211508358)))^((int32_t)685113514)));
		goto IL_0022;
	}

IL_0155:
	{
		return 0;
	}
	// Dead block : IL_0157: ldc.i4 -679363592

IL_0161:
	{
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_39 = p0;
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_40 = L_39;
		NullCheck(L_40);
		uint32_t L_41 = L_40->___U202AU202DU200CU206EU200EU202CU202BU200CU202DU206DU206BU206EU202BU206BU206BU206EU206DU200CU200BU206FU206CU206EU206AU206EU206DU206CU206BU200BU206BU206BU206EU202EU200DU206DU206DU206AU200CU206BU200EU200CU202E_1;
		uint32_t L_42 = V_0;
		NullCheck(L_40);
		L_40->___U202AU202DU200CU206EU200EU202CU202BU200CU202DU206DU206BU206EU202BU206BU206BU206EU206DU200CU200BU206FU206CU206EU206AU206EU206DU206CU206BU200BU206BU206BU206EU202EU200DU206DU206DU206AU200CU206BU200EU200CU202E_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)L_42));
		G_B2_0 = ((int32_t)-1880257297);
		goto IL_0022;
	}

IL_0179:
	{
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_43 = p0;
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_44 = p0;
		NullCheck(L_44);
		uint32_t L_45 = L_44->___U202AU206AU202EU206AU200CU200CU200EU206DU206FU202BU202DU202AU202CU206BU202AU206EU202DU206FU202CU202DU200FU202BU206BU200BU200FU200EU206EU200EU200EU202CU206EU200EU206FU202CU202BU202AU202EU202EU200DU200EU202E_0;
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_46 = p0;
		NullCheck(L_46);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_47 = L_46->___U202BU200CU200FU202CU202DU200FU202AU206BU202CU202BU202BU202DU206CU202AU202BU202DU206AU206CU200FU202AU202BU206CU206EU206FU206EU206BU200FU202AU206EU200BU202AU206CU202DU200BU202CU200BU202BU206EU206CU200FU202E_2;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.IO.Stream::ReadByte() */, L_47);
		NullCheck(L_43);
		L_43->___U202AU206AU202EU206AU200CU200CU200EU206DU206FU202BU202DU202AU202CU206BU202AU206EU202DU206FU202CU202DU200FU202BU206BU200BU200FU200EU206EU200EU200EU202CU206EU200EU206FU202CU202BU202AU202EU202EU200DU200EU202E_0 = ((int32_t)(((int32_t)((int32_t)L_45<<8))|((int32_t)(uint8_t)L_48)));
		uint32_t L_49 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_49, ((int32_t)-1379993471)))^((int32_t)-163398912)));
		goto IL_0022;
	}

IL_01a6:
	{
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_50 = p0;
		uint32_t L_51 = V_0;
		NullCheck(L_50);
		L_50->___U202AU202DU200CU206EU200EU202CU202BU200CU202DU206DU206BU206EU202BU206BU206BU206EU206DU200CU200BU206FU206CU206EU206AU206EU206DU206CU206BU200BU206BU206BU206EU202EU200DU206DU206DU206AU200CU206BU200EU200CU202E_1 = L_51;
		uint32_t L_52 = __this->___U202BU206AU206BU202AU206DU206BU206EU200FU200EU202CU206BU200EU202AU202CU200DU206CU200FU206AU202CU200BU206FU206FU206BU202EU200DU202AU206CU202DU206CU206FU200CU200FU200CU202BU202AU200BU206FU200BU206DU202EU202E_0;
		uint32_t L_53 = __this->___U202BU206AU206BU202AU206DU206BU206EU200FU200EU202CU206BU200EU202AU202CU200DU206CU200FU206AU202CU200BU206FU206FU206BU202EU200DU202AU206CU202DU206CU206FU200CU200FU200CU202BU202AU200BU206FU200BU206DU202EU202E_0;
		__this->___U202BU206AU206BU202AU206DU206BU206EU200FU200EU202CU206BU200EU202AU202CU200DU206CU200FU206AU202CU200BU206FU206FU206BU202EU200DU202AU206CU202DU206CU206FU200CU200FU200CU202BU202AU200BU206FU200BU206DU202EU202E_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)2048), (int32_t)L_53))>>5))));
		uint32_t L_54 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_54, ((int32_t)206148183)))^((int32_t)1580685761)));
		goto IL_0022;
	}

IL_01da:
	{
		return 1;
	}
}
IL2CPP_EXTERN_C  uint32_t U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202CU200EU200FU206FU200EU202BU202CU206EU206FU200EU200CU200CU202CU200DU206BU200EU200BU206EU206FU202AU206AU206DU202EU202EU206EU206BU206EU206DU202DU202DU206BU200EU206EU206CU202EU206CU200DU200FU202DU206AU202E_m4BC344CC5E999A9A82A1D574E36B5BE43CAB6793_AdjustorThunk (RuntimeObject* __this, U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* p0, const RuntimeMethod* method)
{
	U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202CU200EU200FU206FU200EU202BU202CU206EU206FU200EU200CU200CU202CU200DU206BU200EU200BU206EU206FU202AU206AU206DU202EU202EU206EU206BU206EU206DU202DU202DU206BU200EU206EU206CU202EU206CU200DU200FU202DU206AU202E_m4BC344CC5E999A9A82A1D574E36B5BE43CAB6793(_thisAdjusted, p0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: <Module>/?????????????????????????????????????????
IL2CPP_EXTERN_C void U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475_marshal_pinvoke(const U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475& unmarshaled, U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledU200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_Length = (unmarshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0)->max_length;
		marshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0 = il2cpp_codegen_marshal_allocate_array<U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF>(_unmarshaledU200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledU200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_Length); i++)
		{
			(marshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0)[i] = (unmarshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0 = NULL;
	}
	marshaled.___U206DU202EU202CU206CU206CU202BU206BU206CU200BU200FU206CU200CU202CU206BU202AU206BU200CU206EU202EU206BU202CU206FU202AU206EU200BU202CU206EU202DU200BU200EU202EU202AU206DU206FU206FU206DU202DU206FU206DU206FU202E_1 = unmarshaled.___U206DU202EU202CU206CU206CU202BU206BU206CU200BU200FU206CU200CU202CU206BU202AU206BU200CU206EU202EU206BU202CU206FU202AU206EU200BU202CU206EU202DU200BU200EU202EU202AU206DU206FU206FU206DU202DU206FU206DU206FU202E_1;
}
IL2CPP_EXTERN_C void U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475_marshal_pinvoke_back(const U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475_marshaled_pinvoke& marshaled, U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0 != NULL)
	{
		if (unmarshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0 == NULL)
		{
			unmarshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0 = reinterpret_cast<U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*>((U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)SZArrayNew(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0), (void*)reinterpret_cast<U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*>((U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)SZArrayNew(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0)[i]);
		}
	}
	int32_t unmarshaledU206DU202EU202CU206CU206CU202BU206BU206CU200BU200FU206CU200CU202CU206BU202AU206BU200CU206EU202EU206BU202CU206FU202AU206EU200BU202CU206EU202DU200BU200EU202EU202AU206DU206FU206FU206DU202DU206FU206DU206FU202E_temp_1 = 0;
	unmarshaledU206DU202EU202CU206CU206CU202BU206BU206CU200BU200FU206CU200CU202CU206BU202AU206BU200CU206EU202EU206BU202CU206FU202AU206EU200BU202CU206EU202DU200BU200EU202EU202AU206DU206FU206FU206DU202DU206FU206DU206FU202E_temp_1 = marshaled.___U206DU202EU202CU206CU206CU202BU206BU206CU200BU200FU206CU200CU202CU206BU202AU206BU200CU206EU202EU206BU202CU206FU202AU206EU200BU202CU206EU202DU200BU200EU202EU202AU206DU206FU206FU206DU202DU206FU206DU206FU202E_1;
	unmarshaled.___U206DU202EU202CU206CU206CU202BU206BU206CU200BU200FU206CU200CU202CU206BU202AU206BU200CU206EU202EU206BU202CU206FU202AU206EU200BU202CU206EU202DU200BU200EU202EU202AU206DU206FU206FU206DU202DU206FU206DU206FU202E_1 = unmarshaledU206DU202EU202CU206CU206CU202BU206BU206CU200BU200FU206CU200CU202CU206BU202AU206BU200CU206EU202EU206BU202CU206FU202AU206EU200BU202CU206EU202DU200BU200EU202EU202AU206DU206FU206FU206DU202DU206FU206DU206FU202E_temp_1;
}
// Conversion method for clean up from marshalling of: <Module>/?????????????????????????????????????????
IL2CPP_EXTERN_C void U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475_marshal_pinvoke_cleanup(U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475_marshaled_pinvoke& marshaled)
{
	if (marshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0);
		marshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0 = NULL;
	}
}
// Conversion methods for marshalling of: <Module>/?????????????????????????????????????????
IL2CPP_EXTERN_C void U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475_marshal_com(const U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475& unmarshaled, U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475_marshaled_com& marshaled)
{
	if (unmarshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledU200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_Length = (unmarshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0)->max_length;
		marshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0 = il2cpp_codegen_marshal_allocate_array<U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF>(_unmarshaledU200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledU200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_Length); i++)
		{
			(marshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0)[i] = (unmarshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0 = NULL;
	}
	marshaled.___U206DU202EU202CU206CU206CU202BU206BU206CU200BU200FU206CU200CU202CU206BU202AU206BU200CU206EU202EU206BU202CU206FU202AU206EU200BU202CU206EU202DU200BU200EU202EU202AU206DU206FU206FU206DU202DU206FU206DU206FU202E_1 = unmarshaled.___U206DU202EU202CU206CU206CU202BU206BU206CU200BU200FU206CU200CU202CU206BU202AU206BU200CU206EU202EU206BU202CU206FU202AU206EU200BU202CU206EU202DU200BU200EU202EU202AU206DU206FU206FU206DU202DU206FU206DU206FU202E_1;
}
IL2CPP_EXTERN_C void U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475_marshal_com_back(const U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475_marshaled_com& marshaled, U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0 != NULL)
	{
		if (unmarshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0 == NULL)
		{
			unmarshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0 = reinterpret_cast<U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*>((U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)SZArrayNew(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0), (void*)reinterpret_cast<U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*>((U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)SZArrayNew(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0)[i]);
		}
	}
	int32_t unmarshaledU206DU202EU202CU206CU206CU202BU206BU206CU200BU200FU206CU200CU202CU206BU202AU206BU200CU206EU202EU206BU202CU206FU202AU206EU200BU202CU206EU202DU200BU200EU202EU202AU206DU206FU206FU206DU202DU206FU206DU206FU202E_temp_1 = 0;
	unmarshaledU206DU202EU202CU206CU206CU202BU206BU206CU200BU200FU206CU200CU202CU206BU202AU206BU200CU206EU202EU206BU202CU206FU202AU206EU200BU202CU206EU202DU200BU200EU202EU202AU206DU206FU206FU206DU202DU206FU206DU206FU202E_temp_1 = marshaled.___U206DU202EU202CU206CU206CU202BU206BU206CU200BU200FU206CU200CU202CU206BU202AU206BU200CU206EU202EU206BU202CU206FU202AU206EU200BU202CU206EU202DU200BU200EU202EU202AU206DU206FU206FU206DU202DU206FU206DU206FU202E_1;
	unmarshaled.___U206DU202EU202CU206CU206CU202BU206BU206CU200BU200FU206CU200CU202CU206BU202AU206BU200CU206EU202EU206BU202CU206FU202AU206EU200BU202CU206EU202DU200BU200EU202EU202AU206DU206FU206FU206DU202DU206FU206DU206FU202E_1 = unmarshaledU206DU202EU202CU206CU206CU202BU206BU206CU200BU200FU206CU200CU202CU206BU202AU206BU200CU206EU202EU206BU202CU206FU202AU206EU200BU202CU206EU202DU200BU200EU202EU202AU206DU206FU206FU206DU202DU206FU206DU206FU202E_temp_1;
}
// Conversion method for clean up from marshalling of: <Module>/?????????????????????????????????????????
IL2CPP_EXTERN_C void U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475_marshal_com_cleanup(U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475_marshaled_com& marshaled)
{
	if (marshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0);
		marshaled.___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0 = NULL;
	}
}
// System.Void <Module>/?????????????????????????????????????????::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E__ctor_m372A617E298A608CB3361DEB5DA2E8CE2AC5A165 (U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475* __this, int32_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		__this->___U206DU202EU202CU206CU206CU202BU206BU206CU200BU200FU206CU200CU202CU206BU202AU206BU200CU206EU202EU206BU202CU206FU202AU206EU200BU202CU206EU202DU200BU200EU202EU202AU206DU206FU206FU206DU202DU206FU206DU206FU202E_1 = L_0;
		int32_t L_1 = p0;
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_2 = (U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)SZArrayNew(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_1&((int32_t)31))))));
		__this->___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E__ctor_m372A617E298A608CB3361DEB5DA2E8CE2AC5A165_AdjustorThunk (RuntimeObject* __this, int32_t p0, const RuntimeMethod* method)
{
	U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475*>(__this + _offset);
	U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E__ctor_m372A617E298A608CB3361DEB5DA2E8CE2AC5A165(_thisAdjusted, p0, method);
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U200CU206BU202DU200BU206DU206AU206AU200DU202BU206BU200EU200CU200EU202AU202AU202DU200BU206DU206DU202BU200DU202BU202DU202CU200FU200FU200BU200BU206DU202EU206AU200DU206BU206FU200CU200CU206EU200EU200FU200EU202E_m802B57CB47B9B1CDBD8A26D1C10E44EC2247CCFA (U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	{
		V_0 = 1;
	}

IL_0002:
	{
		G_B2_0 = ((int32_t)205242651);
	}

IL_0007:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)1398885791)));
		V_1 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)6)))
		{
			case 0:
			{
				goto IL_0052;
			}
			case 1:
			{
				goto IL_006b;
			}
			case 2:
			{
				goto IL_0002;
			}
			case 3:
			{
				goto IL_008f;
			}
			case 4:
			{
				goto IL_0030;
			}
			case 5:
			{
				goto IL_003f;
			}
		}
	}
	{
		goto IL_008f;
	}

IL_0030:
	{
		uint32_t L_1 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_1, ((int32_t)2030260754)))^((int32_t)-1291856716)));
		goto IL_0007;
	}

IL_003f:
	{
		uint32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, 1));
		uint32_t L_3 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)1891821660)))^((int32_t)-868335360)));
		goto IL_0007;
	}

IL_0052:
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_4 = __this->___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0;
		uint32_t L_5 = V_0;
		NullCheck(L_4);
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202BU206FU200DU200EU200BU202BU202DU200FU206EU200DU206CU206DU202EU200DU206CU202BU202CU200CU202AU200FU206DU206BU202AU206FU200FU202AU202CU200EU202EU206FU206EU202BU200EU206EU206FU202EU200EU200EU206FU206EU202E_m06B03079972D7E477C0573912085484A7C019AFD(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_5)))), NULL);
		G_B2_0 = ((int32_t)2080438406);
		goto IL_0007;
	}

IL_006b:
	{
		uint32_t L_6 = V_0;
		int32_t L_7 = __this->___U206DU202EU202CU206CU206CU202BU206BU206CU200BU200FU206CU200CU202CU206BU202AU206BU200CU206EU202EU206BU202CU206FU202AU206EU200BU202CU206EU202DU200BU200EU202EU202AU206DU206FU206FU206DU202DU206FU206DU206FU202E_1;
		if ((((int64_t)((int64_t)(uint64_t)L_6)) >= ((int64_t)((int64_t)((int32_t)(1<<((int32_t)(L_7&((int32_t)31)))))))))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_8 = ((int32_t)2111060993);
		G_B10_0 = L_8;
		G_B10_1 = L_8;
		goto IL_0089;
	}

IL_0083:
	{
		int32_t L_9 = ((int32_t)733316368);
		G_B10_0 = L_9;
		G_B10_1 = L_9;
	}

IL_0089:
	{
		G_B2_0 = G_B10_1;
		goto IL_0007;
	}

IL_008f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U200CU206BU202DU200BU206DU206AU206AU200DU202BU206BU200EU200CU200EU202AU202AU202DU200BU206DU206DU202BU200DU202BU202DU202CU200FU200FU200BU200BU206DU202EU206AU200DU206BU206FU200CU200CU206EU200EU200FU200EU202E_m802B57CB47B9B1CDBD8A26D1C10E44EC2247CCFA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475*>(__this + _offset);
	U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U200CU206BU202DU200BU206DU206AU206AU200DU202BU206BU200EU200CU200EU202AU202AU202DU200BU206DU206DU202BU200DU202BU202DU202CU200FU200FU200BU200BU206DU202EU206AU200DU206BU206FU200CU200CU206EU200EU200FU200EU202E_m802B57CB47B9B1CDBD8A26D1C10E44EC2247CCFA(_thisAdjusted, method);
}
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U200BU200DU206DU202DU200BU206DU206AU206AU200CU206AU206FU200DU200EU202BU202CU200EU202DU202DU206FU206FU200FU206EU202CU200FU202DU206CU206EU202BU206EU202DU200FU206AU206AU202EU200BU206FU206DU202CU200BU200FU202E_m110AF332C1D3EBAB0ED019DFB3F4ED6341A2F4B5 (U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475* __this, U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	{
		V_0 = 1;
	}

IL_0002:
	{
		G_B2_0 = ((int32_t)-949694292);
	}

IL_0007:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)-1798663239)));
		V_2 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)7)))
		{
			case 0:
			{
				goto IL_008e;
			}
			case 1:
			{
				goto IL_00a6;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_0002;
			}
			case 4:
			{
				goto IL_0056;
			}
			case 5:
			{
				goto IL_0047;
			}
			case 6:
			{
				goto IL_0075;
			}
		}
	}
	{
		goto IL_00a6;
	}

IL_0034:
	{
		int32_t L_1 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		uint32_t L_2 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_2, ((int32_t)1729825893)))^((int32_t)-529009195)));
		goto IL_0007;
	}

IL_0047:
	{
		uint32_t L_3 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)516573721)))^((int32_t)1482724207)));
		goto IL_0007;
	}

IL_0056:
	{
		uint32_t L_4 = V_0;
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_5 = __this->___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0;
		uint32_t L_6 = V_0;
		NullCheck(L_5);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_7 = p0;
		uint32_t L_8;
		L_8 = U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202CU200EU200FU206FU200EU202BU202CU206EU206FU200EU200CU200CU202CU200DU206BU200EU200BU206EU206FU202AU206AU206DU202EU202EU206EU206BU206EU206DU202DU202DU206BU200EU206EU206CU202EU206CU200DU200FU202DU206AU202E_m4BC344CC5E999A9A82A1D574E36B5BE43CAB6793(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_6)))), L_7, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_4<<1)), (int32_t)L_8));
		G_B2_0 = ((int32_t)-903844737);
		goto IL_0007;
	}

IL_0075:
	{
		int32_t L_9 = __this->___U206DU202EU202CU206CU206CU202BU206BU206CU200BU200FU206CU200CU202CU206BU202AU206BU200CU206EU202EU206BU202CU206FU202AU206EU200BU202CU206EU202DU200BU200EU202EU202AU206DU206FU206FU206DU202DU206FU206DU206FU202E_1;
		V_1 = L_9;
		uint32_t L_10 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)-751109316)))^((int32_t)1837092113)));
		goto IL_0007;
	}

IL_008e:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_12 = ((int32_t)-10570750);
		G_B11_0 = L_12;
		G_B11_1 = L_12;
		goto IL_00a0;
	}

IL_009a:
	{
		int32_t L_13 = ((int32_t)-1461316504);
		G_B11_0 = L_13;
		G_B11_1 = L_13;
	}

IL_00a0:
	{
		G_B2_0 = G_B11_1;
		goto IL_0007;
	}

IL_00a6:
	{
		uint32_t L_14 = V_0;
		int32_t L_15 = __this->___U206DU202EU202CU206CU206CU202BU206BU206CU200BU200FU206CU200CU202CU206BU202AU206BU200CU206EU202EU206BU202CU206FU202AU206EU200BU202CU206EU202DU200BU200EU202EU202AU206DU206FU206FU206DU202DU206FU206DU206FU202E_1;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, ((int32_t)(1<<((int32_t)(L_15&((int32_t)31)))))));
	}
}
IL2CPP_EXTERN_C  uint32_t U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U200BU200DU206DU202DU200BU206DU206AU206AU200CU206AU206FU200DU200EU202BU202CU200EU202DU202DU206FU206FU200FU206EU202CU200FU202DU206CU206EU202BU206EU202DU200FU206AU206AU202EU200BU206FU206DU202CU200BU200FU202E_m110AF332C1D3EBAB0ED019DFB3F4ED6341A2F4B5_AdjustorThunk (RuntimeObject* __this, U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* p0, const RuntimeMethod* method)
{
	U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U200BU200DU206DU202DU200BU206DU206AU206AU200CU206AU206FU200DU200EU202BU202CU200EU202DU202DU206FU206FU200FU206EU202CU200FU202DU206CU206EU202BU206EU202DU200FU206AU206AU202EU200BU206FU206DU202CU200BU200FU202E_m110AF332C1D3EBAB0ED019DFB3F4ED6341A2F4B5(_thisAdjusted, p0, method);
	return _returnValue;
}
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U200FU202CU200DU206EU200CU206FU206DU202AU206DU202AU206DU206FU202AU206AU206DU206AU206AU206DU200DU200CU202CU202DU206AU200BU206EU206EU206BU206DU200CU200BU202BU206AU206EU206CU200CU200FU202BU206AU200BU202AU202E_mCFC4B0F295A359B806920E4006C1517C4B774A34 (U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475* __this, U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		V_0 = 1;
	}

IL_0002:
	{
		G_B2_0 = ((int32_t)-47058895);
	}

IL_0007:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)-1270496304)));
		V_4 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)8)))
		{
			case 0:
			{
				goto IL_0069;
			}
			case 1:
			{
				goto IL_00bc;
			}
			case 2:
			{
				goto IL_0083;
			}
			case 3:
			{
				goto IL_009e;
			}
			case 4:
			{
				goto IL_003c;
			}
			case 5:
			{
				goto IL_0002;
			}
			case 6:
			{
				goto IL_0059;
			}
			case 7:
			{
				goto IL_00d3;
			}
		}
	}
	{
		goto IL_00d3;
	}

IL_003c:
	{
		uint32_t L_1 = V_1;
		uint32_t L_2 = V_3;
		int32_t L_3 = V_2;
		V_1 = ((int32_t)((int32_t)L_1|((int32_t)((int32_t)L_2<<((int32_t)(L_3&((int32_t)31)))))));
		int32_t L_4 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		uint32_t L_5 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)-1495737641)))^((int32_t)-63471804)));
		goto IL_0007;
	}

IL_0059:
	{
		uint32_t L_6 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)-660518174)))^((int32_t)1145339148)));
		goto IL_0007;
	}

IL_0069:
	{
		int32_t L_7 = V_2;
		int32_t L_8 = __this->___U206DU202EU202CU206CU206CU202BU206BU206CU200BU200FU206CU200CU202CU206BU202AU206BU200CU206EU202EU206BU202CU206FU202AU206EU200BU202CU206EU202DU200BU200EU202EU202AU206DU206FU206FU206DU202DU206FU206DU206FU202E_1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_9 = ((int32_t)-1346404681);
		G_B9_0 = L_9;
		G_B9_1 = L_9;
		goto IL_0080;
	}

IL_007a:
	{
		int32_t L_10 = ((int32_t)-532160133);
		G_B9_0 = L_10;
		G_B9_1 = L_10;
	}

IL_0080:
	{
		G_B2_0 = G_B9_1;
		goto IL_0007;
	}

IL_0083:
	{
		uint32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11<<1));
		uint32_t L_12 = V_0;
		uint32_t L_13 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13));
		uint32_t L_14 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)522394775)))^((int32_t)-1488621918)));
		goto IL_0007;
	}

IL_009e:
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_15 = __this->___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0;
		uint32_t L_16 = V_0;
		NullCheck(L_15);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_17 = p0;
		uint32_t L_18;
		L_18 = U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202CU200EU200FU206FU200EU202BU202CU206EU206FU200EU200CU200CU202CU200DU206BU200EU200BU206EU206FU202AU206AU206DU202EU202EU206EU206BU206EU206DU202DU202DU206BU200EU206EU206CU202EU206CU200DU200FU202DU206AU202E_m4BC344CC5E999A9A82A1D574E36B5BE43CAB6793(((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_16)))), L_17, NULL);
		V_3 = L_18;
		G_B2_0 = ((int32_t)-992452398);
		goto IL_0007;
	}

IL_00bc:
	{
		V_1 = 0;
		V_2 = 0;
		uint32_t L_19 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, ((int32_t)-122137985)))^((int32_t)10161193)));
		goto IL_0007;
	}

IL_00d3:
	{
		uint32_t L_20 = V_1;
		return L_20;
	}
}
IL2CPP_EXTERN_C  uint32_t U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U200FU202CU200DU206EU200CU206FU206DU202AU206DU202AU206DU206FU202AU206AU206DU206AU206AU206DU200DU200CU202CU202DU206AU200BU206EU206EU206BU206DU200CU200BU202BU206AU206EU206CU200CU200FU202BU206AU200BU202AU202E_mCFC4B0F295A359B806920E4006C1517C4B774A34_AdjustorThunk (RuntimeObject* __this, U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* p0, const RuntimeMethod* method)
{
	U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U200FU202CU200DU206EU200CU206FU206DU202AU206DU202AU206DU206FU202AU206AU206DU206AU206AU206DU200DU200CU202CU202DU206AU200BU206EU206EU206BU206DU200CU200BU202BU206AU206EU206CU200CU200FU202BU206AU200BU202AU202E_mCFC4B0F295A359B806920E4006C1517C4B774A34(_thisAdjusted, p0, method);
	return _returnValue;
}
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????[],System.UInt32,<Module>/?????????????????????????????????????????,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U206AU206DU200DU206DU206EU206CU206EU206BU200CU200CU200BU202EU206CU202CU206BU206DU200EU200DU206FU200DU206FU202BU202BU200BU200CU202BU206EU202DU202AU206EU206CU206EU202BU200DU202DU202AU200FU200EU206EU200CU202E_mDD1235FA317D81A1BBAE4E9DEEC60176E5DF7EA8 (U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* p0, uint32_t p1, U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* p2, int32_t p3, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	{
		V_0 = 1;
	}

IL_0002:
	{
		G_B2_0 = ((int32_t)-762054981);
	}

IL_0007:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)-100803171)));
		V_4 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_005e;
			}
			case 1:
			{
				goto IL_009d;
			}
			case 2:
			{
				goto IL_00cb;
			}
			case 3:
			{
				goto IL_00fa;
			}
			case 4:
			{
				goto IL_0070;
			}
			case 5:
			{
				goto IL_0045;
			}
			case 6:
			{
				goto IL_0082;
			}
			case 7:
			{
				goto IL_00e3;
			}
			case 8:
			{
				goto IL_0002;
			}
			case 9:
			{
				goto IL_00b8;
			}
		}
	}
	{
		goto IL_00fa;
	}

IL_0045:
	{
		uint32_t L_1 = V_1;
		uint32_t L_2 = V_3;
		int32_t L_3 = V_2;
		V_1 = ((int32_t)((int32_t)L_1|((int32_t)((int32_t)L_2<<((int32_t)(L_3&((int32_t)31)))))));
		uint32_t L_4 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)1842888896)))^((int32_t)-1635844986)));
		goto IL_0007;
	}

IL_005e:
	{
		V_2 = 0;
		uint32_t L_5 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)2006762609)))^((int32_t)-1349077502)));
		goto IL_0007;
	}

IL_0070:
	{
		V_1 = 0;
		uint32_t L_6 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)1854207608)))^((int32_t)1413525945)));
		goto IL_0007;
	}

IL_0082:
	{
		uint32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7<<1));
		uint32_t L_8 = V_0;
		uint32_t L_9 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9));
		uint32_t L_10 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)-1721093435)))^((int32_t)381077764)));
		goto IL_0007;
	}

IL_009d:
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_11 = p0;
		uint32_t L_12 = p1;
		uint32_t L_13 = V_0;
		NullCheck(L_11);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_14 = p2;
		uint32_t L_15;
		L_15 = U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202CU200EU200FU206FU200EU202BU202CU206EU206FU200EU200CU200CU202CU200DU206BU200EU200BU206EU206FU202AU206AU206DU202EU202EU206EU206BU206EU206DU202DU202DU206BU200EU206EU206CU202EU206CU200DU200FU202DU206AU202E_m4BC344CC5E999A9A82A1D574E36B5BE43CAB6793(((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13)))))), L_14, NULL);
		V_3 = L_15;
		G_B2_0 = ((int32_t)-1691989835);
		goto IL_0007;
	}

IL_00b8:
	{
		uint32_t L_16 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_16, ((int32_t)-1920569776)))^((int32_t)-1937685013)));
		goto IL_0007;
	}

IL_00cb:
	{
		int32_t L_17 = V_2;
		int32_t L_18 = p3;
		if ((((int32_t)L_17) >= ((int32_t)L_18)))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_19 = ((int32_t)-1548021282);
		G_B13_0 = L_19;
		G_B13_1 = L_19;
		goto IL_00dd;
	}

IL_00d7:
	{
		int32_t L_20 = ((int32_t)-855532290);
		G_B13_0 = L_20;
		G_B13_1 = L_20;
	}

IL_00dd:
	{
		G_B2_0 = G_B13_1;
		goto IL_0007;
	}

IL_00e3:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		uint32_t L_22 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_22, ((int32_t)812628775)))^((int32_t)1914435526)));
		goto IL_0007;
	}

IL_00fa:
	{
		uint32_t L_23 = V_1;
		return L_23;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <Module>/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E__ctor_mCB979A30555FD801D162AC852A6BFAE4546D57F2 (U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_U206DU206CU200CU206DU200EU206FU200BU202EU200CU202DU206FU200BU200CU202EU202EU206CU206AU202BU202BU200EU206DU206AU206AU202EU202BU206CU200DU202AU206BU206DU202BU206EU200FU202BU206DU200BU202EU200FU200FU200FU202E_mEE5C0C49771E4A9B0C7FEF47D0F6732A22130BB1 (U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = p0;
		__this->___U202BU200CU200FU202CU202DU200FU202AU206BU202CU202BU202BU202DU206CU202AU202BU202DU206AU206CU200FU202AU202BU206CU206EU206FU206EU206BU200FU202AU206EU200BU202AU206CU202DU200BU202CU200BU202BU206EU206CU200FU202E_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U202BU200CU200FU202CU202DU200FU202AU206BU202CU202BU202BU202DU206CU202AU202BU202DU206AU206CU200FU202AU202BU206CU206EU206FU206EU206BU200FU202AU206EU200BU202AU206CU202DU200BU202CU200BU202BU206EU206CU200FU202E_2), (void*)L_0);
		__this->___U202AU206AU202EU206AU200CU200CU200EU206DU206FU202BU202DU202AU202CU206BU202AU206EU202DU206FU202CU202DU200FU202BU206BU200BU200FU200EU206EU200EU200EU202CU206EU200EU206FU202CU202BU202AU202EU202EU200DU200EU202E_0 = 0;
		__this->___U202AU202DU200CU206EU200EU202CU202BU200CU202DU206DU206BU206EU202BU206BU206BU206EU206DU200CU200BU206FU206CU206EU206AU206EU206DU206CU206BU200BU206BU206BU206EU202EU200DU206DU206DU206AU200CU206BU200EU200CU202E_1 = (-1);
	}

IL_0015:
	{
		G_B2_0 = ((int32_t)-1541008530);
	}

IL_001a:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-747428730)));
		V_1 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)7)))
		{
			case 0:
			{
				goto IL_0015;
			}
			case 1:
			{
				goto IL_007a;
			}
			case 2:
			{
				goto IL_008d;
			}
			case 3:
			{
				goto IL_0058;
			}
			case 4:
			{
				goto IL_009f;
			}
			case 5:
			{
				goto IL_00b7;
			}
			case 6:
			{
				goto IL_0047;
			}
		}
	}
	{
		goto IL_00b7;
	}

IL_0047:
	{
		V_0 = 0;
		uint32_t L_2 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_2, ((int32_t)-1367564171)))^((int32_t)1560373833)));
		goto IL_001a;
	}

IL_0058:
	{
		uint32_t L_3 = __this->___U202AU206AU202EU206AU200CU200CU200EU206DU206FU202BU202DU202AU202CU206BU202AU206EU202DU206FU202CU202DU200FU202BU206BU200BU200FU200EU206EU200EU200EU202CU206EU200EU206FU202CU202BU202AU202EU202EU200DU200EU202E_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___U202BU200CU200FU202CU202DU200FU202AU206BU202CU202BU202BU202DU206CU202AU202BU202DU206AU206CU200FU202AU202BU206CU206EU206FU206EU206BU200FU202AU206EU200BU202AU206CU202DU200BU202CU200BU202BU206EU206CU200FU202E_2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.IO.Stream::ReadByte() */, L_4);
		__this->___U202AU206AU202EU206AU200CU200CU200EU206DU206FU202BU202DU202AU202CU206BU202AU206EU202DU206FU202CU202DU200FU202BU206BU200BU200FU200EU206EU200EU200EU202CU206EU200EU206FU202CU202BU202AU202EU202EU200DU200EU202E_0 = ((int32_t)(((int32_t)((int32_t)L_3<<8))|((int32_t)(uint8_t)L_5)));
		G_B2_0 = ((int32_t)-34448249);
		goto IL_001a;
	}

IL_007a:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		uint32_t L_7 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)-1726035181)))^((int32_t)1007710207)));
		goto IL_001a;
	}

IL_008d:
	{
		uint32_t L_8 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)-620320574)))^((int32_t)-450353118)));
		goto IL_001a;
	}

IL_009f:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)5)))
		{
			goto IL_00ab;
		}
	}
	{
		int32_t L_10 = ((int32_t)-1184434096);
		G_B11_0 = L_10;
		G_B11_1 = L_10;
		goto IL_00b1;
	}

IL_00ab:
	{
		int32_t L_11 = ((int32_t)-1490735383);
		G_B11_0 = L_11;
		G_B11_1 = L_11;
	}

IL_00b1:
	{
		G_B2_0 = G_B11_1;
		goto IL_001a;
	}

IL_00b7:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_U206FU200BU206DU206AU200EU202EU200CU202DU200DU200BU200FU200DU206BU202DU202EU200FU202BU206AU200FU206FU206DU202BU202BU206CU206EU206FU202EU200CU206EU202BU202DU202CU206AU200FU206DU202EU206AU202EU200DU206CU202E_m7E2433129BFC97EF0DB5AEDA132B057B236D55C5 (U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		__this->___U202BU200CU200FU202CU202DU200FU202AU206BU202CU202BU202BU202DU206CU202AU202BU202DU206AU206CU200FU202AU202BU206CU206EU206FU206EU206BU200FU202AU206EU200BU202AU206CU202DU200BU202CU200BU202BU206EU206CU200FU202E_2 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U202BU200CU200FU202CU202DU200FU202AU206BU202CU202BU202BU202DU206CU202AU202BU202DU206AU206CU200FU202AU202BU206CU206EU206FU206EU206BU200FU202AU206EU200BU202AU206CU202DU200BU202CU200BU202BU206EU206CU200FU202E_2), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_U200CU206BU200DU206DU202BU206AU206AU206AU200EU202DU200DU200EU200FU206BU206FU200FU200CU200DU206BU206AU202AU206AU202EU206DU206BU202BU200EU200BU200FU206FU206DU202AU206AU200CU200FU206CU202AU200EU202EU202BU202E_m8A14509E7F78DD7F3A61A01BED2758BF24708723 (U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		goto IL_0058;
	}

IL_0002:
	{
		G_B2_0 = ((int32_t)2120524800);
	}

IL_0007:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)1863530373)));
		V_0 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0076;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_0002;
			}
			case 3:
			{
				goto IL_0058;
			}
		}
	}
	{
		goto IL_0076;
	}

IL_0028:
	{
		uint32_t L_1 = __this->___U202AU206AU202EU206AU200CU200CU200EU206DU206FU202BU202DU202AU202CU206BU202AU206EU202DU206FU202CU202DU200FU202BU206BU200BU200FU200EU206EU200EU200EU202CU206EU200EU206FU202CU202BU202AU202EU202EU200DU200EU202E_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___U202BU200CU200FU202CU202DU200FU202AU206BU202CU202BU202BU202DU206CU202AU202BU202DU206AU206CU200FU202AU202BU206CU206EU206FU206EU206BU200FU202AU206EU200BU202AU206CU202DU200BU202CU200BU202BU206EU206CU200FU202E_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.IO.Stream::ReadByte() */, L_2);
		__this->___U202AU206AU202EU206AU200CU200CU200EU206DU206FU202BU202DU202AU202CU206BU202AU206EU202DU206FU202CU202DU200FU202BU206BU200BU200FU200EU206EU200EU200EU202CU206EU200EU206FU202CU202BU202AU202EU202EU200DU200EU202E_0 = ((int32_t)(((int32_t)((int32_t)L_1<<8))|((int32_t)(uint8_t)L_3)));
		uint32_t L_4 = __this->___U202AU202DU200CU206EU200EU202CU202BU200CU202DU206DU206BU206EU202BU206BU206BU206EU206DU200CU200BU206FU206CU206EU206AU206EU206DU206CU206BU200BU206BU206BU206EU202EU200DU206DU206DU206AU200CU206BU200EU200CU202E_1;
		__this->___U202AU202DU200CU206EU200EU202CU202BU200CU202DU206DU206BU206EU202BU206BU206BU206EU206DU200CU200BU206FU206CU206EU206AU206EU206DU206CU206BU200BU206BU206BU206EU202EU200DU206DU206DU206AU200CU206BU200EU200CU202E_1 = ((int32_t)((int32_t)L_4<<8));
		G_B2_0 = ((int32_t)1015918842);
		goto IL_0007;
	}

IL_0058:
	{
		uint32_t L_5 = __this->___U202AU202DU200CU206EU200EU202CU202BU200CU202DU206DU206BU206EU202BU206BU206BU206EU206DU200CU200BU206FU206CU206EU206AU206EU206DU206CU206BU200BU206BU206BU206EU202EU200DU206DU206DU206AU200CU206BU200EU200CU202E_1;
		if ((!(((uint32_t)L_5) < ((uint32_t)((int32_t)16777216)))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_6 = ((int32_t)2120524800);
		G_B8_0 = L_6;
		G_B8_1 = L_6;
		goto IL_0073;
	}

IL_006d:
	{
		int32_t L_7 = ((int32_t)1156209213);
		G_B8_0 = L_7;
		G_B8_1 = L_7;
	}

IL_0073:
	{
		G_B2_0 = G_B8_1;
		goto IL_0007;
	}

IL_0076:
	{
		return;
	}
}
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_U200DU200EU206DU206BU202DU202EU200EU200BU202CU200BU202AU202CU202EU202CU200DU202CU202AU200CU200CU206DU206EU206DU202BU206FU206DU206DU200EU206AU206AU206AU206AU202DU206AU202AU200EU202AU202DU202BU202BU202BU202E_mB18EA6A960AC6D7BFC69FDD36986AA6F18F1F560 (U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* __this, int32_t p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B19_1 = 0;
	{
		uint32_t L_0 = __this->___U202AU202DU200CU206EU200EU202CU202BU200CU202DU206DU206BU206EU202BU206BU206BU206EU206DU200CU200BU206FU206CU206EU206AU206EU206DU206CU206BU200BU206BU206BU206EU202EU200DU206DU206DU206AU200CU206BU200EU200CU202E_1;
		V_0 = L_0;
		uint32_t L_1 = __this->___U202AU206AU202EU206AU200CU200CU200EU206DU206FU202BU202DU202AU202CU206BU202AU206EU202DU206FU202CU202DU200FU202BU206BU200BU200FU200EU206EU200EU200EU202CU206EU200EU206FU202CU202BU202AU202EU202EU200DU200EU202E_0;
		V_1 = L_1;
	}

IL_000e:
	{
		G_B2_0 = ((int32_t)876880104);
	}

IL_0013:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)1848734083)));
		V_5 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)15))))
		{
			case 0:
			{
				goto IL_00d4;
			}
			case 1:
			{
				goto IL_0137;
			}
			case 2:
			{
				goto IL_01a4;
			}
			case 3:
			{
				goto IL_007c;
			}
			case 4:
			{
				goto IL_010b;
			}
			case 5:
			{
				goto IL_0122;
			}
			case 6:
			{
				goto IL_00e7;
			}
			case 7:
			{
				goto IL_018e;
			}
			case 8:
			{
				goto IL_0145;
			}
			case 9:
			{
				goto IL_0172;
			}
			case 10:
			{
				goto IL_0093;
			}
			case 11:
			{
				goto IL_015d;
			}
			case 12:
			{
				goto IL_0065;
			}
			case 13:
			{
				goto IL_00af;
			}
			case 14:
			{
				goto IL_000e;
			}
		}
	}
	{
		goto IL_01a4;
	}

IL_0065:
	{
		uint32_t L_3 = V_0;
		__this->___U202AU202DU200CU206EU200EU202CU202BU200CU202DU206DU206BU206EU202BU206BU206BU206EU206DU200CU200BU206FU206CU206EU206AU206EU206DU206CU206BU200BU206BU206BU206EU202EU200DU206DU206DU206AU200CU206BU200EU200CU202E_1 = L_3;
		uint32_t L_4 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)-1862028351)))^((int32_t)1563583961)));
		goto IL_0013;
	}

IL_007c:
	{
		uint32_t L_5 = V_1;
		__this->___U202AU206AU202EU206AU200CU200CU200EU206DU206FU202BU202DU202AU202CU206BU202AU206EU202DU206FU202CU202DU200FU202BU206BU200BU200FU200EU206EU200EU200EU202CU206EU200EU206FU202CU202BU202AU202EU202EU200DU200EU202E_0 = L_5;
		uint32_t L_6 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)581247326)))^((int32_t)163685131)));
		goto IL_0013;
	}

IL_0093:
	{
		uint32_t L_7 = V_1;
		uint32_t L_8 = V_0;
		uint32_t L_9 = V_4;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, ((int32_t)((int32_t)L_8&((int32_t)il2cpp_codegen_subtract((int32_t)L_9, 1))))));
		uint32_t L_10 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)714559924)))^((int32_t)-760795694)));
		goto IL_0013;
	}

IL_00af:
	{
		uint32_t L_11 = V_0;
		if ((!(((uint32_t)L_11) >= ((uint32_t)((int32_t)16777216)))))
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_12 = ((int32_t)-859162156);
		G_B10_0 = L_12;
		G_B10_1 = L_12;
		goto IL_00c5;
	}

IL_00bf:
	{
		int32_t L_13 = ((int32_t)-231647007);
		G_B10_0 = L_13;
		G_B10_1 = L_13;
	}

IL_00c5:
	{
		uint32_t L_14 = V_5;
		G_B2_0 = ((int32_t)(G_B10_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)-1416562155)))));
		goto IL_0013;
	}

IL_00d4:
	{
		uint32_t L_15 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, ((int32_t)-1736393807)))^((int32_t)-2011707592)));
		goto IL_0013;
	}

IL_00e7:
	{
		uint32_t L_16 = V_1;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_17 = __this->___U202BU200CU200FU202CU202DU200FU202AU206BU202CU202BU202BU202DU206CU202AU202BU202DU206AU206CU200FU202AU202BU206CU206EU206FU206EU206BU200FU202AU206EU200BU202AU206CU202DU200BU202CU200BU202BU206EU206CU200FU202E_2;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.IO.Stream::ReadByte() */, L_17);
		V_1 = ((int32_t)(((int32_t)((int32_t)L_16<<8))|((int32_t)(uint8_t)L_18)));
		uint32_t L_19 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, ((int32_t)754478566)))^((int32_t)-180246941)));
		goto IL_0013;
	}

IL_010b:
	{
		uint32_t L_20 = V_0;
		V_0 = ((int32_t)((int32_t)L_20<<8));
		uint32_t L_21 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_21, ((int32_t)25104322)))^((int32_t)1388362476)));
		goto IL_0013;
	}

IL_0122:
	{
		V_2 = 0;
		uint32_t L_22 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_22, ((int32_t)-861939169)))^((int32_t)-1451845049)));
		goto IL_0013;
	}

IL_0137:
	{
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		G_B2_0 = ((int32_t)374003345);
		goto IL_0013;
	}

IL_0145:
	{
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) <= ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		int32_t L_25 = ((int32_t)230088027);
		G_B19_0 = L_25;
		G_B19_1 = L_25;
		goto IL_0157;
	}

IL_0151:
	{
		int32_t L_26 = ((int32_t)1700032962);
		G_B19_0 = L_26;
		G_B19_1 = L_26;
	}

IL_0157:
	{
		G_B2_0 = G_B19_1;
		goto IL_0013;
	}

IL_015d:
	{
		int32_t L_27 = p0;
		V_3 = L_27;
		uint32_t L_28 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_28, ((int32_t)-829832017)))^((int32_t)-205043323)));
		goto IL_0013;
	}

IL_0172:
	{
		uint32_t L_29 = V_2;
		uint32_t L_30 = V_4;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_29<<1))|((int32_t)il2cpp_codegen_subtract(1, (int32_t)L_30))));
		uint32_t L_31 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_31, ((int32_t)183689147)))^((int32_t)385797308)));
		goto IL_0013;
	}

IL_018e:
	{
		uint32_t L_32 = V_0;
		V_0 = ((int32_t)((uint32_t)L_32>>1));
		uint32_t L_33 = V_1;
		uint32_t L_34 = V_0;
		V_4 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)L_34))>>((int32_t)31)));
		G_B2_0 = ((int32_t)837126712);
		goto IL_0013;
	}

IL_01a4:
	{
		uint32_t L_35 = V_2;
		return L_35;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <Module>/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E__ctor_mD7346A4A2A72B79843602A8D72FFED4E3A6A3C4C (U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_0 = (U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)SZArrayNew(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)192)));
		__this->___U202BU200DU200FU206CU202BU200BU202BU200FU206EU202AU202EU202BU202BU206BU202CU200BU206CU206EU202DU202EU202CU206FU206AU200BU206AU206CU206AU200EU202EU200CU202DU200BU202CU206EU206DU206BU202DU200FU200EU202E_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U202BU200DU200FU206CU202BU200BU202BU200FU206EU202AU202EU202BU202BU206BU202CU200BU206CU206EU202DU202EU202CU206FU206AU200BU206AU206CU206AU200EU202EU200CU202DU200BU202CU206EU206DU206BU202DU200FU200EU202E_0), (void*)L_0);
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_1 = (U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)SZArrayNew(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)192)));
		__this->___U202EU200FU206CU206AU200CU206EU202DU206BU202EU200DU206EU206BU200EU206BU206BU202DU206CU206AU206FU200DU200DU206BU202CU200FU200EU200CU202BU206DU202BU206DU206AU206EU206EU200EU200DU202CU202AU202BU200FU200CU202E_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U202EU200FU206CU206AU200CU206EU202DU206BU202EU200DU206EU206BU200EU206BU206BU202DU206CU206AU206FU200DU200DU206BU202CU200FU200EU200CU202BU206DU202BU206DU206AU206EU206EU200EU200DU202CU202AU202BU200FU200CU202E_1), (void*)L_1);
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_2 = (U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)SZArrayNew(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)12)));
		__this->___U200CU206AU202EU200BU206DU200DU200CU206FU206DU206FU200FU206AU206FU200CU200CU206DU206CU200CU200CU200DU202DU200BU200CU200BU206EU206CU206CU206BU206DU202AU206FU200EU206EU202EU206EU202CU200BU200FU200CU206AU202E_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U200CU206AU202EU200BU206DU200DU200CU206FU206DU206FU200FU206AU206FU200CU200CU206DU206CU200CU200CU200DU202DU200BU200CU200BU206EU206CU206CU206BU206DU202AU206FU200EU206EU202EU206EU202CU200BU200FU200CU206AU202E_2), (void*)L_2);
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_3 = (U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)SZArrayNew(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)12)));
		__this->___U206EU200BU206DU200BU206EU206BU202EU202BU202CU200BU206AU206AU206CU200DU200BU200BU206CU200CU202CU200DU206EU206EU202AU206AU202AU206BU206DU200BU206BU200BU200FU202BU206BU200DU202EU200DU206CU206CU206DU200FU202E_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206EU200BU206DU200BU206EU206BU202EU202BU202CU200BU206AU206AU206CU200DU200BU200BU206CU200CU202CU200DU206EU206EU202AU206AU202AU206BU206DU200BU206BU200BU200FU202BU206BU200DU202EU200DU206CU206CU206DU200FU202E_3), (void*)L_3);
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_4 = (U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)SZArrayNew(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)12)));
		__this->___U200DU206CU202BU200FU206DU200DU206CU200DU202CU206AU202BU206AU202DU202DU206FU202CU202AU206BU202BU206EU206CU202CU202BU202BU202AU206AU200CU200FU202CU206EU202DU206EU200BU206DU206DU200FU206DU202BU200BU206AU202E_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U200DU206CU202BU200FU206DU200DU206CU200DU202CU206AU202BU206AU202DU202DU206FU202CU202AU206BU202BU206EU206CU202CU202BU202BU202AU206AU200CU200FU202CU206EU202DU206EU200BU206DU206DU200FU206DU202BU200BU206AU202E_4), (void*)L_4);
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_5 = (U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)SZArrayNew(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)12)));
		__this->___U206BU200BU200BU202AU202DU200DU202EU206FU200EU206EU200EU202BU206EU206AU206DU202AU202EU206CU200FU200EU200FU200BU202CU200CU200DU206EU206FU200EU200BU206AU202AU202EU200FU200CU206EU200BU200BU206EU202AU200DU202E_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206BU200BU200BU202AU202DU200DU202EU206FU200EU206EU200EU202BU206EU206AU206DU202AU202EU206CU200FU200EU200FU200BU202CU200CU200DU206EU206FU200EU200BU206AU202AU202EU200FU200CU206EU200BU200BU206EU202AU200DU202E_5), (void*)L_5);
		U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141* L_6 = (U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141*)il2cpp_codegen_object_new(U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E__ctor_m0096BD8DDA00E7775883CF15CEA629C5E3AE6454(L_6, NULL);
		__this->___U200FU202AU202CU200CU202BU206FU200FU200CU202AU200BU200EU200CU200EU200FU200BU206BU200BU200EU200CU202CU200FU206EU202BU206BU200CU200FU202DU206BU202DU206AU200EU202CU206EU206FU200FU202CU202CU202DU200DU206DU202E_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U200FU202AU202CU200CU202BU206FU200FU200CU202AU200BU200EU200CU200EU200FU200BU206BU200BU200EU200CU202CU200FU206EU202BU206BU200CU200FU202DU206BU202DU206AU200EU202CU206EU206FU200FU202CU202CU202DU200DU206DU202E_6), (void*)L_6);
		U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3* L_7 = (U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3*)il2cpp_codegen_object_new(U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E__ctor_m211147541F0787B61909776C02DD8326BEF2A7F9(L_7, NULL);
		__this->___U206FU202BU200FU200DU200EU200EU202AU202EU200FU200DU202EU200CU202DU202EU202AU200CU200CU206BU200CU206FU206FU200BU202EU200EU200DU206DU200EU206FU206EU202CU202BU202EU200FU200DU200BU200EU200FU202AU206EU200EU202E_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206FU202BU200FU200DU200EU200EU202AU202EU200FU200DU202EU200CU202DU202EU202AU200CU200CU206BU200CU206FU206FU200BU202EU200EU200DU206DU200EU206FU206EU202CU202BU202EU200FU200DU200BU200EU200FU202AU206EU200EU202E_7), (void*)L_7);
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* L_8 = (U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88*)il2cpp_codegen_object_new(U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E__ctor_mAA8E008A58B7327E1879050C651DE555420A2BA8(L_8, NULL);
		__this->___U200EU206BU202BU206CU202DU206EU200BU206DU206FU200EU202BU202CU200CU200BU206AU200FU202AU202CU200FU206EU206FU206FU206CU206FU200EU202DU200DU200DU206FU206AU206FU202DU202BU202DU200BU206EU202AU206BU206CU206FU202E_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U200EU206BU202BU206CU202DU206EU200BU206DU206FU200EU202BU202CU200CU200BU206AU200FU202AU202CU200FU206EU206FU206FU206CU206FU200EU202DU200DU200DU206FU206AU206FU202DU202BU202DU200BU206EU202AU206BU206CU206FU202E_8), (void*)L_8);
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_9 = (U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)SZArrayNew(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)114)));
		__this->___U200DU206EU200DU202BU206CU200BU206DU200BU206CU200EU206BU206CU206FU200CU200FU202DU206EU206BU202AU202BU206CU206AU206DU200CU202DU206FU200FU200BU202DU206BU200DU200EU202EU206CU202EU202EU202BU202DU200FU202AU202E_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U200DU206EU200DU202BU206CU200BU206DU200BU206CU200EU206BU206CU206FU200CU200FU202DU206EU206BU202AU202BU206CU206AU206DU200CU202DU206FU200FU200BU202DU206BU200DU200EU202EU206CU202EU202EU202BU202DU200FU202AU202E_9), (void*)L_9);
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20* L_10 = (U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20*)(U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20*)SZArrayNew(U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)4));
		__this->___U202AU202EU202CU200BU202AU206AU200FU206BU202CU206EU202AU202DU206EU206BU206EU200BU200EU202EU200BU200CU200BU200CU206AU206AU200BU206FU202BU202BU206CU200DU206FU200EU200DU200DU200CU206FU202EU202BU206BU202E_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U202AU202EU202CU200BU202AU206AU200FU206BU202CU206EU202AU202DU206EU206BU206EU200BU200EU202EU200BU200CU200BU200CU206AU206AU200BU206FU202BU202BU206CU200DU206FU200EU200DU200DU200CU206FU202EU202BU206BU202E_10), (void*)L_10);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_11 = (U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6*)il2cpp_codegen_object_new(U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E__ctor_mCB979A30555FD801D162AC852A6BFAE4546D57F2(L_11, NULL);
		__this->___U202BU200BU206DU206FU200FU202CU202DU200CU206AU206AU202EU206FU206AU206CU206AU200CU200FU206CU200EU200CU202EU206DU200DU200FU202BU206DU200CU202BU202AU206FU200BU200BU206EU206AU202EU202CU200DU202AU206AU206FU202E_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U202BU200BU206DU206FU200FU202CU202DU200CU206AU206AU202EU206FU206AU206CU206AU200CU200FU206CU200EU200CU202EU206DU200DU200FU202BU206DU200CU202BU202AU206FU200BU200BU206EU206AU202EU202CU200DU202AU206AU206FU202E_11), (void*)L_11);
		U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141* L_12 = (U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141*)il2cpp_codegen_object_new(U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E__ctor_m0096BD8DDA00E7775883CF15CEA629C5E3AE6454(L_12, NULL);
		__this->___U202DU200DU206BU202EU206EU202AU206FU200FU202DU202AU202CU206BU206DU206BU202BU202CU206AU202AU200DU200EU206DU200BU200EU200FU200CU200EU200DU206DU206EU206AU206BU200FU206CU202EU202DU206BU206CU200DU202AU202DU202E_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U202DU200DU206BU202EU206EU202AU206FU200FU202DU202AU202CU206BU206DU206BU202BU202CU206AU202AU200DU200EU206DU200BU200EU200FU200CU200EU200DU206DU206EU206AU206BU200FU206CU202EU202DU206BU206CU200DU202AU202DU202E_12), (void*)L_12);
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475 L_13;
		memset((&L_13), 0, sizeof(L_13));
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E__ctor_m372A617E298A608CB3361DEB5DA2E8CE2AC5A165((&L_13), 4, /*hidden argument*/NULL);
		__this->___U200EU202EU200CU200FU202DU206EU202BU200BU200BU200FU206AU202DU200CU206EU202AU206FU206CU206BU206CU200EU206AU200EU206AU202CU202AU202CU202BU202EU206BU200EU200CU200DU202BU202DU202AU202AU206BU202BU200DU202DU202E_16 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U200EU202EU200CU200FU202DU206EU202BU200BU200BU200FU206AU202DU200CU206EU202AU206FU206CU206BU206CU200EU206AU200EU206AU202CU202AU202CU202BU202EU206BU200EU200CU200DU202BU202DU202AU202AU206BU202BU200DU202DU202E_16))->___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0), (void*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
	}

IL_00be:
	{
		G_B2_0 = ((int32_t)1424670803);
	}

IL_00c3:
	{
		int32_t L_14 = ((int32_t)(G_B2_0^((int32_t)1142294284)));
		V_1 = L_14;
		switch (((int32_t)((uint32_t)(int32_t)L_14%(uint32_t)(int32_t)6)))
		{
			case 0:
			{
				goto IL_0135;
			}
			case 1:
			{
				goto IL_00ec;
			}
			case 2:
			{
				goto IL_0113;
			}
			case 3:
			{
				goto IL_00be;
			}
			case 4:
			{
				goto IL_0102;
			}
			case 5:
			{
				goto IL_014f;
			}
		}
	}
	{
		goto IL_014f;
	}

IL_00ec:
	{
		__this->___U206FU200FU202DU202CU200DU202DU206FU206DU202AU202CU200DU202DU200FU200EU206CU202BU206DU202EU202EU206CU202BU206AU206EU200EU200EU206CU200CU206BU206AU206CU200FU206EU206FU200CU202BU206EU206EU206EU206BU202E_14 = (-1);
		uint32_t L_15 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, ((int32_t)-1964508128)))^((int32_t)1569964322)));
		goto IL_00c3;
	}

IL_0102:
	{
		V_0 = 0;
		uint32_t L_16 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_16, ((int32_t)164774474)))^((int32_t)367839384)));
		goto IL_00c3;
	}

IL_0113:
	{
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20* L_17 = __this->___U202AU202EU202CU200BU202AU206AU200FU206BU202CU206EU202AU202DU206EU206BU206EU200BU200EU202EU200BU200CU200BU200CU206AU206AU200BU206FU202BU202BU206CU200DU206FU200EU200DU200DU200CU206FU202EU202BU206BU202E_10;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475 L_19;
		memset((&L_19), 0, sizeof(L_19));
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E__ctor_m372A617E298A608CB3361DEB5DA2E8CE2AC5A165((&L_19), 6, /*hidden argument*/NULL);
		*(U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))) = L_19;
		Il2CppCodeGenWriteBarrier((void**)&(((U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))))->___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0), (void*)NULL);
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		G_B2_0 = ((int32_t)347928852);
		goto IL_00c3;
	}

IL_0135:
	{
		int32_t L_21 = V_0;
		if ((((int64_t)((int64_t)L_21)) < ((int64_t)((int64_t)4))))
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_22 = ((int32_t)1776089535);
		G_B10_0 = L_22;
		G_B10_1 = L_22;
		goto IL_0149;
	}

IL_0143:
	{
		int32_t L_23 = ((int32_t)649713634);
		G_B10_0 = L_23;
		G_B10_1 = L_23;
	}

IL_0149:
	{
		G_B2_0 = G_B10_1;
		goto IL_00c3;
	}

IL_014f:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_U200CU202CU200BU200BU206EU202CU206CU206CU206AU206EU202BU200CU206CU200BU200EU206AU202AU202EU202CU200DU200DU202DU200EU200CU202CU206AU200BU200FU200DU202EU206DU206FU200FU202AU206BU200CU200CU200EU206DU200CU202E_m69105B39181EE99847F4E0127EF3DBDE2B131CBB (U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102* __this, uint32_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	{
		uint32_t L_0 = __this->___U206FU200FU202DU202CU200DU202DU206FU206DU202AU202CU200DU202DU200FU200EU206CU202BU206DU202EU202EU206CU202BU206AU206EU200EU200EU206CU200CU206BU206AU206CU200FU206EU206FU200CU202BU206EU206EU206EU206BU202E_14;
		uint32_t L_1 = p0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0083;
		}
	}

IL_0009:
	{
		G_B2_0 = ((int32_t)1044472206);
	}

IL_000e:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)1460679835)));
		V_1 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0083;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_0009;
			}
		}
	}
	{
		goto IL_0083;
	}

IL_002f:
	{
		uint32_t L_3 = p0;
		__this->___U206FU200FU202DU202CU200DU202DU206FU206DU202AU202CU200DU202DU200FU200EU206CU202BU206DU202EU202EU206CU202BU206AU206EU200EU200EU206CU200CU206BU206AU206CU200FU206EU206FU200CU202BU206EU206EU206EU206BU202E_14 = L_3;
		uint32_t L_4 = __this->___U206FU200FU202DU202CU200DU202DU206FU206DU202AU202CU200DU202DU200FU200EU206CU202BU206DU202EU202EU206CU202BU206AU206EU200EU200EU206CU200CU206BU206AU206CU200FU206EU206FU200CU202BU206EU206EU206EU206BU202E_14;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_5;
		L_5 = Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7(L_4, 1, NULL);
		__this->___U202DU202BU206FU200DU206DU202DU202EU206DU200EU202BU202DU200BU200CU202DU202DU202EU206CU202DU200DU206EU200BU200BU206EU202CU200DU200CU200BU200DU202BU200CU202BU200FU200CU200CU202EU206DU202EU206CU202DU206FU202E_15 = L_5;
		uint32_t L_6 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)-1522847973)))^((int32_t)1282152414)));
		goto IL_000e;
	}

IL_0057:
	{
		uint32_t L_7 = __this->___U202DU202BU206FU200DU206DU202DU202EU206DU200EU202BU202DU200BU200CU202DU202DU202EU206CU202DU200DU206EU200BU200BU206EU202CU200DU200CU200BU200DU202BU200CU202BU200FU200CU200CU202EU206DU202EU206CU202DU206FU202E_15;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_8;
		L_8 = Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7(L_7, ((int32_t)4096), NULL);
		V_0 = L_8;
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* L_9 = __this->___U200EU206BU202BU206CU202DU206EU200BU206DU206FU200EU202BU202CU200CU200BU206AU200FU202AU202CU200FU206EU206FU206FU206CU206FU200EU202DU200DU200DU206FU206AU206FU202DU202BU202DU200BU206EU202AU206BU206CU206FU202E_8;
		uint32_t L_10 = V_0;
		NullCheck(L_9);
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U200DU202DU202DU206AU202CU200BU206FU206EU202BU206AU200CU200EU202EU200DU202EU200BU200EU206FU200EU206EU200EU200CU202DU206AU202AU206BU202CU202EU202BU202DU206EU200FU206EU206DU200FU202AU206EU202EU200FU206EU202E_m4180F1BD21601BF722C7E2F0A27BE27ADB1A6E4A(L_9, L_10, NULL);
		uint32_t L_11 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)-606688133)))^((int32_t)-974270923)));
		goto IL_000e;
	}

IL_0083:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_U206DU206FU202CU202CU200FU206FU206CU202CU206DU200CU200DU200FU202DU200FU206DU200BU206BU200CU202CU202DU202EU206DU202BU200BU206DU206BU206EU202CU202DU200EU206AU202CU200FU206EU202AU206EU206EU206CU200FU206FU202E_mDF957E5AA76D86A6F187A2CFC64405B2439C2D40 (U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3* L_0 = __this->___U206FU202BU200FU200DU200EU200EU202AU202EU200FU200DU202EU200CU202DU202EU202AU200CU200CU206BU200CU206FU206FU200BU202EU200EU200DU206DU200EU206FU206EU202CU202BU202EU200FU200DU200BU200EU200FU202AU206EU200EU202E_7;
		int32_t L_1 = p0;
		int32_t L_2 = p1;
		NullCheck(L_0);
		U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_U202EU200FU202AU200DU202DU206BU202AU206CU202DU206BU206FU200BU206AU206FU200BU200CU206BU202AU202EU206EU206DU202BU202DU202CU200EU206DU206EU200CU202AU202BU200DU202AU206CU200DU206BU202CU202EU202DU202BU202E_m3E09060FBB177F4B8C0F385B97C94868C2C31540(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_U202EU202BU206AU206DU202BU202EU200DU202CU206AU202CU206FU200CU206BU206BU202AU200EU200EU200DU200DU202EU206DU206FU206FU202DU206BU200DU200FU202AU206AU202CU206FU206DU200FU206DU200DU206AU202DU200FU206DU200CU202E_mB44710D9DEE28BCF06B0C9AB6DC759780B47F593 (U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102* __this, int32_t p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = ((int32_t)(1<<((int32_t)(L_0&((int32_t)31)))));
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1967803332);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)587374663)));
		V_1 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_0059;
			}
			case 2:
			{
				goto IL_0029;
			}
		}
	}
	{
		goto IL_0059;
	}

IL_0029:
	{
		U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141* L_2 = __this->___U200FU202AU202CU200CU202BU206FU200FU200CU202AU200BU200EU200CU200EU200FU200BU206BU200BU200EU200CU202CU200FU206EU202BU206BU200CU200FU202DU206BU202DU206AU200EU202CU206EU206FU200FU202CU202CU202DU200DU206DU202E_6;
		uint32_t L_3 = V_0;
		NullCheck(L_2);
		U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_U206DU202EU202AU200EU202EU206BU202EU200DU202AU202CU206DU200EU206DU206EU202CU200EU206DU202AU206CU200FU202EU202EU206EU206CU206BU206DU202BU200BU200DU200DU206DU202AU206CU206FU202DU206FU206EU206CU206DU200FU202E_mD37094EBBA336EE5C3A52A4AEA825F93D323F464(L_2, L_3, NULL);
		U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141* L_4 = __this->___U202DU200DU206BU202EU206EU202AU206FU200FU202DU202AU202CU206BU206DU206BU202BU202CU206AU202AU200DU200EU206DU200BU200EU200FU200CU200EU200DU206DU206EU206AU206BU200FU206CU202EU202DU206BU206CU200DU202AU202DU202E_12;
		uint32_t L_5 = V_0;
		NullCheck(L_4);
		U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_U206DU202EU202AU200EU202EU206BU202EU200DU202AU202CU206DU200EU206DU206EU202CU200EU206DU202AU206CU200FU202EU202EU206EU206CU206BU206DU202BU200BU200DU200DU206DU202AU206CU206FU202DU206FU206EU206CU206DU200FU202E_mD37094EBBA336EE5C3A52A4AEA825F93D323F464(L_4, L_5, NULL);
		uint32_t L_6 = V_0;
		__this->___U206EU200CU200DU202EU200CU202BU202DU200DU202EU206FU206DU206BU200BU206AU200DU206BU202EU202CU202AU202BU206BU202BU200DU200BU202EU202EU202AU206CU206DU202EU202AU202CU206EU202AU200FU200FU202DU200EU206DU206CU202E_17 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 1));
		uint32_t L_7 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)1209512685)))^((int32_t)-757708041)));
		goto IL_000c;
	}

IL_0059:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.IO.Stream,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_U206BU202DU202EU200FU200CU206AU206BU206EU206DU200EU202CU200DU206FU200FU200EU202BU206AU206EU206EU202EU200EU202EU202CU202EU206DU206FU202BU200DU202EU206AU206DU200CU200DU200CU202BU206EU206DU200CU202BU206AU202E_mEF8FFAFCB264FABB957326F19302214DADABB905 (U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B41_0 = 0;
	int32_t G_B41_1 = 0;
	{
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_0 = __this->___U202BU200BU206DU206FU200FU202CU202DU200CU206AU206AU202EU206FU206AU206CU206AU200CU200FU206CU200EU200CU202EU206DU200DU200FU202BU206DU200CU202BU202AU206FU200BU200BU206EU206AU202EU202CU200DU202AU206AU206FU202E_11;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = p0;
		NullCheck(L_0);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_U206DU206CU200CU206DU200EU206FU200BU202EU200CU202DU206FU200BU200CU202EU202EU206CU206AU202BU202BU200EU206DU206AU206AU202EU202BU206CU200DU202AU206BU206DU202BU206EU200FU202BU206DU200BU202EU200FU200FU200FU202E_mEE5C0C49771E4A9B0C7FEF47D0F6732A22130BB1(L_0, L_1, NULL);
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* L_2 = __this->___U200EU206BU202BU206CU202DU206EU200BU206DU206FU200EU202BU202CU200CU200BU206AU200FU202AU202CU200FU206EU206FU206FU206CU206FU200EU202DU200DU200DU206FU206AU206FU202DU202BU202DU200BU206EU202AU206BU206CU206FU202E_8;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = p1;
		bool L_4 = __this->___U200EU200EU206EU202CU202BU206CU206AU202DU200FU202DU200EU200CU206DU200DU200EU206DU206CU206BU200FU202DU206FU202AU200FU206CU200EU202DU200EU202DU206CU202BU200BU202EU206CU200EU202BU200FU202EU206AU202BU202EU202E_13;
		NullCheck(L_2);
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U206EU206FU206DU202CU206BU206CU206BU206EU200CU202AU206BU206DU206AU206CU206BU206DU206AU200CU206DU206DU202AU206FU206BU202EU200FU200BU200DU206DU200FU200FU206CU206FU200BU202DU206AU200BU200FU206FU202DU202BU202E_m10979CBF33ADA2BB92AA4BB3B1DCA04FE0686508(L_2, L_3, L_4, NULL);
	}

IL_001e:
	{
		G_B2_0 = ((int32_t)1611135490);
	}

IL_0023:
	{
		int32_t L_5 = ((int32_t)(G_B2_0^((int32_t)858752234)));
		V_3 = L_5;
		switch (((int32_t)((uint32_t)(int32_t)L_5%(uint32_t)(int32_t)((int32_t)28))))
		{
			case 0:
			{
				goto IL_02aa;
			}
			case 1:
			{
				goto IL_0154;
			}
			case 2:
			{
				goto IL_01b2;
			}
			case 3:
			{
				goto IL_028d;
			}
			case 4:
			{
				goto IL_0355;
			}
			case 5:
			{
				goto IL_0236;
			}
			case 6:
			{
				goto IL_0142;
			}
			case 7:
			{
				goto IL_02e3;
			}
			case 8:
			{
				goto IL_02c6;
			}
			case 9:
			{
				goto IL_00da;
			}
			case 10:
			{
				goto IL_030b;
			}
			case 11:
			{
				goto IL_00a8;
			}
			case 12:
			{
				goto IL_001e;
			}
			case 13:
			{
				goto IL_032d;
			}
			case 14:
			{
				goto IL_0195;
			}
			case 15:
			{
				goto IL_01ea;
			}
			case 16:
			{
				goto IL_0220;
			}
			case 17:
			{
				goto IL_0129;
			}
			case 18:
			{
				goto IL_0270;
			}
			case 19:
			{
				goto IL_0171;
			}
			case 20:
			{
				goto IL_0117;
			}
			case 21:
			{
				goto IL_01c6;
			}
			case 22:
			{
				goto IL_033d;
			}
			case 23:
			{
				goto IL_00fe;
			}
			case 24:
			{
				goto IL_02f7;
			}
			case 25:
			{
				goto IL_00c4;
			}
			case 26:
			{
				goto IL_0321;
			}
			case 27:
			{
				goto IL_024c;
			}
		}
	}
	{
		goto IL_0355;
	}

IL_00a8:
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_6 = __this->___U200DU206EU200DU202BU206CU200BU206DU200BU206CU200EU206BU206CU206FU200CU200FU202DU206EU206BU202AU202BU206CU206AU206DU200CU202DU206FU200FU200BU202DU206BU200DU200EU202EU206CU202EU202EU202BU202DU200FU202AU202E_9;
		uint32_t L_7 = V_0;
		NullCheck(L_6);
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202BU206FU200DU200EU200BU202BU202DU200FU206EU200DU206CU206DU202EU200DU206CU202BU202CU200CU202AU200FU206DU206BU202AU206FU200FU202AU202CU200EU202EU206FU206EU202BU200EU206EU206FU202EU200EU200EU206FU206EU202E_m06B03079972D7E477C0573912085484A7C019AFD(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_7)))), NULL);
		G_B2_0 = ((int32_t)1192079771);
		goto IL_0023;
	}

IL_00c4:
	{
		uint32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, 1));
		uint32_t L_9 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)-1891393421)))^((int32_t)1159069711)));
		goto IL_0023;
	}

IL_00da:
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_10 = __this->___U200DU206CU202BU200FU206DU200DU206CU200DU202CU206AU202BU206AU202DU202DU206FU202CU202AU206BU202BU206EU206CU202CU202BU202BU202AU206AU200CU200FU202CU206EU202DU206EU200BU206DU206DU200FU206DU202BU200BU206AU202E_4;
		uint32_t L_11 = V_0;
		NullCheck(L_10);
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202BU206FU200DU200EU200BU202BU202DU200FU206EU200DU206CU206DU202EU200DU206CU202BU202CU200CU202AU200FU206DU206BU202AU206FU200FU202AU202CU200EU202EU206FU206EU202BU200EU206EU206FU202EU200EU200EU206FU206EU202E_m06B03079972D7E477C0573912085484A7C019AFD(((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_11)))), NULL);
		uint32_t L_12 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)1556828522)))^((int32_t)579068279)));
		goto IL_0023;
	}

IL_00fe:
	{
		uint32_t L_13 = V_0;
		if ((!(((uint32_t)L_13) >= ((uint32_t)((int32_t)12)))))
		{
			goto IL_010b;
		}
	}
	{
		int32_t L_14 = ((int32_t)583498556);
		G_B10_0 = L_14;
		G_B10_1 = L_14;
		goto IL_0111;
	}

IL_010b:
	{
		int32_t L_15 = ((int32_t)491192076);
		G_B10_0 = L_15;
		G_B10_1 = L_15;
	}

IL_0111:
	{
		G_B2_0 = G_B10_1;
		goto IL_0023;
	}

IL_0117:
	{
		uint32_t L_16 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_16, ((int32_t)1740991690)))^((int32_t)1927480439)));
		goto IL_0023;
	}

IL_0129:
	{
		uint32_t L_17 = V_0;
		if ((!(((uint32_t)L_17) < ((uint32_t)((int32_t)114)))))
		{
			goto IL_0136;
		}
	}
	{
		int32_t L_18 = ((int32_t)1151432737);
		G_B15_0 = L_18;
		G_B15_1 = L_18;
		goto IL_013c;
	}

IL_0136:
	{
		int32_t L_19 = ((int32_t)2087616264);
		G_B15_0 = L_19;
		G_B15_1 = L_19;
	}

IL_013c:
	{
		G_B2_0 = G_B15_1;
		goto IL_0023;
	}

IL_0142:
	{
		uint32_t L_20 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_20, ((int32_t)829204660)))^((int32_t)1461914391)));
		goto IL_0023;
	}

IL_0154:
	{
		uint32_t L_21 = V_1;
		uint32_t L_22 = __this->___U206EU200CU200DU202EU200CU202BU202DU200DU202EU206FU206DU206BU200BU206AU200DU206BU202EU202CU202AU202BU206BU202BU200DU200BU202EU202EU202AU206CU206DU202EU202AU202CU206EU202AU200FU200FU202DU200EU206DU206CU202E_17;
		if ((!(((uint32_t)L_21) > ((uint32_t)L_22))))
		{
			goto IL_0165;
		}
	}
	{
		int32_t L_23 = ((int32_t)141510397);
		G_B20_0 = L_23;
		G_B20_1 = L_23;
		goto IL_016b;
	}

IL_0165:
	{
		int32_t L_24 = ((int32_t)355791243);
		G_B20_0 = L_24;
		G_B20_1 = L_24;
	}

IL_016b:
	{
		G_B2_0 = G_B20_1;
		goto IL_0023;
	}

IL_0171:
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_25 = __this->___U206BU200BU200BU202AU202DU200DU202EU206FU200EU206EU200EU202BU206EU206AU206DU202AU202EU206CU200FU200EU200FU200BU202CU200CU200DU206EU206FU200EU200BU206AU202AU202EU200FU200CU206EU200BU200BU206EU202AU200DU202E_5;
		uint32_t L_26 = V_0;
		NullCheck(L_25);
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202BU206FU200DU200EU200BU202BU202DU200FU206EU200DU206CU206DU202EU200DU206CU202BU202CU200CU202AU200FU206DU206BU202AU206FU200FU202AU202CU200EU202EU206FU206EU202BU200EU206EU206FU202EU200EU200EU206FU206EU202E_m06B03079972D7E477C0573912085484A7C019AFD(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_26)))), NULL);
		uint32_t L_27 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_27, ((int32_t)2056256895)))^((int32_t)611108443)));
		goto IL_0023;
	}

IL_0195:
	{
		U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3* L_28 = __this->___U206FU202BU200FU200DU200EU200EU202AU202EU200FU200DU202EU200CU202DU202EU202AU200CU200CU206BU200CU206FU206FU200BU202EU200EU200DU206DU200EU206FU206EU202CU202BU202EU200FU200DU200BU200EU200FU202AU206EU200EU202E_7;
		NullCheck(L_28);
		U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_U202EU202BU202BU206CU200FU206BU200FU202DU202DU200DU206EU206CU202AU206CU206DU200DU200CU202DU200EU202AU206FU202DU202AU200CU200EU200FU200BU206CU202BU206AU200DU202AU200BU202CU202AU202BU206FU206EU202EU202DU202E_mD9AA1FF89BC7CEF593E90FB1CA2F3E4316469B2B(L_28, NULL);
		uint32_t L_29 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_29, ((int32_t)1654733598)))^((int32_t)-671044059)));
		goto IL_0023;
	}

IL_01b2:
	{
		V_0 = 0;
		uint32_t L_30 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_30, ((int32_t)131369217)))^((int32_t)-1758332778)));
		goto IL_0023;
	}

IL_01c6:
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_31 = __this->___U206EU200BU206DU200BU206EU206BU202EU202BU202CU200BU206AU206AU206CU200DU200BU200BU206CU200CU202CU200DU206EU206EU202AU206AU202AU206BU206DU200BU206BU200BU200FU202BU206BU200DU202EU200DU206CU206CU206DU200FU202E_3;
		uint32_t L_32 = V_0;
		NullCheck(L_31);
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202BU206FU200DU200EU200BU202BU202DU200FU206EU200DU206CU206DU202EU200DU206CU202BU202CU200CU202AU200FU206DU206BU202AU206FU200FU202AU202CU200EU202EU206FU206EU202BU200EU206EU206FU202EU200EU200EU206FU206EU202E_m06B03079972D7E477C0573912085484A7C019AFD(((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_32)))), NULL);
		uint32_t L_33 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_33, ((int32_t)773587174)))^((int32_t)688136829)));
		goto IL_0023;
	}

IL_01ea:
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_34 = __this->___U202BU200DU200FU206CU202BU200BU202BU200FU206EU202AU202EU202BU202BU206BU202CU200BU206CU206EU202DU202EU202CU206FU206AU200BU206AU206CU206AU200EU202EU200CU202DU200BU202CU206EU206DU206BU202DU200FU200EU202E_0;
		uint32_t L_35 = V_2;
		NullCheck(L_34);
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202BU206FU200DU200EU200BU202BU202DU200FU206EU200DU206CU206DU202EU200DU206CU202BU202CU200CU202AU200FU206DU206BU202AU206FU200FU202AU202CU200EU202EU206FU206EU202BU200EU206EU206FU202EU200EU200EU206FU206EU202E_m06B03079972D7E477C0573912085484A7C019AFD(((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_35)))), NULL);
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_36 = __this->___U202EU200FU206CU206AU200CU206EU202DU206BU202EU200DU206EU206BU200EU206BU206BU202DU206CU206AU206FU200DU200DU206BU202CU200FU200EU200CU202BU206DU202BU206DU206AU206EU206EU200EU200DU202CU202AU202BU200FU200CU202E_1;
		uint32_t L_37 = V_2;
		NullCheck(L_36);
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202BU206FU200DU200EU200BU202BU202DU200FU206EU200DU206CU206DU202EU200DU206CU202BU202CU200CU202AU200FU206DU206BU202AU206FU200FU202AU202CU200EU202EU206FU206EU202BU200EU206EU206FU202EU200EU200EU206FU206EU202E_m06B03079972D7E477C0573912085484A7C019AFD(((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_37)))), NULL);
		uint32_t L_38 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_38, ((int32_t)658607784)))^((int32_t)51534548)));
		goto IL_0023;
	}

IL_0220:
	{
		uint32_t L_39 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, 1));
		uint32_t L_40 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_40, ((int32_t)-805830330)))^((int32_t)1781270649)));
		goto IL_0023;
	}

IL_0236:
	{
		uint32_t L_41 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, 1));
		uint32_t L_42 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_42, ((int32_t)-1317416701)))^((int32_t)-2129908900)));
		goto IL_0023;
	}

IL_024c:
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_43 = __this->___U200CU206AU202EU200BU206DU200DU200CU206FU206DU206FU200FU206AU206FU200CU200CU206DU206CU200CU200CU200DU202DU200BU200CU200BU206EU206CU206CU206BU206DU202AU206FU200EU206EU202EU206EU202CU200BU200FU200CU206AU202E_2;
		uint32_t L_44 = V_0;
		NullCheck(L_43);
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202BU206FU200DU200EU200BU202BU202DU200FU206EU200DU206CU206DU202EU200DU206CU202BU202CU200CU202AU200FU206DU206BU202AU206FU200FU202AU202CU200EU202EU206FU206EU202BU200EU206EU206FU202EU200EU200EU206FU206EU202E_m06B03079972D7E477C0573912085484A7C019AFD(((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_44)))), NULL);
		uint32_t L_45 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_45, ((int32_t)91286968)))^((int32_t)-718620773)));
		goto IL_0023;
	}

IL_0270:
	{
		U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141* L_46 = __this->___U200FU202AU202CU200CU202BU206FU200FU200CU202AU200BU200EU200CU200EU200FU200BU206BU200BU200EU200CU202CU200FU206EU202BU206BU200CU200FU202DU206BU202DU206AU200EU202CU206EU206FU200FU202CU202CU202DU200DU206DU202E_6;
		NullCheck(L_46);
		U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_U206FU200BU206CU200CU200FU206DU200DU202DU206BU206EU206BU206EU200FU202AU200DU206EU202EU206BU202AU200DU202AU200DU202AU202BU206FU202EU206CU202BU202DU200EU202DU206FU206EU206FU206DU206FU206AU206BU206BU206FU202E_mF0FC1D44EE6A9B64944163728BA1517D891BD9DE(L_46, NULL);
		uint32_t L_47 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_47, ((int32_t)-4084349)))^((int32_t)2066770939)));
		goto IL_0023;
	}

IL_028d:
	{
		U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141* L_48 = __this->___U202DU200DU206BU202EU206EU202AU206FU200FU202DU202AU202CU206BU206DU206BU202BU202CU206AU202AU200DU200EU206DU200BU200EU200FU200CU200EU200DU206DU206EU206AU206BU200FU206CU202EU202DU206BU206CU200DU202AU202DU202E_12;
		NullCheck(L_48);
		U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_U206FU200BU206CU200CU200FU206DU200DU202DU206BU206EU206BU206EU200FU202AU200DU206EU202EU206BU202AU200DU202AU200DU202AU202BU206FU202EU206CU202BU202DU200EU202DU206FU206EU206FU206DU206FU206AU206BU206BU206FU202E_mF0FC1D44EE6A9B64944163728BA1517D891BD9DE(L_48, NULL);
		uint32_t L_49 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_49, ((int32_t)963645951)))^((int32_t)-1569513529)));
		goto IL_0023;
	}

IL_02aa:
	{
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20* L_50 = __this->___U202AU202EU202CU200BU202AU206AU200FU206BU202CU206EU202AU202DU206EU206BU206EU200BU200EU202EU200BU200CU200BU200CU206AU206AU200BU206FU202BU202BU206CU200DU206FU200EU200DU200DU200CU206FU202EU202BU206BU202E_10;
		uint32_t L_51 = V_0;
		NullCheck(L_50);
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U200CU206BU202DU200BU206DU206AU206AU200DU202BU206BU200EU200CU200EU202AU202AU202DU200BU206DU206DU202BU200DU202BU202DU202CU200FU200FU200BU200BU206DU202EU206AU200DU206BU206FU200CU200CU206EU200EU200FU200EU202E_m802B57CB47B9B1CDBD8A26D1C10E44EC2247CCFA(((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_51)))), NULL);
		G_B2_0 = ((int32_t)109804431);
		goto IL_0023;
	}

IL_02c6:
	{
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475* L_52 = (&__this->___U200EU202EU200CU200FU202DU206EU202BU200BU200BU200FU206AU202DU200CU206EU202AU206FU206CU206BU206CU200EU206AU200EU206AU202CU202AU202CU202BU202EU206BU200EU200CU200DU202BU202DU202AU202AU206BU202BU200DU202DU202E_16);
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U200CU206BU202DU200BU206DU206AU206AU200DU202BU206BU200EU200CU200EU202AU202AU202DU200BU206DU206DU202BU200DU202BU202DU202CU200FU200FU200BU200BU206DU202EU206AU200DU206BU206FU200CU200CU206EU200EU200FU200EU202E_m802B57CB47B9B1CDBD8A26D1C10E44EC2247CCFA(L_52, NULL);
		uint32_t L_53 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_53, ((int32_t)1387849865)))^((int32_t)-1332236118)));
		goto IL_0023;
	}

IL_02e3:
	{
		V_0 = 0;
		uint32_t L_54 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_54, ((int32_t)678203941)))^((int32_t)288109303)));
		goto IL_0023;
	}

IL_02f7:
	{
		V_0 = 0;
		uint32_t L_55 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_55, ((int32_t)-1189234596)))^((int32_t)1145196233)));
		goto IL_0023;
	}

IL_030b:
	{
		uint32_t L_56 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, 1));
		uint32_t L_57 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_57, ((int32_t)1843809912)))^((int32_t)1650565015)));
		goto IL_0023;
	}

IL_0321:
	{
		V_1 = 0;
		G_B2_0 = ((int32_t)895593810);
		goto IL_0023;
	}

IL_032d:
	{
		uint32_t L_58 = V_0;
		uint32_t L_59 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_58<<4)), (int32_t)L_59));
		G_B2_0 = ((int32_t)484862089);
		goto IL_0023;
	}

IL_033d:
	{
		uint32_t L_60 = V_0;
		if ((!(((uint32_t)L_60) < ((uint32_t)4))))
		{
			goto IL_0349;
		}
	}
	{
		int32_t L_61 = ((int32_t)868526806);
		G_B41_0 = L_61;
		G_B41_1 = L_61;
		goto IL_034f;
	}

IL_0349:
	{
		int32_t L_62 = ((int32_t)1950364040);
		G_B41_0 = L_62;
		G_B41_1 = L_62;
	}

IL_034f:
	{
		G_B2_0 = G_B41_1;
		goto IL_0023;
	}

IL_0355:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.IO.Stream,System.IO.Stream,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_U206DU202AU206DU200EU200FU206CU206AU206DU202BU206EU202BU206BU202DU202CU200DU200DU206AU200BU206AU202EU202DU200DU206DU206BU206DU200FU206FU202CU206CU200DU202CU202DU206BU200CU206EU206CU206FU200BU206BU206EU202E_m7F3472B3C84AEA7D2C8A1DD5B12CD51E717D2758 (U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p1, int64_t p2, int64_t p3, const RuntimeMethod* method) 
{
	U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint8_t V_7 = 0x0;
	uint32_t V_8 = 0;
	uint8_t V_9 = 0x0;
	uint8_t V_10 = 0x0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	int32_t V_14 = 0;
	uint32_t V_15 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B26_1 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B34_1 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B39_1 = 0;
	int32_t G_B43_0 = 0;
	int32_t G_B43_1 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B49_1 = 0;
	int32_t G_B54_0 = 0;
	int32_t G_B54_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B59_1 = 0;
	int32_t G_B64_0 = 0;
	int32_t G_B64_1 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B78_0 = 0;
	int32_t G_B78_1 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	int32_t G_B94_0 = 0;
	int32_t G_B94_1 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = p0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = p1;
		U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_U206BU202DU202EU200FU200CU206AU206BU206EU206DU200EU202CU200DU206FU200FU200EU202BU206AU206EU206EU202EU200EU202EU202CU202EU206DU206FU202BU200DU202EU206AU206DU200CU200DU200CU202BU206EU206DU200CU202BU206AU202E_mEF8FFAFCB264FABB957326F19302214DADABB905(__this, L_0, L_1, NULL);
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)108994689);
	}

IL_000d:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)1645763021)));
		V_15 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)55))))
		{
			case 0:
			{
				goto IL_0707;
			}
			case 1:
			{
				goto IL_0747;
			}
			case 2:
			{
				goto IL_0474;
			}
			case 3:
			{
				goto IL_0008;
			}
			case 4:
			{
				goto IL_0341;
			}
			case 5:
			{
				goto IL_01b0;
			}
			case 6:
			{
				goto IL_058f;
			}
			case 7:
			{
				goto IL_05d7;
			}
			case 8:
			{
				goto IL_075d;
			}
			case 9:
			{
				goto IL_068e;
			}
			case 10:
			{
				goto IL_0769;
			}
			case 11:
			{
				goto IL_0616;
			}
			case 12:
			{
				goto IL_056b;
			}
			case 13:
			{
				goto IL_03fe;
			}
			case 14:
			{
				goto IL_0221;
			}
			case 15:
			{
				goto IL_0515;
			}
			case 16:
			{
				goto IL_04ef;
			}
			case 17:
			{
				goto IL_059e;
			}
			case 18:
			{
				goto IL_0356;
			}
			case 19:
			{
				goto IL_048a;
			}
			case 20:
			{
				goto IL_020e;
			}
			case 21:
			{
				goto IL_0133;
			}
			case 22:
			{
				goto IL_07bf;
			}
			case 23:
			{
				goto IL_06ec;
			}
			case 24:
			{
				goto IL_071e;
			}
			case 25:
			{
				goto IL_04be;
			}
			case 26:
			{
				goto IL_0169;
			}
			case 27:
			{
				goto IL_06c5;
			}
			case 28:
			{
				goto IL_0738;
			}
			case 29:
			{
				goto IL_0536;
			}
			case 30:
			{
				goto IL_0247;
			}
			case 31:
			{
				goto IL_02f1;
			}
			case 32:
			{
				goto IL_05b1;
			}
			case 33:
			{
				goto IL_03ce;
			}
			case 34:
			{
				goto IL_057e;
			}
			case 35:
			{
				goto IL_0158;
			}
			case 36:
			{
				goto IL_07a9;
			}
			case 37:
			{
				goto IL_078b;
			}
			case 38:
			{
				goto IL_0196;
			}
			case 39:
			{
				goto IL_023b;
			}
			case 40:
			{
				goto IL_0417;
			}
			case 41:
			{
				goto IL_06d1;
			}
			case 42:
			{
				goto IL_00ff;
			}
			case 43:
			{
				goto IL_02db;
			}
			case 44:
			{
				goto IL_01c8;
			}
			case 45:
			{
				goto IL_0398;
			}
			case 46:
			{
				goto IL_0334;
			}
			case 47:
			{
				goto IL_0432;
			}
			case 48:
			{
				goto IL_05fe;
			}
			case 49:
			{
				goto IL_03ab;
			}
			case 50:
			{
				goto IL_0653;
			}
			case 51:
			{
				goto IL_01df;
			}
			case 52:
			{
				goto IL_0666;
			}
			case 53:
			{
				goto IL_027b;
			}
			case 54:
			{
				goto IL_017c;
			}
		}
	}
	{
		goto IL_07bf;
	}

IL_00ff:
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_3 = __this->___U200DU206CU202BU200FU206DU200DU206CU200DU202CU206AU202BU206AU202DU202DU206FU202CU202AU206BU202BU206EU206CU202CU202BU202BU202AU206AU200CU200FU202CU206EU202DU206EU200BU206DU206DU200FU206DU202BU200BU206AU202E_4;
		uint32_t L_4 = (&V_0)->___U202CU202BU206AU200BU200FU200DU200DU206DU200FU202DU206AU206FU202BU202CU200EU206FU206CU206BU206CU200CU202AU202BU206BU200BU200EU202DU206CU202EU200DU206BU206DU200BU202EU202EU206AU206FU206BU206BU206FU202DU202E_0;
		NullCheck(L_3);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_5 = __this->___U202BU200BU206DU206FU200FU202CU202DU200CU206AU206AU202EU206FU206AU206CU206AU200CU200FU206CU200EU200CU202EU206DU200DU200FU202BU206DU200CU202BU202AU206FU200BU200BU206EU206AU202EU202CU200DU202AU206AU206FU202E_11;
		uint32_t L_6;
		L_6 = U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202CU200EU200FU206FU200EU202BU202CU206EU206FU200EU200CU200CU202CU200DU206BU200EU200BU206EU206FU202AU206AU206DU202EU202EU206EU206BU206EU206DU202DU202DU206BU200EU206EU206CU202EU206CU200DU200FU202DU206AU202E_m4BC344CC5E999A9A82A1D574E36B5BE43CAB6793(((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_4)))), L_5, NULL);
		if (!L_6)
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_7 = ((int32_t)1603468700);
		G_B7_0 = L_7;
		G_B7_1 = L_7;
		goto IL_012d;
	}

IL_0127:
	{
		int32_t L_8 = ((int32_t)1778743680);
		G_B7_0 = L_8;
		G_B7_1 = L_8;
	}

IL_012d:
	{
		G_B2_0 = G_B7_1;
		goto IL_000d;
	}

IL_0133:
	{
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* L_9 = __this->___U200EU206BU202BU206CU202DU206EU200BU206DU206FU200EU202BU202CU200CU200BU206AU200FU202AU202CU200FU206EU206FU206FU206CU206FU200EU202DU200DU200DU206FU206AU206FU202DU202BU202DU200BU206EU202AU206BU206CU206FU202E_8;
		uint8_t L_10 = V_9;
		NullCheck(L_9);
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U202DU202BU200BU206FU206CU200CU202BU206CU200CU200FU202DU202EU206AU202CU200CU200DU200FU206BU206EU200EU206BU202BU206DU206EU206DU202EU206CU206EU200FU200DU202BU206DU206AU202EU206BU202AU200EU206BU202DU206EU202E_m5F09A40A44CB0567F660E6BEC0339ABD81DE61D1(L_9, L_10, NULL);
		U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U200DU206AU206EU206DU206EU202BU202EU206FU202EU202BU206DU200FU206FU206CU206AU200DU206DU206DU202CU200BU202AU202CU206AU206AU200BU202BU200FU200BU202EU202CU200DU200DU200CU200FU200CU200CU206BU202EU206DU202EU202E_m22D5925512D8B10871F3FDDFF7F3F00EBE6D41D2((&V_0), NULL);
		uint64_t L_11 = V_5;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_11, ((int64_t)1)));
		G_B2_0 = ((int32_t)756604825);
		goto IL_000d;
	}

IL_0158:
	{
		uint32_t L_12 = V_3;
		V_4 = L_12;
		uint32_t L_13 = V_2;
		V_3 = L_13;
		uint32_t L_14 = V_1;
		V_2 = L_14;
		G_B2_0 = ((int32_t)1071190772);
		goto IL_000d;
	}

IL_0169:
	{
		uint32_t L_15 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, ((int32_t)-167222271)))^((int32_t)-397454243)));
		goto IL_000d;
	}

IL_017c:
	{
		U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U200DU202CU202DU200EU202DU202DU206DU202DU200FU206EU206EU202BU202DU200BU200FU202DU202BU206BU200CU202AU206AU202AU202AU202AU200EU202AU206CU202CU200FU200FU200DU206FU202EU202BU200BU206BU206EU206BU202EU206DU202E_m0519F9383125F57206536E5E3B2772F5FF86F9A2((&V_0), NULL);
		uint32_t L_16 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_16, ((int32_t)-825981213)))^((int32_t)653351550)));
		goto IL_000d;
	}

IL_0196:
	{
		uint32_t L_17 = V_1;
		uint64_t L_18 = V_5;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_17)) < ((uint64_t)L_18))))
		{
			goto IL_01a4;
		}
	}
	{
		int32_t L_19 = ((int32_t)1915513682);
		G_B15_0 = L_19;
		G_B15_1 = L_19;
		goto IL_01aa;
	}

IL_01a4:
	{
		int32_t L_20 = ((int32_t)1613778823);
		G_B15_0 = L_20;
		G_B15_1 = L_20;
	}

IL_01aa:
	{
		G_B2_0 = G_B15_1;
		goto IL_000d;
	}

IL_01b0:
	{
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* L_21 = __this->___U200EU206BU202BU206CU202DU206EU200BU206DU206FU200EU202BU202CU200CU200BU206AU200FU202AU202CU200FU206EU206FU206FU206CU206FU200EU202DU200DU200DU206FU206AU206FU202DU202BU202DU200BU206EU202AU206BU206CU206FU202E_8;
		uint32_t L_22 = V_1;
		uint32_t L_23 = V_11;
		NullCheck(L_21);
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U200EU200FU200CU200EU202CU202CU206BU206FU202DU206BU200DU206DU202BU206BU202EU202CU200DU200DU206FU200BU206BU202EU206AU200CU206CU200DU202CU200DU206CU206AU206BU206DU206CU200BU200CU200CU202EU200CU202BU206EU202E_mC5F309EC4B87BA6C493B3D0D510D03CF957EBA37(L_21, L_22, L_23, NULL);
		G_B2_0 = ((int32_t)1534068944);
		goto IL_000d;
	}

IL_01c8:
	{
		int64_t L_24 = p3;
		V_6 = L_24;
		uint32_t L_25 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_25, ((int32_t)-1208949450)))^((int32_t)2061567788)));
		goto IL_000d;
	}

IL_01df:
	{
		uint32_t L_26 = V_1;
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_27 = __this->___U200DU206EU200DU202BU206CU200BU206DU200BU206CU200EU206BU206CU206FU200CU200FU202DU206EU206BU202AU202BU206CU206AU206DU200CU202DU206FU200FU200BU202DU206BU200DU200EU202EU206CU202EU202EU202BU202DU200FU202AU202E_9;
		uint32_t L_28 = V_1;
		uint32_t L_29 = V_13;
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_30 = __this->___U202BU200BU206DU206FU200FU202CU202DU200CU206AU206AU202EU206FU206AU206CU206AU200CU200FU206CU200EU200CU202EU206DU200DU200FU202BU206DU200CU202BU202AU206FU200BU200BU206EU206AU202EU202CU200DU202AU206AU206FU202E_11;
		int32_t L_31 = V_14;
		uint32_t L_32;
		L_32 = U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U206AU206DU200DU206DU206EU206CU206EU206BU200CU200CU200BU202EU206CU202CU206BU206DU200EU200DU206FU200DU206FU202BU202BU200BU200CU202BU206EU202DU202AU206EU206CU206EU202BU200DU202DU202AU200FU200EU206EU200CU202E_mDD1235FA317D81A1BBAE4E9DEEC60176E5DF7EA8(L_27, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)L_29)), 1)), L_30, L_31, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_32));
		uint32_t L_33 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_33, ((int32_t)-1937103566)))^((int32_t)1783475693)));
		goto IL_000d;
	}

IL_020e:
	{
		uint32_t L_34 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_34, ((int32_t)1836219506)))^((int32_t)681490196)));
		goto IL_000d;
	}

IL_0221:
	{
		uint64_t L_35 = V_5;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_35, ((int64_t)1)));
		uint32_t L_36 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_36, ((int32_t)651291091)))^((int32_t)1959400680)));
		goto IL_000d;
	}

IL_023b:
	{
		uint32_t L_37 = V_2;
		V_3 = L_37;
		G_B2_0 = ((int32_t)1771464454);
		goto IL_000d;
	}

IL_0247:
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_38 = __this->___U202BU200DU200FU206CU202BU200BU202BU200FU206EU202AU202EU202BU202BU206BU202CU200BU206CU206EU202DU202EU202CU206FU206AU200BU206AU206CU206AU200EU202EU200CU202DU200BU202CU206EU206DU206BU202DU200FU200EU202E_0;
		uint32_t L_39 = (&V_0)->___U202CU202BU206AU200BU200FU200DU200DU206DU200FU202DU206AU206FU202BU202CU200EU206FU206CU206BU206CU200CU202AU202BU206BU200BU200EU202DU206CU202EU200DU206BU206DU200BU202EU202EU206AU206FU206BU206BU206FU202DU202E_0;
		NullCheck(L_38);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_40 = __this->___U202BU200BU206DU206FU200FU202CU202DU200CU206AU206AU202EU206FU206AU206CU206AU200CU200FU206CU200EU200CU202EU206DU200DU200FU202BU206DU200CU202BU202AU206FU200BU200BU206EU206AU202EU202CU200DU202AU206AU206FU202E_11;
		uint32_t L_41;
		L_41 = U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202CU200EU200FU206FU200EU202BU202CU206EU206FU200EU200CU200CU202CU200DU206BU200EU200BU206EU206FU202AU206AU206DU202EU202EU206EU206BU206EU206DU202DU202DU206BU200EU206EU206CU202EU206CU200DU200FU202DU206AU202E_m4BC344CC5E999A9A82A1D574E36B5BE43CAB6793(((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)((int32_t)((int32_t)L_39<<4)))))), L_40, NULL);
		uint32_t L_42 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_42, ((int32_t)468901623)))^((int32_t)-551247036)));
		goto IL_000d;
	}

IL_027b:
	{
		U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141* L_43 = __this->___U200FU202AU202CU200CU202BU206FU200FU200CU202AU200BU200EU200CU200EU200FU200BU206BU200BU200EU200CU202CU200FU206EU202BU206BU200CU200FU202DU206BU202DU206AU200EU202CU206EU206FU200FU202CU202CU202DU200DU206DU202E_6;
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_44 = __this->___U202BU200BU206DU206FU200FU202CU202DU200CU206AU206AU202EU206FU206AU206CU206AU200CU200FU206CU200EU200CU202EU206DU200DU200FU202BU206DU200CU202BU202AU206FU200BU200BU206EU206AU202EU202CU200DU202AU206AU206FU202E_11;
		uint32_t L_45 = V_8;
		NullCheck(L_43);
		uint32_t L_46;
		L_46 = U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_U206BU202CU206DU202EU200BU200FU200DU206AU206DU206CU206CU202EU200DU202DU206DU206FU202EU206DU206BU206FU206EU200DU206AU206DU200FU206DU206CU206AU202CU202BU202BU202CU202DU200EU206DU206EU206CU206DU202AU200DU202E_mBC2A0925E49228FE5EA91F13AA884EC97A3CADDE(L_43, L_44, L_45, NULL);
		V_11 = ((int32_t)il2cpp_codegen_add(2, (int32_t)L_46));
		U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U200DU200EU200FU202BU200CU202BU206DU202EU206DU200EU200CU202BU206EU206FU202DU206DU206DU202AU202DU202BU202AU200CU206BU206EU200EU202BU202CU206DU200FU206FU206FU200BU206BU200FU200DU202EU202AU200BU206EU202BU202E_m44463DF00F56202E3BF2B244041DE37CD2120B5C((&V_0), NULL);
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20* L_47 = __this->___U202AU202EU202CU200BU202AU206AU200FU206BU202CU206EU202AU202DU206EU206BU206EU200BU200EU202EU200BU200CU200BU200CU206AU206AU200BU206FU202BU202BU206CU200DU206FU200EU200DU200DU200CU206FU202EU202BU206BU202E_10;
		uint32_t L_48 = V_11;
		uint32_t L_49;
		L_49 = U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_U206AU206BU206CU200BU202DU202AU206BU200BU200DU202CU202EU200DU206AU200BU206AU202DU202DU202AU200EU206AU206DU202BU206DU200BU206BU202CU202EU202CU200BU202DU200EU206FU200EU206CU202BU202EU200DU206DU200CU202BU202E_m28D185D96E0F137A9A917FF3D591FBD0EA88613F(L_48, NULL);
		NullCheck(L_47);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_50 = __this->___U202BU200BU206DU206FU200FU202CU202DU200CU206AU206AU202EU206FU206AU206CU206AU200CU200FU206CU200EU200CU202EU206DU200DU200FU202BU206DU200CU202BU202AU206FU200BU200BU206EU206AU202EU202CU200DU202AU206AU206FU202E_11;
		uint32_t L_51;
		L_51 = U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U200BU200DU206DU202DU200BU206DU206AU206AU200CU206AU206FU200DU200EU202BU202CU200EU202DU202DU206FU206FU200FU206EU202CU200FU202DU206CU206EU202BU206EU202DU200FU206AU206AU202EU200BU206FU206DU202CU200BU200FU202E_m110AF332C1D3EBAB0ED019DFB3F4ED6341A2F4B5(((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_49)))), L_50, NULL);
		V_13 = L_51;
		uint32_t L_52 = V_13;
		if ((!(((uint32_t)L_52) < ((uint32_t)4))))
		{
			goto IL_02c6;
		}
	}
	{
		int32_t L_53 = ((int32_t)1847637397);
		G_B26_0 = L_53;
		G_B26_1 = L_53;
		goto IL_02cc;
	}

IL_02c6:
	{
		int32_t L_54 = ((int32_t)674025635);
		G_B26_0 = L_54;
		G_B26_1 = L_54;
	}

IL_02cc:
	{
		uint32_t L_55 = V_15;
		G_B2_0 = ((int32_t)(G_B26_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_55, ((int32_t)-833909887)))));
		goto IL_000d;
	}

IL_02db:
	{
		uint32_t L_56 = V_3;
		V_12 = L_56;
		uint32_t L_57 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_57, ((int32_t)1573791330)))^((int32_t)941841532)));
		goto IL_000d;
	}

IL_02f1:
	{
		U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U200DU206AU206EU206DU206EU202BU202EU206FU202EU202BU206DU200FU206FU206CU206AU200DU206DU206DU202CU200BU202AU202CU206AU206AU200BU202BU200FU200BU202EU202CU200DU200DU200CU200FU200CU200CU206BU202EU206DU202EU202E_m22D5925512D8B10871F3FDDFF7F3F00EBE6D41D2((&V_0), NULL);
		U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3* L_58 = __this->___U206FU202BU200FU200DU200EU200EU202AU202EU200FU200DU202EU200CU202DU202EU202AU200CU200CU206BU200CU206FU206FU200BU202EU200EU200DU206DU200EU206FU206EU202CU202BU202EU200FU200DU200BU200EU200FU202AU206EU200EU202E_7;
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_59 = __this->___U202BU200BU206DU206FU200FU202CU202DU200CU206AU206AU202EU206FU206AU206CU206AU200CU200FU206CU200EU200CU202EU206DU200DU200FU202BU206DU200CU202BU202AU206FU200BU200BU206EU206AU202EU202CU200DU202AU206AU206FU202E_11;
		NullCheck(L_58);
		uint8_t L_60;
		L_60 = U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_U206DU202BU206AU200EU200EU206CU202CU206BU206EU200EU206DU202BU206FU200BU206EU206BU206AU206FU202AU206AU202DU200DU200EU202EU206CU206EU202DU206DU200FU200FU200BU206BU206EU206EU206FU206AU202AU206BU206AU202AU202E_mE429CF5015A06D29E7EB17A1BAEBE7C65DD48338(L_58, L_59, 0, (uint8_t)0, NULL);
		V_7 = L_60;
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* L_61 = __this->___U200EU206BU202BU206CU202DU206EU200BU206DU206FU200EU202BU202CU200CU200BU206AU200FU202AU202CU200FU206EU206FU206FU206CU206FU200EU202DU200DU200DU206FU206AU206FU202DU202BU202DU200BU206EU202AU206BU206CU206FU202E_8;
		uint8_t L_62 = V_7;
		NullCheck(L_61);
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U202DU202BU200BU206FU206CU200CU202BU206CU200CU200FU202DU202EU206AU202CU200CU200DU200FU206BU206EU200EU206BU202BU206DU206EU206DU202EU206CU206EU200FU200DU202BU206DU206AU202EU206BU202AU200EU206BU202DU206EU202E_m5F09A40A44CB0567F660E6BEC0339ABD81DE61D1(L_61, L_62, NULL);
		uint64_t L_63 = V_5;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_63, ((int64_t)1)));
		uint32_t L_64 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_64, ((int32_t)862559607)))^((int32_t)-433835683)));
		goto IL_000d;
	}

IL_0334:
	{
		uint32_t L_65 = V_13;
		V_1 = L_65;
		G_B2_0 = ((int32_t)938891012);
		goto IL_000d;
	}

IL_0341:
	{
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* L_66 = __this->___U200EU206BU202BU206CU202DU206EU200BU206DU206FU200EU202BU202CU200CU200BU206AU200FU202AU202CU200FU206EU206FU206FU206CU206FU200EU202DU200DU200DU206FU206AU206FU202DU202BU202DU200BU206EU202AU206BU206CU206FU202E_8;
		NullCheck(L_66);
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U202AU206CU202CU206BU202CU200EU202CU206BU206DU206AU206CU206DU206BU202BU202DU206CU202DU206CU202CU200CU202BU202AU206AU200CU206EU202BU206FU200EU206EU200CU206AU200DU206CU206BU200DU206DU200CU202AU206CU206EU202E_mDB1C53CF5383FEED950DDFA275300763C638940F(L_66, NULL);
		G_B2_0 = ((int32_t)58755647);
		goto IL_000d;
	}

IL_0356:
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_67 = __this->___U202BU200DU200FU206CU202BU200BU202BU200FU206EU202AU202EU202BU202BU206BU202CU200BU206CU206EU202DU202EU202CU206FU206AU200BU206AU206CU206AU200EU202EU200CU202DU200BU202CU206EU206DU206BU202DU200FU200EU202E_0;
		uint32_t L_68 = (&V_0)->___U202CU202BU206AU200BU200FU200DU200DU206DU200FU202DU206AU206FU202BU202CU200EU206FU206CU206BU206CU200CU202AU202BU206BU200BU200EU202DU206CU202EU200DU206BU206DU200BU202EU202EU206AU206FU206BU206BU206FU202DU202E_0;
		uint32_t L_69 = V_8;
		NullCheck(L_67);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_70 = __this->___U202BU200BU206DU206FU200FU202CU202DU200CU206AU206AU202EU206FU206AU206CU206AU200CU200FU206CU200EU200CU202EU206DU200DU200FU202BU206DU200CU202BU202AU206FU200BU200BU206EU206AU202EU202CU200DU202AU206AU206FU202E_11;
		uint32_t L_71;
		L_71 = U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202CU200EU200FU206FU200EU202BU202CU206EU206FU200EU200CU200CU202CU200DU206BU200EU200BU206EU206FU202AU206AU206DU202EU202EU206EU206BU206EU206DU202DU202DU206BU200EU206EU206CU202EU206CU200DU200FU202DU206AU202E_m4BC344CC5E999A9A82A1D574E36B5BE43CAB6793(((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_68<<4)), (int32_t)L_69)))))), L_70, NULL);
		if (L_71)
		{
			goto IL_0383;
		}
	}
	{
		int32_t L_72 = ((int32_t)-685677339);
		G_B34_0 = L_72;
		G_B34_1 = L_72;
		goto IL_0389;
	}

IL_0383:
	{
		int32_t L_73 = ((int32_t)-541918528);
		G_B34_0 = L_73;
		G_B34_1 = L_73;
	}

IL_0389:
	{
		uint32_t L_74 = V_15;
		G_B2_0 = ((int32_t)(G_B34_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_74, ((int32_t)985487257)))));
		goto IL_000d;
	}

IL_0398:
	{
		uint32_t L_75 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_75, ((int32_t)-351453407)))^((int32_t)-1834253059)));
		goto IL_000d;
	}

IL_03ab:
	{
		uint64_t L_76 = V_5;
		uint64_t L_77 = V_6;
		if ((!(((uint64_t)L_76) < ((uint64_t)L_77))))
		{
			goto IL_03b9;
		}
	}
	{
		int32_t L_78 = ((int32_t)1458099418);
		G_B39_0 = L_78;
		G_B39_1 = L_78;
		goto IL_03bf;
	}

IL_03b9:
	{
		int32_t L_79 = ((int32_t)1607416761);
		G_B39_0 = L_79;
		G_B39_1 = L_79;
	}

IL_03bf:
	{
		uint32_t L_80 = V_15;
		G_B2_0 = ((int32_t)(G_B39_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_80, ((int32_t)-146426443)))));
		goto IL_000d;
	}

IL_03ce:
	{
		uint32_t L_81 = V_13;
		int32_t L_82 = V_14;
		V_1 = ((int32_t)(((int32_t)(2|((int32_t)((int32_t)L_81&1))))<<((int32_t)(L_82&((int32_t)31)))));
		uint32_t L_83 = V_13;
		if ((!(((uint32_t)L_83) < ((uint32_t)((int32_t)14)))))
		{
			goto IL_03e9;
		}
	}
	{
		int32_t L_84 = ((int32_t)-1287925974);
		G_B43_0 = L_84;
		G_B43_1 = L_84;
		goto IL_03ef;
	}

IL_03e9:
	{
		int32_t L_85 = ((int32_t)-372739613);
		G_B43_0 = L_85;
		G_B43_1 = L_85;
	}

IL_03ef:
	{
		uint32_t L_86 = V_15;
		G_B2_0 = ((int32_t)(G_B43_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_86, ((int32_t)1784139374)))));
		goto IL_000d;
	}

IL_03fe:
	{
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		uint32_t L_87 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_87, ((int32_t)-888524795)))^((int32_t)-1331613153)));
		goto IL_000d;
	}

IL_0417:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382));
		uint32_t L_88 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_88, ((int32_t)959422684)))^((int32_t)604633863)));
		goto IL_000d;
	}

IL_0432:
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_89 = __this->___U202EU200FU206CU206AU200CU206EU202DU206BU202EU200DU206EU206BU200EU206BU206BU202DU206CU206AU206FU200DU200DU206BU202CU200FU200EU200CU202BU206DU202BU206DU206AU206EU206EU200EU200DU202CU202AU202BU200FU200CU202E_1;
		uint32_t L_90 = (&V_0)->___U202CU202BU206AU200BU200FU200DU200DU206DU200FU202DU206AU206FU202BU202CU200EU206FU206CU206BU206CU200CU202AU202BU206BU200BU200EU202DU206CU202EU200DU206BU206DU200BU202EU202EU206AU206FU206BU206BU206FU202DU202E_0;
		uint32_t L_91 = V_8;
		NullCheck(L_89);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_92 = __this->___U202BU200BU206DU206FU200FU202CU202DU200CU206AU206AU202EU206FU206AU206CU206AU200CU200FU206CU200EU200CU202EU206DU200DU200FU202BU206DU200CU202BU202AU206FU200BU200BU206EU206AU202EU202CU200DU202AU206AU206FU202E_11;
		uint32_t L_93;
		L_93 = U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202CU200EU200FU206FU200EU202BU202CU206EU206FU200EU200CU200CU202CU200DU206BU200EU200BU206EU206FU202AU206AU206DU202EU202EU206EU206BU206EU206DU202DU202DU206BU200EU206EU206CU202EU206CU200DU200FU202DU206AU202E_m4BC344CC5E999A9A82A1D574E36B5BE43CAB6793(((L_89)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_90<<4)), (int32_t)L_91)))))), L_92, NULL);
		if (L_93)
		{
			goto IL_045f;
		}
	}
	{
		int32_t L_94 = ((int32_t)1147416639);
		G_B49_0 = L_94;
		G_B49_1 = L_94;
		goto IL_0465;
	}

IL_045f:
	{
		int32_t L_95 = ((int32_t)203955021);
		G_B49_0 = L_95;
		G_B49_1 = L_95;
	}

IL_0465:
	{
		uint32_t L_96 = V_15;
		G_B2_0 = ((int32_t)(G_B49_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_96, ((int32_t)630301918)))));
		goto IL_000d;
	}

IL_0474:
	{
		uint64_t L_97 = V_5;
		uint32_t L_98 = __this->___U206EU200CU200DU202EU200CU202BU202DU200DU202EU206FU206DU206BU200BU206AU200DU206BU202EU202CU202AU202BU206BU202BU200DU200BU202EU202EU202AU206CU206DU202EU202AU202CU206EU202AU200FU200FU202DU200EU206DU206CU202E_17;
		V_8 = ((int32_t)(((int32_t)(uint32_t)L_97)&(int32_t)L_98));
		G_B2_0 = ((int32_t)1890504570);
		goto IL_000d;
	}

IL_048a:
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_99 = __this->___U206BU200BU200BU202AU202DU200DU202EU206FU200EU206EU200EU202BU206EU206AU206DU202AU202EU206CU200FU200EU200FU200BU202CU200CU200DU206EU206FU200EU200BU206AU202AU202EU200FU200CU206EU200BU200BU206EU202AU200DU202E_5;
		uint32_t L_100 = (&V_0)->___U202CU202BU206AU200BU200FU200DU200DU206DU200FU202DU206AU206FU202BU202CU200EU206FU206CU206BU206CU200CU202AU202BU206BU200BU200EU202DU206CU202EU200DU206BU206DU200BU202EU202EU206AU206FU206BU206BU206FU202DU202E_0;
		NullCheck(L_99);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_101 = __this->___U202BU200BU206DU206FU200FU202CU202DU200CU206AU206AU202EU206FU206AU206CU206AU200CU200FU206CU200EU200CU202EU206DU200DU200FU202BU206DU200CU202BU202AU206FU200BU200BU206EU206AU202EU202CU200DU202AU206AU206FU202E_11;
		uint32_t L_102;
		L_102 = U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202CU200EU200FU206FU200EU202BU202CU206EU206FU200EU200CU200CU202CU200DU206BU200EU200BU206EU206FU202AU206AU206DU202EU202EU206EU206BU206EU206DU202DU202DU206BU200EU206EU206CU202EU206CU200DU200FU202DU206AU202E_m4BC344CC5E999A9A82A1D574E36B5BE43CAB6793(((L_99)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_100)))), L_101, NULL);
		if (!L_102)
		{
			goto IL_04b2;
		}
	}
	{
		int32_t L_103 = ((int32_t)1166787872);
		G_B54_0 = L_103;
		G_B54_1 = L_103;
		goto IL_04b8;
	}

IL_04b2:
	{
		int32_t L_104 = ((int32_t)215176759);
		G_B54_0 = L_104;
		G_B54_1 = L_104;
	}

IL_04b8:
	{
		G_B2_0 = G_B54_1;
		goto IL_000d;
	}

IL_04be:
	{
		U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U202AU206BU206FU202AU202DU202EU200EU202AU202DU202BU206CU200BU200BU202DU202CU206FU200CU200FU206DU200CU200EU202DU200DU206EU200EU200FU202AU206DU206FU200BU202DU200CU200CU206EU202BU206DU200EU202DU202DU206DU202E_m893D26780D5AF493975DC15D030473A474937579((&V_0), NULL);
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* L_105 = __this->___U200EU206BU202BU206CU202DU206EU200BU206DU206FU200EU202BU202CU200CU200BU206AU200FU202AU202CU200FU206EU206FU206FU206CU206FU200EU202DU200DU200DU206FU206AU206FU202DU202BU202DU200BU206EU202AU206BU206CU206FU202E_8;
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* L_106 = __this->___U200EU206BU202BU206CU202DU206EU200BU206DU206FU200EU202BU202CU200CU200BU206AU200FU202AU202CU200FU206EU206FU206FU206CU206FU200EU202DU200DU200DU206FU206AU206FU202DU202BU202DU200BU206EU202AU206BU206CU206FU202E_8;
		uint32_t L_107 = V_1;
		NullCheck(L_106);
		uint8_t L_108;
		L_108 = U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U200CU200FU200BU202EU202EU206AU206DU202DU202EU200EU206BU200CU206CU206FU200DU200CU206EU206DU202BU200EU202EU202AU200BU206DU202AU202BU202BU202BU200BU200FU206AU206CU206BU206DU200FU206DU200CU202EU200EU206AU202E_m2B049B2D18E32FBDF36F6B89C39A401E5B772A57(L_106, L_107, NULL);
		NullCheck(L_105);
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U202DU202BU200BU206FU206CU200CU202BU206CU200CU200FU202DU202EU206AU202CU200CU200DU200FU206BU206EU200EU206BU202BU206DU206EU206DU202EU206CU206EU200FU200DU202BU206DU206AU202EU206BU202AU200EU206BU202DU206EU202E_m5F09A40A44CB0567F660E6BEC0339ABD81DE61D1(L_105, L_108, NULL);
		uint32_t L_109 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_109, ((int32_t)999515334)))^((int32_t)1685957562)));
		goto IL_000d;
	}

IL_04ef:
	{
		bool L_110;
		L_110 = U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U202AU206EU200CU202CU200DU206DU200EU202CU206EU200EU206FU202AU200EU202CU206DU202BU200DU206AU200CU206BU206AU200FU206EU200EU206CU206BU202AU200FU200DU206CU206EU200FU202DU206EU200DU200EU206CU202AU200CU202BU202E_m3C206BEA2DD7805E7C3A4718CDA5AE1939AD37E9((&V_0), NULL);
		if (!L_110)
		{
			goto IL_0500;
		}
	}
	{
		int32_t L_111 = ((int32_t)-266850284);
		G_B59_0 = L_111;
		G_B59_1 = L_111;
		goto IL_0506;
	}

IL_0500:
	{
		int32_t L_112 = ((int32_t)-1565341467);
		G_B59_0 = L_112;
		G_B59_1 = L_112;
	}

IL_0506:
	{
		uint32_t L_113 = V_15;
		G_B2_0 = ((int32_t)(G_B59_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_113, ((int32_t)1966242747)))));
		goto IL_000d;
	}

IL_0515:
	{
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* L_114 = __this->___U200EU206BU202BU206CU202DU206EU200BU206DU206FU200EU202BU202CU200CU200BU206AU200FU202AU202CU200FU206EU206FU206FU206CU206FU200EU202DU200DU200DU206FU206AU206FU202DU202BU202DU200BU206EU202AU206BU206CU206FU202E_8;
		NullCheck(L_114);
		uint8_t L_115;
		L_115 = U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U200CU200FU200BU202EU202EU206AU206DU202DU202EU200EU206BU200CU206CU206FU200DU200CU206EU206DU202BU200EU202EU202AU200BU206DU202AU202BU202BU202BU200BU200FU206AU206CU206BU206DU200FU206DU200CU202EU200EU206AU202E_m2B049B2D18E32FBDF36F6B89C39A401E5B772A57(L_114, 0, NULL);
		V_10 = L_115;
		uint32_t L_116 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_116, ((int32_t)-1674432717)))^((int32_t)1024949848)));
		goto IL_000d;
	}

IL_0536:
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_117 = __this->___U200CU206AU202EU200BU206DU200DU200CU206FU206DU206FU200FU206AU206FU200CU200CU206DU206CU200CU200CU200DU202DU200BU200CU200BU206EU206CU206CU206BU206DU202AU206FU200EU206EU202EU206EU202CU200BU200FU200CU206AU202E_2;
		uint32_t L_118 = (&V_0)->___U202CU202BU206AU200BU200FU200DU200DU206DU200FU202DU206AU206FU202BU202CU200EU206FU206CU206BU206CU200CU202AU202BU206BU200BU200EU202DU206CU202EU200DU206BU206DU200BU202EU202EU206AU206FU206BU206BU206FU202DU202E_0;
		NullCheck(L_117);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_119 = __this->___U202BU200BU206DU206FU200FU202CU202DU200CU206AU206AU202EU206FU206AU206CU206AU200CU200FU206CU200EU200CU202EU206DU200DU200FU202BU206DU200CU202BU202AU206FU200BU200BU206EU206AU202EU202CU200DU202AU206AU206FU202E_11;
		uint32_t L_120;
		L_120 = U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202CU200EU200FU206FU200EU202BU202CU206EU206FU200EU200CU200CU202CU200DU206BU200EU200BU206EU206FU202AU206AU206DU202EU202EU206EU206BU206EU206DU202DU202DU206BU200EU206EU206CU202EU206CU200DU200FU202DU206AU202E_m4BC344CC5E999A9A82A1D574E36B5BE43CAB6793(((L_117)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_118)))), L_119, NULL);
		if ((((int32_t)L_120) == ((int32_t)1)))
		{
			goto IL_055f;
		}
	}
	{
		int32_t L_121 = ((int32_t)737318416);
		G_B64_0 = L_121;
		G_B64_1 = L_121;
		goto IL_0565;
	}

IL_055f:
	{
		int32_t L_122 = ((int32_t)298348689);
		G_B64_0 = L_122;
		G_B64_1 = L_122;
	}

IL_0565:
	{
		G_B2_0 = G_B64_1;
		goto IL_000d;
	}

IL_056b:
	{
		uint32_t L_123 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_123, ((int32_t)266630716)))^((int32_t)1618857601)));
		goto IL_000d;
	}

IL_057e:
	{
		uint32_t L_124 = V_4;
		V_12 = L_124;
		uint32_t L_125 = V_3;
		V_4 = L_125;
		G_B2_0 = ((int32_t)2136564824);
		goto IL_000d;
	}

IL_058f:
	{
		goto IL_0196;
	}
	// Dead block : IL_0594: ldc.i4 2010214188

IL_059e:
	{
		uint32_t L_126 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_126, ((int32_t)115529201)))^((int32_t)-1823245895)));
		goto IL_000d;
	}

IL_05b1:
	{
		uint32_t L_127 = V_1;
		uint32_t L_128 = __this->___U202DU202BU206FU200DU206DU202DU202EU206DU200EU202BU202DU200BU200CU202DU202DU202EU206CU202DU200DU206EU200BU200BU206EU202CU200DU200CU200BU200DU202BU200CU202BU200FU200CU200CU202EU206DU202EU206CU202DU206FU202E_15;
		if ((!(((uint32_t)L_127) >= ((uint32_t)L_128))))
		{
			goto IL_05c2;
		}
	}
	{
		int32_t L_129 = ((int32_t)-1331577400);
		G_B73_0 = L_129;
		G_B73_1 = L_129;
		goto IL_05c8;
	}

IL_05c2:
	{
		int32_t L_130 = ((int32_t)-717571835);
		G_B73_0 = L_130;
		G_B73_1 = L_130;
	}

IL_05c8:
	{
		uint32_t L_131 = V_15;
		G_B2_0 = ((int32_t)(G_B73_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_131, ((int32_t)667505233)))));
		goto IL_000d;
	}

IL_05d7:
	{
		uint32_t L_132 = V_1;
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475* L_133 = (&__this->___U200EU202EU200CU200FU202DU206EU202BU200BU200BU200FU206AU202DU200CU206EU202AU206FU206CU206BU206CU200EU206AU200EU206AU202CU202AU202CU202BU202EU206BU200EU200CU200DU202BU202DU202AU202AU206BU202BU200DU202DU202E_16);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_134 = __this->___U202BU200BU206DU206FU200FU202CU202DU200CU206AU206AU202EU206FU206AU206CU206AU200CU200FU206CU200EU200CU202EU206DU200DU200FU202BU206DU200CU202BU202AU206FU200BU200BU206EU206AU202EU202CU200DU202AU206AU206FU202E_11;
		uint32_t L_135;
		L_135 = U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U200FU202CU200DU206EU200CU206FU206DU202AU206DU202AU206DU206FU202AU206AU206DU206AU206AU206DU200DU200CU202CU202DU206AU200BU206EU206EU206BU206DU200CU200BU202BU206AU206EU206CU200CU200FU202BU206AU200BU202AU202E_mCFC4B0F295A359B806920E4006C1517C4B774A34(L_133, L_134, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_132, (int32_t)L_135));
		uint32_t L_136 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_136, ((int32_t)193789673)))^((int32_t)653355348)));
		goto IL_000d;
	}

IL_05fe:
	{
		uint32_t L_137 = V_1;
		if ((!(((uint32_t)L_137) == ((uint32_t)(-1)))))
		{
			goto IL_060a;
		}
	}
	{
		int32_t L_138 = ((int32_t)1069692298);
		G_B78_0 = L_138;
		G_B78_1 = L_138;
		goto IL_0610;
	}

IL_060a:
	{
		int32_t L_139 = ((int32_t)95112010);
		G_B78_0 = L_139;
		G_B78_1 = L_139;
	}

IL_0610:
	{
		G_B2_0 = G_B78_1;
		goto IL_000d;
	}

IL_0616:
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_140 = __this->___U206EU200BU206DU200BU206EU206BU202EU202BU202CU200BU206AU206AU206CU200DU200BU200BU206CU200CU202CU200DU206EU206EU202AU206AU202AU206BU206DU200BU206BU200BU200FU202BU206BU200DU202EU200DU206CU206CU206DU200FU202E_3;
		uint32_t L_141 = (&V_0)->___U202CU202BU206AU200BU200FU200DU200DU206DU200FU202DU206AU206FU202BU202CU200EU206FU206CU206BU206CU200CU202AU202BU206BU200BU200EU202DU206CU202EU200DU206BU206DU200BU202EU202EU206AU206FU206BU206BU206FU202DU202E_0;
		NullCheck(L_140);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_142 = __this->___U202BU200BU206DU206FU200FU202CU202DU200CU206AU206AU202EU206FU206AU206CU206AU200CU200FU206CU200EU200CU202EU206DU200DU200FU202BU206DU200CU202BU202AU206FU200BU200BU206EU206AU202EU202CU200DU202AU206AU206FU202E_11;
		uint32_t L_143;
		L_143 = U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202CU200EU200FU206FU200EU202BU202CU206EU206FU200EU200CU200CU202CU200DU206BU200EU200BU206EU206FU202AU206AU206DU202EU202EU206EU206BU206EU206DU202DU202DU206BU200EU206EU206CU202EU206CU200DU200FU202DU206AU202E_m4BC344CC5E999A9A82A1D574E36B5BE43CAB6793(((L_140)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_141)))), L_142, NULL);
		if (!L_143)
		{
			goto IL_063e;
		}
	}
	{
		int32_t L_144 = ((int32_t)-1691611740);
		G_B82_0 = L_144;
		G_B82_1 = L_144;
		goto IL_0644;
	}

IL_063e:
	{
		int32_t L_145 = ((int32_t)-1027885265);
		G_B82_0 = L_145;
		G_B82_1 = L_145;
	}

IL_0644:
	{
		uint32_t L_146 = V_15;
		G_B2_0 = ((int32_t)(G_B82_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_146, ((int32_t)-536111352)))));
		goto IL_000d;
	}

IL_0653:
	{
		uint32_t L_147 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_147, ((int32_t)-1688834056)))^((int32_t)-906462874)));
		goto IL_000d;
	}

IL_0666:
	{
		U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141* L_148 = __this->___U202DU200DU206BU202EU206EU202AU206FU200FU202DU202AU202CU206BU206DU206BU202BU202CU206AU202AU200DU200EU206DU200BU200EU200FU200CU200EU200DU206DU206EU206AU206BU200FU206CU202EU202DU206BU206CU200DU202AU202DU202E_12;
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_149 = __this->___U202BU200BU206DU206FU200FU202CU202DU200CU206AU206AU202EU206FU206AU206CU206AU200CU200FU206CU200EU200CU202EU206DU200DU200FU202BU206DU200CU202BU202AU206FU200BU200BU206EU206AU202EU202CU200DU202AU206AU206FU202E_11;
		uint32_t L_150 = V_8;
		NullCheck(L_148);
		uint32_t L_151;
		L_151 = U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_U206BU202CU206DU202EU200BU200FU200DU206AU206DU206CU206CU202EU200DU202DU206DU206FU202EU206DU206BU206FU206EU200DU206AU206DU200FU206DU206CU206AU202CU202BU202BU202CU202DU200EU206DU206EU206CU206DU202AU200DU202E_mBC2A0925E49228FE5EA91F13AA884EC97A3CADDE(L_148, L_149, L_150, NULL);
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_151, 2));
		U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U206BU200EU200DU202BU202EU202DU202CU206BU202AU200DU200DU202DU200BU206EU206FU200BU200DU200BU206CU200BU202EU202DU200CU206AU206DU206AU200EU200DU200CU206CU202DU206FU206CU206EU206EU200DU200FU200EU200DU200FU202E_mDF07A0ED825F0CAC70837227DF02D57E90A72777((&V_0), NULL);
		G_B2_0 = ((int32_t)560605573);
		goto IL_000d;
	}

IL_068e:
	{
		U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3* L_152 = __this->___U206FU202BU200FU200DU200EU200EU202AU202EU200FU200DU202EU200CU202DU202EU202AU200CU200CU206BU200CU206FU206FU200BU202EU200EU200DU206DU200EU206FU206EU202CU202BU202EU200FU200DU200BU200EU200FU202AU206EU200EU202E_7;
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_153 = __this->___U202BU200BU206DU206FU200FU202CU202DU200CU206AU206AU202EU206FU206AU206CU206AU200CU200FU206CU200EU200CU202EU206DU200DU200FU202BU206DU200CU202BU202AU206FU200BU200BU206EU206AU202EU202CU200DU202AU206AU206FU202E_11;
		uint64_t L_154 = V_5;
		uint8_t L_155 = V_10;
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* L_156 = __this->___U200EU206BU202BU206CU202DU206EU200BU206DU206FU200EU202BU202CU200CU200BU206AU200FU202AU202CU200FU206EU206FU206FU206CU206FU200EU202DU200DU200DU206FU206AU206FU202DU202BU202DU200BU206EU202AU206BU206CU206FU202E_8;
		uint32_t L_157 = V_1;
		NullCheck(L_156);
		uint8_t L_158;
		L_158 = U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U200CU200FU200BU202EU202EU206AU206DU202DU202EU200EU206BU200CU206CU206FU200DU200CU206EU206DU202BU200EU202EU202AU200BU206DU202AU202BU202BU202BU200BU200FU206AU206CU206BU206DU200FU206DU200CU202EU200EU206AU202E_m2B049B2D18E32FBDF36F6B89C39A401E5B772A57(L_156, L_157, NULL);
		NullCheck(L_152);
		uint8_t L_159;
		L_159 = U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_U206AU206CU202EU206AU200CU206CU206AU200FU202DU206AU206AU200BU206DU202EU206AU206CU200FU206AU206AU206BU200CU202CU200BU206BU206DU202BU206CU206DU202BU202CU200DU200FU200CU206DU206AU206EU206BU202AU202DU202AU202E_m040809AC3E3744488C02E69312466EA3B03F9527(L_152, L_153, ((int32_t)(uint32_t)L_154), L_155, L_158, NULL);
		V_9 = L_159;
		uint32_t L_160 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_160, ((int32_t)-502107568)))^((int32_t)-1947312124)));
		goto IL_000d;
	}

IL_06c5:
	{
		goto IL_0666;
	}
	// Dead block : IL_06c7: ldc.i4 922125124

IL_06d1:
	{
		uint64_t L_161 = V_5;
		uint32_t L_162 = V_11;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_161, ((int64_t)(uint64_t)L_162)));
		uint32_t L_163 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_163, ((int32_t)-1871059455)))^((int32_t)-1470455252)));
		goto IL_000d;
	}

IL_06ec:
	{
		uint32_t L_164 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_subtract(((int32_t)((uint32_t)L_164>>1)), 1));
		uint32_t L_165 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_165, ((int32_t)973986183)))^((int32_t)1179790440)));
		goto IL_000d;
	}

IL_0707:
	{
		V_5 = ((int64_t)0);
		uint32_t L_166 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_166, ((int32_t)-407417613)))^((int32_t)938878873)));
		goto IL_000d;
	}

IL_071e:
	{
		uint64_t L_167 = V_5;
		uint64_t L_168 = V_6;
		if ((!(((uint64_t)L_167) >= ((uint64_t)L_168))))
		{
			goto IL_072c;
		}
	}
	{
		int32_t L_169 = ((int32_t)882758830);
		G_B94_0 = L_169;
		G_B94_1 = L_169;
		goto IL_0732;
	}

IL_072c:
	{
		int32_t L_170 = ((int32_t)2082132420);
		G_B94_0 = L_170;
		G_B94_1 = L_170;
	}

IL_0732:
	{
		G_B2_0 = G_B94_1;
		goto IL_000d;
	}

IL_0738:
	{
		uint32_t L_171 = V_1;
		V_2 = L_171;
		uint32_t L_172 = V_12;
		V_1 = L_172;
		G_B2_0 = ((int32_t)748102487);
		goto IL_000d;
	}

IL_0747:
	{
		uint32_t L_173 = V_2;
		V_12 = L_173;
		uint32_t L_174 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_174, ((int32_t)1036873598)))^((int32_t)-412984656)));
		goto IL_000d;
	}

IL_075d:
	{
		goto IL_071e;
	}
	// Dead block : IL_075f: ldc.i4 2082132420

IL_0769:
	{
		U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3* L_175 = __this->___U206FU202BU200FU200DU200EU200EU202AU202EU200FU200DU202EU200CU202DU202EU202AU200CU200CU206BU200CU206FU206FU200BU202EU200EU200DU206DU200EU206FU206EU202CU202BU202EU200FU200DU200BU200EU200FU202AU206EU200EU202E_7;
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_176 = __this->___U202BU200BU206DU206FU200FU202CU202DU200CU206AU206AU202EU206FU206AU206CU206AU200CU200FU206CU200EU200CU202EU206DU200DU200FU202BU206DU200CU202BU202AU206FU200BU200BU206EU206AU202EU202CU200DU202AU206AU206FU202E_11;
		uint64_t L_177 = V_5;
		uint8_t L_178 = V_10;
		NullCheck(L_175);
		uint8_t L_179;
		L_179 = U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_U206DU202BU206AU200EU200EU206CU202CU206BU206EU200EU206DU202BU206FU200BU206EU206BU206AU206FU202AU206AU202DU200DU200EU202EU206CU206EU202DU206DU200FU200FU200BU206BU206EU206EU206FU206AU202AU206BU206AU202AU202E_mE429CF5015A06D29E7EB17A1BAEBE7C65DD48338(L_175, L_176, ((int32_t)(uint32_t)L_177), L_178, NULL);
		V_9 = L_179;
		G_B2_0 = ((int32_t)1773267200);
		goto IL_000d;
	}

IL_078b:
	{
		uint32_t L_180 = V_1;
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_181 = __this->___U202BU200BU206DU206FU200FU202CU202DU200CU206AU206AU202EU206FU206AU206CU206AU200CU200FU206CU200EU200CU202EU206DU200DU200FU202BU206DU200CU202BU202AU206FU200BU200BU206EU206AU202EU202CU200DU202AU206AU206FU202E_11;
		int32_t L_182 = V_14;
		NullCheck(L_181);
		uint32_t L_183;
		L_183 = U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_U200DU200EU206DU206BU202DU202EU200EU200BU202CU200BU202AU202CU202EU202CU200DU202CU202AU200CU200CU206DU206EU206DU202BU206FU206DU206DU200EU206AU206AU206AU206AU202DU206AU202AU200EU202AU202DU202BU202BU202BU202E_mB18EA6A960AC6D7BFC69FDD36986AA6F18F1F560(L_181, ((int32_t)il2cpp_codegen_subtract(L_182, 4)), NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_180, ((int32_t)((int32_t)L_183<<4))));
		G_B2_0 = ((int32_t)1357560274);
		goto IL_000d;
	}

IL_07a9:
	{
		V_4 = 0;
		uint32_t L_184 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_184, ((int32_t)1020604861)))^((int32_t)-258376310)));
		goto IL_000d;
	}

IL_07bf:
	{
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* L_185 = __this->___U200EU206BU202BU206CU202DU206EU200BU206DU206FU200EU202BU202CU200CU200BU206AU200FU202AU202CU200FU206EU206FU206FU206CU206FU200EU202DU200DU200DU206FU206AU206FU202DU202BU202DU200BU206EU202AU206BU206CU206FU202E_8;
		NullCheck(L_185);
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U202DU202DU206DU206AU202BU202EU202BU206FU200DU200BU202CU202AU200BU202CU202EU206AU206DU202CU200DU206FU200EU200BU200DU206BU200CU206BU200FU200DU202EU206BU200FU202CU206FU202BU206CU206BU206FU200CU202DU206DU202E_m30F50279A60F19DFAFF286E448233A8E8F760E90(L_185, NULL);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_186 = __this->___U202BU200BU206DU206FU200FU202CU202DU200CU206AU206AU202EU206FU206AU206CU206AU200CU200FU206CU200EU200CU202EU206DU200DU200FU202BU206DU200CU202BU202AU206FU200BU200BU206EU206AU202EU202CU200DU202AU206AU206FU202E_11;
		NullCheck(L_186);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_U206FU200BU206DU206AU200EU202EU200CU202DU200DU200BU200FU200DU206BU202DU202EU200FU202BU206AU200FU206FU206DU202BU202BU206CU206EU206FU202EU200CU206EU202BU202DU202CU206AU200FU206DU202EU206AU202EU200DU206CU202E_m7E2433129BFC97EF0DB5AEDA132B057B236D55C5(L_186, NULL);
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_U200FU206DU206DU200EU202CU202DU200DU200CU200BU200BU200EU202EU202DU200DU200EU200BU202EU206BU206FU206FU200CU206EU200DU200DU202BU202DU206DU206EU206CU206FU200BU202CU202AU206FU200EU200FU202CU200DU200FU202EU202E_m4648D6DDE9FCCC2E2DA23733A4168DD845A3FE07 (U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_t07091E07BA6A23F0E5F2F00BD67C89927C0E8102* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* p0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = p0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int32_t)((int32_t)L_2%((int32_t)9)));
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1522676779);
	}

IL_000c:
	{
		int32_t L_3 = ((int32_t)(G_B2_0^((int32_t)78495643)));
		V_6 = L_3;
		switch (((int32_t)((uint32_t)(int32_t)L_3%(uint32_t)(int32_t)((int32_t)9))))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_0098;
			}
			case 3:
			{
				goto IL_0061;
			}
			case 4:
			{
				goto IL_00b1;
			}
			case 5:
			{
				goto IL_0081;
			}
			case 6:
			{
				goto IL_00cb;
			}
			case 7:
			{
				goto IL_00e4;
			}
			case 8:
			{
				goto IL_0107;
			}
		}
	}
	{
		goto IL_0107;
	}

IL_0046:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = p0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint8_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = ((int32_t)((int32_t)L_6/((int32_t)9)));
		int32_t L_7 = V_1;
		V_2 = ((int32_t)(L_7%5));
		uint32_t L_8 = V_6;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)-1576241740)))^((int32_t)1777258496)));
		goto IL_000c;
	}

IL_0061:
	{
		uint32_t L_9 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = p0;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(1, L_11));
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = V_5;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, ((int32_t)((int32_t)L_13<<((int32_t)(((int32_t)il2cpp_codegen_multiply(L_14, 8))&((int32_t)31)))))));
		int32_t L_15 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		G_B2_0 = ((int32_t)1752236925);
		goto IL_000c;
	}

IL_0081:
	{
		int32_t L_16 = V_1;
		V_3 = ((int32_t)(L_16/5));
		uint32_t L_17 = V_6;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, ((int32_t)-271551229)))^((int32_t)-237687845)));
		goto IL_000c;
	}

IL_0098:
	{
		int32_t L_18 = V_5;
		if ((((int32_t)L_18) >= ((int32_t)4)))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_19 = ((int32_t)1477467523);
		G_B10_0 = L_19;
		G_B10_1 = L_19;
		goto IL_00ab;
	}

IL_00a5:
	{
		int32_t L_20 = ((int32_t)1625564542);
		G_B10_0 = L_20;
		G_B10_1 = L_20;
	}

IL_00ab:
	{
		G_B2_0 = G_B10_1;
		goto IL_000c;
	}

IL_00b1:
	{
		int32_t L_21 = V_3;
		U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_U202EU202BU206AU206DU202BU202EU200DU202CU206AU202CU206FU200CU206BU206BU202AU200EU200EU200DU200DU202EU206DU206FU206FU202DU206BU200DU200FU202AU206AU202CU206FU206DU200FU206DU200DU206AU202DU200FU206DU200CU202E_mB44710D9DEE28BCF06B0C9AB6DC759780B47F593(__this, L_21, NULL);
		uint32_t L_22 = V_6;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_22, ((int32_t)-798211398)))^((int32_t)1286570146)));
		goto IL_000c;
	}

IL_00cb:
	{
		V_4 = 0;
		V_5 = 0;
		uint32_t L_23 = V_6;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_23, ((int32_t)2108271177)))^((int32_t)200894052)));
		goto IL_000c;
	}

IL_00e4:
	{
		uint32_t L_24 = V_4;
		U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_U200CU202CU200BU200BU206EU202CU206CU206CU206AU206EU202BU200CU206CU200BU200EU206AU202AU202EU202CU200DU200DU202DU200EU200CU202CU206AU200BU200FU200DU202EU206DU206FU200FU202AU206BU200CU200CU200EU206DU200CU202E_m69105B39181EE99847F4E0127EF3DBDE2B131CBB(__this, L_24, NULL);
		int32_t L_25 = V_2;
		int32_t L_26 = V_0;
		U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_U206DU206FU202CU202CU200FU206FU206CU202CU206DU200CU200DU200FU202DU200FU206DU200BU206BU200CU202CU202DU202EU206DU202BU200BU206DU206BU206EU202CU202DU200EU206AU202CU200FU206EU202AU206EU206EU206CU200FU206FU202E_mDF957E5AA76D86A6F187A2CFC64405B2439C2D40(__this, L_25, L_26, NULL);
		uint32_t L_27 = V_6;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_27, ((int32_t)1735030477)))^((int32_t)-2085285607)));
		goto IL_000c;
	}

IL_0107:
	{
		return;
	}
}
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U206FU202AU206FU202CU202BU202AU206EU206FU200FU200BU206BU206DU200BU206FU206DU200EU206BU200BU200EU206EU202CU206BU206AU206FU200CU200DU206BU200EU206BU202AU202EU202BU200FU200DU200BU206BU202EU200DU206AU202EU202E_U206AU206BU206CU200BU202DU202AU206BU200BU200DU202CU202EU200DU206AU200BU206AU202DU202DU202AU200EU206AU206DU202BU206DU200BU206BU202CU202EU202CU200BU202DU200EU206FU200EU206CU202BU202EU200DU206DU200CU202BU202E_m28D185D96E0F137A9A917FF3D591FBD0EA88613F (uint32_t p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		uint32_t L_0 = p0;
		p0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 2));
		uint32_t L_1 = p0;
		if ((!(((uint32_t)L_1) < ((uint32_t)4))))
		{
			goto IL_003c;
		}
	}

IL_0009:
	{
		G_B2_0 = ((int32_t)374123810);
	}

IL_000e:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)170845191)));
		V_0 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0009;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_003c;
	}

IL_002b:
	{
		uint32_t L_3 = p0;
		return L_3;
	}
	// Dead block : IL_002d: ldloc.0

IL_003c:
	{
		return 3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E__ctor_m0096BD8DDA00E7775883CF15CEA629C5E3AE6454 (U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF V_0;
	memset((&V_0), 0, sizeof(V_0));
	U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint32_t V_2 = 0;
	{
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20* L_0 = (U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20*)(U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20*)SZArrayNew(U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)16)));
		__this->___U206FU202EU200FU200CU200DU202DU200EU202BU206CU202AU200CU200FU202CU202DU206EU206AU202AU202EU206AU202EU202BU206FU202AU202AU200FU206DU202AU202AU202DU206FU200DU206DU200CU202CU202AU200DU206AU202BU206EU202BU202E_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206FU202EU200FU200CU200DU202DU200EU202BU206CU202AU200CU200FU202CU202DU206EU206AU202AU202EU206AU202EU202BU206FU202AU202AU200FU206DU202AU202AU202DU206FU200DU206DU200CU202CU202AU200DU206AU202BU206EU202BU202E_0), (void*)L_0);
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20* L_1 = (U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20*)(U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20*)SZArrayNew(U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)16)));
		__this->___U200BU202AU202AU202EU202DU202DU206BU202DU202AU202BU202AU202CU206FU202BU202BU206AU202EU200BU200EU206AU200BU202AU206CU206FU202CU202AU200CU202EU200BU200BU202EU206AU202BU206BU200EU202CU206FU206EU202AU200FU202E_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U200BU202AU202AU202EU202DU202DU206BU202DU202AU202BU202AU202CU206FU202BU202BU206AU202EU200BU200EU206AU200BU202AU206CU206FU202CU202AU200CU202EU200BU200BU202EU206AU202BU206BU200EU202CU206FU206EU202AU200FU202E_1), (void*)L_1);
		il2cpp_codegen_initobj((&V_0), sizeof(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF));
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF L_2 = V_0;
		__this->___U200DU206DU206FU206AU206CU200BU206EU200EU202AU200BU200FU206EU202DU200BU206FU200CU202BU200DU200FU206EU206DU202EU206EU202DU200FU202EU206AU200EU202EU200CU206CU206EU200EU200BU206DU206DU206DU200BU200CU206CU202E_2 = L_2;
		il2cpp_codegen_initobj((&V_1), sizeof(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF));
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF L_3 = V_1;
		__this->___U200DU200FU200BU200DU206FU202DU202BU202EU200EU200FU206AU206EU200DU206CU202BU206AU200EU200EU202BU206CU206DU202DU206DU206FU206BU202DU202AU202BU206CU206BU206CU202CU206BU200EU202AU206CU206BU206FU200DU206FU202E_3 = L_3;
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475 L_4;
		memset((&L_4), 0, sizeof(L_4));
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E__ctor_m372A617E298A608CB3361DEB5DA2E8CE2AC5A165((&L_4), 8, /*hidden argument*/NULL);
		__this->___U200DU200DU206DU206DU202BU202BU200EU206CU200FU200DU200FU206DU200FU206BU206CU200DU206CU206FU206EU202DU200CU200DU202EU202EU202BU206DU202DU202BU202CU206EU206CU200DU200DU206AU202DU200EU200EU200DU206EU200EU202E_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U200DU200DU206DU206DU202BU202BU200EU206CU200FU200DU200FU206DU200FU206BU206CU200DU206CU206FU206EU202DU200CU200DU202EU202EU202BU206DU202DU202BU202CU206EU206CU200DU200DU206AU202DU200EU200EU200DU206EU200EU202E_4))->___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0), (void*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_U206DU202EU202AU200EU202EU206BU202EU200DU202AU202CU206DU200EU206DU206EU202CU200EU206DU202AU206CU200FU202EU202EU206EU206CU206BU206DU202BU200BU200DU200DU206DU202AU206CU206FU202DU206FU206EU206CU206DU200FU202E_mD37094EBBA336EE5C3A52A4AEA825F93D323F464 (U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141* __this, uint32_t p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	{
		uint32_t L_0 = __this->___U200DU202DU202CU206EU206CU206AU206DU200CU202AU206AU206AU200FU202CU206AU202BU202EU206CU200DU206CU200BU200DU202CU206AU202AU206BU206DU206FU206EU202DU202BU206DU206CU202BU202DU206EU206DU206FU206BU206CU206DU202E_5;
		V_0 = L_0;
		goto IL_00a0;
	}

IL_000c:
	{
		G_B2_0 = ((int32_t)50786568);
	}

IL_0011:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1836317302)));
		V_1 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)7)))
		{
			case 0:
			{
				goto IL_000c;
			}
			case 1:
			{
				goto IL_0041;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_007e;
			}
			case 4:
			{
				goto IL_00a0;
			}
			case 5:
			{
				goto IL_00ce;
			}
			case 6:
			{
				goto IL_00b8;
			}
		}
	}
	{
		goto IL_00ce;
	}

IL_0041:
	{
		uint32_t L_2 = p0;
		__this->___U200DU202DU202CU206EU206CU206AU206DU200CU202AU206AU206AU200FU202CU206AU202BU202EU206CU200DU206CU200BU200DU202CU206AU202AU206BU206DU206FU206EU202DU202BU206DU206CU202BU202DU206EU206DU206FU206BU206CU206DU202E_5 = L_2;
		uint32_t L_3 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)233811680)))^((int32_t)438711555)));
		goto IL_0011;
	}

IL_0057:
	{
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20* L_4 = __this->___U200BU202AU202AU202EU202DU202DU206BU202DU202AU202BU202AU202CU206FU202BU202BU206AU202EU200BU200EU206AU200BU202AU206CU206FU202CU202AU200CU202EU200BU200BU202EU206AU202BU206BU200EU202CU206FU206EU202AU200FU202E_1;
		uint32_t L_5 = V_0;
		NullCheck(L_4);
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475 L_6;
		memset((&L_6), 0, sizeof(L_6));
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E__ctor_m372A617E298A608CB3361DEB5DA2E8CE2AC5A165((&L_6), 3, /*hidden argument*/NULL);
		*(U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_5)))) = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_5)))))->___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0), (void*)NULL);
		uint32_t L_7 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)692933334)))^((int32_t)1322171049)));
		goto IL_0011;
	}

IL_007e:
	{
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20* L_8 = __this->___U206FU202EU200FU200CU200DU202DU200EU202BU206CU202AU200CU200FU202CU202DU206EU206AU202AU202EU206AU202EU202BU206FU202AU202AU200FU206DU202AU202AU202DU206FU200DU206DU200CU202CU202AU200DU206AU202BU206EU202BU202E_0;
		uint32_t L_9 = V_0;
		NullCheck(L_8);
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475 L_10;
		memset((&L_10), 0, sizeof(L_10));
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E__ctor_m372A617E298A608CB3361DEB5DA2E8CE2AC5A165((&L_10), 3, /*hidden argument*/NULL);
		*(U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475*)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_9)))) = L_10;
		Il2CppCodeGenWriteBarrier((void**)&(((U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475*)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_9)))))->___U200BU206DU206BU200EU202EU206EU206BU206EU202EU206EU202EU206DU200BU200EU202AU202AU200DU202CU200EU200EU202EU200BU200FU206DU202BU206CU200CU200EU206FU202EU206CU206AU206BU202CU206DU202BU206EU206DU206DU206AU202E_0), (void*)NULL);
		G_B2_0 = ((int32_t)1258478834);
		goto IL_0011;
	}

IL_00a0:
	{
		uint32_t L_11 = V_0;
		uint32_t L_12 = p0;
		if ((!(((uint32_t)L_11) < ((uint32_t)L_12))))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_13 = ((int32_t)50786568);
		G_B10_0 = L_13;
		G_B10_1 = L_13;
		goto IL_00b2;
	}

IL_00ac:
	{
		int32_t L_14 = ((int32_t)251174770);
		G_B10_0 = L_14;
		G_B10_1 = L_14;
	}

IL_00b2:
	{
		G_B2_0 = G_B10_1;
		goto IL_0011;
	}

IL_00b8:
	{
		uint32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, 1));
		uint32_t L_16 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_16, ((int32_t)-2004023019)))^((int32_t)-2135495642)));
		goto IL_0011;
	}

IL_00ce:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_U206FU200BU206CU200CU200FU206DU200DU202DU206BU206EU206BU206EU200FU202AU200DU206EU202EU206BU202AU200DU202AU200DU202AU202BU206FU202EU206CU202BU202DU200EU202DU206FU206EU206FU206DU206FU206AU206BU206BU206FU202E_mF0FC1D44EE6A9B64944163728BA1517D891BD9DE (U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF* L_0 = (&__this->___U200DU206DU206FU206AU206CU200BU206EU200EU202AU200BU200FU206EU202DU200BU206FU200CU202BU200DU200FU206EU206DU202EU206EU202DU200FU202EU206AU200EU202EU200CU206CU206EU200EU200BU206DU206DU206DU200BU200CU206CU202E_2);
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202BU206FU200DU200EU200BU202BU202DU200FU206EU200DU206CU206DU202EU200DU206CU202BU202CU200CU202AU200FU206DU206BU202AU206FU200FU202AU202CU200EU202EU206FU206EU202BU200EU206EU206FU202EU200EU200EU206FU206EU202E_m06B03079972D7E477C0573912085484A7C019AFD(L_0, NULL);
	}

IL_000b:
	{
		G_B2_0 = ((int32_t)-2131400575);
	}

IL_0010:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-1665827082)));
		V_1 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)8)))
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_00ea;
			}
			case 2:
			{
				goto IL_009f;
			}
			case 3:
			{
				goto IL_00cd;
			}
			case 4:
			{
				goto IL_000b;
			}
			case 5:
			{
				goto IL_0089;
			}
			case 6:
			{
				goto IL_006f;
			}
			case 7:
			{
				goto IL_0044;
			}
		}
	}
	{
		goto IL_00ea;
	}

IL_0044:
	{
		V_0 = 0;
		uint32_t L_2 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_2, ((int32_t)-1665293169)))^((int32_t)1899466223)));
		goto IL_0010;
	}

IL_0055:
	{
		uint32_t L_3 = V_0;
		uint32_t L_4 = __this->___U200DU202DU202CU206EU206CU206AU206DU200CU202AU206AU206AU200FU202CU206AU202BU202EU206CU200DU206CU200BU200DU202CU206AU202AU206BU206DU206FU206EU202DU202BU206DU206CU202BU202DU206EU206DU206FU206BU206CU206DU202E_5;
		if ((!(((uint32_t)L_3) >= ((uint32_t)L_4))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_5 = ((int32_t)-838468296);
		G_B8_0 = L_5;
		G_B8_1 = L_5;
		goto IL_006c;
	}

IL_0066:
	{
		int32_t L_6 = ((int32_t)-1578344700);
		G_B8_0 = L_6;
		G_B8_1 = L_6;
	}

IL_006c:
	{
		G_B2_0 = G_B8_1;
		goto IL_0010;
	}

IL_006f:
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF* L_7 = (&__this->___U200DU200FU200BU200DU206FU202DU202BU202EU200EU200FU206AU206EU200DU206CU202BU206AU200EU200EU202BU206CU206DU202DU206DU206FU206BU202DU202AU202BU206CU206BU206CU202CU206BU200EU202AU206CU206BU206FU200DU206FU202E_3);
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202BU206FU200DU200EU200BU202BU202DU200FU206EU200DU206CU206DU202EU200DU206CU202BU202CU200CU202AU200FU206DU206BU202AU206FU200FU202AU202CU200EU202EU206FU206EU202BU200EU206EU206FU202EU200EU200EU206FU206EU202E_m06B03079972D7E477C0573912085484A7C019AFD(L_7, NULL);
		uint32_t L_8 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)373563593)))^((int32_t)2098581435)));
		goto IL_0010;
	}

IL_0089:
	{
		uint32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, 1));
		uint32_t L_10 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)1892053220)))^((int32_t)-954418558)));
		goto IL_0010;
	}

IL_009f:
	{
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20* L_11 = __this->___U206FU202EU200FU200CU200DU202DU200EU202BU206CU202AU200CU200FU202CU202DU206EU206AU202AU202EU206AU202EU202BU206FU202AU202AU200FU206DU202AU202AU202DU206FU200DU206DU200CU202CU202AU200DU206AU202BU206EU202BU202E_0;
		uint32_t L_12 = V_0;
		NullCheck(L_11);
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U200CU206BU202DU200BU206DU206AU206AU200DU202BU206BU200EU200CU200EU202AU202AU202DU200BU206DU206DU202BU200DU202BU202DU202CU200FU200FU200BU200BU206DU202EU206AU200DU206BU206FU200CU200CU206EU200EU200FU200EU202E_m802B57CB47B9B1CDBD8A26D1C10E44EC2247CCFA(((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_12)))), NULL);
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20* L_13 = __this->___U200BU202AU202AU202EU202DU202DU206BU202DU202AU202BU202AU202CU206FU202BU202BU206AU202EU200BU200EU206AU200BU202AU206CU206FU202CU202AU200CU202EU200BU200BU202EU206AU202BU206BU200EU202CU206FU206EU202AU200FU202E_1;
		uint32_t L_14 = V_0;
		NullCheck(L_13);
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U200CU206BU202DU200BU206DU206AU206AU200DU202BU206BU200EU200CU200EU202AU202AU202DU200BU206DU206DU202BU200DU202BU202DU202CU200FU200FU200BU200BU206DU202EU206AU200DU206BU206FU200CU200CU206EU200EU200FU200EU202E_m802B57CB47B9B1CDBD8A26D1C10E44EC2247CCFA(((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_14)))), NULL);
		G_B2_0 = ((int32_t)-1901532901);
		goto IL_0010;
	}

IL_00cd:
	{
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475* L_15 = (&__this->___U200DU200DU206DU206DU202BU202BU200EU206CU200FU200DU200FU206DU200FU206BU206CU200DU206CU206FU206EU202DU200CU200DU202EU202EU202BU206DU202DU202BU202CU206EU206CU200DU200DU206AU202DU200EU200EU200DU206EU200EU202E_4);
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U200CU206BU202DU200BU206DU206AU206AU200DU202BU206BU200EU200CU200EU202AU202AU202DU200BU206DU206DU202BU200DU202BU202DU202CU200FU200FU200BU200BU206DU202EU206AU200DU206BU206FU200CU200CU206EU200EU200FU200EU202E_m802B57CB47B9B1CDBD8A26D1C10E44EC2247CCFA(L_15, NULL);
		uint32_t L_16 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_16, ((int32_t)652912526)))^((int32_t)-1241378907)));
		goto IL_0010;
	}

IL_00ea:
	{
		return;
	}
}
// System.UInt32 <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_U206BU202CU206DU202EU200BU200FU200DU206AU206DU206CU206CU202EU200DU202DU206DU206FU202EU206DU206BU206FU206EU200DU206AU206DU200FU206DU206CU206AU202CU202BU202BU202CU202DU200EU206DU206EU206CU206DU202AU200DU202E_mBC2A0925E49228FE5EA91F13AA884EC97A3CADDE (U206AU202CU200BU200BU206BU206BU202CU200CU202EU200BU200DU202EU202AU202AU206CU202EU202AU206CU206AU200EU206BU202BU206AU206BU200CU200BU200DU206BU202AU206BU206DU202BU202BU200FU200BU202EU202DU202CU206EU200CU202E_t9BC64ADAF93E5C41A3E282BC68557F9138041141* __this, U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* p0, uint32_t p1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF* L_0 = (&__this->___U200DU206DU206FU206AU206CU200BU206EU200EU202AU200BU200FU206EU202DU200BU206FU200CU202BU200DU200FU206EU206DU202EU206EU202DU200FU202EU206AU200EU202EU200CU206CU206EU200EU200BU206DU206DU206DU200BU200CU206CU202E_2);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_1 = p0;
		uint32_t L_2;
		L_2 = U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202CU200EU200FU206FU200EU202BU202CU206EU206FU200EU200CU200CU202CU200DU206BU200EU200BU206EU206FU202AU206AU206DU202EU202EU206EU206BU206EU206DU202DU202DU206BU200EU206EU206CU202EU206CU200DU200FU202DU206AU202E_m4BC344CC5E999A9A82A1D574E36B5BE43CAB6793(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_00eb;
		}
	}

IL_0011:
	{
		G_B2_0 = ((int32_t)-385888140);
	}

IL_0016:
	{
		int32_t L_3 = ((int32_t)(G_B2_0^((int32_t)-121546046)));
		V_1 = L_3;
		switch (((int32_t)((uint32_t)(int32_t)L_3%(uint32_t)(int32_t)8)))
		{
			case 0:
			{
				goto IL_00a4;
			}
			case 1:
			{
				goto IL_00eb;
			}
			case 2:
			{
				goto IL_0092;
			}
			case 3:
			{
				goto IL_006d;
			}
			case 4:
			{
				goto IL_0011;
			}
			case 5:
			{
				goto IL_00f7;
			}
			case 6:
			{
				goto IL_004a;
			}
			case 7:
			{
				goto IL_00ce;
			}
		}
	}
	{
		goto IL_00f7;
	}

IL_004a:
	{
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20* L_4 = __this->___U206FU202EU200FU200CU200DU202DU200EU202BU206CU202AU200CU200FU202CU202DU206EU206AU202AU202EU206AU202EU202BU206FU202AU202AU200FU206DU202AU202AU202DU206FU200DU206DU200CU202CU202AU200DU206AU202BU206EU202BU202E_0;
		uint32_t L_5 = p1;
		NullCheck(L_4);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_6 = p0;
		uint32_t L_7;
		L_7 = U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U200BU200DU206DU202DU200BU206DU206AU206AU200CU206AU206FU200DU200EU202BU202CU200EU202DU202DU206FU206FU200FU206EU202CU200FU202DU206CU206EU202BU206EU202DU200FU206AU206AU202EU200BU206FU206DU202CU200BU200FU202E_m110AF332C1D3EBAB0ED019DFB3F4ED6341A2F4B5(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_5)))), L_6, NULL);
		return L_7;
	}
	// Dead block : IL_005e: ldloc.1

IL_006d:
	{
		uint32_t L_8 = V_0;
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202EU5BU5D_t16EC429A05DA0CB4D499A8D2A2F3751FA3D8BA20* L_9 = __this->___U200BU202AU202AU202EU202DU202DU206BU202DU202AU202BU202AU202CU206FU202BU202BU206AU202EU200BU200EU206AU200BU202AU206CU206FU202CU202AU200CU202EU200BU200BU202EU206AU202BU206BU200EU202CU206FU206EU202AU200FU202E_1;
		uint32_t L_10 = p1;
		NullCheck(L_9);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_11 = p0;
		uint32_t L_12;
		L_12 = U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U200BU200DU206DU202DU200BU206DU206AU206AU200CU206AU206FU200DU200EU202BU202CU200EU202DU202DU206FU206FU200FU206EU202CU200FU202DU206CU206EU202BU206EU202DU200FU206AU206AU202EU200BU206FU206DU202CU200BU200FU202E_m110AF332C1D3EBAB0ED019DFB3F4ED6341A2F4B5(((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_10)))), L_11, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_12));
		uint32_t L_13 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)1271222264)))^((int32_t)1477171208)));
		goto IL_0016;
	}

IL_0092:
	{
		uint32_t L_14 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)1687124421)))^((int32_t)822555477)));
		goto IL_0016;
	}

IL_00a4:
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF* L_15 = (&__this->___U200DU200FU200BU200DU206FU202DU202BU202EU200EU200FU206AU206EU200DU206CU202BU206AU200EU200EU202BU206CU206DU202DU206DU206FU206BU202DU202AU202BU206CU206BU206CU202CU206BU200EU202AU206CU206BU206FU200DU206FU202E_3);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_16 = p0;
		uint32_t L_17;
		L_17 = U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202CU200EU200FU206FU200EU202BU202CU206EU206FU200EU200CU200CU202CU200DU206BU200EU200BU206EU206FU202AU206AU206DU202EU202EU206EU206BU206EU206DU202DU202DU206BU200EU206EU206CU202EU206CU200DU200FU202DU206AU202E_m4BC344CC5E999A9A82A1D574E36B5BE43CAB6793(L_15, L_16, NULL);
		if (L_17)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_18 = ((int32_t)-70535471);
		G_B11_0 = L_18;
		G_B11_1 = L_18;
		goto IL_00c0;
	}

IL_00ba:
	{
		int32_t L_19 = ((int32_t)-1384649099);
		G_B11_0 = L_19;
		G_B11_1 = L_19;
	}

IL_00c0:
	{
		uint32_t L_20 = V_1;
		G_B2_0 = ((int32_t)(G_B11_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_20, ((int32_t)303043692)))));
		goto IL_0016;
	}

IL_00ce:
	{
		uint32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, 8));
		uint32_t L_22 = V_0;
		U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_t99AE5D6F8A390A97E0CD4FD02798E48B385E7475* L_23 = (&__this->___U200DU200DU206DU206DU202BU202BU200EU206CU200FU200DU200FU206DU200FU206BU206CU200DU206CU206FU206EU202DU200CU200DU202EU202EU202BU206DU202DU202BU202CU206EU206CU200DU200DU206AU202DU200EU200EU200DU206EU200EU202E_4);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_24 = p0;
		uint32_t L_25;
		L_25 = U202AU206DU200DU206BU202CU206BU202CU202EU206AU202DU200FU202EU202CU206CU206DU206EU200FU202EU202BU206DU206AU202EU206BU206CU206EU200BU202CU202DU200FU206BU200EU206CU200FU202DU200BU206DU206DU206AU206FU200FU202E_U200BU200DU206DU202DU200BU206DU206AU206AU200CU206AU206FU200DU200EU202BU202CU200EU202DU202DU206FU206FU200FU206EU202CU200FU202DU206CU206EU202BU206EU202DU200FU206AU206AU202EU200BU206FU206DU202CU200BU200FU202E_m110AF332C1D3EBAB0ED019DFB3F4ED6341A2F4B5(L_23, L_24, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_25));
		G_B2_0 = ((int32_t)-1456746497);
		goto IL_0016;
	}

IL_00eb:
	{
		V_0 = 8;
		G_B2_0 = ((int32_t)-387329590);
		goto IL_0016;
	}

IL_00f7:
	{
		uint32_t L_26 = V_0;
		return L_26;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E__ctor_m211147541F0787B61909776C02DD8326BEF2A7F9 (U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::????????????????????????????????????????(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_U202EU200FU202AU200DU202DU206BU202AU206CU202DU206BU206FU200BU206AU206FU200BU200CU206BU202AU202EU206EU206DU202BU202DU202CU200EU206DU206EU200CU202AU202BU200DU202AU206CU200DU206BU202CU202EU202DU202BU202E_m3E09060FBB177F4B8C0F385B97C94868C2C31540 (U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202EU5BU5D_t9433998B2C2434C99C02EFD586A87AAB5EB1BC04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B25_1 = 0;
	{
		U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202EU5BU5D_t9433998B2C2434C99C02EFD586A87AAB5EB1BC04* L_0 = __this->___U200FU200FU206BU200BU202EU202CU202DU200BU200FU202DU206BU202DU200CU200EU202BU206BU200BU206CU200DU202AU202CU200DU202DU200EU202DU200CU206AU202DU206DU202DU202DU206EU206AU206AU206DU206AU200FU200FU200CU202E_0;
		if (!L_0)
		{
			goto IL_00a4;
		}
	}

IL_000b:
	{
		G_B2_0 = ((int32_t)-12766698);
	}

IL_0010:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-2082638501)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)((int32_t)14))))
		{
			case 0:
			{
				goto IL_0168;
			}
			case 1:
			{
				goto IL_0155;
			}
			case 2:
			{
				goto IL_00b5;
			}
			case 3:
			{
				goto IL_007f;
			}
			case 4:
			{
				goto IL_012a;
			}
			case 5:
			{
				goto IL_0112;
			}
			case 6:
			{
				goto IL_01a3;
			}
			case 7:
			{
				goto IL_00a4;
			}
			case 8:
			{
				goto IL_00f1;
			}
			case 9:
			{
				goto IL_017e;
			}
			case 10:
			{
				goto IL_005d;
			}
			case 11:
			{
				goto IL_000b;
			}
			case 12:
			{
				goto IL_013c;
			}
			case 13:
			{
				goto IL_00d1;
			}
		}
	}
	{
		goto IL_01a3;
	}

IL_005d:
	{
		int32_t L_2 = __this->___U200DU206EU200CU200CU206EU206CU206AU202BU202AU202CU202DU200CU206DU206EU200FU200CU202BU202AU206DU200CU202AU200EU206BU200EU206EU206BU202EU206DU200BU200EU200BU202AU200FU206EU200FU200FU200FU202EU206CU202AU202E_2;
		int32_t L_3 = __this->___U206DU200EU202DU206BU202AU206CU202DU206AU202CU202EU206DU202DU200FU206AU200CU200EU206CU202BU202CU202AU206CU200DU202CU200BU206BU206EU202BU206FU202AU202DU202AU200DU202CU200CU202AU206CU206DU200BU206AU202E_1;
		V_0 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_add(L_2, L_3))&((int32_t)31)))));
		uint32_t L_4 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)678946661)))^((int32_t)-1637985807)));
		goto IL_0010;
	}

IL_007f:
	{
		int32_t L_5 = __this->___U206DU200EU202DU206BU202AU206CU202DU206AU202CU202EU206DU202DU200FU206AU200CU200EU206CU202BU202CU202AU206CU200DU202CU200BU206BU206EU202BU206FU202AU202DU202AU200DU202CU200CU202AU206CU206DU200BU206AU202E_1;
		int32_t L_6 = p0;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_7 = ((int32_t)-325784653);
		G_B8_0 = L_7;
		G_B8_1 = L_7;
		goto IL_0096;
	}

IL_0090:
	{
		int32_t L_8 = ((int32_t)-1941585163);
		G_B8_0 = L_8;
		G_B8_1 = L_8;
	}

IL_0096:
	{
		uint32_t L_9 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)541088823)))));
		goto IL_0010;
	}

IL_00a4:
	{
		int32_t L_10 = p0;
		__this->___U206DU200EU202DU206BU202AU206CU202DU206AU202CU202EU206DU202DU200FU206AU200CU200EU206CU202BU202CU202AU206CU200DU202CU200BU206BU206EU202BU206FU202AU202DU202AU200DU202CU200CU202AU206CU206DU200BU206AU202E_1 = L_10;
		G_B2_0 = ((int32_t)-364855634);
		goto IL_0010;
	}

IL_00b5:
	{
		U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202EU5BU5D_t9433998B2C2434C99C02EFD586A87AAB5EB1BC04* L_11 = __this->___U200FU200FU206BU200BU202EU202CU202DU200BU200FU202DU206BU202DU200CU200EU202BU206BU200BU206CU200DU202AU202CU200DU202DU200EU202DU200CU206AU202DU206DU202DU202DU206EU206AU206AU206DU206AU200FU200FU200CU202E_0;
		uint32_t L_12 = V_1;
		NullCheck(L_11);
		U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_U200EU206FU206DU202DU202EU202AU206EU200EU200DU202CU206DU202CU202DU202EU200FU206CU202BU200CU206FU206FU206FU202CU200CU202BU202BU202DU200EU206EU200EU206EU200CU202AU200CU200CU200CU202BU200CU206EU200FU200FU202E_m79509F07E3375C52D9E358BE53910E7F6CAD734F(((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_12)))), NULL);
		G_B2_0 = ((int32_t)-236161157);
		goto IL_0010;
	}

IL_00d1:
	{
		int32_t L_13 = p0;
		__this->___U206BU206CU202EU200DU202AU202DU202BU206BU202AU202BU200FU202DU200EU206AU206BU202AU206FU206FU206CU206AU206AU200DU200EU202CU206EU206DU206BU206AU200BU200DU202DU200BU202BU200BU206AU200CU202CU200FU202AU202E_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_13&((int32_t)31))))), 1));
		uint32_t L_14 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)-1507457606)))^((int32_t)1795451759)));
		goto IL_0010;
	}

IL_00f1:
	{
		uint32_t L_15 = V_0;
		U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202EU5BU5D_t9433998B2C2434C99C02EFD586A87AAB5EB1BC04* L_16 = (U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202EU5BU5D_t9433998B2C2434C99C02EFD586A87AAB5EB1BC04*)(U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202EU5BU5D_t9433998B2C2434C99C02EFD586A87AAB5EB1BC04*)SZArrayNew(U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202EU5BU5D_t9433998B2C2434C99C02EFD586A87AAB5EB1BC04_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)L_15));
		__this->___U200FU200FU206BU200BU202EU202CU202DU200BU200FU202DU206BU202DU200CU200EU202BU206BU200BU206CU200DU202AU202CU200DU202DU200EU202DU200CU206AU202DU206DU202DU202DU206EU206AU206AU206DU206AU200FU200FU200CU202E_0 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U200FU200FU206BU200BU202EU202CU202DU200BU200FU202DU206BU202DU200CU200EU202BU206BU200BU206CU200DU202AU202CU200DU202DU200EU202DU200CU206AU202DU206DU202DU202DU206EU206AU206AU206DU206AU200FU200FU200CU202E_0), (void*)L_16);
		V_1 = 0;
		uint32_t L_17 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, ((int32_t)-258890018)))^((int32_t)-1440165887)));
		goto IL_0010;
	}

IL_0112:
	{
		uint32_t L_18 = V_1;
		uint32_t L_19 = V_0;
		if ((!(((uint32_t)L_18) >= ((uint32_t)L_19))))
		{
			goto IL_011e;
		}
	}
	{
		int32_t L_20 = ((int32_t)-1149135949);
		G_B16_0 = L_20;
		G_B16_1 = L_20;
		goto IL_0124;
	}

IL_011e:
	{
		int32_t L_21 = ((int32_t)-303555285);
		G_B16_0 = L_21;
		G_B16_1 = L_21;
	}

IL_0124:
	{
		G_B2_0 = G_B16_1;
		goto IL_0010;
	}

IL_012a:
	{
		uint32_t L_22 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_22, ((int32_t)337031606)))^((int32_t)-1138331866)));
		goto IL_0010;
	}

IL_013c:
	{
		int32_t L_23 = p1;
		__this->___U200DU206EU200CU200CU206EU206CU206AU202BU202AU202CU202DU200CU206DU206EU200FU200CU202BU202AU206DU200CU202AU200EU206BU200EU206EU206BU202EU206DU200BU200EU200BU202AU200FU206EU200FU200FU200FU202EU206CU202AU202E_2 = L_23;
		uint32_t L_24 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_24, ((int32_t)-1669664965)))^((int32_t)-1566433351)));
		goto IL_0010;
	}

IL_0155:
	{
		return;
	}
	// Dead block : IL_0156: ldloc.2

IL_0168:
	{
		uint32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, 1));
		uint32_t L_26 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_26, ((int32_t)-402553269)))^((int32_t)-1171368734)));
		goto IL_0010;
	}

IL_017e:
	{
		int32_t L_27 = __this->___U200DU206EU200CU200CU206EU206CU206AU202BU202AU202CU202DU200CU206DU206EU200FU200CU202BU202AU206DU200CU202AU200EU206BU200EU206EU206BU202EU206DU200BU200EU200BU202AU200FU206EU200FU200FU200FU202EU206CU202AU202E_2;
		int32_t L_28 = p1;
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_018f;
		}
	}
	{
		int32_t L_29 = ((int32_t)-1591693371);
		G_B25_0 = L_29;
		G_B25_1 = L_29;
		goto IL_0195;
	}

IL_018f:
	{
		int32_t L_30 = ((int32_t)-722624341);
		G_B25_0 = L_30;
		G_B25_1 = L_30;
	}

IL_0195:
	{
		uint32_t L_31 = V_2;
		G_B2_0 = ((int32_t)(G_B25_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_31, ((int32_t)-675334273)))));
		goto IL_0010;
	}

IL_01a3:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_U202EU202BU202BU206CU200FU206BU200FU202DU202DU200DU206EU206CU202AU206CU206DU200DU200CU202DU200EU202AU206FU202DU202AU200CU200EU200FU200BU206CU202BU206AU200DU202AU200BU202CU202AU202BU206FU206EU202EU202DU202E_mD9AA1FF89BC7CEF593E90FB1CA2F3E4316469B2B (U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		int32_t L_0 = __this->___U200DU206EU200CU200CU206EU206CU206AU202BU202AU202CU202DU200CU206DU206EU200FU200CU202BU202AU206DU200CU202AU200EU206BU200EU206EU206BU202EU206DU200BU200EU200BU202AU200FU206EU200FU200FU200FU202EU206CU202AU202E_2;
		int32_t L_1 = __this->___U206DU200EU202DU206BU202AU206CU202DU206AU202CU202EU206DU202DU200FU206AU200CU200EU206CU202BU202CU202AU206CU200DU202CU200BU206BU206EU202BU206FU202AU202DU202AU200DU202CU200CU202AU206CU206DU200BU206AU202E_1;
		V_0 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_add(L_0, L_1))&((int32_t)31)))));
	}

IL_0013:
	{
		G_B2_0 = ((int32_t)-411668947);
	}

IL_0018:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)-84033333)));
		V_2 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)6)))
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_0082;
			}
			case 3:
			{
				goto IL_0041;
			}
			case 4:
			{
				goto IL_0013;
			}
			case 5:
			{
				goto IL_0093;
			}
		}
	}
	{
		goto IL_0093;
	}

IL_0041:
	{
		uint32_t L_3 = V_1;
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)L_4))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ((int32_t)-1205111086);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
		goto IL_0053;
	}

IL_004d:
	{
		int32_t L_6 = ((int32_t)-231178118);
		G_B7_0 = L_6;
		G_B7_1 = L_6;
	}

IL_0053:
	{
		G_B2_0 = G_B7_1;
		goto IL_0018;
	}

IL_0056:
	{
		U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202EU5BU5D_t9433998B2C2434C99C02EFD586A87AAB5EB1BC04* L_7 = __this->___U200FU200FU206BU200BU202EU202CU202DU200BU200FU202DU206BU202DU200CU200EU202BU206BU200BU206CU200DU202AU202CU200DU202DU200EU202DU200CU206AU202DU206DU202DU202DU206EU206AU206AU206DU206AU200FU200FU200CU202E_0;
		uint32_t L_8 = V_1;
		NullCheck(L_7);
		U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_U206AU206BU200FU200EU206FU202BU202DU202EU200FU200FU200FU206CU202EU202DU200DU202CU206DU206CU202DU200DU206AU202BU206BU206DU200DU202CU200EU202AU206EU200FU200DU202BU206CU200DU202EU200BU200EU202EU206CU202AU202E_mA972F0C0C84140F33C078052AE0D8414FA5A542C(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_8)))), NULL);
		G_B2_0 = ((int32_t)-258628071);
		goto IL_0018;
	}

IL_006f:
	{
		uint32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, 1));
		uint32_t L_10 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)-332997724)))^((int32_t)570899836)));
		goto IL_0018;
	}

IL_0082:
	{
		V_1 = 0;
		uint32_t L_11 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)533072651)))^((int32_t)-1855136746)));
		goto IL_0018;
	}

IL_0093:
	{
		return;
	}
}
// System.UInt32 <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_U206FU202DU206EU200EU206FU206FU202AU202CU206CU202CU206CU202BU206BU202AU202DU200EU202EU202DU202EU200FU202EU202AU206DU206BU202DU206CU200BU200EU200BU206FU202AU202CU206DU206DU206CU206BU202AU202DU202DU202DU202E_mB34D901AB774E993B05984B97CE064FDA6400D7C (U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3* __this, uint32_t p0, uint8_t p1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = p0;
		uint32_t L_1 = __this->___U206BU206CU202EU200DU202AU202DU202BU206BU202AU202BU200FU202DU200EU206AU206BU202AU206FU206FU206CU206AU206AU200DU200EU202CU206EU206DU206BU206AU200BU200DU202DU200BU202BU200BU206AU200CU202CU200FU202AU202E_3;
		int32_t L_2 = __this->___U200DU206EU200CU200CU206EU206CU206AU202BU202AU202CU202DU200CU206DU206EU200FU200CU202BU202AU206DU200CU202AU200EU206BU200EU206EU206BU202EU206DU200BU200EU200BU202AU200FU206EU200FU200FU200FU202EU206CU202AU202E_2;
		uint8_t L_3 = p1;
		int32_t L_4 = __this->___U200DU206EU200CU200CU206EU206CU206AU202BU202AU202CU202DU200CU206DU206EU200FU200CU202BU202AU206DU200CU202AU200EU206BU200EU206EU206BU202EU206DU200BU200EU200BU202AU200FU206EU200FU200FU200FU202EU206CU202AU202E_2;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_0&(int32_t)L_1))<<((int32_t)(L_2&((int32_t)31))))), ((int32_t)((int32_t)L_3>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_4))&((int32_t)31)))))));
	}
}
// System.Byte <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_U206DU202BU206AU200EU200EU206CU202CU206BU206EU200EU206DU202BU206FU200BU206EU206BU206AU206FU202AU206AU202DU200DU200EU202EU206CU206EU202DU206DU200FU200FU200BU206BU206EU206EU206FU206AU202AU206BU206AU202AU202E_mE429CF5015A06D29E7EB17A1BAEBE7C65DD48338 (U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3* __this, U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* p0, uint32_t p1, uint8_t p2, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202EU5BU5D_t9433998B2C2434C99C02EFD586A87AAB5EB1BC04* L_0 = __this->___U200FU200FU206BU200BU202EU202CU202DU200BU200FU202DU206BU202DU200CU200EU202BU206BU200BU206CU200DU202AU202CU200DU202DU200EU202DU200CU206AU202DU206DU202DU202DU206EU206AU206AU206DU206AU200FU200FU200CU202E_0;
		uint32_t L_1 = p1;
		uint8_t L_2 = p2;
		uint32_t L_3;
		L_3 = U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_U206FU202DU206EU200EU206FU206FU202AU202CU206CU202CU206CU202BU206BU202AU202DU200EU202EU202DU202EU200FU202EU202AU206DU206BU202DU206CU200BU200EU200BU206FU202AU202CU206DU206DU206CU206BU202AU202DU202DU202DU202E_mB34D901AB774E993B05984B97CE064FDA6400D7C(__this, L_1, L_2, NULL);
		NullCheck(L_0);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_4 = p0;
		uint8_t L_5;
		L_5 = U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_U200DU200FU206AU202AU206CU206EU206BU202AU200DU200BU202EU202CU206EU202CU206DU200CU200CU206AU202AU206FU200CU200FU202AU206EU206EU206BU206EU200EU206BU200EU200DU206DU202EU202AU200DU206BU200CU206FU200FU206FU202E_mA7E00E241547337B60B52E771BC074958BF4192C(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_3)))), L_4, NULL);
		return L_5;
	}
}
// System.Byte <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.UInt32,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_U206AU206CU202EU206AU200CU206CU206AU200FU202DU206AU206AU200BU206DU202EU206AU206CU200FU206AU206AU206BU200CU202CU200BU206BU206DU202BU206CU206DU202BU202CU200DU200FU200CU206DU206AU206EU206BU202AU202DU202AU202E_m040809AC3E3744488C02E69312466EA3B03F9527 (U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_t482B79FF02FEC5F0A70ED780E8804074F65B16F3* __this, U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* p0, uint32_t p1, uint8_t p2, uint8_t p3, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202EU5BU5D_t9433998B2C2434C99C02EFD586A87AAB5EB1BC04* L_0 = __this->___U200FU200FU206BU200BU202EU202CU202DU200BU200FU202DU206BU202DU200CU200EU202BU206BU200BU206CU200DU202AU202CU200DU202DU200EU202DU200CU206AU202DU206DU202DU202DU206EU206AU206AU206DU206AU200FU200FU200CU202E_0;
		uint32_t L_1 = p1;
		uint8_t L_2 = p2;
		uint32_t L_3;
		L_3 = U206AU206DU202EU200DU200CU200DU200EU202AU202CU206AU200FU202DU206CU206BU206BU202DU206FU200DU206DU202BU202DU202EU206EU206CU206CU200BU200DU206CU202DU206CU202BU202CU202DU200CU202EU200EU206FU200CU202EU200EU202E_U206FU202DU206EU200EU206FU206FU202AU202CU206CU202CU206CU202BU206BU202AU202DU200EU202EU202DU202EU200FU202EU202AU206DU206BU202DU206CU200BU200EU200BU206FU202AU202CU206DU206DU206CU206BU202AU202DU202DU202DU202E_mB34D901AB774E993B05984B97CE064FDA6400D7C(__this, L_1, L_2, NULL);
		NullCheck(L_0);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_4 = p0;
		uint8_t L_5 = p3;
		uint8_t L_6;
		L_6 = U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_U206CU202CU200CU200FU200EU200EU200DU202AU200DU202AU200BU200CU202AU200CU202CU202AU206EU206AU206AU202BU202AU202EU200FU202BU206AU202BU206BU202AU202EU200CU200BU206BU200CU206AU202BU206FU206EU206BU206AU202E_m8AAE542266808B69B0FECCB8C0FB554152260F8F(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_3)))), L_4, L_5, NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????
IL2CPP_EXTERN_C void U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07_marshal_pinvoke(const U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07& unmarshaled, U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledU202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_Length = (unmarshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0)->max_length;
		marshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0 = il2cpp_codegen_marshal_allocate_array<U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF>(_unmarshaledU202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledU202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_Length); i++)
		{
			(marshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0)[i] = (unmarshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0 = NULL;
	}
}
IL2CPP_EXTERN_C void U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07_marshal_pinvoke_back(const U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07_marshaled_pinvoke& marshaled, U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0 != NULL)
	{
		if (unmarshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0 == NULL)
		{
			unmarshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0 = reinterpret_cast<U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*>((U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)SZArrayNew(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0), (void*)reinterpret_cast<U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*>((U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)SZArrayNew(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????
IL2CPP_EXTERN_C void U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07_marshal_pinvoke_cleanup(U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07_marshaled_pinvoke& marshaled)
{
	if (marshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0);
		marshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0 = NULL;
	}
}
// Conversion methods for marshalling of: <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????
IL2CPP_EXTERN_C void U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07_marshal_com(const U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07& unmarshaled, U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07_marshaled_com& marshaled)
{
	if (unmarshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledU202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_Length = (unmarshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0)->max_length;
		marshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0 = il2cpp_codegen_marshal_allocate_array<U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_tDDF43D0A0ECA9BCB24D4E8B076A24CD2082152EF>(_unmarshaledU202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledU202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_Length); i++)
		{
			(marshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0)[i] = (unmarshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0 = NULL;
	}
}
IL2CPP_EXTERN_C void U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07_marshal_com_back(const U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07_marshaled_com& marshaled, U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0 != NULL)
	{
		if (unmarshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0 == NULL)
		{
			unmarshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0 = reinterpret_cast<U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*>((U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)SZArrayNew(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0), (void*)reinterpret_cast<U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*>((U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)SZArrayNew(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????
IL2CPP_EXTERN_C void U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07_marshal_com_cleanup(U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07_marshaled_com& marshaled)
{
	if (marshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0);
		marshaled.___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0 = NULL;
	}
}
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_U200EU206FU206DU202DU202EU202AU206EU200EU200DU202CU206DU202CU202DU202EU200FU206CU202BU200CU206FU206FU206FU202CU200CU202BU202BU202DU200EU206EU200EU206EU200CU202AU200CU200CU200CU202BU200CU206EU200FU200FU202E_m79509F07E3375C52D9E358BE53910E7F6CAD734F (U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_0 = (U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF*)SZArrayNew(U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)768));
		__this->___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_U200EU206FU206DU202DU202EU202AU206EU200EU200DU202CU206DU202CU202DU202EU200FU206CU202BU200CU206FU206FU206FU202CU200CU202BU202BU202DU200EU206EU200EU206EU200CU202AU200CU200CU200CU202BU200CU206EU200FU200FU202E_m79509F07E3375C52D9E358BE53910E7F6CAD734F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07*>(__this + _offset);
	U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_U200EU206FU206DU202DU202EU202AU206EU200EU200DU202CU206DU202CU202DU202EU200FU206CU202BU200CU206FU206FU206FU202CU200CU202BU202BU202DU200EU206EU200EU206EU200CU202AU200CU200CU200CU202BU200CU206EU200FU200FU202E_m79509F07E3375C52D9E358BE53910E7F6CAD734F(_thisAdjusted, method);
}
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_U206AU206BU200FU200EU206FU202BU202DU202EU200FU200FU200FU206CU202EU202DU200DU202CU206DU206CU202DU200DU206AU202BU206BU206DU200DU202CU200EU202AU206EU200FU200DU202BU206CU200DU202EU200BU200EU202EU206CU202AU202E_mA972F0C0C84140F33C078052AE0D8414FA5A542C (U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		V_0 = 0;
		goto IL_0046;
	}

IL_0004:
	{
		G_B2_0 = ((int32_t)411088992);
	}

IL_0009:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)1568918927)));
		V_1 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_005f;
			}
			case 2:
			{
				goto IL_0004;
			}
			case 3:
			{
				goto IL_002a;
			}
		}
	}
	{
		goto IL_005f;
	}

IL_002a:
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_1 = __this->___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202BU206FU200DU200EU200BU202BU202DU200FU206EU200DU206CU206DU202EU200DU206CU202BU202CU200CU202AU200FU206DU206BU202AU206FU200FU202AU202CU200EU202EU206FU206EU202BU200EU206EU206FU202EU200EU200EU206FU206EU202E_m06B03079972D7E477C0573912085484A7C019AFD(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))), NULL);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		G_B2_0 = ((int32_t)17903283);
		goto IL_0009;
	}

IL_0046:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)768))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_5 = ((int32_t)1413077674);
		G_B8_0 = L_5;
		G_B8_1 = L_5;
		goto IL_005c;
	}

IL_0056:
	{
		int32_t L_6 = ((int32_t)411088992);
		G_B8_0 = L_6;
		G_B8_1 = L_6;
	}

IL_005c:
	{
		G_B2_0 = G_B8_1;
		goto IL_0009;
	}

IL_005f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_U206AU206BU200FU200EU206FU202BU202DU202EU200FU200FU200FU206CU202EU202DU200DU202CU206DU206CU202DU200DU206AU202BU206BU206DU200DU202CU200EU202AU206EU200FU200DU202BU206CU200DU202EU200BU200EU202EU206CU202AU202E_mA972F0C0C84140F33C078052AE0D8414FA5A542C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07*>(__this + _offset);
	U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_U206AU206BU200FU200EU206FU202BU202DU202EU200FU200FU200FU206CU202EU202DU200DU202CU206DU206CU202DU200DU206AU202BU206BU206DU200DU202CU200EU202AU206EU200FU200DU202BU206CU200DU202EU200BU200EU202EU206CU202AU202E_mA972F0C0C84140F33C078052AE0D8414FA5A542C(_thisAdjusted, method);
}
// System.Byte <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_U200DU200FU206AU202AU206CU206EU206BU202AU200DU200BU202EU202CU206EU202CU206DU200CU200CU206AU202AU206FU200CU200FU202AU206EU206EU206BU206EU200EU206BU200EU200DU206DU202EU202AU200DU206BU200CU206FU200FU206FU202E_mA7E00E241547337B60B52E771BC074958BF4192C (U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07* __this, U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		V_0 = 1;
	}

IL_0002:
	{
		G_B2_0 = ((int32_t)-1551264040);
	}

IL_0007:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)-1267310455)));
		V_1 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0068;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_0002;
			}
			case 3:
			{
				goto IL_0047;
			}
		}
	}
	{
		goto IL_0068;
	}

IL_0028:
	{
		uint32_t L_1 = V_0;
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_2 = __this->___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0;
		uint32_t L_3 = V_0;
		NullCheck(L_2);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_4 = p0;
		uint32_t L_5;
		L_5 = U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202CU200EU200FU206FU200EU202BU202CU206EU206FU200EU200CU200CU202CU200DU206BU200EU200BU206EU206FU202AU206AU206DU202EU202EU206EU206BU206EU206DU202DU202DU206BU200EU206EU206CU202EU206CU200DU200FU202DU206AU202E_m4BC344CC5E999A9A82A1D574E36B5BE43CAB6793(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_3)))), L_4, NULL);
		V_0 = ((int32_t)(((int32_t)((int32_t)L_1<<1))|(int32_t)L_5));
		G_B2_0 = ((int32_t)-101627918);
		goto IL_0007;
	}

IL_0047:
	{
		uint32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) >= ((uint32_t)((int32_t)256)))))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_7 = ((int32_t)-570552724);
		G_B8_0 = L_7;
		G_B8_1 = L_7;
		goto IL_005d;
	}

IL_0057:
	{
		int32_t L_8 = ((int32_t)-859299815);
		G_B8_0 = L_8;
		G_B8_1 = L_8;
	}

IL_005d:
	{
		uint32_t L_9 = V_1;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)-1497192461)))));
		goto IL_0007;
	}

IL_0068:
	{
		uint32_t L_10 = V_0;
		return (uint8_t)((int32_t)(uint8_t)L_10);
	}
}
IL2CPP_EXTERN_C  uint8_t U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_U200DU200FU206AU202AU206CU206EU206BU202AU200DU200BU202EU202CU206EU202CU206DU200CU200CU206AU202AU206FU200CU200FU202AU206EU206EU206BU206EU200EU206BU200EU200DU206DU202EU202AU200DU206BU200CU206FU200FU206FU202E_mA7E00E241547337B60B52E771BC074958BF4192C_AdjustorThunk (RuntimeObject* __this, U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* p0, const RuntimeMethod* method)
{
	U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_U200DU200FU206AU202AU206CU206EU206BU202AU200DU200BU202EU202CU206EU202CU206DU200CU200CU206AU202AU206FU200CU200FU202AU206EU206EU206BU206EU200EU206BU200EU200DU206DU202EU202AU200DU206BU200CU206FU200FU206FU202E_mA7E00E241547337B60B52E771BC074958BF4192C(_thisAdjusted, p0, method);
	return _returnValue;
}
// System.Byte <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????::????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_U206CU202CU200CU200FU200EU200EU200DU202AU200DU202AU200BU200CU202AU200CU202CU202AU206EU206AU206AU202BU202AU202EU200FU202BU206AU202BU206BU202AU202EU200CU200BU206BU200CU206AU202BU206FU206EU206BU206AU202E_m8AAE542266808B69B0FECCB8C0FB554152260F8F (U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07* __this, U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* p0, uint8_t p1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B19_1 = 0;
	{
		V_0 = 1;
	}

IL_0002:
	{
		G_B2_0 = ((int32_t)103484143);
	}

IL_0007:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)440614058)));
		V_3 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_00b5;
			}
			case 1:
			{
				goto IL_0068;
			}
			case 2:
			{
				goto IL_0081;
			}
			case 3:
			{
				goto IL_00f5;
			}
			case 4:
			{
				goto IL_0044;
			}
			case 5:
			{
				goto IL_0111;
			}
			case 6:
			{
				goto IL_0053;
			}
			case 7:
			{
				goto IL_0121;
			}
			case 8:
			{
				goto IL_00a3;
			}
			case 9:
			{
				goto IL_0002;
			}
		}
	}
	{
		goto IL_0121;
	}

IL_0044:
	{
		uint32_t L_1 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_1, ((int32_t)-1520110188)))^((int32_t)584931817)));
		goto IL_0007;
	}

IL_0053:
	{
		uint8_t L_2 = p1;
		p1 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_2<<1)));
		uint32_t L_3 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)-1569271338)))^((int32_t)888133362)));
		goto IL_0007;
	}

IL_0068:
	{
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) < ((uint32_t)((int32_t)256)))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_5 = ((int32_t)1165445944);
		G_B9_0 = L_5;
		G_B9_1 = L_5;
		goto IL_007e;
	}

IL_0078:
	{
		int32_t L_6 = ((int32_t)592770596);
		G_B9_0 = L_6;
		G_B9_1 = L_6;
	}

IL_007e:
	{
		G_B2_0 = G_B9_1;
		goto IL_0007;
	}

IL_0081:
	{
		uint32_t L_7 = V_0;
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_8 = __this->___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0;
		uint32_t L_9 = V_0;
		NullCheck(L_8);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_10 = p0;
		uint32_t L_11;
		L_11 = U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202CU200EU200FU206FU200EU202BU202CU206EU206FU200EU200CU200CU202CU200DU206BU200EU200BU206EU206FU202AU206AU206DU202EU202EU206EU206BU206EU206DU202DU202DU206BU200EU206EU206CU202EU206CU200DU200FU202DU206AU202E_m4BC344CC5E999A9A82A1D574E36B5BE43CAB6793(((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_9)))), L_10, NULL);
		V_0 = ((int32_t)(((int32_t)((int32_t)L_7<<1))|(int32_t)L_11));
		G_B2_0 = ((int32_t)1594245503);
		goto IL_0007;
	}

IL_00a3:
	{
		uint32_t L_12 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)1876333917)))^((int32_t)-465664969)));
		goto IL_0007;
	}

IL_00b5:
	{
		U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202EU5BU5D_t4CDD8D03F2136D3AE6ADCAE02AAD676C100E68CF* L_13 = __this->___U202DU206FU200BU202BU200BU200DU206DU200DU200FU202CU200FU200FU200FU206FU206AU206DU200BU200CU206AU206CU200FU206FU206EU206EU200EU202CU206FU200BU202BU206EU202DU206BU200EU206DU206EU206DU200CU206EU200BU200DU202E_0;
		uint32_t L_14 = V_1;
		uint32_t L_15 = V_0;
		NullCheck(L_13);
		U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* L_16 = p0;
		uint32_t L_17;
		L_17 = U206FU206AU206DU206AU206FU206DU200FU200CU200EU200CU200EU202AU206CU200CU206BU202DU206DU206BU206CU202DU202AU206BU206CU202CU202DU206DU202EU206EU200EU202EU202DU206EU202AU200DU200FU202DU202DU200DU206DU206AU202E_U202CU200EU200FU206FU200EU202BU202CU206EU206FU200EU200CU200CU202CU200DU206BU200EU200BU206EU206FU202AU206AU206DU202EU202EU206EU206BU206EU206DU202DU202DU206BU200EU206EU206CU202EU206CU200DU200FU202DU206AU202E_m4BC344CC5E999A9A82A1D574E36B5BE43CAB6793(((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_add(1, (int32_t)L_14))<<8)), (int32_t)L_15)))))), L_16, NULL);
		V_2 = L_17;
		uint32_t L_18 = V_0;
		uint32_t L_19 = V_2;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_18<<1))|(int32_t)L_19));
		uint32_t L_20 = V_1;
		uint32_t L_21 = V_2;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_00e1;
		}
	}
	{
		int32_t L_22 = ((int32_t)475413647);
		G_B15_0 = L_22;
		G_B15_1 = L_22;
		goto IL_00e7;
	}

IL_00e1:
	{
		int32_t L_23 = ((int32_t)1740813790);
		G_B15_0 = L_23;
		G_B15_1 = L_23;
	}

IL_00e7:
	{
		uint32_t L_24 = V_3;
		G_B2_0 = ((int32_t)(G_B15_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_24, ((int32_t)48244717)))));
		goto IL_0007;
	}

IL_00f5:
	{
		uint32_t L_25 = V_0;
		if ((!(((uint32_t)L_25) < ((uint32_t)((int32_t)256)))))
		{
			goto IL_0105;
		}
	}
	{
		int32_t L_26 = ((int32_t)103484143);
		G_B19_0 = L_26;
		G_B19_1 = L_26;
		goto IL_010b;
	}

IL_0105:
	{
		int32_t L_27 = ((int32_t)1322146289);
		G_B19_0 = L_27;
		G_B19_1 = L_27;
	}

IL_010b:
	{
		G_B2_0 = G_B19_1;
		goto IL_0007;
	}

IL_0111:
	{
		uint8_t L_28 = p1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_28>>7))&1));
		G_B2_0 = ((int32_t)977534100);
		goto IL_0007;
	}

IL_0121:
	{
		uint32_t L_29 = V_0;
		return (uint8_t)((int32_t)(uint8_t)L_29);
	}
}
IL2CPP_EXTERN_C  uint8_t U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_U206CU202CU200CU200FU200EU200EU200DU202AU200DU202AU200BU200CU202AU200CU202CU202AU206EU206AU206AU202BU202AU202EU200FU202BU206AU202BU206BU202AU202EU200CU200BU206BU200CU206AU202BU206FU206EU206BU206AU202E_m8AAE542266808B69B0FECCB8C0FB554152260F8F_AdjustorThunk (RuntimeObject* __this, U202EU206CU202DU200BU206AU200FU202EU200CU200EU202BU202DU200BU200BU206AU200EU202AU206BU200DU206BU206CU200FU206DU200EU200CU200DU206EU200EU206BU206AU206BU200FU206CU206CU200EU202CU202DU202DU200BU202CU200DU202E_tA147454FFE2BF2D8DFED64CBCAD3E91CFE6D21F6* p0, uint8_t p1, const RuntimeMethod* method)
{
	U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_t1324A4AE2EC3C4453C7479F901676F9577C3CE07*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = U206EU200BU200BU206EU200BU206EU202DU200BU206AU202BU202EU200FU206BU200DU202AU202EU202EU202BU202EU202BU206CU200FU206EU206EU206BU202EU202BU206AU206CU202CU206CU200FU200FU200EU200FU206FU200EU202AU206AU202EU202E_U206CU202CU200CU200FU200EU200EU200DU202AU200DU202AU200BU200CU202AU200CU202CU202AU206EU206AU206AU202BU202AU202EU200FU202BU206AU202BU206BU202AU202EU200CU200BU206BU200CU206AU202BU206FU206EU206BU206AU202E_m8AAE542266808B69B0FECCB8C0FB554152260F8F(_thisAdjusted, p0, p1, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <Module>/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E__ctor_mAA8E008A58B7327E1879050C651DE555420A2BA8 (U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U200DU202DU202DU206AU202CU200BU206FU206EU202BU206AU200CU200EU202EU200DU202EU200BU200EU206FU200EU206EU200EU200CU202DU206AU202AU206BU202CU202EU202BU202DU206EU200FU206EU206DU200FU202AU206EU202EU200FU206EU202E_m4180F1BD21601BF722C7E2F0A27BE27ADB1A6E4A (U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* __this, uint32_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		uint32_t L_0 = __this->___U206FU206DU206AU206DU206CU206AU206AU206CU206FU202EU200BU202DU202EU206FU200CU206CU202AU200EU202BU200DU200EU202CU200CU206CU206EU202CU206EU200DU206AU200FU206CU206DU202CU206AU206AU206BU206BU206AU202DU202CU202E_4;
		uint32_t L_1 = p0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_004f;
		}
	}

IL_0009:
	{
		G_B2_0 = ((int32_t)-1785057940);
	}

IL_000e:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)-876455732)));
		V_0 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0009;
			}
			case 1:
			{
				goto IL_005d;
			}
			case 2:
			{
				goto IL_0073;
			}
			case 3:
			{
				goto IL_004f;
			}
			case 4:
			{
				goto IL_0033;
			}
		}
	}
	{
		goto IL_0073;
	}

IL_0033:
	{
		uint32_t L_3 = p0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)L_3));
		__this->___U202AU206BU206BU206DU202EU202BU200CU202DU200BU202BU200FU206BU200CU202CU206AU202DU206DU200FU202CU202DU206FU200DU202EU206FU200CU202AU202EU202CU202DU206BU202BU202DU202AU200EU200CU206CU200CU202DU200FU200FU202E_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U202AU206BU206BU206DU202EU202BU200CU202DU200BU202BU200FU206BU200CU202CU206AU202DU206DU200FU202CU202DU206FU200DU202EU206FU200CU202AU202EU202CU202DU206BU202BU202DU202AU200EU200CU206CU200CU202DU200FU200FU202E_0), (void*)L_4);
		uint32_t L_5 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)1473011737)))^((int32_t)-796124097)));
		goto IL_000e;
	}

IL_004f:
	{
		uint32_t L_6 = p0;
		__this->___U206FU206DU206AU206DU206CU206AU206AU206CU206FU202EU200BU202DU202EU206FU200CU206CU202AU200EU202BU200DU200EU202CU200CU206CU206EU202CU206EU200DU206AU200FU206CU206DU202CU206AU206AU206BU206BU206AU202DU202CU202E_4 = L_6;
		G_B2_0 = ((int32_t)-1665954578);
		goto IL_000e;
	}

IL_005d:
	{
		__this->___U202CU206FU202EU200FU200EU200BU202BU200FU200FU200DU202CU202CU202EU202AU202CU200BU200DU206BU200BU202BU206FU200DU200DU202BU202CU200CU206CU206DU206EU202DU200DU206EU206DU200FU200CU202BU206DU200CU206FU206EU202E_1 = 0;
		uint32_t L_7 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)-583835979)))^((int32_t)-1627282931)));
		goto IL_000e;
	}

IL_0073:
	{
		__this->___U202CU202AU206BU202EU206CU206DU202BU200FU200BU202CU206EU206FU202CU202AU202DU202BU202AU200CU206BU200EU200FU200DU200FU206DU202BU206FU206DU200EU200DU206DU206BU202DU200FU206EU202AU200BU206EU206FU202CU206DU202E_3 = 0;
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U206EU206FU206DU202CU206BU206CU206BU206EU200CU202AU206BU206DU206AU206CU206BU206DU206AU200CU206DU206DU202AU206FU206BU202EU200FU200BU200DU206DU200FU200FU206CU206FU200BU202DU206AU200BU200FU206FU202DU202BU202E_m10979CBF33ADA2BB92AA4BB3B1DCA04FE0686508 (U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p0, bool p1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U202DU202DU206DU206AU202BU202EU202BU206FU200DU200BU202CU202AU200BU202CU202EU206AU206DU202CU200DU206FU200EU200BU200DU206BU200CU206BU200FU200DU202EU206BU200FU202CU206FU202BU206CU206BU206FU200CU202DU206DU202E_m30F50279A60F19DFAFF286E448233A8E8F760E90(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = p0;
		__this->___U200CU202DU202DU200BU206BU200BU200FU200FU202CU202BU206FU206BU206EU202DU202DU202BU202EU206EU206EU200BU200CU206AU206BU206AU202EU202CU206AU202EU206AU206FU202EU200EU206CU206CU206DU206EU200DU206BU206AU206AU202E_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U200CU202DU202DU200BU206BU200BU200FU200FU202CU202BU206FU206BU206EU202DU202DU202BU202EU206EU206EU200BU200CU206AU206BU206AU202EU202CU206AU202EU206AU206FU202EU200EU206CU206CU206DU206EU200DU206BU206AU206AU202E_2), (void*)L_0);
	}

IL_000d:
	{
		G_B2_0 = ((int32_t)27456017);
	}

IL_0012:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)2245856)));
		V_0 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_004f;
			}
			case 1:
			{
				goto IL_0033;
			}
			case 2:
			{
				goto IL_000d;
			}
			case 3:
			{
				goto IL_006c;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_0033:
	{
		bool L_2 = p1;
		if (L_2)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_3 = ((int32_t)-156922716);
		G_B7_0 = L_3;
		G_B7_1 = L_3;
		goto IL_0044;
	}

IL_003e:
	{
		int32_t L_4 = ((int32_t)-967886601);
		G_B7_0 = L_4;
		G_B7_1 = L_4;
	}

IL_0044:
	{
		uint32_t L_5 = V_0;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)-1663843024)))));
		goto IL_0012;
	}

IL_004f:
	{
		__this->___U202CU202AU206BU202EU206CU206DU202BU200FU200BU202CU206EU206FU202CU202AU202DU202BU202AU200CU206BU200EU200FU200DU200FU206DU202BU206FU206DU200EU200DU206DU206BU202DU200FU206EU202AU200BU206EU206FU202CU206DU202E_3 = 0;
		__this->___U202CU206FU202EU200FU200EU200BU202BU200FU200FU200DU202CU202CU202EU202AU202CU200BU200DU206BU200BU202BU206FU200DU200DU202BU202CU200CU206CU206DU206EU202DU200DU206EU206DU200FU200CU202BU206DU200CU206FU206EU202E_1 = 0;
		uint32_t L_6 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)284827483)))^((int32_t)465254907)));
		goto IL_0012;
	}

IL_006c:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U202DU202DU206DU206AU202BU202EU202BU206FU200DU200BU202CU202AU200BU202CU202EU206AU206DU202CU200DU206FU200EU200BU200DU206BU200CU206BU200FU200DU202EU206BU200FU202CU206FU202BU206CU206BU206FU200CU202DU206DU202E_m30F50279A60F19DFAFF286E448233A8E8F760E90 (U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U202AU206CU202CU206BU202CU200EU202CU206BU206DU206AU206CU206DU206BU202BU202DU206CU202DU206CU202CU200CU202BU202AU206AU200CU206EU202BU206FU200EU206EU200CU206AU200DU206CU206BU200DU206DU200CU202AU206CU206EU202E_mDB1C53CF5383FEED950DDFA275300763C638940F(__this, NULL);
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)-700817675);
	}

IL_000b:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)-1976374325)));
		V_0 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0006;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0060;
	}

IL_0028:
	{
		__this->___U200CU202DU202DU200BU206BU200BU200FU200FU202CU202BU206FU206BU206EU202DU202DU202BU202EU206EU206EU200BU200CU206AU206BU206AU202EU202CU206AU202EU206AU206FU202EU200EU206CU206CU206DU206EU200DU206BU206AU206AU202E_2 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U200CU202DU202DU200BU206BU200BU200FU200FU202CU202BU206FU206BU206EU202DU202DU202BU202EU206EU206EU200BU200CU206AU206BU206AU202EU202CU206AU202EU206AU206FU202EU200EU206CU206CU206DU206EU200DU206BU206AU206AU202E_2), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___U202AU206BU206BU206DU202EU202BU200CU202DU200BU202BU200FU206BU200CU202CU206AU202DU206DU200FU202CU202DU206FU200DU202EU206FU200CU202AU202EU202CU202DU206BU202BU202DU202AU200EU200CU206CU200CU202DU200FU200FU202E_0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___U202AU206BU206BU206DU202EU202BU200CU202DU200BU202BU200FU206BU200CU202CU206AU202DU206DU200FU202CU202DU206FU200DU202EU206FU200CU202AU202EU202CU202DU206BU202BU202DU202AU200EU200CU206CU200CU202DU200FU200FU202E_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___U202AU206BU206BU206DU202EU202BU200CU202DU200BU202BU200FU206BU200CU202CU206AU202DU206DU200FU202CU202DU206FU200DU202EU206FU200CU202AU202EU202CU202DU206BU202BU202DU202AU200EU200CU206CU200CU202DU200FU200FU202E_0;
		NullCheck(L_4);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		uint32_t L_5 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)-1117225225)))^((int32_t)-355518160)));
		goto IL_000b;
	}

IL_0060:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U202AU206CU202CU206BU202CU200EU202CU206BU206DU206AU206CU206DU206BU202BU202DU206CU202DU206CU202CU200CU202BU202AU206AU200CU206EU202BU206FU200EU206EU200CU206AU200DU206CU206BU200DU206DU200CU202AU206CU206EU202E_mDB1C53CF5383FEED950DDFA275300763C638940F (U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		uint32_t L_0 = __this->___U202CU206FU202EU200FU200EU200BU202BU200FU200FU200DU202CU202CU202EU202AU202CU200BU200DU206BU200BU202BU206FU200DU200DU202BU202CU200CU206CU206DU206EU202DU200DU206EU206DU200FU200CU202BU206DU200CU206FU206EU202E_1;
		uint32_t L_1 = __this->___U202CU202AU206BU202EU206CU206DU202BU200FU200BU202CU206EU206FU202CU202AU202DU202BU202AU200CU206BU200EU200FU200DU200FU206DU202BU206FU206DU200EU200DU206DU206BU202DU200FU206EU202AU200BU206EU206FU202CU206DU202E_3;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0052;
		}
	}

IL_0011:
	{
		G_B2_0 = ((int32_t)529925942);
	}

IL_0016:
	{
		int32_t L_3 = ((int32_t)(G_B2_0^((int32_t)1133799767)));
		V_1 = L_3;
		switch (((int32_t)((uint32_t)(int32_t)L_3%(uint32_t)(int32_t)6)))
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_00a2;
			}
			case 2:
			{
				goto IL_0052;
			}
			case 3:
			{
				goto IL_00b5;
			}
			case 4:
			{
				goto IL_0089;
			}
			case 5:
			{
				goto IL_0011;
			}
		}
	}
	{
		goto IL_00b5;
	}

IL_003f:
	{
		uint32_t L_4 = __this->___U202CU206FU202EU200FU200EU200BU202BU200FU200FU200DU202CU202CU202EU202AU202CU200BU200DU206BU200BU202BU206FU200DU200DU202BU202CU200CU206CU206DU206EU202DU200DU206EU206DU200FU200CU202BU206DU200CU206FU206EU202E_1;
		__this->___U202CU202AU206BU202EU206CU206DU202BU200FU200BU202CU206EU206FU202CU202AU202DU202BU202AU200CU206BU200EU200FU200DU200FU206DU202BU206FU206DU200EU200DU206DU206BU202DU200FU206EU202AU200BU206EU206FU202CU206DU202E_3 = L_4;
		G_B2_0 = ((int32_t)1211161236);
		goto IL_0016;
	}

IL_0052:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = __this->___U200CU202DU202DU200BU206BU200BU200FU200FU202CU202BU206FU206BU206EU202DU202DU202BU202EU206EU206EU200BU200CU206AU206BU206AU202EU202CU206AU202EU206AU206FU202EU200EU206CU206CU206DU206EU200DU206BU206AU206AU202E_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___U202AU206BU206BU206DU202EU202BU200CU202DU200BU202BU200FU206BU200CU202CU206AU202DU206DU200FU202CU202DU206FU200DU202EU206FU200CU202AU202EU202CU202DU206BU202BU202DU202AU200EU200CU206CU200CU202DU200FU200FU202E_0;
		uint32_t L_7 = __this->___U202CU202AU206BU202EU206CU206DU202BU200FU200BU202CU206EU206FU202CU202AU202DU202BU202AU200CU206BU200EU200FU200DU200FU206DU202BU206FU206DU200EU200DU206DU206BU202DU200FU206EU202AU200BU206EU206FU202CU206DU202E_3;
		uint32_t L_8 = V_0;
		NullCheck(L_5);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, L_7, L_8);
		uint32_t L_9 = __this->___U202CU206FU202EU200FU200EU200BU202BU200FU200FU200DU202CU202CU202EU202AU202CU200BU200DU206BU200BU202BU206FU200DU200DU202BU202CU200CU206CU206DU206EU202DU200DU206EU206DU200FU200CU202BU206DU200CU206FU206EU202E_1;
		uint32_t L_10 = __this->___U206FU206DU206AU206DU206CU206AU206AU206CU206FU202EU200BU202DU202EU206FU200CU206CU202AU200EU202BU200DU200EU202CU200CU206CU206EU202CU206EU200DU206AU200FU206CU206DU202CU206AU206AU206BU206BU206AU202DU202CU202E_4;
		if ((!(((uint32_t)L_9) >= ((uint32_t)L_10))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_11 = ((int32_t)633322037);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0086;
	}

IL_0080:
	{
		int32_t L_12 = ((int32_t)971637655);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0086:
	{
		G_B2_0 = G_B8_1;
		goto IL_0016;
	}

IL_0089:
	{
		__this->___U202CU206FU202EU200FU200EU200BU202BU200FU200FU200DU202CU202CU202EU202AU202CU200BU200DU206BU200BU202BU206FU200DU200DU202BU202CU200CU206CU206DU206EU202DU200DU206EU206DU200FU200CU202BU206DU200CU206FU206EU202E_1 = 0;
		uint32_t L_13 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)816119767)))^((int32_t)2026841817)));
		goto IL_0016;
	}

IL_00a2:
	{
		return;
	}
	// Dead block : IL_00a3: ldloc.1

IL_00b5:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U200EU200FU200CU200EU202CU202CU206BU206FU202DU206BU200DU206DU202BU206BU202EU202CU200DU200DU206FU200BU206BU202EU206AU200CU206CU200DU202CU200DU206CU206AU206BU206DU206CU200BU200CU200CU202EU200CU202BU206EU202E_mC5F309EC4B87BA6C493B3D0D510D03CF957EBA37 (U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* __this, uint32_t p0, uint32_t p1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B22_1 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B26_1 = 0;
	{
		uint32_t L_0 = __this->___U202CU206FU202EU200FU200EU200BU202BU200FU200FU200DU202CU202CU202EU202AU202CU200BU200DU206BU200BU202BU206FU200DU200DU202BU202CU200CU206CU206DU206EU202DU200DU206EU206DU200FU200CU202BU206DU200CU206FU206EU202E_1;
		uint32_t L_1 = p0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), 1));
	}

IL_000b:
	{
		G_B2_0 = ((int32_t)-156125930);
	}

IL_0010:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)-1857159627)));
		V_2 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)12))))
		{
			case 0:
			{
				goto IL_000b;
			}
			case 1:
			{
				goto IL_0055;
			}
			case 2:
			{
				goto IL_0096;
			}
			case 3:
			{
				goto IL_012b;
			}
			case 4:
			{
				goto IL_011c;
			}
			case 5:
			{
				goto IL_00ff;
			}
			case 6:
			{
				goto IL_00d5;
			}
			case 7:
			{
				goto IL_007e;
			}
			case 8:
			{
				goto IL_0150;
			}
			case 9:
			{
				goto IL_00a5;
			}
			case 10:
			{
				goto IL_0066;
			}
			case 11:
			{
				goto IL_0168;
			}
		}
	}
	{
		goto IL_0168;
	}

IL_0055:
	{
		V_0 = 0;
		uint32_t L_3 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)1047987644)))^((int32_t)355129600)));
		goto IL_0010;
	}

IL_0066:
	{
		uint32_t L_4 = V_0;
		uint32_t L_5 = __this->___U206FU206DU206AU206DU206CU206AU206AU206CU206FU202EU200BU202DU202EU206FU200CU206CU202AU200EU202BU200DU200EU202CU200CU206CU206EU202CU206EU200DU206AU200FU206CU206DU202CU206AU206AU206BU206BU206AU202DU202CU202E_4;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5));
		uint32_t L_6 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)759778639)))^((int32_t)1089232133)));
		goto IL_0010;
	}

IL_007e:
	{
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U202AU206CU202CU206BU202CU200EU202CU206BU206DU206AU206CU206DU206BU202BU202DU206CU202DU206CU202CU200CU202BU202AU206AU200CU206EU202BU206FU200EU206EU200CU206AU200DU206CU206BU200DU206DU200CU202AU206CU206EU202E_mDB1C53CF5383FEED950DDFA275300763C638940F(__this, NULL);
		uint32_t L_7 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)443147474)))^((int32_t)-936328485)));
		goto IL_0010;
	}

IL_0096:
	{
		goto IL_0150;
	}
	// Dead block : IL_009b: ldc.i4 -1430239516

IL_00a5:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___U202AU206BU206BU206DU202EU202BU200CU202DU200BU202BU200FU206BU200CU202CU206AU202DU206DU200FU202CU202DU206FU200DU202EU206FU200CU202AU202EU202CU202DU206BU202BU202DU202AU200EU200CU206CU200CU202DU200FU200FU202E_0;
		uint32_t L_9 = __this->___U202CU206FU202EU200FU200EU200BU202BU200FU200FU200DU202CU202CU202EU202AU202CU200BU200DU206BU200BU202BU206FU200DU200DU202BU202CU200CU206CU206DU206EU202DU200DU206EU206DU200FU200CU202BU206DU200CU206FU206EU202E_1;
		uint32_t L_10 = L_9;
		V_1 = L_10;
		__this->___U202CU206FU202EU200FU200EU200BU202BU200FU200FU200DU202CU202CU202EU202AU202CU200BU200DU206BU200BU202BU206FU200DU200DU202BU202CU200CU206CU206DU206EU202DU200DU206EU206DU200FU200CU202BU206DU200CU206FU206EU202E_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, 1));
		uint32_t L_11 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___U202AU206BU206BU206DU202EU202BU200CU202DU200BU202BU200FU206BU200CU202CU206AU202DU206DU200FU202CU202DU206FU200DU202EU206FU200CU202AU202EU202CU202DU206BU202BU202DU202AU200EU200CU206CU200CU202DU200FU200FU202E_0;
		uint32_t L_13 = V_0;
		uint32_t L_14 = L_13;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, 1));
		NullCheck(L_12);
		uintptr_t L_15 = ((uintptr_t)L_14);
		uint8_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_11)), (uint8_t)L_16);
		G_B2_0 = ((int32_t)-557338749);
		goto IL_0010;
	}

IL_00d5:
	{
		uint32_t L_17 = __this->___U202CU206FU202EU200FU200EU200BU202BU200FU200FU200DU202CU202CU202EU202AU202CU200BU200DU206BU200BU202BU206FU200DU200DU202BU202CU200CU206CU206DU206EU202DU200DU206EU206DU200FU200CU202BU206DU200CU206FU206EU202E_1;
		uint32_t L_18 = __this->___U206FU206DU206AU206DU206CU206AU206AU206CU206FU202EU200BU202DU202EU206FU200CU206CU202AU200EU202BU200DU200EU202CU200CU206CU206EU202CU206EU200DU206AU200FU206CU206DU202CU206AU206AU206BU206BU206AU202DU202CU202E_4;
		if ((!(((uint32_t)L_17) >= ((uint32_t)L_18))))
		{
			goto IL_00eb;
		}
	}
	{
		int32_t L_19 = ((int32_t)-645453840);
		G_B13_0 = L_19;
		G_B13_1 = L_19;
		goto IL_00f1;
	}

IL_00eb:
	{
		int32_t L_20 = ((int32_t)-675661353);
		G_B13_0 = L_20;
		G_B13_1 = L_20;
	}

IL_00f1:
	{
		uint32_t L_21 = V_2;
		G_B2_0 = ((int32_t)(G_B13_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_21, ((int32_t)1513867403)))));
		goto IL_0010;
	}

IL_00ff:
	{
		uint32_t L_22 = V_0;
		uint32_t L_23 = __this->___U206FU206DU206AU206DU206CU206AU206AU206CU206FU202EU200BU202DU202EU206FU200CU206CU202AU200EU202BU200DU200EU202CU200CU206CU206EU202CU206EU200DU206AU200FU206CU206DU202CU206AU206AU206BU206BU206AU202DU202CU202E_4;
		if ((!(((uint32_t)L_22) < ((uint32_t)L_23))))
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_24 = ((int32_t)-1076391796);
		G_B17_0 = L_24;
		G_B17_1 = L_24;
		goto IL_0116;
	}

IL_0110:
	{
		int32_t L_25 = ((int32_t)-1336810888);
		G_B17_0 = L_25;
		G_B17_1 = L_25;
	}

IL_0116:
	{
		G_B2_0 = G_B17_1;
		goto IL_0010;
	}

IL_011c:
	{
		uint32_t L_26 = p1;
		p1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, 1));
		G_B2_0 = ((int32_t)-521415655);
		goto IL_0010;
	}

IL_012b:
	{
		uint32_t L_27 = V_0;
		uint32_t L_28 = __this->___U206FU206DU206AU206DU206CU206AU206AU206CU206FU202EU200BU202DU202EU206FU200CU206CU202AU200EU202BU200DU200EU202CU200CU206CU206EU202CU206EU200DU206AU200FU206CU206DU202CU206AU206AU206BU206BU206AU202DU202CU202E_4;
		if ((!(((uint32_t)L_27) < ((uint32_t)L_28))))
		{
			goto IL_013c;
		}
	}
	{
		int32_t L_29 = ((int32_t)1780018545);
		G_B22_0 = L_29;
		G_B22_1 = L_29;
		goto IL_0142;
	}

IL_013c:
	{
		int32_t L_30 = ((int32_t)1682349149);
		G_B22_0 = L_30;
		G_B22_1 = L_30;
	}

IL_0142:
	{
		uint32_t L_31 = V_2;
		G_B2_0 = ((int32_t)(G_B22_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_31, ((int32_t)145098494)))));
		goto IL_0010;
	}

IL_0150:
	{
		uint32_t L_32 = p1;
		if ((!(((uint32_t)L_32) <= ((uint32_t)0))))
		{
			goto IL_015c;
		}
	}
	{
		int32_t L_33 = ((int32_t)-1909301466);
		G_B26_0 = L_33;
		G_B26_1 = L_33;
		goto IL_0162;
	}

IL_015c:
	{
		int32_t L_34 = ((int32_t)-1430239516);
		G_B26_0 = L_34;
		G_B26_1 = L_34;
	}

IL_0162:
	{
		G_B2_0 = G_B26_1;
		goto IL_0010;
	}

IL_0168:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U202DU202BU200BU206FU206CU200CU202BU206CU200CU200FU202DU202EU206AU202CU200CU200DU200FU206BU206EU200EU206BU202BU206DU206EU206DU202EU206CU206EU200FU200DU202BU206DU206AU202EU206BU202AU200EU206BU202DU206EU202E_m5F09A40A44CB0567F660E6BEC0339ABD81DE61D1 (U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* __this, uint8_t p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U202AU206BU206BU206DU202EU202BU200CU202DU200BU202BU200FU206BU200CU202CU206AU202DU206DU200FU202CU202DU206FU200DU202EU206FU200CU202AU202EU202CU202DU206BU202BU202DU202AU200EU200CU206CU200CU202DU200FU200FU202E_0;
		uint32_t L_1 = __this->___U202CU206FU202EU200FU200EU200BU202BU200FU200FU200DU202CU202CU202EU202AU202CU200BU200DU206BU200BU202BU206FU200DU200DU202BU202CU200CU206CU206DU206EU202DU200DU206EU206DU200FU200CU202BU206DU200CU206FU206EU202E_1;
		uint32_t L_2 = L_1;
		V_0 = L_2;
		__this->___U202CU206FU202EU200FU200EU200BU202BU200FU200FU200DU202CU202CU202EU202AU202CU200BU200DU206BU200BU202BU206FU200DU200DU202BU202CU200CU206CU206DU206EU202DU200DU206EU206DU200FU200CU202BU206DU200CU206FU206EU202E_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, 1));
		uint32_t L_3 = V_0;
		uint8_t L_4 = p0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_3)), (uint8_t)L_4);
	}

IL_001a:
	{
		G_B2_0 = ((int32_t)-1304598795);
	}

IL_001f:
	{
		int32_t L_5 = ((int32_t)(G_B2_0^((int32_t)-1764381280)));
		V_1 = L_5;
		switch (((int32_t)((uint32_t)(int32_t)L_5%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0067;
			}
			case 1:
			{
				goto IL_0040;
			}
			case 2:
			{
				goto IL_001a;
			}
			case 3:
			{
				goto IL_007c;
			}
		}
	}
	{
		goto IL_007c;
	}

IL_0040:
	{
		uint32_t L_6 = __this->___U202CU206FU202EU200FU200EU200BU202BU200FU200FU200DU202CU202CU202EU202AU202CU200BU200DU206BU200BU202BU206FU200DU200DU202BU202CU200CU206CU206DU206EU202DU200DU206EU206DU200FU200CU202BU206DU200CU206FU206EU202E_1;
		uint32_t L_7 = __this->___U206FU206DU206AU206DU206CU206AU206AU206CU206FU202EU200BU202DU202EU206FU200CU206CU202AU200EU202BU200DU200EU202CU200CU206CU206EU202CU206EU200DU206AU200FU206CU206DU202CU206AU206AU206BU206BU206AU202DU202CU202E_4;
		if ((!(((uint32_t)L_6) < ((uint32_t)L_7))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_8 = ((int32_t)-1007115760);
		G_B7_0 = L_8;
		G_B7_1 = L_8;
		goto IL_005c;
	}

IL_0056:
	{
		int32_t L_9 = ((int32_t)-2043073317);
		G_B7_0 = L_9;
		G_B7_1 = L_9;
	}

IL_005c:
	{
		uint32_t L_10 = V_1;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)2121282067)))));
		goto IL_001f;
	}

IL_0067:
	{
		U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U202AU206CU202CU206BU202CU200EU202CU206BU206DU206AU206CU206DU206BU202BU202DU206CU202DU206CU202CU200CU202BU202AU206AU200CU206EU202BU206FU200EU206EU200CU206AU200DU206CU206BU200DU206DU200CU202AU206CU206EU202E_mDB1C53CF5383FEED950DDFA275300763C638940F(__this, NULL);
		uint32_t L_11 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)-1016269216)))^((int32_t)492902623)));
		goto IL_001f;
	}

IL_007c:
	{
		return;
	}
}
// System.Byte <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_U200CU200FU200BU202EU202EU206AU206DU202DU202EU200EU206BU200CU206CU206FU200DU200CU206EU206DU202BU200EU202EU202AU200BU206DU202AU202BU202BU202BU200BU200FU206AU206CU206BU206DU200FU206DU200CU202EU200EU206AU202E_m2B049B2D18E32FBDF36F6B89C39A401E5B772A57 (U206AU200BU200FU206AU206EU200CU202DU200EU206BU202CU200EU202AU200EU200CU202DU206BU200DU200EU200EU206AU202CU206FU202DU206EU200CU202CU202EU202AU200FU200DU200EU200BU202EU202CU200BU200FU202EU206CU206CU206DU202E_tCD1B224CF3C5D632967CA8F8593BD8D34B641D88* __this, uint32_t p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	{
		uint32_t L_0 = __this->___U202CU206FU202EU200FU200EU200BU202BU200FU200FU200DU202CU202CU202EU202AU202CU200BU200DU206BU200BU202BU206FU200DU200DU202BU202CU200CU206CU206DU206EU202DU200DU206EU206DU200FU200CU202BU206DU200CU206FU206EU202E_1;
		uint32_t L_1 = p0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), 1));
		uint32_t L_2 = V_0;
		uint32_t L_3 = __this->___U206FU206DU206AU206DU206CU206AU206AU206CU206FU202EU200BU202DU202EU206FU200CU206CU202AU200EU202BU200DU200EU202CU200CU206CU206EU202CU206EU200DU206AU200FU206CU206DU202CU206AU206AU206BU206BU206AU202DU202CU202E_4;
		if ((!(((uint32_t)L_2) >= ((uint32_t)L_3))))
		{
			goto IL_004e;
		}
	}

IL_0014:
	{
		G_B2_0 = ((int32_t)-1734451476);
	}

IL_0019:
	{
		int32_t L_4 = ((int32_t)(G_B2_0^((int32_t)-2038584301)));
		V_1 = L_4;
		switch (((int32_t)((uint32_t)(int32_t)L_4%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_004e;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0014;
			}
		}
	}
	{
		goto IL_004e;
	}

IL_0036:
	{
		uint32_t L_5 = V_0;
		uint32_t L_6 = __this->___U206FU206DU206AU206DU206CU206AU206AU206CU206FU202EU200BU202DU202EU206FU200CU206CU202AU200EU202BU200DU200EU202CU200CU206CU206EU202CU206EU200DU206AU200FU206CU206DU202CU206AU206AU206BU206BU206AU202DU202CU202E_4;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6));
		uint32_t L_7 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)976323228)))^((int32_t)377001054)));
		goto IL_0019;
	}

IL_004e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___U202AU206BU206BU206DU202EU202BU200CU202DU200BU202BU200FU206BU200CU202CU206AU202DU206DU200FU202CU202DU206FU200DU202EU206FU200CU202AU202EU202CU202DU206BU202BU202DU202AU200EU200CU206CU200CU202DU200FU200FU202E_0;
		uint32_t L_9 = V_0;
		NullCheck(L_8);
		uintptr_t L_10 = ((uintptr_t)L_9);
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		return L_11;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U200DU202CU202DU200EU202DU202DU206DU202DU200FU206EU206EU202BU202DU200BU200FU202DU202BU206BU200CU202AU206AU202AU202AU202AU200EU202AU206CU202CU200FU200FU200DU206FU202EU202BU200BU206BU206EU206BU202EU206DU202E_m0519F9383125F57206536E5E3B2772F5FF86F9A2 (U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		__this->___U202CU202BU206AU200BU200FU200DU200DU206DU200FU202DU206AU206FU202BU202CU200EU206FU206CU206BU206CU200CU202AU202BU206BU200BU200EU202DU206CU202EU200DU206BU206DU200BU202EU202EU206AU206FU206BU206BU206FU202DU202E_0 = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U200DU202CU202DU200EU202DU202DU206DU202DU200FU206EU206EU202BU202DU200BU200FU202DU202BU206BU200CU202AU206AU202AU202AU202AU200EU202AU206CU202CU200FU200FU200DU206FU202EU202BU200BU206BU206EU206BU202EU206DU202E_m0519F9383125F57206536E5E3B2772F5FF86F9A2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382*>(__this + _offset);
	U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U200DU202CU202DU200EU202DU202DU206DU202DU200FU206EU206EU202BU202DU200BU200FU202DU202BU206BU200CU202AU206AU202AU202AU202AU200EU202AU206CU202CU200FU200FU200DU206FU202EU202BU200BU206BU206EU206BU202EU206DU202E_m0519F9383125F57206536E5E3B2772F5FF86F9A2(_thisAdjusted, method);
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U200DU206AU206EU206DU206EU202BU202EU206FU202EU202BU206DU200FU206FU206CU206AU200DU206DU206DU202CU200BU202AU202CU206AU206AU200BU202BU200FU200BU202EU202CU200DU200DU200CU200FU200CU200CU206BU202EU206DU202EU202E_m22D5925512D8B10871F3FDDFF7F3F00EBE6D41D2 (U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	{
		uint32_t L_0 = __this->___U202CU202BU206AU200BU200FU200DU200DU206DU200FU202DU206AU206FU202BU202CU200EU206FU206CU206BU206CU200CU202AU202BU206BU200BU200EU202DU206CU202EU200DU206BU206DU200BU202EU202EU206AU206FU206BU206BU206FU202DU202E_0;
		if ((!(((uint32_t)L_0) < ((uint32_t)4))))
		{
			goto IL_007f;
		}
	}

IL_0009:
	{
		G_B2_0 = ((int32_t)986587562);
	}

IL_000e:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)155751638)));
		V_0 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)6)))
		{
			case 0:
			{
				goto IL_0009;
			}
			case 1:
			{
				goto IL_0054;
			}
			case 2:
			{
				goto IL_009d;
			}
			case 3:
			{
				goto IL_0037;
			}
			case 4:
			{
				goto IL_0069;
			}
			case 5:
			{
				goto IL_007f;
			}
		}
	}
	{
		goto IL_009d;
	}

IL_0037:
	{
		uint32_t L_2 = __this->___U202CU202BU206AU200BU200FU200DU200DU206DU200FU202DU206AU206FU202BU202CU200EU206FU206CU206BU206CU200CU202AU202BU206BU200BU200EU202DU206CU202EU200DU206BU206DU200BU202EU202EU206AU206FU206BU206BU206FU202DU202E_0;
		__this->___U202CU202BU206AU200BU200FU200DU200DU206DU200FU202DU206AU206FU202BU202CU200EU206FU206CU206BU206CU200CU202AU202BU206BU200BU200EU202DU206CU202EU200DU206BU206DU200BU202EU202EU206AU206FU206BU206BU206FU202DU202E_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 3));
		uint32_t L_3 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)-509264596)))^((int32_t)406953098)));
		goto IL_000e;
	}

IL_0054:
	{
		uint32_t L_4 = __this->___U202CU202BU206AU200BU200FU200DU200DU206DU200FU202DU206AU206FU202BU202CU200EU206FU206CU206BU206CU200CU202AU202BU206BU200BU200EU202DU206CU202EU200DU206BU206DU200BU202EU202EU206AU206FU206BU206BU206FU202DU202E_0;
		__this->___U202CU202BU206AU200BU200FU200DU200DU206DU200FU202DU206AU206FU202BU202CU200EU206FU206CU206BU206CU200CU202AU202BU206BU200BU200EU202DU206CU202EU200DU206BU206DU200BU202EU202EU206AU206FU206BU206BU206FU202DU202E_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 6));
		G_B2_0 = ((int32_t)614118846);
		goto IL_000e;
	}

IL_0069:
	{
		__this->___U202CU202BU206AU200BU200FU200DU200DU206DU200FU202DU206AU206FU202BU202CU200EU206FU206CU206BU206CU200CU202AU202BU206BU200BU200EU202DU206CU202EU200DU206BU206DU200BU202EU202EU206AU206FU206BU206BU206FU202DU202E_0 = 0;
		uint32_t L_5 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)-1236607284)))^((int32_t)1510511470)));
		goto IL_000e;
	}

IL_007f:
	{
		uint32_t L_6 = __this->___U202CU202BU206AU200BU200FU200DU200DU206DU200FU202DU206AU206FU202BU202CU200EU206FU206CU206BU206CU200CU202AU202BU206BU200BU200EU202DU206CU202EU200DU206BU206DU200BU202EU202EU206AU206FU206BU206BU206FU202DU202E_0;
		if ((!(((uint32_t)L_6) < ((uint32_t)((int32_t)10)))))
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_7 = ((int32_t)1369669905);
		G_B10_0 = L_7;
		G_B10_1 = L_7;
		goto IL_0097;
	}

IL_0091:
	{
		int32_t L_8 = ((int32_t)1393520121);
		G_B10_0 = L_8;
		G_B10_1 = L_8;
	}

IL_0097:
	{
		G_B2_0 = G_B10_1;
		goto IL_000e;
	}

IL_009d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U200DU206AU206EU206DU206EU202BU202EU206FU202EU202BU206DU200FU206FU206CU206AU200DU206DU206DU202CU200BU202AU202CU206AU206AU200BU202BU200FU200BU202EU202CU200DU200DU200CU200FU200CU200CU206BU202EU206DU202EU202E_m22D5925512D8B10871F3FDDFF7F3F00EBE6D41D2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382*>(__this + _offset);
	U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U200DU206AU206EU206DU206EU202BU202EU206FU202EU202BU206DU200FU206FU206CU206AU200DU206DU206DU202CU200BU202AU202CU206AU206AU200BU202BU200FU200BU202EU202CU200DU200DU200CU200FU200CU200CU206BU202EU206DU202EU202E_m22D5925512D8B10871F3FDDFF7F3F00EBE6D41D2(_thisAdjusted, method);
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U200DU200EU200FU202BU200CU202BU206DU202EU206DU200EU200CU202BU206EU206FU202DU206DU206DU202AU202DU202BU202AU200CU206BU206EU200EU202BU202CU206DU200FU206FU206FU200BU206BU200FU200DU202EU202AU200BU206EU202BU202E_m44463DF00F56202E3BF2B244041DE37CD2120B5C (U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* G_B2_0 = NULL;
	U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* G_B3_1 = NULL;
	{
		uint32_t L_0 = __this->___U202CU202BU206AU200BU200FU200DU200DU206DU200FU202DU206AU206FU202BU202CU200EU206FU206CU206BU206CU200CU202AU202BU206BU200BU200EU202DU206CU202EU200DU206BU206DU200BU202EU202EU206AU206FU206BU206BU206FU202DU202E_0;
		G_B1_0 = __this;
		if ((!(((uint32_t)L_0) < ((uint32_t)7))))
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 7;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000d:
	{
		G_B3_0 = ((int32_t)10);
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		G_B3_1->___U202CU202BU206AU200BU200FU200DU200DU206DU200FU202DU206AU206FU202BU202CU200EU206FU206CU206BU206CU200CU202AU202BU206BU200BU200EU202DU206CU202EU200DU206BU206DU200BU202EU202EU206AU206FU206BU206BU206FU202DU202E_0 = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U200DU200EU200FU202BU200CU202BU206DU202EU206DU200EU200CU202BU206EU206FU202DU206DU206DU202AU202DU202BU202AU200CU206BU206EU200EU202BU202CU206DU200FU206FU206FU200BU206BU200FU200DU202EU202AU200BU206EU202BU202E_m44463DF00F56202E3BF2B244041DE37CD2120B5C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382*>(__this + _offset);
	U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U200DU200EU200FU202BU200CU202BU206DU202EU206DU200EU200CU202BU206EU206FU202DU206DU206DU202AU202DU202BU202AU200CU206BU206EU200EU202BU202CU206DU200FU206FU206FU200BU206BU200FU200DU202EU202AU200BU206EU202BU202E_m44463DF00F56202E3BF2B244041DE37CD2120B5C(_thisAdjusted, method);
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U206BU200EU200DU202BU202EU202DU202CU206BU202AU200DU200DU202DU200BU206EU206FU200BU200DU200BU206CU200BU202EU202DU200CU206AU206DU206AU200EU200DU200CU206CU202DU206FU206CU206EU206EU200DU200FU200EU200DU200FU202E_mDF07A0ED825F0CAC70837227DF02D57E90A72777 (U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* G_B2_0 = NULL;
	U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* G_B3_1 = NULL;
	{
		uint32_t L_0 = __this->___U202CU202BU206AU200BU200FU200DU200DU206DU200FU202DU206AU206FU202BU202CU200EU206FU206CU206BU206CU200CU202AU202BU206BU200BU200EU202DU206CU202EU200DU206BU206DU200BU202EU202EU206AU206FU206BU206BU206FU202DU202E_0;
		G_B1_0 = __this;
		if ((!(((uint32_t)L_0) < ((uint32_t)7))))
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 8;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000d:
	{
		G_B3_0 = ((int32_t)11);
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		G_B3_1->___U202CU202BU206AU200BU200FU200DU200DU206DU200FU202DU206AU206FU202BU202CU200EU206FU206CU206BU206CU200CU202AU202BU206BU200BU200EU202DU206CU202EU200DU206BU206DU200BU202EU202EU206AU206FU206BU206BU206FU202DU202E_0 = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U206BU200EU200DU202BU202EU202DU202CU206BU202AU200DU200DU202DU200BU206EU206FU200BU200DU200BU206CU200BU202EU202DU200CU206AU206DU206AU200EU200DU200CU206CU202DU206FU206CU206EU206EU200DU200FU200EU200DU200FU202E_mDF07A0ED825F0CAC70837227DF02D57E90A72777_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382*>(__this + _offset);
	U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U206BU200EU200DU202BU202EU202DU202CU206BU202AU200DU200DU202DU200BU206EU206FU200BU200DU200BU206CU200BU202EU202DU200CU206AU206DU206AU200EU200DU200CU206CU202DU206FU206CU206EU206EU200DU200FU200EU200DU200FU202E_mDF07A0ED825F0CAC70837227DF02D57E90A72777(_thisAdjusted, method);
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U202AU206BU206FU202AU202DU202EU200EU202AU202DU202BU206CU200BU200BU202DU202CU206FU200CU200FU206DU200CU200EU202DU200DU206EU200EU200FU202AU206DU206FU200BU202DU200CU200CU206EU202BU206DU200EU202DU202DU206DU202E_m893D26780D5AF493975DC15D030473A474937579 (U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* G_B2_0 = NULL;
	U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* G_B3_1 = NULL;
	{
		uint32_t L_0 = __this->___U202CU202BU206AU200BU200FU200DU200DU206DU200FU202DU206AU206FU202BU202CU200EU206FU206CU206BU206CU200CU202AU202BU206BU200BU200EU202DU206CU202EU200DU206BU206DU200BU202EU202EU206AU206FU206BU206BU206FU202DU202E_0;
		G_B1_0 = __this;
		if ((!(((uint32_t)L_0) < ((uint32_t)7))))
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = ((int32_t)9);
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000e:
	{
		G_B3_0 = ((int32_t)11);
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		G_B3_1->___U202CU202BU206AU200BU200FU200DU200DU206DU200FU202DU206AU206FU202BU202CU200EU206FU206CU206BU206CU200CU202AU202BU206BU200BU200EU202DU206CU202EU200DU206BU206DU200BU202EU202EU206AU206FU206BU206BU206FU202DU202E_0 = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U202AU206BU206FU202AU202DU202EU200EU202AU202DU202BU206CU200BU200BU202DU202CU206FU200CU200FU206DU200CU200EU202DU200DU206EU200EU200FU202AU206DU206FU200BU202DU200CU200CU206EU202BU206DU200EU202DU202DU206DU202E_m893D26780D5AF493975DC15D030473A474937579_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382*>(__this + _offset);
	U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U202AU206BU206FU202AU202DU202EU200EU202AU202DU202BU206CU200BU200BU202DU202CU206FU200CU200FU206DU200CU200EU202DU200DU206EU200EU200FU202AU206DU206FU200BU202DU200CU200CU206EU202BU206DU200EU202DU202DU206DU202E_m893D26780D5AF493975DC15D030473A474937579(_thisAdjusted, method);
}
// System.Boolean <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U202AU206EU200CU202CU200DU206DU200EU202CU206EU200EU206FU202AU200EU202CU206DU202BU200DU206AU200CU206BU206AU200FU206EU200EU206CU206BU202AU200FU200DU206CU206EU200FU202DU206EU200DU200EU206CU202AU200CU202BU202E_m3C206BEA2DD7805E7C3A4718CDA5AE1939AD37E9 (U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___U202CU202BU206AU200BU200FU200DU200DU206DU200FU202DU206AU206FU202BU202CU200EU206FU206CU206BU206CU200CU202AU202BU206BU200BU200EU202DU206CU202EU200DU206BU206DU200BU202EU202EU206AU206FU206BU206BU206FU202DU202E_0;
		return (bool)((!(((uint32_t)L_0) >= ((uint32_t)7)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U202AU206EU200CU202CU200DU206DU200EU202CU206EU200EU206FU202AU200EU202CU206DU202BU200DU206AU200CU206BU206AU200FU206EU200EU206CU206BU202AU200FU200DU206CU206EU200FU202DU206EU200DU200EU206CU202AU200CU202BU202E_m3C206BEA2DD7805E7C3A4718CDA5AE1939AD37E9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_tBD0CD145DB3E395FC6532953620DDBB581217382*>(__this + _offset);
	bool _returnValue;
	_returnValue = U202AU206BU200BU206BU202DU206FU202BU202CU200BU206FU206DU200CU202DU200BU200FU202CU200BU206CU200DU206BU202EU206AU202CU200EU200DU200FU206AU200FU206BU206BU206AU200CU202AU200EU202CU206BU206AU206FU206DU200FU202E_U202AU206EU200CU202CU200DU206DU200EU202CU206EU200EU206FU202AU200EU202CU206DU202BU200DU206AU200CU206BU206AU200FU206EU200EU206CU206BU202AU200FU200DU206CU206EU200FU202DU206EU200DU200EU206CU202AU200CU202BU202E_m3C206BEA2DD7805E7C3A4718CDA5AE1939AD37E9(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AdLoaderClient__ntP80MzJDFgLG7rla6v0fAaliBf_m043B63534047341D9C2C2870A8BE3B2E0E152405(intptr_t p0, intptr_t p1, char* p2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter 'p2' to managed representation
	String_t* _p2_unmarshaled = NULL;
	_p2_unmarshaled = il2cpp_codegen_marshal_string_result(p2);

	// Managed method invocation
	AdLoaderClient__ntP80MzJDFgLG7rla6v0fAaliBf_m043B63534047341D9C2C2870A8BE3B2E0E152405(p0, p1, _p2_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AdLoaderClient__puFBI5ScfwSMkuQg05abil8OXCEA_mADA4297DB604AC3CDC23E1A98AC186E3C2CD9A3D(intptr_t p0, intptr_t p1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	AdLoaderClient__puFBI5ScfwSMkuQg05abil8OXCEA_mADA4297DB604AC3CDC23E1A98AC186E3C2CD9A3D(p0, p1, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AdLoaderClient__mL3lFUhDMo1C1G0gcZjWUWEBOTD_mADD4D33CCC6B477230E0C02E51CA3C1F0CE7E2CD(intptr_t p0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	AdLoaderClient__mL3lFUhDMo1C1G0gcZjWUWEBOTD_mADD4D33CCC6B477230E0C02E51CA3C1F0CE7E2CD(p0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AdLoaderClient__hwkIXdvVTMzmXJbCjLlHx4afHwA_mBFFEF67DB0FD6E8C8BA3B971D7397BF3E7F6902C(intptr_t p0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	AdLoaderClient__hwkIXdvVTMzmXJbCjLlHx4afHwA_mBFFEF67DB0FD6E8C8BA3B971D7397BF3E7F6902C(p0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AdLoaderClient__GbDZM1zGDd62YIKWvo34aLoK0hJ_mF8668A784452427A8F3B2DF569AE2AEFDD295057(intptr_t p0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	AdLoaderClient__GbDZM1zGDd62YIKWvo34aLoK0hJ_mF8668A784452427A8F3B2DF569AE2AEFDD295057(p0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AdLoaderClient__tQ8p2ZSMHwgUIO5TT8bZ33raxjD_m53EDCE6C64AA5AEA7F6177DF076A2D935B92F258(intptr_t p0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	AdLoaderClient__tQ8p2ZSMHwgUIO5TT8bZ33raxjD_m53EDCE6C64AA5AEA7F6177DF076A2D935B92F258(p0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AdLoaderClient__KXiot2XhBIWIVBIyEBvKgzJXRiO_m16C218EAE6C95C2685E458717EE50FEEC009EE2E(intptr_t p0, intptr_t p1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	AdLoaderClient__KXiot2XhBIWIVBIyEBvKgzJXRiO_m16C218EAE6C95C2685E458717EE50FEEC009EE2E(p0, p1, NULL);

}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::.ctor(GoogleMobileAds.Common.AdLoaderClientArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient__ctor_mAFBE1F5B092352C194AF1755487E1EBCF031A6E6 (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdLoaderClient__GbDZM1zGDd62YIKWvo34aLoK0hJ_mF8668A784452427A8F3B2DF569AE2AEFDD295057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdLoaderClient__KXiot2XhBIWIVBIyEBvKgzJXRiO_m16C218EAE6C95C2685E458717EE50FEEC009EE2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdLoaderClient__hwkIXdvVTMzmXJbCjLlHx4afHwA_mBFFEF67DB0FD6E8C8BA3B971D7397BF3E7F6902C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdLoaderClient__mL3lFUhDMo1C1G0gcZjWUWEBOTD_mADD4D33CCC6B477230E0C02E51CA3C1F0CE7E2CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdLoaderClient__ntP80MzJDFgLG7rla6v0fAaliBf_m043B63534047341D9C2C2870A8BE3B2E0E152405_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdLoaderClient__puFBI5ScfwSMkuQg05abil8OXCEA_mADA4297DB604AC3CDC23E1A98AC186E3C2CD9A3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdLoaderClient__tQ8p2ZSMHwgUIO5TT8bZ33raxjD_m53EDCE6C64AA5AEA7F6177DF076A2D935B92F258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mF539FDC7C25A8DF152D95DE0711708F1806E424A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mB0D824DF87A2347FE9B6F7EDF88397FBC825008F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_get_Count_m79A3D1AF30F9D23D4B094A34F713E5C519258A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_CopyTo_m87398D95BED8C0626A669D782ECE31DE73392BDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	NativeAdTypes_t667526929D789B3FAE35DF13A63FBAF70A5E8733 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	uint32_t V_3 = 0;
	intptr_t G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	intptr_t G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* G_B8_0 = NULL;
	intptr_t G_B8_1;
	memset((&G_B8_1), 0, sizeof(G_B8_1));
	_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* G_B7_0 = NULL;
	intptr_t G_B7_1;
	memset((&G_B7_1), 0, sizeof(G_B7_1));
	_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* G_B10_0 = NULL;
	_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* G_B10_1 = NULL;
	intptr_t G_B10_2;
	memset((&G_B10_2), 0, sizeof(G_B10_2));
	_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* G_B9_0 = NULL;
	_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* G_B9_1 = NULL;
	intptr_t G_B9_2;
	memset((&G_B9_2), 0, sizeof(G_B9_2));
	_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* G_B12_0 = NULL;
	_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* G_B12_1 = NULL;
	_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* G_B12_2 = NULL;
	intptr_t G_B12_3;
	memset((&G_B12_3), 0, sizeof(G_B12_3));
	_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* G_B11_0 = NULL;
	_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* G_B11_1 = NULL;
	_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* G_B11_2 = NULL;
	intptr_t G_B11_3;
	memset((&G_B11_3), 0, sizeof(G_B11_3));
	_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* G_B14_0 = NULL;
	_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* G_B14_1 = NULL;
	_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* G_B14_2 = NULL;
	_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* G_B14_3 = NULL;
	intptr_t G_B14_4;
	memset((&G_B14_4), 0, sizeof(G_B14_4));
	_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* G_B13_0 = NULL;
	_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* G_B13_1 = NULL;
	_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* G_B13_2 = NULL;
	_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* G_B13_3 = NULL;
	intptr_t G_B13_4;
	memset((&G_B13_4), 0, sizeof(G_B13_4));
	_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218* G_B16_0 = NULL;
	_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* G_B16_1 = NULL;
	_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* G_B16_2 = NULL;
	_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* G_B16_3 = NULL;
	_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* G_B16_4 = NULL;
	intptr_t G_B16_5;
	memset((&G_B16_5), 0, sizeof(G_B16_5));
	_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218* G_B15_0 = NULL;
	_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* G_B15_1 = NULL;
	_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* G_B15_2 = NULL;
	_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* G_B15_3 = NULL;
	_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* G_B15_4 = NULL;
	intptr_t G_B15_5;
	memset((&G_B15_5), 0, sizeof(G_B15_5));
	_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E* G_B18_0 = NULL;
	_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218* G_B18_1 = NULL;
	_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* G_B18_2 = NULL;
	_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* G_B18_3 = NULL;
	_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* G_B18_4 = NULL;
	_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* G_B18_5 = NULL;
	intptr_t G_B18_6;
	memset((&G_B18_6), 0, sizeof(G_B18_6));
	_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E* G_B17_0 = NULL;
	_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218* G_B17_1 = NULL;
	_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* G_B17_2 = NULL;
	_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* G_B17_3 = NULL;
	_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* G_B17_4 = NULL;
	_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* G_B17_5 = NULL;
	intptr_t G_B17_6;
	memset((&G_B17_6), 0, sizeof(G_B17_6));
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_0;
		L_0 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D(__this, NULL);
		intptr_t L_1;
		L_1 = GCHandle_op_Explicit_m03DD8D9FB45D565431455A6EE5C30A87305EF73C_inline(L_0, NULL);
		__this->____dRkT5MyUguF3xXYV4ZZo31lbNfj_1 = L_1;
		AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* L_2 = p0;
		NullCheck(L_2);
		Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_3;
		L_3 = AdLoaderClientArgs_get_FormatIds_m6731C0FF425BE0CC73D07B3C07A81D5A5C33CF4A_inline(L_2, NULL);
		__this->____LHSgsAlw54ubFgRL393JGnRmbqBA_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____LHSgsAlw54ubFgRL393JGnRmbqBA_4), (void*)L_3);
		Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_4 = __this->____LHSgsAlw54ubFgRL393JGnRmbqBA_4;
		NullCheck(L_4);
		KeyCollection_t95FD5642BC2C9C7777B7A737F21A78E0AFDD8AA0* L_5;
		L_5 = Dictionary_2_get_Keys_mF539FDC7C25A8DF152D95DE0711708F1806E424A(L_4, Dictionary_2_get_Keys_mF539FDC7C25A8DF152D95DE0711708F1806E424A_RuntimeMethod_var);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = KeyCollection_get_Count_m79A3D1AF30F9D23D4B094A34F713E5C519258A8A(L_5, KeyCollection_get_Count_m79A3D1AF30F9D23D4B094A34F713E5C519258A8A_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_8 = __this->____LHSgsAlw54ubFgRL393JGnRmbqBA_4;
		NullCheck(L_8);
		KeyCollection_t95FD5642BC2C9C7777B7A737F21A78E0AFDD8AA0* L_9;
		L_9 = Dictionary_2_get_Keys_mF539FDC7C25A8DF152D95DE0711708F1806E424A(L_8, Dictionary_2_get_Keys_mF539FDC7C25A8DF152D95DE0711708F1806E424A_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10;
		L_10 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131(L_9, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_0;
		NullCheck(L_10);
		List_1_CopyTo_m87398D95BED8C0626A669D782ECE31DE73392BDC(L_10, L_11, List_1_CopyTo_m87398D95BED8C0626A669D782ECE31DE73392BDC_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_1), sizeof(NativeAdTypes_t667526929D789B3FAE35DF13A63FBAF70A5E8733));
		NativeAdTypes_t667526929D789B3FAE35DF13A63FBAF70A5E8733 L_12 = V_1;
		__this->____rscWxY3wnvdbnLGD2oQEvlFkedi_3 = L_12;
		V_2 = (bool)0;
		AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* L_13 = p0;
		NullCheck(L_13);
		HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4* L_14;
		L_14 = AdLoaderClientArgs_get_AdTypes_m3286F08DA89AEF0941C3580385F858CE95635BD4_inline(L_13, NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = HashSet_1_Contains_mB0D824DF87A2347FE9B6F7EDF88397FBC825008F(L_14, 1, HashSet_1_Contains_mB0D824DF87A2347FE9B6F7EDF88397FBC825008F_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		V_2 = (bool)1;
		NativeAdTypes_t667526929D789B3FAE35DF13A63FBAF70A5E8733* L_16 = (&__this->____rscWxY3wnvdbnLGD2oQEvlFkedi_3);
		L_16->___NativeAd_1 = 1;
	}

IL_007c:
	{
		AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* L_17 = p0;
		NullCheck(L_17);
		HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4* L_18;
		L_18 = AdLoaderClientArgs_get_AdTypes_m3286F08DA89AEF0941C3580385F858CE95635BD4_inline(L_17, NULL);
		NullCheck(L_18);
		bool L_19;
		L_19 = HashSet_1_Contains_mB0D824DF87A2347FE9B6F7EDF88397FBC825008F(L_18, 0, HashSet_1_Contains_mB0D824DF87A2347FE9B6F7EDF88397FBC825008F_RuntimeMethod_var);
		if (!L_19)
		{
			goto IL_0098;
		}
	}
	{
		V_2 = (bool)0;
		NativeAdTypes_t667526929D789B3FAE35DF13A63FBAF70A5E8733* L_20 = (&__this->____rscWxY3wnvdbnLGD2oQEvlFkedi_3);
		L_20->___CustomNativeAd_0 = 1;
	}

IL_0098:
	{
		intptr_t L_21 = __this->____dRkT5MyUguF3xXYV4ZZo31lbNfj_1;
		AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* L_22 = p0;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = AdLoaderClientArgs_get_AdUnitId_m9CB2CEDA6950AE81735C721A64024FEE084C1095_inline(L_22, NULL);
		AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* L_24 = p0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = AdLoaderClientArgs_get_NumberOfAdsToLoad_m16518458445D87FF740EE67FB2117837684591E0_inline(L_24, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = V_0;
		NullCheck(L_27);
		NativeAdTypes_t667526929D789B3FAE35DF13A63FBAF70A5E8733* L_28 = (&__this->____rscWxY3wnvdbnLGD2oQEvlFkedi_3);
		bool L_29 = V_2;
		intptr_t L_30;
		L_30 = _za1hl4laeXrpCPhipDgCWTaGcooA__mKIQ1lKbrY4wFOSCkKFs3LPHi8R_m1449A05966D46A26C0C4F2A5524273ADAF803DB6(L_21, L_23, L_25, L_26, ((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28, L_29, NULL);
		AdLoaderClient__27WkZ2tzRnEL1KY3lGwBaN9JfCU_mF47356F9A72EA52802EE073495131F83F91B5031(__this, L_30, NULL);
		intptr_t L_31;
		L_31 = AdLoaderClient__jeiOgb5chxB6W7oubrqfMOdSXGC_m32E9CB66FFE1630C904F88E645D96A941ED4D14A_inline(__this, NULL);
		_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* L_32 = ((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____z4rTkE1tJtIDXEBhz83AtBa5iei_13;
		G_B5_0 = L_31;
		if (L_32)
		{
			G_B6_0 = L_31;
			goto IL_00de;
		}
	}
	{
		_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* L_33 = (_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100*)il2cpp_codegen_object_new(_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		_pkatmrHxDeDh1gMbaNJt63dgPbDA__ctor_m2569D7A248D290B96796FE0E1D685F26B0A14F1F(L_33, NULL, (intptr_t)((void*)AdLoaderClient__ntP80MzJDFgLG7rla6v0fAaliBf_m043B63534047341D9C2C2870A8BE3B2E0E152405_RuntimeMethod_var), NULL);
		((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____z4rTkE1tJtIDXEBhz83AtBa5iei_13 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____z4rTkE1tJtIDXEBhz83AtBa5iei_13), (void*)L_33);
		G_B6_0 = G_B5_0;
	}

IL_00de:
	{
		_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* L_34 = ((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____z4rTkE1tJtIDXEBhz83AtBa5iei_13;
		_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* L_35 = ((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____6ai65su3oR3b7hjWasYZCGL5N3A_14;
		G_B7_0 = L_34;
		G_B7_1 = G_B6_0;
		if (L_35)
		{
			G_B8_0 = L_34;
			G_B8_1 = G_B6_0;
			goto IL_00fb;
		}
	}
	{
		_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* L_36 = (_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3*)il2cpp_codegen_object_new(_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		_vXfQseAIE9IbPtrDH4WEEXJFdiA__ctor_m0DF7FE81BF952B416B1C1D0097DDE8060DC85E12(L_36, NULL, (intptr_t)((void*)AdLoaderClient__puFBI5ScfwSMkuQg05abil8OXCEA_mADA4297DB604AC3CDC23E1A98AC186E3C2CD9A3D_RuntimeMethod_var), NULL);
		((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____6ai65su3oR3b7hjWasYZCGL5N3A_14 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____6ai65su3oR3b7hjWasYZCGL5N3A_14), (void*)L_36);
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
	}

IL_00fb:
	{
		_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* L_37 = ((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____6ai65su3oR3b7hjWasYZCGL5N3A_14;
		_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* L_38 = ((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____HMfyqYXBB9LMg7alsU2ungNM0P0_15;
		G_B9_0 = L_37;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		if (L_38)
		{
			G_B10_0 = L_37;
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			goto IL_0118;
		}
	}
	{
		_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* L_39 = (_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70*)il2cpp_codegen_object_new(_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		_GofQR4EAfX2hD0bdVIwCH0WZwGz__ctor_m663D7B7657711F3F5FEAE32D4F28C78B4F0C9701(L_39, NULL, (intptr_t)((void*)AdLoaderClient__mL3lFUhDMo1C1G0gcZjWUWEBOTD_mADD4D33CCC6B477230E0C02E51CA3C1F0CE7E2CD_RuntimeMethod_var), NULL);
		((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____HMfyqYXBB9LMg7alsU2ungNM0P0_15 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____HMfyqYXBB9LMg7alsU2ungNM0P0_15), (void*)L_39);
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}

IL_0118:
	{
		_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* L_40 = ((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____HMfyqYXBB9LMg7alsU2ungNM0P0_15;
		_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* L_41 = ((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____xc9xEOzd1P0cvqTNfASCRStOXlD_16;
		G_B11_0 = L_40;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
		if (L_41)
		{
			G_B12_0 = L_40;
			G_B12_1 = G_B10_0;
			G_B12_2 = G_B10_1;
			G_B12_3 = G_B10_2;
			goto IL_0135;
		}
	}
	{
		_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* L_42 = (_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F*)il2cpp_codegen_object_new(_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		_oYCq6VgAsLvfIJRn9pDMOfQveh6__ctor_mF331BB189B4FD82D843A9E1617FE3D388A642F55(L_42, NULL, (intptr_t)((void*)AdLoaderClient__hwkIXdvVTMzmXJbCjLlHx4afHwA_mBFFEF67DB0FD6E8C8BA3B971D7397BF3E7F6902C_RuntimeMethod_var), NULL);
		((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____xc9xEOzd1P0cvqTNfASCRStOXlD_16 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____xc9xEOzd1P0cvqTNfASCRStOXlD_16), (void*)L_42);
		G_B12_0 = G_B11_0;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_0135:
	{
		_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* L_43 = ((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____xc9xEOzd1P0cvqTNfASCRStOXlD_16;
		_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218* L_44 = ((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____0SshYjbXCrT6Xv4vOXu53C6DJFq_17;
		G_B13_0 = L_43;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
		G_B13_4 = G_B12_3;
		if (L_44)
		{
			G_B14_0 = L_43;
			G_B14_1 = G_B12_0;
			G_B14_2 = G_B12_1;
			G_B14_3 = G_B12_2;
			G_B14_4 = G_B12_3;
			goto IL_0152;
		}
	}
	{
		_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218* L_45 = (_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218*)il2cpp_codegen_object_new(_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		_fz51zdLhxoaDkS13yalGYMD9apl__ctor_m457123DA1D2A5AD1EFAB763941DBBE2004D53255(L_45, NULL, (intptr_t)((void*)AdLoaderClient__GbDZM1zGDd62YIKWvo34aLoK0hJ_mF8668A784452427A8F3B2DF569AE2AEFDD295057_RuntimeMethod_var), NULL);
		((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____0SshYjbXCrT6Xv4vOXu53C6DJFq_17 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____0SshYjbXCrT6Xv4vOXu53C6DJFq_17), (void*)L_45);
		G_B14_0 = G_B13_0;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		G_B14_4 = G_B13_4;
	}

IL_0152:
	{
		_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218* L_46 = ((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____0SshYjbXCrT6Xv4vOXu53C6DJFq_17;
		_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E* L_47 = ((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____JYGF3O2kfHTWs3knRWt32FUbSZC_18;
		G_B15_0 = L_46;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
		G_B15_3 = G_B14_2;
		G_B15_4 = G_B14_3;
		G_B15_5 = G_B14_4;
		if (L_47)
		{
			G_B16_0 = L_46;
			G_B16_1 = G_B14_0;
			G_B16_2 = G_B14_1;
			G_B16_3 = G_B14_2;
			G_B16_4 = G_B14_3;
			G_B16_5 = G_B14_4;
			goto IL_016f;
		}
	}
	{
		_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E* L_48 = (_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E*)il2cpp_codegen_object_new(_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		_RLv7HtUdTeAbp0VxmvKZJm3Yu0M__ctor_mEAD3661ED7C543F77CC2AA57B47680FFC23C106D(L_48, NULL, (intptr_t)((void*)AdLoaderClient__tQ8p2ZSMHwgUIO5TT8bZ33raxjD_m53EDCE6C64AA5AEA7F6177DF076A2D935B92F258_RuntimeMethod_var), NULL);
		((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____JYGF3O2kfHTWs3knRWt32FUbSZC_18 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____JYGF3O2kfHTWs3knRWt32FUbSZC_18), (void*)L_48);
		G_B16_0 = G_B15_0;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
		G_B16_4 = G_B15_4;
		G_B16_5 = G_B15_5;
	}

IL_016f:
	{
		_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E* L_49 = ((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____JYGF3O2kfHTWs3knRWt32FUbSZC_18;
		_QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2* L_50 = ((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____ZBbL6m53IjZuwew6qaeSDg1wCYG_19;
		G_B17_0 = L_49;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
		G_B17_4 = G_B16_3;
		G_B17_5 = G_B16_4;
		G_B17_6 = G_B16_5;
		if (L_50)
		{
			G_B18_0 = L_49;
			G_B18_1 = G_B16_0;
			G_B18_2 = G_B16_1;
			G_B18_3 = G_B16_2;
			G_B18_4 = G_B16_3;
			G_B18_5 = G_B16_4;
			G_B18_6 = G_B16_5;
			goto IL_018c;
		}
	}
	{
		_QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2* L_51 = (_QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2*)il2cpp_codegen_object_new(_QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		_QIxxmcONDiLd99UXYm2TFDihCVS__ctor_mDE9137F76F41DAAB80D1BCD32514AA7B94936426(L_51, NULL, (intptr_t)((void*)AdLoaderClient__KXiot2XhBIWIVBIyEBvKgzJXRiO_m16C218EAE6C95C2685E458717EE50FEEC009EE2E_RuntimeMethod_var), NULL);
		((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____ZBbL6m53IjZuwew6qaeSDg1wCYG_19 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____ZBbL6m53IjZuwew6qaeSDg1wCYG_19), (void*)L_51);
		G_B18_0 = G_B17_0;
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		G_B18_4 = G_B17_4;
		G_B18_5 = G_B17_5;
		G_B18_6 = G_B17_6;
	}

IL_018c:
	{
		_QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2* L_52 = ((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____ZBbL6m53IjZuwew6qaeSDg1wCYG_19;
		_za1hl4laeXrpCPhipDgCWTaGcooA__H4HqX5w5COrC5eq3907KChaofbM_m767C94EF06B8D99112EC10AF7909A20102FA8B68(G_B18_6, G_B18_5, G_B18_4, G_B18_3, G_B18_2, G_B18_1, G_B18_0, L_52, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::add_OnCustomNativeAdLoaded(System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnCustomNativeAdLoaded_m2EB83A0ED43187C55A29B92A7417DB813B50AB64 (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_0 = NULL;
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_0 = __this->____eUxqo0ZGBuDWzNGv69GKZOMLgLf_5;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)2046292660);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1086476374)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_002d;
			}
			case 3:
			{
				goto IL_006c;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)1599345267);
		goto IL_000c;
	}

IL_0036:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED** L_3 = (&__this->____eUxqo0ZGBuDWzNGv69GKZOMLgLf_5);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_4 = V_1;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_7 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*>(L_3, ((EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)Castclass((RuntimeObject*)L_6, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_9 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_9) == ((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_10))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)-525059502);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)-2083598017);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-1717901329)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::remove_OnCustomNativeAdLoaded(System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnCustomNativeAdLoaded_m9665516CF24D8F548184775CF6B4F9825C082727 (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_0 = NULL;
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_0 = __this->____eUxqo0ZGBuDWzNGv69GKZOMLgLf_5;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1034409174);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1646018472)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_007f;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_004e;
			}
			case 3:
			{
				goto IL_0076;
			}
			case 4:
			{
				goto IL_0007;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_2 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_3 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_2) == ((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_3)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = ((int32_t)-880941074);
		G_B7_0 = L_4;
		G_B7_1 = L_4;
		goto IL_0043;
	}

IL_003d:
	{
		int32_t L_5 = ((int32_t)-1801673287);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
	}

IL_0043:
	{
		uint32_t L_6 = V_2;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)2083200052)))));
		goto IL_000c;
	}

IL_004e:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED** L_7 = (&__this->____eUxqo0ZGBuDWzNGv69GKZOMLgLf_5);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_8 = V_1;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_9 = ___value0;
		Delegate_t* L_10;
		L_10 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_8, L_9, NULL);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_11 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_12;
		L_12 = InterlockedCompareExchangeImpl<EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*>(L_7, ((EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)Castclass((RuntimeObject*)L_10, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var)), L_11);
		V_0 = L_12;
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-1356992283)))^((int32_t)669697629)));
		goto IL_000c;
	}

IL_0076:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_14 = V_0;
		V_1 = L_14;
		G_B2_0 = ((int32_t)1172938975);
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::add_OnCustomNativeAdClicked(System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnCustomNativeAdClicked_m823FA60E6F440DE0D9764117D3F7788A48A020F3 (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_0 = NULL;
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_0 = __this->____1uTdEAfal6KWOmlsnUtgCoceOPBb_6;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1434664795);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)831664438)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0007;
			}
			case 3:
			{
				goto IL_006c;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)1471606114);
		goto IL_000c;
	}

IL_0036:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED** L_3 = (&__this->____1uTdEAfal6KWOmlsnUtgCoceOPBb_6);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_4 = V_1;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_7 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*>(L_3, ((EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)Castclass((RuntimeObject*)L_6, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_9 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_9) == ((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_10))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)-1794866627);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)-2042511869);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-114658178)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::remove_OnCustomNativeAdClicked(System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnCustomNativeAdClicked_m6B121ECC91174358F9720DBEA01D5ED6145DEE85 (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_0 = NULL;
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_0 = __this->____1uTdEAfal6KWOmlsnUtgCoceOPBb_6;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-645969530);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-917860884)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_0059;
			}
			case 2:
			{
				goto IL_0029;
			}
		}
	}
	{
		goto IL_0059;
	}

IL_0029:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_2 = V_0;
		V_1 = L_2;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED** L_3 = (&__this->____1uTdEAfal6KWOmlsnUtgCoceOPBb_6);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_4 = V_1;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_7 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*>(L_3, ((EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)Castclass((RuntimeObject*)L_6, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_9 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_10 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_9) == ((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_10)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ((int32_t)-645969530);
		G_B7_0 = L_11;
		G_B7_1 = L_11;
		goto IL_0056;
	}

IL_0050:
	{
		int32_t L_12 = ((int32_t)-1540570482);
		G_B7_0 = L_12;
		G_B7_1 = L_12;
	}

IL_0056:
	{
		G_B2_0 = G_B7_1;
		goto IL_000c;
	}

IL_0059:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnAdFailedToLoad_m2179B133AFB9C1AB20F1F7CEEAE56E38C41483BC (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* V_0 = NULL;
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_0 = __this->____nusz6z1H5plNUJAx1m37sNu0WlD_7;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1792939141);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1449376546)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_007f;
			}
			case 1:
			{
				goto IL_0076;
			}
			case 2:
			{
				goto IL_0007;
			}
			case 3:
			{
				goto IL_004e;
			}
			case 4:
			{
				goto IL_0031;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_2 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_3 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)L_2) == ((RuntimeObject*)(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = ((int32_t)-691282136);
		G_B7_0 = L_4;
		G_B7_1 = L_4;
		goto IL_0043;
	}

IL_003d:
	{
		int32_t L_5 = ((int32_t)-3973135);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
	}

IL_0043:
	{
		uint32_t L_6 = V_2;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)-1091450993)))));
		goto IL_000c;
	}

IL_004e:
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50** L_7 = (&__this->____nusz6z1H5plNUJAx1m37sNu0WlD_7);
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_8 = V_1;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_9 = ___value0;
		Delegate_t* L_10;
		L_10 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_8, L_9, NULL);
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_11 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_12;
		L_12 = InterlockedCompareExchangeImpl<EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*>(L_7, ((EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)Castclass((RuntimeObject*)L_10, EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var)), L_11);
		V_0 = L_12;
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-801827275)))^((int32_t)-473087905)));
		goto IL_000c;
	}

IL_0076:
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_14 = V_0;
		V_1 = L_14;
		G_B2_0 = ((int32_t)1434055343);
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnAdFailedToLoad_m3CE21048604557B3A0ACE8834D7850916D18C801 (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* V_0 = NULL;
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_0 = __this->____nusz6z1H5plNUJAx1m37sNu0WlD_7;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)900288645);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)493100210)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_007f;
			}
			case 3:
			{
				goto IL_0062;
			}
			case 4:
			{
				goto IL_003a;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)658070887);
		goto IL_000c;
	}

IL_003a:
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50** L_3 = (&__this->____nusz6z1H5plNUJAx1m37sNu0WlD_7);
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_4 = V_1;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_7 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*>(L_3, ((EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)Castclass((RuntimeObject*)L_6, EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		uint32_t L_9 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)1923819315)))^((int32_t)-2011363393)));
		goto IL_000c;
	}

IL_0062:
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_10 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_11 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)L_10) == ((RuntimeObject*)(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)L_11))))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_12 = ((int32_t)834623723);
		G_B9_0 = L_12;
		G_B9_1 = L_12;
		goto IL_0074;
	}

IL_006e:
	{
		int32_t L_13 = ((int32_t)1306779841);
		G_B9_0 = L_13;
		G_B9_1 = L_13;
	}

IL_0074:
	{
		uint32_t L_14 = V_2;
		G_B2_0 = ((int32_t)(G_B9_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)1887963330)))));
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::add_OnNativeAdLoaded(System.EventHandler`1<GoogleMobileAds.Common.NativeClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnNativeAdLoaded_mFA9525D2E0FA2318A5AAE5DD5CA0A85B4951D10C (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* V_0 = NULL;
	EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_0 = __this->____aDGwi6zfbBrhxAg39YlzrSlUXo_8;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1579201160);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)137990908)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_0057;
			}
			case 2:
			{
				goto IL_007f;
			}
			case 3:
			{
				goto IL_003a;
			}
			case 4:
			{
				goto IL_0031;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)1682115523);
		goto IL_000c;
	}

IL_003a:
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_3 = V_0;
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_4 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*)L_3) == ((RuntimeObject*)(EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*)L_4))))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_5 = ((int32_t)243011365);
		G_B8_0 = L_5;
		G_B8_1 = L_5;
		goto IL_004c;
	}

IL_0046:
	{
		int32_t L_6 = ((int32_t)603773450);
		G_B8_0 = L_6;
		G_B8_1 = L_6;
	}

IL_004c:
	{
		uint32_t L_7 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)-1466883943)))));
		goto IL_000c;
	}

IL_0057:
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67** L_8 = (&__this->____aDGwi6zfbBrhxAg39YlzrSlUXo_8);
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_9 = V_1;
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_10 = ___value0;
		Delegate_t* L_11;
		L_11 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_9, L_10, NULL);
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_12 = V_0;
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_13;
		L_13 = InterlockedCompareExchangeImpl<EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*>(L_8, ((EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*)Castclass((RuntimeObject*)L_11, EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67_il2cpp_TypeInfo_var)), L_12);
		V_0 = L_13;
		uint32_t L_14 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)1724344995)))^((int32_t)1080940595)));
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::remove_OnNativeAdLoaded(System.EventHandler`1<GoogleMobileAds.Common.NativeClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnNativeAdLoaded_mAA65B998A889397F125C364149D24F18283F2EBF (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* V_0 = NULL;
	EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_0 = __this->____aDGwi6zfbBrhxAg39YlzrSlUXo_8;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)947799641);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1008266210)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_007f;
			}
			case 1:
			{
				goto IL_0076;
			}
			case 2:
			{
				goto IL_004e;
			}
			case 3:
			{
				goto IL_0031;
			}
			case 4:
			{
				goto IL_0007;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_2 = V_0;
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_3 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*)L_2) == ((RuntimeObject*)(EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*)L_3)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = ((int32_t)-1817397544);
		G_B7_0 = L_4;
		G_B7_1 = L_4;
		goto IL_0043;
	}

IL_003d:
	{
		int32_t L_5 = ((int32_t)-1038197975);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
	}

IL_0043:
	{
		uint32_t L_6 = V_2;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)1381247121)))));
		goto IL_000c;
	}

IL_004e:
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67** L_7 = (&__this->____aDGwi6zfbBrhxAg39YlzrSlUXo_8);
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_8 = V_1;
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_9 = ___value0;
		Delegate_t* L_10;
		L_10 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_8, L_9, NULL);
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_11 = V_0;
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_12;
		L_12 = InterlockedCompareExchangeImpl<EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*>(L_7, ((EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*)Castclass((RuntimeObject*)L_10, EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67_il2cpp_TypeInfo_var)), L_11);
		V_0 = L_12;
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-1759033267)))^((int32_t)1671250087)));
		goto IL_000c;
	}

IL_0076:
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_14 = V_0;
		V_1 = L_14;
		G_B2_0 = ((int32_t)503471974);
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::add_OnNativeAdImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnNativeAdImpression_mA63D7EB9197D5FD8738F579F777C5E0584367811 (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->____arWxo3PYiXdhwATjPRqTJydQ0uh_9;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-247189657);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-453793750)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_006c;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)-557347612);
		goto IL_000c;
	}

IL_0036:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_3 = (&__this->____arWxo3PYiXdhwATjPRqTJydQ0uh_9);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_3, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_6, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)-1762445851);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)-1205942121);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-1691801065)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::remove_OnNativeAdImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnNativeAdImpression_mDE9E75DC2F30633BD161D094DEDF82E61800EEA7 (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->____arWxo3PYiXdhwATjPRqTJydQ0uh_9;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)231709576);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)309341327)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_0007;
			}
			case 3:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)2081189715);
		goto IL_000c;
	}

IL_0036:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_3 = (&__this->____arWxo3PYiXdhwATjPRqTJydQ0uh_9);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_3, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_6, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)-1373818800);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)-1886556070);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-509999814)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::add_OnNativeAdClicked(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnNativeAdClicked_m18C6CBF79A8C1C5A770034940FE59D2674A2F1D3 (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->____VynBjqN6ZSsQORpuxm4cMtY2tLq_10;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1618316410);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)999507481)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_0057;
			}
			case 2:
			{
				goto IL_0031;
			}
			case 3:
			{
				goto IL_007f;
			}
			case 4:
			{
				goto IL_003a;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)1627984600);
		goto IL_000c;
	}

IL_003a:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_3) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_4)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_5 = ((int32_t)2074564216);
		G_B8_0 = L_5;
		G_B8_1 = L_5;
		goto IL_004c;
	}

IL_0046:
	{
		int32_t L_6 = ((int32_t)1203537015);
		G_B8_0 = L_6;
		G_B8_1 = L_6;
	}

IL_004c:
	{
		uint32_t L_7 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)-2107946205)))));
		goto IL_000c;
	}

IL_0057:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_8 = (&__this->____VynBjqN6ZSsQORpuxm4cMtY2tLq_10);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = ___value0;
		Delegate_t* L_11;
		L_11 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_9, L_10, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_12 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_13;
		L_13 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_8, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_11, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_12);
		V_0 = L_13;
		uint32_t L_14 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)2024562611)))^((int32_t)809201916)));
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::remove_OnNativeAdClicked(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnNativeAdClicked_mA73BC7F9EDA9F1BED6CD6BB8F8ED87A76DEC025F (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->____VynBjqN6ZSsQORpuxm4cMtY2tLq_10;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1989121015);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)817469101)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_002d;
			}
			case 3:
			{
				goto IL_004f;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_3 = (&__this->____VynBjqN6ZSsQORpuxm4cMtY2tLq_10);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_3, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_6, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		G_B2_0 = ((int32_t)940323202);
		goto IL_000c;
	}

IL_004f:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_10))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)2123886472);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)793592543);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-1737623720)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::add_OnNativeAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnNativeAdOpening_mF0F6882DB289477E48B109908D3087EC5852FCC8 (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->____8zQnnOydVdq4E0dEB6XrpGIXAuN_11;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1774833894);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)40163795)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_0031;
			}
			case 3:
			{
				goto IL_0057;
			}
			case 4:
			{
				goto IL_007f;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)464734549);
		goto IL_000c;
	}

IL_003a:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_3) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_4)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_5 = ((int32_t)1213584560);
		G_B8_0 = L_5;
		G_B8_1 = L_5;
		goto IL_004c;
	}

IL_0046:
	{
		int32_t L_6 = ((int32_t)955403117);
		G_B8_0 = L_6;
		G_B8_1 = L_6;
	}

IL_004c:
	{
		uint32_t L_7 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)-1161815386)))));
		goto IL_000c;
	}

IL_0057:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_8 = (&__this->____8zQnnOydVdq4E0dEB6XrpGIXAuN_11);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = ___value0;
		Delegate_t* L_11;
		L_11 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_9, L_10, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_12 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_13;
		L_13 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_8, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_11, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_12);
		V_0 = L_13;
		uint32_t L_14 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)194735842)))^((int32_t)-889374890)));
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::remove_OnNativeAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnNativeAdOpening_m7B24B0BD180F068274D225BE8024F3E37C8E3899 (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->____8zQnnOydVdq4E0dEB6XrpGIXAuN_11;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-269800871);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-558738169)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_004e;
			}
			case 3:
			{
				goto IL_007f;
			}
			case 4:
			{
				goto IL_0076;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_2) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = ((int32_t)1633687253);
		G_B7_0 = L_4;
		G_B7_1 = L_4;
		goto IL_0043;
	}

IL_003d:
	{
		int32_t L_5 = ((int32_t)1130324642);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
	}

IL_0043:
	{
		uint32_t L_6 = V_2;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)-1123754327)))));
		goto IL_000c;
	}

IL_004e:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_7 = (&__this->____8zQnnOydVdq4E0dEB6XrpGIXAuN_11);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = ___value0;
		Delegate_t* L_10;
		L_10 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_8, L_9, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_11 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_12;
		L_12 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_7, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_10, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_11);
		V_0 = L_12;
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-1440087139)))^((int32_t)1846289691)));
		goto IL_000c;
	}

IL_0076:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_14 = V_0;
		V_1 = L_14;
		G_B2_0 = ((int32_t)-1738685972);
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::add_OnNativeAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnNativeAdClosed_m93DC7A61ED03169AC6570523277A3C3ADFA0AF42 (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->____BgkMwCmIfooMhkDLFVCZdUbGPZb_12;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1691218894);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)943113565)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_007f;
			}
			case 3:
			{
				goto IL_0062;
			}
			case 4:
			{
				goto IL_0031;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)282645794);
		goto IL_000c;
	}

IL_003a:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_3 = (&__this->____BgkMwCmIfooMhkDLFVCZdUbGPZb_12);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_3, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_6, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		uint32_t L_9 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)-1178775794)))^((int32_t)-1572485788)));
		goto IL_000c;
	}

IL_0062:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_11 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_10) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_11)))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_12 = ((int32_t)1957279306);
		G_B9_0 = L_12;
		G_B9_1 = L_12;
		goto IL_0074;
	}

IL_006e:
	{
		int32_t L_13 = ((int32_t)823078576);
		G_B9_0 = L_13;
		G_B9_1 = L_13;
	}

IL_0074:
	{
		uint32_t L_14 = V_2;
		G_B2_0 = ((int32_t)(G_B9_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)839153676)))));
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::remove_OnNativeAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnNativeAdClosed_m9D7835274531D2F9C64A33231BCA78857471A7EE (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->____BgkMwCmIfooMhkDLFVCZdUbGPZb_12;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1497019944);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)429950791)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_004f;
			}
			case 2:
			{
				goto IL_006c;
			}
			case 3:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_3 = (&__this->____BgkMwCmIfooMhkDLFVCZdUbGPZb_12);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_3, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_6, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		G_B2_0 = ((int32_t)1031250102);
		goto IL_000c;
	}

IL_004f:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_10))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)-888878495);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)-1451022900);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)14505508)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.IntPtr GoogleMobileAds.iOS.AdLoaderClient::_jeiOgb5chxB6W7oubrqfMOdSXGC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AdLoaderClient__jeiOgb5chxB6W7oubrqfMOdSXGC_m32E9CB66FFE1630C904F88E645D96A941ED4D14A (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = __this->____bvTzjqlnTwk0qmycf0HogQ2Bb0Q_0;
		return L_0;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::_27WkZ2tzRnEL1KY3lGwBaN9JfCU(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient__27WkZ2tzRnEL1KY3lGwBaN9JfCU_mF47356F9A72EA52802EE073495131F83F91B5031 (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, intptr_t p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		intptr_t L_0 = __this->____bvTzjqlnTwk0qmycf0HogQ2Bb0Q_0;
		Externs_GADURelease_mE4B18030411CF16E761BA1AEA7FCF0807B7EA92E(L_0, NULL);
	}

IL_000b:
	{
		G_B2_0 = ((int32_t)-1170493431);
	}

IL_0010:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-1557204969)));
		V_0 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_000b;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_0043;
	}

IL_002d:
	{
		intptr_t L_2 = p0;
		__this->____bvTzjqlnTwk0qmycf0HogQ2Bb0Q_0 = L_2;
		uint32_t L_3 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)166695260)))^((int32_t)1481766843)));
		goto IL_0010;
	}

IL_0043:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_LoadAd_m93DABEEAD1A5E4F1252DF7B7E46797C3F9EA6140 (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = NativeUtils_get_Version_mB8F63B5B552D940B0351BE63FA0ED6E4B93B04D2_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AdRequest_BuildVersionString_mE20A7E8289BA107C2409CE7A3DCFEC5770EEC513(L_0, NULL);
		V_0 = L_1;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_2 = ___request0;
		String_t* L_3 = V_0;
		intptr_t L_4;
		L_4 = Utils_BuildAdRequest_m5236B8F2180BCC7C45ED6C21B7FF2465AC6E5D68(L_2, L_3, NULL);
		V_1 = L_4;
	}

IL_0013:
	{
		G_B2_0 = ((int32_t)-1271726572);
	}

IL_0018:
	{
		int32_t L_5 = ((int32_t)(G_B2_0^((int32_t)-586354612)));
		V_2 = L_5;
		switch (((int32_t)((uint32_t)(int32_t)L_5%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0013;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_0035;
			}
		}
	}
	{
		goto IL_0056;
	}

IL_0035:
	{
		intptr_t L_6;
		L_6 = AdLoaderClient__jeiOgb5chxB6W7oubrqfMOdSXGC_m32E9CB66FFE1630C904F88E645D96A941ED4D14A_inline(__this, NULL);
		intptr_t L_7 = V_1;
		_za1hl4laeXrpCPhipDgCWTaGcooA__Nraa7uPS7MD4p9FZPayBGOLj3CD_m92A9031889212240D2BD59D0366A78183D1623F9(L_6, L_7, NULL);
		intptr_t L_8 = V_1;
		Externs_GADURelease_mE4B18030411CF16E761BA1AEA7FCF0807B7EA92E(L_8, NULL);
		uint32_t L_9 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)1429726906)))^((int32_t)557579211)));
		goto IL_0018;
	}

IL_0056:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::DestroyAdLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_DestroyAdLoader_m82DF957E61D7556734FD13FA5AF885180A4BFFA3 (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		AdLoaderClient__27WkZ2tzRnEL1KY3lGwBaN9JfCU_mF47356F9A72EA52802EE073495131F83F91B5031(__this, L_0, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_Dispose_mDD73AC292F99EEE1D8C6145AEF9BF715B40AC9B1 (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, const RuntimeMethod* method) 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	{
		AdLoaderClient_DestroyAdLoader_m82DF957E61D7556734FD13FA5AF885180A4BFFA3(__this, NULL);
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)2108655108);
	}

IL_000b:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)2069109638)));
		V_2 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0006;
			}
			case 1:
			{
				goto IL_005a;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0070;
			}
		}
	}
	{
		goto IL_0070;
	}

IL_002c:
	{
		intptr_t L_1 = __this->____dRkT5MyUguF3xXYV4ZZo31lbNfj_1;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2;
		L_2 = GCHandle_op_Explicit_mA5F28206637454AD677BE13DF86C6152190B6F0F(L_1, NULL);
		V_0 = L_2;
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
		intptr_t L_3 = __this->____04Jnarhm2tR0cJ1nQidElTJJixn_2;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4;
		L_4 = GCHandle_op_Explicit_mA5F28206637454AD677BE13DF86C6152190B6F0F(L_3, NULL);
		V_1 = L_4;
		uint32_t L_5 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)-1382930353)))^((int32_t)2004798757)));
		goto IL_000b;
	}

IL_005a:
	{
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_1), NULL);
		uint32_t L_6 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)1626582662)))^((int32_t)1444335567)));
		goto IL_000b;
	}

IL_0070:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_Finalize_mA35AA0652546033CCBD323C628B3300E47EB8932 (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			AdLoaderClient_Dispose_mDD73AC292F99EEE1D8C6145AEF9BF715B40AC9B1(__this, NULL);
			goto IL_000f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::_ntP80MzJDFgLG7rla6v0fAaliBf(System.IntPtr,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient__ntP80MzJDFgLG7rla6v0fAaliBf_m043B63534047341D9C2C2870A8BE3B2E0E152405 (intptr_t p0, intptr_t p1, String_t* p2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE029B6A6F149DDDE86FCF5B3D2CA2EDDBC7F4A6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_J1FI8fM30wJSEAEhDXGuOFvey9B__exVCA6yRpJN887O3jLHeg5pK3YA_m140204F04A67A363422469F7489A2E7AF5DF217C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_J1FI8fM30wJSEAEhDXGuOFvey9B_t74CFBBDB154001865D1B340A267C7E2F02265476_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Ui1Bn8WovkwTw1Yuu8VyX54juCf_t7667EE495E1804E1816160CCF0D4715742F75B11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	_Ui1Bn8WovkwTw1Yuu8VyX54juCf_t7667EE495E1804E1816160CCF0D4715742F75B11* V_0 = NULL;
	_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* V_1 = NULL;
	_J1FI8fM30wJSEAEhDXGuOFvey9B_t74CFBBDB154001865D1B340A267C7E2F02265476* V_2 = NULL;
	CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* V_3 = NULL;
	CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* V_4 = NULL;
	uint32_t V_5 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B19_1 = 0;
	{
		_Ui1Bn8WovkwTw1Yuu8VyX54juCf_t7667EE495E1804E1816160CCF0D4715742F75B11* L_0 = (_Ui1Bn8WovkwTw1Yuu8VyX54juCf_t7667EE495E1804E1816160CCF0D4715742F75B11*)il2cpp_codegen_object_new(_Ui1Bn8WovkwTw1Yuu8VyX54juCf_t7667EE495E1804E1816160CCF0D4715742F75B11_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		_Ui1Bn8WovkwTw1Yuu8VyX54juCf__ctor_m0D1E6D0EDBB7140AA29D99B8474193904F3CCDF6(L_0, NULL);
		V_0 = L_0;
		_Ui1Bn8WovkwTw1Yuu8VyX54juCf_t7667EE495E1804E1816160CCF0D4715742F75B11* L_1 = V_0;
		intptr_t L_2 = p0;
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_3;
		L_3 = AdLoaderClient__6HbAhoOAuNsGbaUU3LSk6zQXuIg_m45F418EFAD9772FC4E0AF12EF042A3BC3151A4CB(L_2, NULL);
		NullCheck(L_1);
		L_1->____y03NhX1PuNhkoE1SpQgzxEuM00f_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->____y03NhX1PuNhkoE1SpQgzxEuM00f_0), (void*)L_3);
		intptr_t L_4 = p1;
		_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* L_5 = (_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06*)il2cpp_codegen_object_new(_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		_V1fgpHIlEfdgcIGdMwPd9AxlM8B__ctor_m78C4BC218BD6A167CF5DBFCD9ECB0B3029AA2F85(L_5, L_4, NULL);
		V_1 = L_5;
	}

IL_0019:
	{
		G_B2_0 = ((int32_t)1775415333);
	}

IL_001e:
	{
		int32_t L_6 = ((int32_t)(G_B2_0^((int32_t)1113782619)));
		V_5 = L_6;
		switch (((int32_t)((uint32_t)(int32_t)L_6%(uint32_t)(int32_t)((int32_t)12))))
		{
			case 0:
			{
				goto IL_015b;
			}
			case 1:
			{
				goto IL_0083;
			}
			case 2:
			{
				goto IL_012b;
			}
			case 3:
			{
				goto IL_0111;
			}
			case 4:
			{
				goto IL_00a4;
			}
			case 5:
			{
				goto IL_019e;
			}
			case 6:
			{
				goto IL_0064;
			}
			case 7:
			{
				goto IL_0174;
			}
			case 8:
			{
				goto IL_00ec;
			}
			case 9:
			{
				goto IL_01bd;
			}
			case 10:
			{
				goto IL_00c2;
			}
			case 11:
			{
				goto IL_0019;
			}
		}
	}
	{
		goto IL_01bd;
	}

IL_0064:
	{
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_7 = (CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734*)il2cpp_codegen_object_new(CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		CustomNativeClientEventArgs__ctor_mB86D8364F64424DC0778551C310DC8F0B71A46FB(L_7, NULL);
		V_4 = L_7;
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_8 = V_4;
		_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* L_9 = V_1;
		NullCheck(L_8);
		CustomNativeClientEventArgs_set_nativeAdClient_m7C4578E96709771F4B4E26B0EF01FD72C1CF0E75_inline(L_8, L_9, NULL);
		uint32_t L_10 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)-1375562457)))^((int32_t)1947869889)));
		goto IL_001e;
	}

IL_0083:
	{
		_Ui1Bn8WovkwTw1Yuu8VyX54juCf_t7667EE495E1804E1816160CCF0D4715742F75B11* L_11 = V_0;
		NullCheck(L_11);
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_12 = L_11->____y03NhX1PuNhkoE1SpQgzxEuM00f_0;
		NullCheck(L_12);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_13 = L_12->____eUxqo0ZGBuDWzNGv69GKZOMLgLf_5;
		if (L_13)
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_14 = ((int32_t)789125002);
		G_B8_0 = L_14;
		G_B8_1 = L_14;
		goto IL_009e;
	}

IL_0098:
	{
		int32_t L_15 = ((int32_t)1432480961);
		G_B8_0 = L_15;
		G_B8_1 = L_15;
	}

IL_009e:
	{
		G_B2_0 = G_B8_1;
		goto IL_001e;
	}

IL_00a4:
	{
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_16 = V_4;
		NullCheck(L_16);
		CustomNativeClientEventArgs_set_assetName_m0FFF03346E29AB4599BEB94FD9E2CB5BD6D163C4_inline(L_16, (String_t*)NULL, NULL);
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_17 = V_4;
		V_3 = L_17;
		uint32_t L_18 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_18, ((int32_t)249595082)))^((int32_t)739031780)));
		goto IL_001e;
	}

IL_00c2:
	{
		_Ui1Bn8WovkwTw1Yuu8VyX54juCf_t7667EE495E1804E1816160CCF0D4715742F75B11* L_19 = V_0;
		NullCheck(L_19);
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_20 = L_19->____y03NhX1PuNhkoE1SpQgzxEuM00f_0;
		NullCheck(L_20);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_21 = L_20->____1uTdEAfal6KWOmlsnUtgCoceOPBb_6;
		if (!L_21)
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_22 = ((int32_t)-1287156739);
		G_B13_0 = L_22;
		G_B13_1 = L_22;
		goto IL_00dd;
	}

IL_00d7:
	{
		int32_t L_23 = ((int32_t)-1623099238);
		G_B13_0 = L_23;
		G_B13_1 = L_23;
	}

IL_00dd:
	{
		uint32_t L_24 = V_5;
		G_B2_0 = ((int32_t)(G_B13_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_24, ((int32_t)-958481426)))));
		goto IL_001e;
	}

IL_00ec:
	{
		_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* L_25 = V_1;
		_J1FI8fM30wJSEAEhDXGuOFvey9B_t74CFBBDB154001865D1B340A267C7E2F02265476* L_26 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_27 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_27, L_26, (intptr_t)((void*)_J1FI8fM30wJSEAEhDXGuOFvey9B__exVCA6yRpJN887O3jLHeg5pK3YA_m140204F04A67A363422469F7489A2E7AF5DF217C_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		L_25->____jnUZFCWC8xB4HKolPN7GG1qFpEZ_0 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->____jnUZFCWC8xB4HKolPN7GG1qFpEZ_0), (void*)L_27);
		uint32_t L_28 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_28, ((int32_t)-2050357005)))^((int32_t)322553542)));
		goto IL_001e;
	}

IL_0111:
	{
		_J1FI8fM30wJSEAEhDXGuOFvey9B_t74CFBBDB154001865D1B340A267C7E2F02265476* L_29 = V_2;
		_Ui1Bn8WovkwTw1Yuu8VyX54juCf_t7667EE495E1804E1816160CCF0D4715742F75B11* L_30 = V_0;
		NullCheck(L_29);
		L_29->____f4CW6i607PYNzeddDqQ3sM60y9P_1 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->____f4CW6i607PYNzeddDqQ3sM60y9P_1), (void*)L_30);
		uint32_t L_31 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_31, ((int32_t)802496041)))^((int32_t)-357196823)));
		goto IL_001e;
	}

IL_012b:
	{
		_Ui1Bn8WovkwTw1Yuu8VyX54juCf_t7667EE495E1804E1816160CCF0D4715742F75B11* L_32 = V_0;
		NullCheck(L_32);
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_33 = L_32->____y03NhX1PuNhkoE1SpQgzxEuM00f_0;
		NullCheck(L_33);
		Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_34 = L_33->____LHSgsAlw54ubFgRL393JGnRmbqBA_4;
		String_t* L_35 = p2;
		NullCheck(L_34);
		bool L_36;
		L_36 = Dictionary_2_get_Item_mE029B6A6F149DDDE86FCF5B3D2CA2EDDBC7F4A6F(L_34, L_35, Dictionary_2_get_Item_mE029B6A6F149DDDE86FCF5B3D2CA2EDDBC7F4A6F_RuntimeMethod_var);
		if (!L_36)
		{
			goto IL_0146;
		}
	}
	{
		int32_t L_37 = ((int32_t)-881707447);
		G_B19_0 = L_37;
		G_B19_1 = L_37;
		goto IL_014c;
	}

IL_0146:
	{
		int32_t L_38 = ((int32_t)-810816072);
		G_B19_0 = L_38;
		G_B19_1 = L_38;
	}

IL_014c:
	{
		uint32_t L_39 = V_5;
		G_B2_0 = ((int32_t)(G_B19_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_39, ((int32_t)242535619)))));
		goto IL_001e;
	}

IL_015b:
	{
		_J1FI8fM30wJSEAEhDXGuOFvey9B_t74CFBBDB154001865D1B340A267C7E2F02265476* L_40 = (_J1FI8fM30wJSEAEhDXGuOFvey9B_t74CFBBDB154001865D1B340A267C7E2F02265476*)il2cpp_codegen_object_new(_J1FI8fM30wJSEAEhDXGuOFvey9B_t74CFBBDB154001865D1B340A267C7E2F02265476_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		_J1FI8fM30wJSEAEhDXGuOFvey9B__ctor_m130FACCFE4AE270E34B1BFE5E1C414BE8C3C001D(L_40, NULL);
		V_2 = L_40;
		uint32_t L_41 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_41, ((int32_t)-2070432492)))^((int32_t)1050926588)));
		goto IL_001e;
	}

IL_0174:
	{
		_Ui1Bn8WovkwTw1Yuu8VyX54juCf_t7667EE495E1804E1816160CCF0D4715742F75B11* L_42 = V_0;
		NullCheck(L_42);
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_43 = L_42->____y03NhX1PuNhkoE1SpQgzxEuM00f_0;
		NullCheck(L_43);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_44 = L_43->____eUxqo0ZGBuDWzNGv69GKZOMLgLf_5;
		_Ui1Bn8WovkwTw1Yuu8VyX54juCf_t7667EE495E1804E1816160CCF0D4715742F75B11* L_45 = V_0;
		NullCheck(L_45);
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_46 = L_45->____y03NhX1PuNhkoE1SpQgzxEuM00f_0;
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_47 = V_3;
		NullCheck(L_44);
		EventHandler_1_Invoke_m23461BB0B5DF74CDA38E5E94CC0CEADB138F06C5_inline(L_44, L_46, L_47, NULL);
		uint32_t L_48 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_48, ((int32_t)-1225206933)))^((int32_t)-2000160281)));
		goto IL_001e;
	}

IL_019e:
	{
		_J1FI8fM30wJSEAEhDXGuOFvey9B_t74CFBBDB154001865D1B340A267C7E2F02265476* L_49 = V_2;
		_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* L_50 = V_1;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_51 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)il2cpp_codegen_object_new(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241(L_51, L_50, NULL);
		NullCheck(L_49);
		L_49->____uKTbPfgunggunRhi7MQCbZdmk9O_0 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&L_49->____uKTbPfgunggunRhi7MQCbZdmk9O_0), (void*)L_51);
		uint32_t L_52 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_52, ((int32_t)-1799990823)))^((int32_t)-1602488826)));
		goto IL_001e;
	}

IL_01bd:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::_puFBI5ScfwSMkuQg05abil8OXCEA(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient__puFBI5ScfwSMkuQg05abil8OXCEA_mADA4297DB604AC3CDC23E1A98AC186E3C2CD9A3D (intptr_t p0, intptr_t p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_5cABXlEfG0XrM4WXXDifxKEqMEo__uyQChhTuYAD4XmnCPT7w5kYlPWK_mF117471058E918D701EDBCAE2C6BB56449A77822_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* V_0 = NULL;
	_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* V_1 = NULL;
	NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* V_2 = NULL;
	NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* V_3 = NULL;
	uint32_t V_4 = 0;
	int32_t G_B2_0 = 0;
	intptr_t G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	intptr_t G_B7_1;
	memset((&G_B7_1), 0, sizeof(G_B7_1));
	intptr_t G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	intptr_t G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	{
		intptr_t L_0 = p0;
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_1;
		L_1 = AdLoaderClient__6HbAhoOAuNsGbaUU3LSk6zQXuIg_m45F418EFAD9772FC4E0AF12EF042A3BC3151A4CB(L_0, NULL);
		V_0 = L_1;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-798410190);
	}

IL_000c:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)-577417391)));
		V_4 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)8)))
		{
			case 0:
			{
				goto IL_00f4;
			}
			case 1:
			{
				goto IL_00ba;
			}
			case 2:
			{
				goto IL_0041;
			}
			case 3:
			{
				goto IL_0095;
			}
			case 4:
			{
				goto IL_0116;
			}
			case 5:
			{
				goto IL_0062;
			}
			case 6:
			{
				goto IL_00d4;
			}
			case 7:
			{
				goto IL_0007;
			}
		}
	}
	{
		goto IL_0116;
	}

IL_0041:
	{
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_3 = V_0;
		_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* L_4 = V_1;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_5;
		L_5 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D(L_4, NULL);
		intptr_t L_6;
		L_6 = GCHandle_op_Explicit_m03DD8D9FB45D565431455A6EE5C30A87305EF73C_inline(L_5, NULL);
		NullCheck(L_3);
		L_3->____04Jnarhm2tR0cJ1nQidElTJJixn_2 = L_6;
		uint32_t L_7 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)1013020016)))^((int32_t)-2134348884)));
		goto IL_000c;
	}

IL_0062:
	{
		intptr_t L_8 = p1;
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_9 = V_0;
		NullCheck(L_9);
		intptr_t L_10 = L_9->____04Jnarhm2tR0cJ1nQidElTJJixn_2;
		_sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B* L_11 = ((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____dVYYJ2OBFHKCLXdEjo39GHgUnlC_20;
		G_B6_0 = L_10;
		G_B6_1 = L_8;
		if (L_11)
		{
			G_B7_0 = L_10;
			G_B7_1 = L_8;
			goto IL_0081;
		}
	}
	{
		_sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B* L_12 = (_sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B*)il2cpp_codegen_object_new(_sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		_sqjDBw8QBlRLHS2SQPm0hC18Ngq__ctor_mF8556B4C13E0FC755628E50B0F91DEEDD8B35973(L_12, NULL, (intptr_t)((void*)_5cABXlEfG0XrM4WXXDifxKEqMEo__uyQChhTuYAD4XmnCPT7w5kYlPWK_mF117471058E918D701EDBCAE2C6BB56449A77822_RuntimeMethod_var), NULL);
		((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____dVYYJ2OBFHKCLXdEjo39GHgUnlC_20 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____dVYYJ2OBFHKCLXdEjo39GHgUnlC_20), (void*)L_12);
		G_B7_0 = G_B6_0;
		G_B7_1 = G_B6_1;
	}

IL_0081:
	{
		_sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B* L_13 = ((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_StaticFields*)il2cpp_codegen_static_fields_for(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var))->____dVYYJ2OBFHKCLXdEjo39GHgUnlC_20;
		_za1hl4laeXrpCPhipDgCWTaGcooA__jG2Tvm1kBshtAy8RTI7CedIoDaY_m9CAC0548AEA42DE3A8CD4485E43AB585B58178BA(G_B7_1, G_B7_0, L_13, NULL);
		G_B2_0 = ((int32_t)-1568425743);
		goto IL_000c;
	}

IL_0095:
	{
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_14 = V_0;
		NullCheck(L_14);
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_15 = L_14->____aDGwi6zfbBrhxAg39YlzrSlUXo_8;
		if (L_15)
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_16 = ((int32_t)-1498794719);
		G_B11_0 = L_16;
		G_B11_1 = L_16;
		goto IL_00ab;
	}

IL_00a5:
	{
		int32_t L_17 = ((int32_t)-594198108);
		G_B11_0 = L_17;
		G_B11_1 = L_17;
	}

IL_00ab:
	{
		uint32_t L_18 = V_4;
		G_B2_0 = ((int32_t)(G_B11_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_18, ((int32_t)106360556)))));
		goto IL_000c;
	}

IL_00ba:
	{
		intptr_t L_19 = p1;
		_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* L_20 = (_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73*)il2cpp_codegen_object_new(_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		_5cABXlEfG0XrM4WXXDifxKEqMEo__ctor_m115C0979B589832B5A4FE26A0B7FFF91A39E9298(L_20, L_19, NULL);
		V_1 = L_20;
		uint32_t L_21 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_21, ((int32_t)-907474984)))^((int32_t)-1246086085)));
		goto IL_000c;
	}

IL_00d4:
	{
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_22 = V_0;
		NullCheck(L_22);
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_23 = L_22->____aDGwi6zfbBrhxAg39YlzrSlUXo_8;
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_24 = V_0;
		NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* L_25 = V_2;
		NullCheck(L_23);
		EventHandler_1_Invoke_mE7BEDD3511C7196786EEA138E2CCB15EDFBA079E_inline(L_23, L_24, L_25, NULL);
		uint32_t L_26 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_26, ((int32_t)85864741)))^((int32_t)131237427)));
		goto IL_000c;
	}

IL_00f4:
	{
		NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* L_27 = (NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809*)il2cpp_codegen_object_new(NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		NativeClientEventArgs__ctor_mF7DEA301F79DC4E7B2B76ECC00B6AD55D15FF636(L_27, NULL);
		V_3 = L_27;
		NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* L_28 = V_3;
		_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* L_29 = V_1;
		NullCheck(L_28);
		NativeClientEventArgs_set_nativeAdClient_mCEDBB0459BE0B3E308DA85F15E98E31D740B97FA_inline(L_28, L_29, NULL);
		NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* L_30 = V_3;
		V_2 = L_30;
		uint32_t L_31 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_31, ((int32_t)-1536626180)))^((int32_t)1833918159)));
		goto IL_000c;
	}

IL_0116:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::_mL3lFUhDMo1C1G0gcZjWUWEBOTD(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient__mL3lFUhDMo1C1G0gcZjWUWEBOTD_mADD4D33CCC6B477230E0C02E51CA3C1F0CE7E2CD (intptr_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	{
		intptr_t L_0 = p0;
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_1;
		L_1 = AdLoaderClient__6HbAhoOAuNsGbaUU3LSk6zQXuIg_m45F418EFAD9772FC4E0AF12EF042A3BC3151A4CB(L_0, NULL);
		V_0 = L_1;
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_2 = V_0;
		NullCheck(L_2);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = L_2->____arWxo3PYiXdhwATjPRqTJydQ0uh_9;
		if (!L_3)
		{
			goto IL_0051;
		}
	}

IL_000f:
	{
		G_B2_0 = ((int32_t)127290758);
	}

IL_0014:
	{
		int32_t L_4 = ((int32_t)(G_B2_0^((int32_t)420682501)));
		V_1 = L_4;
		switch (((int32_t)((uint32_t)(int32_t)L_4%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_000f;
			}
			case 1:
			{
				goto IL_0051;
			}
			case 2:
			{
				goto IL_0031;
			}
		}
	}
	{
		goto IL_0051;
	}

IL_0031:
	{
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_5 = V_0;
		NullCheck(L_5);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = L_5->____arWxo3PYiXdhwATjPRqTJydQ0uh_9;
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_8 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_6);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_6, L_7, L_8, NULL);
		uint32_t L_9 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)-440407240)))^((int32_t)-1231185679)));
		goto IL_0014;
	}

IL_0051:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::_hwkIXdvVTMzmXJbCjLlHx4afHwA(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient__hwkIXdvVTMzmXJbCjLlHx4afHwA_mBFFEF67DB0FD6E8C8BA3B971D7397BF3E7F6902C (intptr_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		intptr_t L_0 = p0;
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_1;
		L_1 = AdLoaderClient__6HbAhoOAuNsGbaUU3LSk6zQXuIg_m45F418EFAD9772FC4E0AF12EF042A3BC3151A4CB(L_0, NULL);
		V_0 = L_1;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-1532306205);
	}

IL_000c:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)-288694623)));
		V_1 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_006e;
			}
			case 2:
			{
				goto IL_002d;
			}
			case 3:
			{
				goto IL_004e;
			}
		}
	}
	{
		goto IL_006e;
	}

IL_002d:
	{
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_3 = V_0;
		NullCheck(L_3);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = L_3->____VynBjqN6ZSsQORpuxm4cMtY2tLq_10;
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = ((int32_t)-1778763144);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
		goto IL_0043;
	}

IL_003d:
	{
		int32_t L_6 = ((int32_t)-2000103906);
		G_B7_0 = L_6;
		G_B7_1 = L_6;
	}

IL_0043:
	{
		uint32_t L_7 = V_1;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)862660966)))));
		goto IL_000c;
	}

IL_004e:
	{
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_8 = V_0;
		NullCheck(L_8);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = L_8->____VynBjqN6ZSsQORpuxm4cMtY2tLq_10;
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_11 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_9);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_9, L_10, L_11, NULL);
		uint32_t L_12 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)258855163)))^((int32_t)-880841611)));
		goto IL_000c;
	}

IL_006e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::_GbDZM1zGDd62YIKWvo34aLoK0hJ(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient__GbDZM1zGDd62YIKWvo34aLoK0hJ_mF8668A784452427A8F3B2DF569AE2AEFDD295057 (intptr_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		intptr_t L_0 = p0;
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_1;
		L_1 = AdLoaderClient__6HbAhoOAuNsGbaUU3LSk6zQXuIg_m45F418EFAD9772FC4E0AF12EF042A3BC3151A4CB(L_0, NULL);
		V_0 = L_1;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)468048458);
	}

IL_000c:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)28348427)));
		V_1 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_006e;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0007;
			}
			case 3:
			{
				goto IL_004e;
			}
		}
	}
	{
		goto IL_006e;
	}

IL_002d:
	{
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_3 = V_0;
		NullCheck(L_3);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = L_3->____8zQnnOydVdq4E0dEB6XrpGIXAuN_11;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = ((int32_t)635133645);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
		goto IL_0043;
	}

IL_003d:
	{
		int32_t L_6 = ((int32_t)1259190618);
		G_B7_0 = L_6;
		G_B7_1 = L_6;
	}

IL_0043:
	{
		uint32_t L_7 = V_1;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)-1843152159)))));
		goto IL_000c;
	}

IL_004e:
	{
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_8 = V_0;
		NullCheck(L_8);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = L_8->____8zQnnOydVdq4E0dEB6XrpGIXAuN_11;
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_11 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_9);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_9, L_10, L_11, NULL);
		uint32_t L_12 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)999323971)))^((int32_t)1864204302)));
		goto IL_000c;
	}

IL_006e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::_tQ8p2ZSMHwgUIO5TT8bZ33raxjD(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient__tQ8p2ZSMHwgUIO5TT8bZ33raxjD_m53EDCE6C64AA5AEA7F6177DF076A2D935B92F258 (intptr_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	{
		intptr_t L_0 = p0;
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_1;
		L_1 = AdLoaderClient__6HbAhoOAuNsGbaUU3LSk6zQXuIg_m45F418EFAD9772FC4E0AF12EF042A3BC3151A4CB(L_0, NULL);
		V_0 = L_1;
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_2 = V_0;
		NullCheck(L_2);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = L_2->____BgkMwCmIfooMhkDLFVCZdUbGPZb_12;
		if (!L_3)
		{
			goto IL_0051;
		}
	}

IL_000f:
	{
		G_B2_0 = ((int32_t)-915874056);
	}

IL_0014:
	{
		int32_t L_4 = ((int32_t)(G_B2_0^((int32_t)-1110761518)));
		V_1 = L_4;
		switch (((int32_t)((uint32_t)(int32_t)L_4%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_000f;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0051;
			}
		}
	}
	{
		goto IL_0051;
	}

IL_0031:
	{
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_5 = V_0;
		NullCheck(L_5);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = L_5->____BgkMwCmIfooMhkDLFVCZdUbGPZb_12;
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_8 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_6);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_6, L_7, L_8, NULL);
		uint32_t L_9 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)-18230406)))^((int32_t)-790837319)));
		goto IL_0014;
	}

IL_0051:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient::_KXiot2XhBIWIVBIyEBvKgzJXRiO(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient__KXiot2XhBIWIVBIyEBvKgzJXRiO_m16C218EAE6C95C2685E458717EE50FEEC009EE2E (intptr_t p0, intptr_t p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdErrorClient_t576EE4D06F4BCE6CFA7709746249AC09BAC752BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* V_0 = NULL;
	LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* V_1 = NULL;
	LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* V_2 = NULL;
	uint32_t V_3 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		intptr_t L_0 = p0;
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_1;
		L_1 = AdLoaderClient__6HbAhoOAuNsGbaUU3LSk6zQXuIg_m45F418EFAD9772FC4E0AF12EF042A3BC3151A4CB(L_0, NULL);
		V_0 = L_1;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1402486540);
	}

IL_000c:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)730889376)));
		V_3 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)6)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_0077;
			}
			case 2:
			{
				goto IL_0056;
			}
			case 3:
			{
				goto IL_00aa;
			}
			case 4:
			{
				goto IL_0035;
			}
			case 5:
			{
				goto IL_0096;
			}
		}
	}
	{
		goto IL_00aa;
	}

IL_0035:
	{
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_3 = V_0;
		NullCheck(L_3);
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_4 = L_3->____nusz6z1H5plNUJAx1m37sNu0WlD_7;
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_5 = ((int32_t)-1305472008);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
		goto IL_004b;
	}

IL_0045:
	{
		int32_t L_6 = ((int32_t)-275805341);
		G_B7_0 = L_6;
		G_B7_1 = L_6;
	}

IL_004b:
	{
		uint32_t L_7 = V_3;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)-380371162)))));
		goto IL_000c;
	}

IL_0056:
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_8 = (LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2*)il2cpp_codegen_object_new(LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		LoadAdErrorClientEventArgs__ctor_m2D09A984965A5EDB0506CDAC47BE1675E80AE0AB(L_8, NULL);
		V_2 = L_8;
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_9 = V_2;
		intptr_t L_10 = p1;
		LoadAdErrorClient_t576EE4D06F4BCE6CFA7709746249AC09BAC752BC* L_11 = (LoadAdErrorClient_t576EE4D06F4BCE6CFA7709746249AC09BAC752BC*)il2cpp_codegen_object_new(LoadAdErrorClient_t576EE4D06F4BCE6CFA7709746249AC09BAC752BC_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		LoadAdErrorClient__ctor_mA07305CC473E15C70165E245E1CBE43164F0BDF1(L_11, L_10, NULL);
		NullCheck(L_9);
		LoadAdErrorClientEventArgs_set_LoadAdErrorClient_m6E865CB1B347CEF0B75F55CE43EE3FDBF8353353_inline(L_9, L_11, NULL);
		uint32_t L_12 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)-110900056)))^((int32_t)1216820835)));
		goto IL_000c;
	}

IL_0077:
	{
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_13 = V_0;
		NullCheck(L_13);
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_14 = L_13->____nusz6z1H5plNUJAx1m37sNu0WlD_7;
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_15 = V_0;
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_16 = V_1;
		NullCheck(L_14);
		EventHandler_1_Invoke_m10AA45946252533013704CF408E2DDD0B3BACA82_inline(L_14, L_15, L_16, NULL);
		uint32_t L_17 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, ((int32_t)-1687211766)))^((int32_t)-2033610211)));
		goto IL_000c;
	}

IL_0096:
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_18 = V_2;
		V_1 = L_18;
		uint32_t L_19 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, ((int32_t)-1480467893)))^((int32_t)-1828732674)));
		goto IL_000c;
	}

IL_00aa:
	{
		return;
	}
}
// GoogleMobileAds.iOS.AdLoaderClient GoogleMobileAds.iOS.AdLoaderClient::_6HbAhoOAuNsGbaUU3LSk6zQXuIg(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* AdLoaderClient__6HbAhoOAuNsGbaUU3LSk6zQXuIg_m45F418EFAD9772FC4E0AF12EF042A3BC3151A4CB (intptr_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint32_t V_1 = 0;
	{
		intptr_t L_0 = p0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_op_Explicit_mA5F28206637454AD677BE13DF86C6152190B6F0F(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		return ((AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8*)IsInstClass((RuntimeObject*)L_2, AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void _pkatmrHxDeDh1gMbaNJt63dgPbDA_Invoke_mF106E337787FD1AE1394D8B69B6509B1B888EE87_Multicast(_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* __this, intptr_t ___adLoader0, intptr_t ___customNativeAd1, String_t* ___formatID2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* currentDelegate = reinterpret_cast<_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___adLoader0, ___customNativeAd1, ___formatID2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void _pkatmrHxDeDh1gMbaNJt63dgPbDA_Invoke_mF106E337787FD1AE1394D8B69B6509B1B888EE87_OpenInst(_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* __this, intptr_t ___adLoader0, intptr_t ___customNativeAd1, String_t* ___formatID2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___adLoader0, ___customNativeAd1, ___formatID2, method);
}
void _pkatmrHxDeDh1gMbaNJt63dgPbDA_Invoke_mF106E337787FD1AE1394D8B69B6509B1B888EE87_OpenStatic(_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* __this, intptr_t ___adLoader0, intptr_t ___customNativeAd1, String_t* ___formatID2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___adLoader0, ___customNativeAd1, ___formatID2, method);
}
void _pkatmrHxDeDh1gMbaNJt63dgPbDA_Invoke_mF106E337787FD1AE1394D8B69B6509B1B888EE87_OpenStaticInvoker(_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* __this, intptr_t ___adLoader0, intptr_t ___customNativeAd1, String_t* ___formatID2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, intptr_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___adLoader0, ___customNativeAd1, ___formatID2);
}
void _pkatmrHxDeDh1gMbaNJt63dgPbDA_Invoke_mF106E337787FD1AE1394D8B69B6509B1B888EE87_ClosedStaticInvoker(_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* __this, intptr_t ___adLoader0, intptr_t ___customNativeAd1, String_t* ___formatID2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, intptr_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___adLoader0, ___customNativeAd1, ___formatID2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100 (_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* __this, intptr_t ___adLoader0, intptr_t ___customNativeAd1, String_t* ___formatID2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___formatID2' to native representation
	char* ____formatID2_marshaled = NULL;
	____formatID2_marshaled = il2cpp_codegen_marshal_string(___formatID2);

	// Native function invocation
	il2cppPInvokeFunc(___adLoader0, ___customNativeAd1, ____formatID2_marshaled);

	// Marshaling cleanup of parameter '___formatID2' native representation
	il2cpp_codegen_marshal_free(____formatID2_marshaled);
	____formatID2_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_pkatmrHxDeDh1gMbaNJt63dgPbDA::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _pkatmrHxDeDh1gMbaNJt63dgPbDA__ctor_m2569D7A248D290B96796FE0E1D685F26B0A14F1F (_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)p1);
	__this->___method_3 = p1;
	__this->___m_target_2 = p0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)p0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)p1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)p1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)p1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_pkatmrHxDeDh1gMbaNJt63dgPbDA_Invoke_mF106E337787FD1AE1394D8B69B6509B1B888EE87_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_pkatmrHxDeDh1gMbaNJt63dgPbDA_Invoke_mF106E337787FD1AE1394D8B69B6509B1B888EE87_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_pkatmrHxDeDh1gMbaNJt63dgPbDA_Invoke_mF106E337787FD1AE1394D8B69B6509B1B888EE87_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (p0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_pkatmrHxDeDh1gMbaNJt63dgPbDA_Invoke_mF106E337787FD1AE1394D8B69B6509B1B888EE87_Multicast;
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_pkatmrHxDeDh1gMbaNJt63dgPbDA::Invoke(System.IntPtr,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _pkatmrHxDeDh1gMbaNJt63dgPbDA_Invoke_mF106E337787FD1AE1394D8B69B6509B1B888EE87 (_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* __this, intptr_t ___adLoader0, intptr_t ___customNativeAd1, String_t* ___formatID2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___adLoader0, ___customNativeAd1, ___formatID2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GoogleMobileAds.iOS.AdLoaderClient/_pkatmrHxDeDh1gMbaNJt63dgPbDA::BeginInvoke(System.IntPtr,System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _pkatmrHxDeDh1gMbaNJt63dgPbDA_BeginInvoke_mBFBE038F89B89BA983DDB91418952F58B2A62BB9 (_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* __this, intptr_t ___adLoader0, intptr_t ___customNativeAd1, String_t* ___formatID2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___adLoader0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___customNativeAd1);
	__d_args[2] = ___formatID2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_pkatmrHxDeDh1gMbaNJt63dgPbDA::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _pkatmrHxDeDh1gMbaNJt63dgPbDA_EndInvoke_mE9D75D87443B904FA59ED2F46582C9B8295EBE4C (_pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void _QIxxmcONDiLd99UXYm2TFDihCVS_Invoke_m3625D25882968F54277D6D01949413ABB9A92BE7_Multicast(_QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2* __this, intptr_t ___AdLoader0, intptr_t ___error1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2* currentDelegate = reinterpret_cast<_QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___AdLoader0, ___error1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void _QIxxmcONDiLd99UXYm2TFDihCVS_Invoke_m3625D25882968F54277D6D01949413ABB9A92BE7_OpenInst(_QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2* __this, intptr_t ___AdLoader0, intptr_t ___error1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___AdLoader0, ___error1, method);
}
void _QIxxmcONDiLd99UXYm2TFDihCVS_Invoke_m3625D25882968F54277D6D01949413ABB9A92BE7_OpenStatic(_QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2* __this, intptr_t ___AdLoader0, intptr_t ___error1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___AdLoader0, ___error1, method);
}
void _QIxxmcONDiLd99UXYm2TFDihCVS_Invoke_m3625D25882968F54277D6D01949413ABB9A92BE7_OpenStaticInvoker(_QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2* __this, intptr_t ___AdLoader0, intptr_t ___error1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___AdLoader0, ___error1);
}
void _QIxxmcONDiLd99UXYm2TFDihCVS_Invoke_m3625D25882968F54277D6D01949413ABB9A92BE7_ClosedStaticInvoker(_QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2* __this, intptr_t ___AdLoader0, intptr_t ___error1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___AdLoader0, ___error1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2 (_QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2* __this, intptr_t ___AdLoader0, intptr_t ___error1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___AdLoader0, ___error1);

}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_QIxxmcONDiLd99UXYm2TFDihCVS::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _QIxxmcONDiLd99UXYm2TFDihCVS__ctor_mDE9137F76F41DAAB80D1BCD32514AA7B94936426 (_QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)p1);
	__this->___method_3 = p1;
	__this->___m_target_2 = p0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)p0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)p1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)p1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)p1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_QIxxmcONDiLd99UXYm2TFDihCVS_Invoke_m3625D25882968F54277D6D01949413ABB9A92BE7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_QIxxmcONDiLd99UXYm2TFDihCVS_Invoke_m3625D25882968F54277D6D01949413ABB9A92BE7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_QIxxmcONDiLd99UXYm2TFDihCVS_Invoke_m3625D25882968F54277D6D01949413ABB9A92BE7_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (p0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_QIxxmcONDiLd99UXYm2TFDihCVS_Invoke_m3625D25882968F54277D6D01949413ABB9A92BE7_Multicast;
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_QIxxmcONDiLd99UXYm2TFDihCVS::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _QIxxmcONDiLd99UXYm2TFDihCVS_Invoke_m3625D25882968F54277D6D01949413ABB9A92BE7 (_QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2* __this, intptr_t ___AdLoader0, intptr_t ___error1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___AdLoader0, ___error1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GoogleMobileAds.iOS.AdLoaderClient/_QIxxmcONDiLd99UXYm2TFDihCVS::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _QIxxmcONDiLd99UXYm2TFDihCVS_BeginInvoke_mFCE5EF51EA04C9F1B8F1C7CF8EEA3C2B5C12B508 (_QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2* __this, intptr_t ___AdLoader0, intptr_t ___error1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___AdLoader0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___error1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_QIxxmcONDiLd99UXYm2TFDihCVS::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _QIxxmcONDiLd99UXYm2TFDihCVS_EndInvoke_m301588027E14501CA8E6E357739C01FFBFEB6A1E (_QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void _vXfQseAIE9IbPtrDH4WEEXJFdiA_Invoke_m4D603D75DBBDB10F76CC976223C5E20DC93E5D2A_Multicast(_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* __this, intptr_t ___adLoader0, intptr_t ___nativeAd1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* currentDelegate = reinterpret_cast<_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___adLoader0, ___nativeAd1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void _vXfQseAIE9IbPtrDH4WEEXJFdiA_Invoke_m4D603D75DBBDB10F76CC976223C5E20DC93E5D2A_OpenInst(_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* __this, intptr_t ___adLoader0, intptr_t ___nativeAd1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___adLoader0, ___nativeAd1, method);
}
void _vXfQseAIE9IbPtrDH4WEEXJFdiA_Invoke_m4D603D75DBBDB10F76CC976223C5E20DC93E5D2A_OpenStatic(_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* __this, intptr_t ___adLoader0, intptr_t ___nativeAd1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___adLoader0, ___nativeAd1, method);
}
void _vXfQseAIE9IbPtrDH4WEEXJFdiA_Invoke_m4D603D75DBBDB10F76CC976223C5E20DC93E5D2A_OpenStaticInvoker(_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* __this, intptr_t ___adLoader0, intptr_t ___nativeAd1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___adLoader0, ___nativeAd1);
}
void _vXfQseAIE9IbPtrDH4WEEXJFdiA_Invoke_m4D603D75DBBDB10F76CC976223C5E20DC93E5D2A_ClosedStaticInvoker(_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* __this, intptr_t ___adLoader0, intptr_t ___nativeAd1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___adLoader0, ___nativeAd1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3 (_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* __this, intptr_t ___adLoader0, intptr_t ___nativeAd1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___adLoader0, ___nativeAd1);

}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_vXfQseAIE9IbPtrDH4WEEXJFdiA::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _vXfQseAIE9IbPtrDH4WEEXJFdiA__ctor_m0DF7FE81BF952B416B1C1D0097DDE8060DC85E12 (_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)p1);
	__this->___method_3 = p1;
	__this->___m_target_2 = p0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)p0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)p1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)p1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)p1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_vXfQseAIE9IbPtrDH4WEEXJFdiA_Invoke_m4D603D75DBBDB10F76CC976223C5E20DC93E5D2A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_vXfQseAIE9IbPtrDH4WEEXJFdiA_Invoke_m4D603D75DBBDB10F76CC976223C5E20DC93E5D2A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_vXfQseAIE9IbPtrDH4WEEXJFdiA_Invoke_m4D603D75DBBDB10F76CC976223C5E20DC93E5D2A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (p0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_vXfQseAIE9IbPtrDH4WEEXJFdiA_Invoke_m4D603D75DBBDB10F76CC976223C5E20DC93E5D2A_Multicast;
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_vXfQseAIE9IbPtrDH4WEEXJFdiA::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _vXfQseAIE9IbPtrDH4WEEXJFdiA_Invoke_m4D603D75DBBDB10F76CC976223C5E20DC93E5D2A (_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* __this, intptr_t ___adLoader0, intptr_t ___nativeAd1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___adLoader0, ___nativeAd1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GoogleMobileAds.iOS.AdLoaderClient/_vXfQseAIE9IbPtrDH4WEEXJFdiA::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _vXfQseAIE9IbPtrDH4WEEXJFdiA_BeginInvoke_m170E480B2ED8BFAB4F5B586C78429CE5045BF3AD (_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* __this, intptr_t ___adLoader0, intptr_t ___nativeAd1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___adLoader0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___nativeAd1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_vXfQseAIE9IbPtrDH4WEEXJFdiA::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _vXfQseAIE9IbPtrDH4WEEXJFdiA_EndInvoke_mCA901F7EA23AA9703982E11DC24CD13303888F8B (_vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void _GofQR4EAfX2hD0bdVIwCH0WZwGz_Invoke_m7514490EA1CCDC5B3E8BD66237B30121B8EC3DAB_Multicast(_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* currentDelegate = reinterpret_cast<_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___adLoader0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void _GofQR4EAfX2hD0bdVIwCH0WZwGz_Invoke_m7514490EA1CCDC5B3E8BD66237B30121B8EC3DAB_OpenInst(_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___adLoader0, method);
}
void _GofQR4EAfX2hD0bdVIwCH0WZwGz_Invoke_m7514490EA1CCDC5B3E8BD66237B30121B8EC3DAB_OpenStatic(_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___adLoader0, method);
}
void _GofQR4EAfX2hD0bdVIwCH0WZwGz_Invoke_m7514490EA1CCDC5B3E8BD66237B30121B8EC3DAB_OpenStaticInvoker(_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___adLoader0);
}
void _GofQR4EAfX2hD0bdVIwCH0WZwGz_Invoke_m7514490EA1CCDC5B3E8BD66237B30121B8EC3DAB_ClosedStaticInvoker(_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___adLoader0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70 (_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___adLoader0);

}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_GofQR4EAfX2hD0bdVIwCH0WZwGz::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GofQR4EAfX2hD0bdVIwCH0WZwGz__ctor_m663D7B7657711F3F5FEAE32D4F28C78B4F0C9701 (_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)p1);
	__this->___method_3 = p1;
	__this->___m_target_2 = p0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)p0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)p1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)p1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)p1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GofQR4EAfX2hD0bdVIwCH0WZwGz_Invoke_m7514490EA1CCDC5B3E8BD66237B30121B8EC3DAB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GofQR4EAfX2hD0bdVIwCH0WZwGz_Invoke_m7514490EA1CCDC5B3E8BD66237B30121B8EC3DAB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GofQR4EAfX2hD0bdVIwCH0WZwGz_Invoke_m7514490EA1CCDC5B3E8BD66237B30121B8EC3DAB_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (p0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GofQR4EAfX2hD0bdVIwCH0WZwGz_Invoke_m7514490EA1CCDC5B3E8BD66237B30121B8EC3DAB_Multicast;
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_GofQR4EAfX2hD0bdVIwCH0WZwGz::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GofQR4EAfX2hD0bdVIwCH0WZwGz_Invoke_m7514490EA1CCDC5B3E8BD66237B30121B8EC3DAB (_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* __this, intptr_t ___adLoader0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___adLoader0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GoogleMobileAds.iOS.AdLoaderClient/_GofQR4EAfX2hD0bdVIwCH0WZwGz::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GofQR4EAfX2hD0bdVIwCH0WZwGz_BeginInvoke_m0CFEBEBC0AECD085FF0636AAAA95CFF9F6D67C70 (_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* __this, intptr_t ___adLoader0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___adLoader0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_GofQR4EAfX2hD0bdVIwCH0WZwGz::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GofQR4EAfX2hD0bdVIwCH0WZwGz_EndInvoke_m94BF0EAA961E6FAE8327C28D3FCBF13EEBF8EA55 (_GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void _oYCq6VgAsLvfIJRn9pDMOfQveh6_Invoke_m0A06AA8FBC4B7B9C66F24F02D0336698BF6BEF75_Multicast(_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* currentDelegate = reinterpret_cast<_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___adLoader0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void _oYCq6VgAsLvfIJRn9pDMOfQveh6_Invoke_m0A06AA8FBC4B7B9C66F24F02D0336698BF6BEF75_OpenInst(_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___adLoader0, method);
}
void _oYCq6VgAsLvfIJRn9pDMOfQveh6_Invoke_m0A06AA8FBC4B7B9C66F24F02D0336698BF6BEF75_OpenStatic(_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___adLoader0, method);
}
void _oYCq6VgAsLvfIJRn9pDMOfQveh6_Invoke_m0A06AA8FBC4B7B9C66F24F02D0336698BF6BEF75_OpenStaticInvoker(_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___adLoader0);
}
void _oYCq6VgAsLvfIJRn9pDMOfQveh6_Invoke_m0A06AA8FBC4B7B9C66F24F02D0336698BF6BEF75_ClosedStaticInvoker(_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___adLoader0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F (_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___adLoader0);

}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_oYCq6VgAsLvfIJRn9pDMOfQveh6::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _oYCq6VgAsLvfIJRn9pDMOfQveh6__ctor_mF331BB189B4FD82D843A9E1617FE3D388A642F55 (_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)p1);
	__this->___method_3 = p1;
	__this->___m_target_2 = p0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)p0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)p1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)p1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)p1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_oYCq6VgAsLvfIJRn9pDMOfQveh6_Invoke_m0A06AA8FBC4B7B9C66F24F02D0336698BF6BEF75_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_oYCq6VgAsLvfIJRn9pDMOfQveh6_Invoke_m0A06AA8FBC4B7B9C66F24F02D0336698BF6BEF75_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_oYCq6VgAsLvfIJRn9pDMOfQveh6_Invoke_m0A06AA8FBC4B7B9C66F24F02D0336698BF6BEF75_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (p0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_oYCq6VgAsLvfIJRn9pDMOfQveh6_Invoke_m0A06AA8FBC4B7B9C66F24F02D0336698BF6BEF75_Multicast;
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_oYCq6VgAsLvfIJRn9pDMOfQveh6::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _oYCq6VgAsLvfIJRn9pDMOfQveh6_Invoke_m0A06AA8FBC4B7B9C66F24F02D0336698BF6BEF75 (_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* __this, intptr_t ___adLoader0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___adLoader0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GoogleMobileAds.iOS.AdLoaderClient/_oYCq6VgAsLvfIJRn9pDMOfQveh6::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _oYCq6VgAsLvfIJRn9pDMOfQveh6_BeginInvoke_m4C2DCE48605BFB61FE3639978C5AD790EDECDAB1 (_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* __this, intptr_t ___adLoader0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___adLoader0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_oYCq6VgAsLvfIJRn9pDMOfQveh6::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _oYCq6VgAsLvfIJRn9pDMOfQveh6_EndInvoke_m382B63B74B495550F561E66D66A07E0D2966F80B (_oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void _fz51zdLhxoaDkS13yalGYMD9apl_Invoke_m8254C721A6CAB6FEFBA745AAA2776603AC182701_Multicast(_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218* currentDelegate = reinterpret_cast<_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___adLoader0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void _fz51zdLhxoaDkS13yalGYMD9apl_Invoke_m8254C721A6CAB6FEFBA745AAA2776603AC182701_OpenInst(_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___adLoader0, method);
}
void _fz51zdLhxoaDkS13yalGYMD9apl_Invoke_m8254C721A6CAB6FEFBA745AAA2776603AC182701_OpenStatic(_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___adLoader0, method);
}
void _fz51zdLhxoaDkS13yalGYMD9apl_Invoke_m8254C721A6CAB6FEFBA745AAA2776603AC182701_OpenStaticInvoker(_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___adLoader0);
}
void _fz51zdLhxoaDkS13yalGYMD9apl_Invoke_m8254C721A6CAB6FEFBA745AAA2776603AC182701_ClosedStaticInvoker(_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___adLoader0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218 (_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___adLoader0);

}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_fz51zdLhxoaDkS13yalGYMD9apl::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _fz51zdLhxoaDkS13yalGYMD9apl__ctor_m457123DA1D2A5AD1EFAB763941DBBE2004D53255 (_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)p1);
	__this->___method_3 = p1;
	__this->___m_target_2 = p0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)p0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)p1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)p1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)p1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_fz51zdLhxoaDkS13yalGYMD9apl_Invoke_m8254C721A6CAB6FEFBA745AAA2776603AC182701_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_fz51zdLhxoaDkS13yalGYMD9apl_Invoke_m8254C721A6CAB6FEFBA745AAA2776603AC182701_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_fz51zdLhxoaDkS13yalGYMD9apl_Invoke_m8254C721A6CAB6FEFBA745AAA2776603AC182701_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (p0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_fz51zdLhxoaDkS13yalGYMD9apl_Invoke_m8254C721A6CAB6FEFBA745AAA2776603AC182701_Multicast;
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_fz51zdLhxoaDkS13yalGYMD9apl::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _fz51zdLhxoaDkS13yalGYMD9apl_Invoke_m8254C721A6CAB6FEFBA745AAA2776603AC182701 (_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218* __this, intptr_t ___adLoader0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___adLoader0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GoogleMobileAds.iOS.AdLoaderClient/_fz51zdLhxoaDkS13yalGYMD9apl::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _fz51zdLhxoaDkS13yalGYMD9apl_BeginInvoke_mC18B98B78BC1981307485140A8EEAF7D1950A5F7 (_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218* __this, intptr_t ___adLoader0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___adLoader0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_fz51zdLhxoaDkS13yalGYMD9apl::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _fz51zdLhxoaDkS13yalGYMD9apl_EndInvoke_mF158D19F7EB765F4CA8B2A45E80629A8778EB244 (_fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void _RLv7HtUdTeAbp0VxmvKZJm3Yu0M_Invoke_m2F00AF5C23FBDB077A63CDDB4E3CBEB1942FD57E_Multicast(_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E* currentDelegate = reinterpret_cast<_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___adLoader0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void _RLv7HtUdTeAbp0VxmvKZJm3Yu0M_Invoke_m2F00AF5C23FBDB077A63CDDB4E3CBEB1942FD57E_OpenInst(_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___adLoader0, method);
}
void _RLv7HtUdTeAbp0VxmvKZJm3Yu0M_Invoke_m2F00AF5C23FBDB077A63CDDB4E3CBEB1942FD57E_OpenStatic(_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___adLoader0, method);
}
void _RLv7HtUdTeAbp0VxmvKZJm3Yu0M_Invoke_m2F00AF5C23FBDB077A63CDDB4E3CBEB1942FD57E_OpenStaticInvoker(_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___adLoader0);
}
void _RLv7HtUdTeAbp0VxmvKZJm3Yu0M_Invoke_m2F00AF5C23FBDB077A63CDDB4E3CBEB1942FD57E_ClosedStaticInvoker(_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___adLoader0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E (_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E* __this, intptr_t ___adLoader0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___adLoader0);

}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_RLv7HtUdTeAbp0VxmvKZJm3Yu0M::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _RLv7HtUdTeAbp0VxmvKZJm3Yu0M__ctor_mEAD3661ED7C543F77CC2AA57B47680FFC23C106D (_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)p1);
	__this->___method_3 = p1;
	__this->___m_target_2 = p0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)p0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)p1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)p1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)p1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_Invoke_m2F00AF5C23FBDB077A63CDDB4E3CBEB1942FD57E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_Invoke_m2F00AF5C23FBDB077A63CDDB4E3CBEB1942FD57E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_Invoke_m2F00AF5C23FBDB077A63CDDB4E3CBEB1942FD57E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (p0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_Invoke_m2F00AF5C23FBDB077A63CDDB4E3CBEB1942FD57E_Multicast;
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_RLv7HtUdTeAbp0VxmvKZJm3Yu0M::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _RLv7HtUdTeAbp0VxmvKZJm3Yu0M_Invoke_m2F00AF5C23FBDB077A63CDDB4E3CBEB1942FD57E (_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E* __this, intptr_t ___adLoader0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___adLoader0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GoogleMobileAds.iOS.AdLoaderClient/_RLv7HtUdTeAbp0VxmvKZJm3Yu0M::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _RLv7HtUdTeAbp0VxmvKZJm3Yu0M_BeginInvoke_mA7B04B9BC0F7BDA3CD2282F5F23F527A502831E4 (_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E* __this, intptr_t ___adLoader0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___adLoader0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_RLv7HtUdTeAbp0VxmvKZJm3Yu0M::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _RLv7HtUdTeAbp0VxmvKZJm3Yu0M_EndInvoke_mA775E7D840D441F4FEE4E3A453FCE3560C70983D (_RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_Ui1Bn8WovkwTw1Yuu8VyX54juCf::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Ui1Bn8WovkwTw1Yuu8VyX54juCf__ctor_m0D1E6D0EDBB7140AA29D99B8474193904F3CCDF6 (_Ui1Bn8WovkwTw1Yuu8VyX54juCf_t7667EE495E1804E1816160CCF0D4715742F75B11* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_J1FI8fM30wJSEAEhDXGuOFvey9B::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _J1FI8fM30wJSEAEhDXGuOFvey9B__ctor_m130FACCFE4AE270E34B1BFE5E1C414BE8C3C001D (_J1FI8fM30wJSEAEhDXGuOFvey9B_t74CFBBDB154001865D1B340A267C7E2F02265476* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/_J1FI8fM30wJSEAEhDXGuOFvey9B::_exVCA6yRpJN887O3jLHeg5pK3YA(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _J1FI8fM30wJSEAEhDXGuOFvey9B__exVCA6yRpJN887O3jLHeg5pK3YA_m140204F04A67A363422469F7489A2E7AF5DF217C (_J1FI8fM30wJSEAEhDXGuOFvey9B_t74CFBBDB154001865D1B340A267C7E2F02265476* __this, String_t* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* V_0 = NULL;
	CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* V_1 = NULL;
	CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* V_2 = NULL;
	uint32_t V_3 = 0;
	int32_t G_B2_0 = 0;
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_0 = __this->____uKTbPfgunggunRhi7MQCbZdmk9O_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_0);
		if (!L_1)
		{
			goto IL_00e1;
		}
	}

IL_0010:
	{
		G_B2_0 = ((int32_t)359266049);
	}

IL_0015:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)492903611)));
		V_3 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)7)))
		{
			case 0:
			{
				goto IL_00c8;
			}
			case 1:
			{
				goto IL_006b;
			}
			case 2:
			{
				goto IL_0045;
			}
			case 3:
			{
				goto IL_0010;
			}
			case 4:
			{
				goto IL_00e1;
			}
			case 5:
			{
				goto IL_00b4;
			}
			case 6:
			{
				goto IL_0081;
			}
		}
	}
	{
		goto IL_00e1;
	}

IL_0045:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_3 = __this->____uKTbPfgunggunRhi7MQCbZdmk9O_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_3);
		V_0 = ((_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06*)IsInstClass((RuntimeObject*)L_4, _V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06_il2cpp_TypeInfo_var));
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_5 = (CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734*)il2cpp_codegen_object_new(CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		CustomNativeClientEventArgs__ctor_mB86D8364F64424DC0778551C310DC8F0B71A46FB(L_5, NULL);
		V_2 = L_5;
		uint32_t L_6 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)-504942166)))^((int32_t)2029520404)));
		goto IL_0015;
	}

IL_006b:
	{
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_7 = V_2;
		_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* L_8 = V_0;
		NullCheck(L_7);
		CustomNativeClientEventArgs_set_nativeAdClient_m7C4578E96709771F4B4E26B0EF01FD72C1CF0E75_inline(L_7, L_8, NULL);
		uint32_t L_9 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)-774841116)))^((int32_t)1716960463)));
		goto IL_0015;
	}

IL_0081:
	{
		_Ui1Bn8WovkwTw1Yuu8VyX54juCf_t7667EE495E1804E1816160CCF0D4715742F75B11* L_10 = __this->____f4CW6i607PYNzeddDqQ3sM60y9P_1;
		NullCheck(L_10);
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_11 = L_10->____y03NhX1PuNhkoE1SpQgzxEuM00f_0;
		NullCheck(L_11);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_12 = L_11->____1uTdEAfal6KWOmlsnUtgCoceOPBb_6;
		_Ui1Bn8WovkwTw1Yuu8VyX54juCf_t7667EE495E1804E1816160CCF0D4715742F75B11* L_13 = __this->____f4CW6i607PYNzeddDqQ3sM60y9P_1;
		NullCheck(L_13);
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_14 = L_13->____y03NhX1PuNhkoE1SpQgzxEuM00f_0;
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_15 = V_1;
		NullCheck(L_12);
		EventHandler_1_Invoke_m23461BB0B5DF74CDA38E5E94CC0CEADB138F06C5_inline(L_12, L_14, L_15, NULL);
		uint32_t L_16 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_16, ((int32_t)-806636051)))^((int32_t)-614070134)));
		goto IL_0015;
	}

IL_00b4:
	{
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_17 = V_2;
		V_1 = L_17;
		uint32_t L_18 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_18, ((int32_t)1035659929)))^((int32_t)-1622717487)));
		goto IL_0015;
	}

IL_00c8:
	{
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_19 = V_2;
		String_t* L_20 = p0;
		NullCheck(L_19);
		CustomNativeClientEventArgs_set_assetName_m0FFF03346E29AB4599BEB94FD9E2CB5BD6D163C4_inline(L_19, L_20, NULL);
		uint32_t L_21 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_21, ((int32_t)1423765798)))^((int32_t)-695709530)));
		goto IL_0015;
	}

IL_00e1:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper__V1fgpHIlEfdgcIGdMwPd9AxlM8B__x9YfnbZGadeTOhHhoBbvwtcBB7F_mFBB41A45952F2B4E1AFD794E1F198DE074783FE2(intptr_t p0, char* p1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter 'p1' to managed representation
	String_t* _p1_unmarshaled = NULL;
	_p1_unmarshaled = il2cpp_codegen_marshal_string_result(p1);

	// Managed method invocation
	_V1fgpHIlEfdgcIGdMwPd9AxlM8B__x9YfnbZGadeTOhHhoBbvwtcBB7F_mFBB41A45952F2B4E1AFD794E1F198DE074783FE2(p0, _p1_unmarshaled, NULL);

}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _V1fgpHIlEfdgcIGdMwPd9AxlM8B__ctor_m78C4BC218BD6A167CF5DBFCD9ECB0B3029AA2F85 (_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* __this, intptr_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_V1fgpHIlEfdgcIGdMwPd9AxlM8B__x9YfnbZGadeTOhHhoBbvwtcBB7F_mFBB41A45952F2B4E1AFD794E1F198DE074783FE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	intptr_t G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	intptr_t G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)-1926735285);
	}

IL_000b:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)-361487227)));
		V_0 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_009f;
			}
			case 1:
			{
				goto IL_0030;
			}
			case 2:
			{
				goto IL_0075;
			}
			case 3:
			{
				goto IL_005a;
			}
			case 4:
			{
				goto IL_0006;
			}
		}
	}
	{
		goto IL_009f;
	}

IL_0030:
	{
		intptr_t L_1 = p0;
		_hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E* L_2 = ((_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06_StaticFields*)il2cpp_codegen_static_fields_for(_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06_il2cpp_TypeInfo_var))->____z4rTkE1tJtIDXEBhz83AtBa5iei_3;
		G_B5_0 = L_1;
		if (L_2)
		{
			G_B6_0 = L_1;
			goto IL_0049;
		}
	}
	{
		_hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E* L_3 = (_hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E*)il2cpp_codegen_object_new(_hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		_hJLCzgFsr5XwEFNZUdsLyRBbY1n__ctor_m6D0CA49E1FE826DE9B1A12DCB3A2838275820F35(L_3, NULL, (intptr_t)((void*)_V1fgpHIlEfdgcIGdMwPd9AxlM8B__x9YfnbZGadeTOhHhoBbvwtcBB7F_mFBB41A45952F2B4E1AFD794E1F198DE074783FE2_RuntimeMethod_var), NULL);
		((_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06_StaticFields*)il2cpp_codegen_static_fields_for(_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06_il2cpp_TypeInfo_var))->____z4rTkE1tJtIDXEBhz83AtBa5iei_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06_StaticFields*)il2cpp_codegen_static_fields_for(_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06_il2cpp_TypeInfo_var))->____z4rTkE1tJtIDXEBhz83AtBa5iei_3), (void*)L_3);
		G_B6_0 = G_B5_0;
	}

IL_0049:
	{
		_hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E* L_4 = ((_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06_StaticFields*)il2cpp_codegen_static_fields_for(_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06_il2cpp_TypeInfo_var))->____z4rTkE1tJtIDXEBhz83AtBa5iei_3;
		_za1hl4laeXrpCPhipDgCWTaGcooA__ibxz0UHGSQhjjx1HSuobaufiEwg_m81E3F6EF8B42948DBB65E84DB204E3C878CA9FEA(G_B6_0, L_4, NULL);
		G_B2_0 = ((int32_t)-368560853);
		goto IL_000b;
	}

IL_005a:
	{
		intptr_t L_5 = p0;
		intptr_t L_6 = __this->____AekAyMieaX7EpOjH56b5SNuE1NiA_2;
		_za1hl4laeXrpCPhipDgCWTaGcooA__YN2IWM1qgUZSKdBhtOJa3BJjSDH_m294A15EC59A4C10427B1D1CAE1927F053BA5B4FB(L_5, L_6, NULL);
		uint32_t L_7 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)403960510)))^((int32_t)-2007464104)));
		goto IL_000b;
	}

IL_0075:
	{
		intptr_t L_8 = p0;
		__this->____bQFLfZbRK2wvbyfGf6MJDQzImUY_1 = L_8;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_9;
		L_9 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D(__this, NULL);
		intptr_t L_10;
		L_10 = GCHandle_op_Explicit_m03DD8D9FB45D565431455A6EE5C30A87305EF73C_inline(L_9, NULL);
		__this->____AekAyMieaX7EpOjH56b5SNuE1NiA_2 = L_10;
		uint32_t L_11 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)-782943934)))^((int32_t)1654649726)));
		goto IL_000b;
	}

IL_009f:
	{
		return;
	}
}
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::_W1SFDbUnUAixSccQswseUd4j6CG()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _V1fgpHIlEfdgcIGdMwPd9AxlM8B__W1SFDbUnUAixSccQswseUd4j6CG_m19DFAA037FF2A405D05F6F95DFA4FE9D4C1F7C4E (_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = __this->____bQFLfZbRK2wvbyfGf6MJDQzImUY_1;
		return L_0;
	}
}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::_TqNucJrnfEtVBxjEkEgEXjQKGSj(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _V1fgpHIlEfdgcIGdMwPd9AxlM8B__TqNucJrnfEtVBxjEkEgEXjQKGSj_m4EBAC6D3B8C46FD4B4A114703C2467D10F7A87A4 (_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* __this, intptr_t p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		intptr_t L_0 = __this->____bQFLfZbRK2wvbyfGf6MJDQzImUY_1;
		Externs_GADURelease_mE4B18030411CF16E761BA1AEA7FCF0807B7EA92E(L_0, NULL);
	}

IL_000b:
	{
		G_B2_0 = ((int32_t)2031812446);
	}

IL_0010:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)169213957)));
		V_0 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_000b;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_0043;
	}

IL_002d:
	{
		intptr_t L_2 = p0;
		__this->____bQFLfZbRK2wvbyfGf6MJDQzImUY_1 = L_2;
		uint32_t L_3 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)929406357)))^((int32_t)813930143)));
		goto IL_0010;
	}

IL_0043:
	{
		return;
	}
}
// System.Collections.Generic.List`1<System.String> _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::GetAvailableAssetNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* _V1fgpHIlEfdgcIGdMwPd9AxlM8B_GetAvailableAssetNames_m867178E17AB1C3FF86CBEE4B5646C2C091E59A3C (_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* __this, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	{
		intptr_t L_0;
		L_0 = _V1fgpHIlEfdgcIGdMwPd9AxlM8B__W1SFDbUnUAixSccQswseUd4j6CG_m19DFAA037FF2A405D05F6F95DFA4FE9D4C1F7C4E_inline(__this, NULL);
		intptr_t L_1;
		L_1 = _za1hl4laeXrpCPhipDgCWTaGcooA__AAKiTtRAAtSE22SKaqHSO0lGt4i_m3872838C0AB31C4185D75EC399BFFACCCCD390EB(L_0, NULL);
		V_0 = L_1;
	}

IL_000c:
	{
		G_B2_0 = ((int32_t)-1877501715);
	}

IL_0011:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)-766377173)));
		V_2 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_000c;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_002e;
			}
		}
	}
	{
		goto IL_0049;
	}

IL_002e:
	{
		intptr_t L_3;
		L_3 = _V1fgpHIlEfdgcIGdMwPd9AxlM8B__W1SFDbUnUAixSccQswseUd4j6CG_m19DFAA037FF2A405D05F6F95DFA4FE9D4C1F7C4E_inline(__this, NULL);
		int32_t L_4;
		L_4 = _za1hl4laeXrpCPhipDgCWTaGcooA__qncAEMgRTY2BgAhaaJJImuoWka2_m27B05FC591F93F9B71C676F098D48DF600F04654(L_3, NULL);
		V_1 = L_4;
		uint32_t L_5 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)951884682)))^((int32_t)422003650)));
		goto IL_0011;
	}

IL_0049:
	{
		intptr_t L_6 = V_0;
		int32_t L_7 = V_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8;
		L_8 = Utils_PtrArrayToManagedList_m5D7AAAB3FA2CA145D2149AE68D736CEFC4B42A05(L_6, L_7, NULL);
		return L_8;
	}
}
// System.String _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::GetFormatId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _V1fgpHIlEfdgcIGdMwPd9AxlM8B_GetFormatId_m0B09F179504AF28F2C1D09F576EB379A86FEFD28 (_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		intptr_t L_0;
		L_0 = _V1fgpHIlEfdgcIGdMwPd9AxlM8B__W1SFDbUnUAixSccQswseUd4j6CG_m19DFAA037FF2A405D05F6F95DFA4FE9D4C1F7C4E_inline(__this, NULL);
		String_t* L_1;
		L_1 = _za1hl4laeXrpCPhipDgCWTaGcooA__YciJAsA6I19uIJP6mPVBeYyFmDj_m868E25B9D7EA7D26E0767FC0C24AAE8CBFF3DFAB(L_0, NULL);
		return L_1;
	}
}
// System.Byte[] _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::GetImageByteArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _V1fgpHIlEfdgcIGdMwPd9AxlM8B_GetImageByteArray_m5ABD9AAE68CF84D2BA742776D2AB8FA9A6240D8C (_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		intptr_t L_0;
		L_0 = _V1fgpHIlEfdgcIGdMwPd9AxlM8B__W1SFDbUnUAixSccQswseUd4j6CG_m19DFAA037FF2A405D05F6F95DFA4FE9D4C1F7C4E_inline(__this, NULL);
		String_t* L_1 = ___key0;
		String_t* L_2;
		L_2 = _za1hl4laeXrpCPhipDgCWTaGcooA__F6QbdpiYvARdMfabkzi6V6sotD4_mB4CEB5290AA8C6B3E3A162C759F14BCB7A033FD9(L_0, L_1, NULL);
		V_0 = L_2;
	}

IL_000d:
	{
		G_B2_0 = ((int32_t)381498766);
	}

IL_0012:
	{
		int32_t L_3 = ((int32_t)(G_B2_0^((int32_t)921308745)));
		V_1 = L_3;
		switch (((int32_t)((uint32_t)(int32_t)L_3%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_000d;
			}
			case 1:
			{
				goto IL_0060;
			}
			case 2:
			{
				goto IL_004f;
			}
			case 3:
			{
				goto IL_0033;
			}
		}
	}
	{
		goto IL_0060;
	}

IL_0033:
	{
		String_t* L_4 = V_0;
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_5 = ((int32_t)-330941640);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
		goto IL_0044;
	}

IL_003e:
	{
		int32_t L_6 = ((int32_t)-983392577);
		G_B7_0 = L_6;
		G_B7_1 = L_6;
	}

IL_0044:
	{
		uint32_t L_7 = V_1;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)1561090537)))));
		goto IL_0012;
	}

IL_004f:
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
	// Dead block : IL_0051: ldloc.1

IL_0060:
	{
		String_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_8, NULL);
		return L_9;
	}
}
// System.String _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::GetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _V1fgpHIlEfdgcIGdMwPd9AxlM8B_GetText_mAA0B891F253ACF0D5DF3B87DF84FD71334A6E7D1 (_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		intptr_t L_0;
		L_0 = _V1fgpHIlEfdgcIGdMwPd9AxlM8B__W1SFDbUnUAixSccQswseUd4j6CG_m19DFAA037FF2A405D05F6F95DFA4FE9D4C1F7C4E_inline(__this, NULL);
		String_t* L_1 = ___key0;
		String_t* L_2;
		L_2 = _za1hl4laeXrpCPhipDgCWTaGcooA__0ifA2aTdWYhk4RnFm3CHi3lcZCW_m7AF3DF8242D9AA094E4598DA73AC7EC6CDF5A70A(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::PerformClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _V1fgpHIlEfdgcIGdMwPd9AxlM8B_PerformClick_m26CF6952E2F0A708EB3B7F9E117EB7F94DA79D81 (_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* __this, String_t* ___assetName0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->____jnUZFCWC8xB4HKolPN7GG1qFpEZ_0;
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_000d:
	{
		G_B2_0 = ((int32_t)-1558325356);
	}

IL_0012:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-1257277733)));
		V_1 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_004b;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_000d;
			}
		}
	}
	{
		goto IL_004b;
	}

IL_002f:
	{
		intptr_t L_2;
		L_2 = _V1fgpHIlEfdgcIGdMwPd9AxlM8B__W1SFDbUnUAixSccQswseUd4j6CG_m19DFAA037FF2A405D05F6F95DFA4FE9D4C1F7C4E_inline(__this, NULL);
		String_t* L_3 = ___assetName0;
		bool L_4 = V_0;
		_za1hl4laeXrpCPhipDgCWTaGcooA__Qi0zsQa21U0Vcy36eYbpfkjllPB_mEB5D18947953723F796D7B2BC236CF74A985F4B3(L_2, L_3, L_4, NULL);
		uint32_t L_5 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)355130713)))^((int32_t)333852934)));
		goto IL_0012;
	}

IL_004b:
	{
		return;
	}
}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::RecordImpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _V1fgpHIlEfdgcIGdMwPd9AxlM8B_RecordImpression_m12122EA9DD65FA5F49C5A47A307166C79904BC43 (_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		intptr_t L_0;
		L_0 = _V1fgpHIlEfdgcIGdMwPd9AxlM8B__W1SFDbUnUAixSccQswseUd4j6CG_m19DFAA037FF2A405D05F6F95DFA4FE9D4C1F7C4E_inline(__this, NULL);
		_za1hl4laeXrpCPhipDgCWTaGcooA__oxlFQF0u2DBJGekgybCDEAEpnBw_mEA8AF5FA096109F9575700EDC606CFA23B2EB427(L_0, NULL);
		return;
	}
}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::_ev2o48KRW7HbAIGCO74YEfEDkhH()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _V1fgpHIlEfdgcIGdMwPd9AxlM8B__ev2o48KRW7HbAIGCO74YEfEDkhH_mA95499C5AE41EF9D30A79FDBD3B7114CF88C2140 (_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		_V1fgpHIlEfdgcIGdMwPd9AxlM8B__TqNucJrnfEtVBxjEkEgEXjQKGSj_m4EBAC6D3B8C46FD4B4A114703C2467D10F7A87A4(__this, L_0, NULL);
		return;
	}
}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _V1fgpHIlEfdgcIGdMwPd9AxlM8B_Dispose_m2C8098EABF6B1EA9958057419CF40CD6E75C4C3D (_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* __this, const RuntimeMethod* method) 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	{
		_V1fgpHIlEfdgcIGdMwPd9AxlM8B__ev2o48KRW7HbAIGCO74YEfEDkhH_mA95499C5AE41EF9D30A79FDBD3B7114CF88C2140(__this, NULL);
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)2109086345);
	}

IL_000b:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)1222999456)));
		V_1 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_004a;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_0006;
			}
		}
	}
	{
		goto IL_004a;
	}

IL_0028:
	{
		intptr_t L_1 = __this->____AekAyMieaX7EpOjH56b5SNuE1NiA_2;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2;
		L_2 = GCHandle_op_Explicit_mA5F28206637454AD677BE13DF86C6152190B6F0F(L_1, NULL);
		V_0 = L_2;
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
		uint32_t L_3 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)-1306948260)))^((int32_t)-575150050)));
		goto IL_000b;
	}

IL_004a:
	{
		return;
	}
}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _V1fgpHIlEfdgcIGdMwPd9AxlM8B_Finalize_m234B6E08FD31419F80F25327BC6A30F84AD707CB (_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			_V1fgpHIlEfdgcIGdMwPd9AxlM8B_Dispose_m2C8098EABF6B1EA9958057419CF40CD6E75C4C3D(__this, NULL);
			goto IL_000f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
		return;
	}
}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::_x9YfnbZGadeTOhHhoBbvwtcBB7F(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _V1fgpHIlEfdgcIGdMwPd9AxlM8B__x9YfnbZGadeTOhHhoBbvwtcBB7F_mFBB41A45952F2B4E1AFD794E1F198DE074783FE2 (intptr_t p0, String_t* p1, const RuntimeMethod* method) 
{
	_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		intptr_t L_0 = p0;
		_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* L_1;
		L_1 = _V1fgpHIlEfdgcIGdMwPd9AxlM8B__Gq2sJTnCZkFRzwYSza1nTFaNTIh_m59562BBB55C9A8FB1A4B58C9766303D9219ABC81(L_0, NULL);
		V_0 = L_1;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-485512097);
	}

IL_000c:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)-560469927)));
		V_1 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_0069;
			}
			case 2:
			{
				goto IL_002d;
			}
			case 3:
			{
				goto IL_004e;
			}
		}
	}
	{
		goto IL_0069;
	}

IL_002d:
	{
		_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* L_3 = V_0;
		NullCheck(L_3);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = L_3->____jnUZFCWC8xB4HKolPN7GG1qFpEZ_0;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = ((int32_t)94779316);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
		goto IL_0043;
	}

IL_003d:
	{
		int32_t L_6 = ((int32_t)1611107030);
		G_B7_0 = L_6;
		G_B7_1 = L_6;
	}

IL_0043:
	{
		uint32_t L_7 = V_1;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)1511666047)))));
		goto IL_000c;
	}

IL_004e:
	{
		_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* L_8 = V_0;
		NullCheck(L_8);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = L_8->____jnUZFCWC8xB4HKolPN7GG1qFpEZ_0;
		String_t* L_10 = p1;
		NullCheck(L_9);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_9, L_10, NULL);
		uint32_t L_11 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)-1473917694)))^((int32_t)-285765886)));
		goto IL_000c;
	}

IL_0069:
	{
		return;
	}
}
// _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B::_Gq2sJTnCZkFRzwYSza1nTFaNTIh(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* _V1fgpHIlEfdgcIGdMwPd9AxlM8B__Gq2sJTnCZkFRzwYSza1nTFaNTIh_m59562BBB55C9A8FB1A4B58C9766303D9219ABC81 (intptr_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint32_t V_1 = 0;
	{
		intptr_t L_0 = p0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_op_Explicit_mA5F28206637454AD677BE13DF86C6152190B6F0F(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		return ((_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06*)IsInstClass((RuntimeObject*)L_2, _V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06_il2cpp_TypeInfo_var));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void _hJLCzgFsr5XwEFNZUdsLyRBbY1n_Invoke_m5B2CF35A63E7F21C5CDFB0332E7745B29CEEBCBF_Multicast(_hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E* __this, intptr_t ___customNativeAd0, String_t* ___error1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E* currentDelegate = reinterpret_cast<_hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___customNativeAd0, ___error1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void _hJLCzgFsr5XwEFNZUdsLyRBbY1n_Invoke_m5B2CF35A63E7F21C5CDFB0332E7745B29CEEBCBF_OpenInst(_hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E* __this, intptr_t ___customNativeAd0, String_t* ___error1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___customNativeAd0, ___error1, method);
}
void _hJLCzgFsr5XwEFNZUdsLyRBbY1n_Invoke_m5B2CF35A63E7F21C5CDFB0332E7745B29CEEBCBF_OpenStatic(_hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E* __this, intptr_t ___customNativeAd0, String_t* ___error1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___customNativeAd0, ___error1, method);
}
void _hJLCzgFsr5XwEFNZUdsLyRBbY1n_Invoke_m5B2CF35A63E7F21C5CDFB0332E7745B29CEEBCBF_OpenStaticInvoker(_hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E* __this, intptr_t ___customNativeAd0, String_t* ___error1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___customNativeAd0, ___error1);
}
void _hJLCzgFsr5XwEFNZUdsLyRBbY1n_Invoke_m5B2CF35A63E7F21C5CDFB0332E7745B29CEEBCBF_ClosedStaticInvoker(_hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E* __this, intptr_t ___customNativeAd0, String_t* ___error1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___customNativeAd0, ___error1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E (_hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E* __this, intptr_t ___customNativeAd0, String_t* ___error1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___error1' to native representation
	char* ____error1_marshaled = NULL;
	____error1_marshaled = il2cpp_codegen_marshal_string(___error1);

	// Native function invocation
	il2cppPInvokeFunc(___customNativeAd0, ____error1_marshaled);

	// Marshaling cleanup of parameter '___error1' native representation
	il2cpp_codegen_marshal_free(____error1_marshaled);
	____error1_marshaled = NULL;

}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B/_hJLCzgFsr5XwEFNZUdsLyRBbY1n::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _hJLCzgFsr5XwEFNZUdsLyRBbY1n__ctor_m6D0CA49E1FE826DE9B1A12DCB3A2838275820F35 (_hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)p1);
	__this->___method_3 = p1;
	__this->___m_target_2 = p0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)p0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)p1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)p1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)p1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_hJLCzgFsr5XwEFNZUdsLyRBbY1n_Invoke_m5B2CF35A63E7F21C5CDFB0332E7745B29CEEBCBF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_hJLCzgFsr5XwEFNZUdsLyRBbY1n_Invoke_m5B2CF35A63E7F21C5CDFB0332E7745B29CEEBCBF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_hJLCzgFsr5XwEFNZUdsLyRBbY1n_Invoke_m5B2CF35A63E7F21C5CDFB0332E7745B29CEEBCBF_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (p0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_hJLCzgFsr5XwEFNZUdsLyRBbY1n_Invoke_m5B2CF35A63E7F21C5CDFB0332E7745B29CEEBCBF_Multicast;
}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B/_hJLCzgFsr5XwEFNZUdsLyRBbY1n::Invoke(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _hJLCzgFsr5XwEFNZUdsLyRBbY1n_Invoke_m5B2CF35A63E7F21C5CDFB0332E7745B29CEEBCBF (_hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E* __this, intptr_t ___customNativeAd0, String_t* ___error1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___customNativeAd0, ___error1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B/_hJLCzgFsr5XwEFNZUdsLyRBbY1n::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _hJLCzgFsr5XwEFNZUdsLyRBbY1n_BeginInvoke_mBC6DE0026A4D431D8D0067476E3CA8A79BFF6292 (_hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E* __this, intptr_t ___customNativeAd0, String_t* ___error1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___customNativeAd0);
	__d_args[1] = ___error1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B/_hJLCzgFsr5XwEFNZUdsLyRBbY1n::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _hJLCzgFsr5XwEFNZUdsLyRBbY1n_EndInvoke_m6AD4317AE2275BF0F81F6F1A429A17B776ABBA2A (_hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.GoogleMobileAdsNativeClientFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleMobileAdsNativeClientFactory__ctor_mC8A2ACE2D5A1CFD16353DD873120B98007576D60 (GoogleMobileAdsNativeClientFactory_t56A85695ED415D0555B943F8286F9D133C1E5A17* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// GoogleMobileAds.Common.IAdLoaderClient GoogleMobileAds.GoogleMobileAdsNativeClientFactory::BuildAdLoaderClient(GoogleMobileAds.Common.AdLoaderClientArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GoogleMobileAdsNativeClientFactory_BuildAdLoaderClient_m47E37644D08AD596D698903044B753E0F6A5B43D (GoogleMobileAdsNativeClientFactory_t56A85695ED415D0555B943F8286F9D133C1E5A17* __this, AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0040;
		}
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)960946919);
	}

IL_000d:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1938459138)));
		V_0 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0008;
			}
			case 1:
			{
				goto IL_0040;
			}
			case 2:
			{
				goto IL_002a;
			}
		}
	}
	{
		goto IL_0040;
	}

IL_002a:
	{
		AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* L_2 = ___args0;
		AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* L_3 = (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8*)il2cpp_codegen_object_new(AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AdLoaderClient__ctor_mAFBE1F5B092352C194AF1755487E1EBCF031A6E6(L_3, L_2, NULL);
		return L_3;
	}
	// Dead block : IL_0031: ldloc.0

IL_0040:
	{
		DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F* L_4 = (DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F*)il2cpp_codegen_object_new(DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		DummyNativeClient__ctor_m116A1174D312D713C92ADBB744748987A37D15C1(L_4, NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper__5cABXlEfG0XrM4WXXDifxKEqMEo__uyQChhTuYAD4XmnCPT7w5kYlPWK_mF117471058E918D701EDBCAE2C6BB56449A77822(intptr_t p0, int32_t p1, int64_t p2, char* p3)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter 'p3' to managed representation
	String_t* _p3_unmarshaled = NULL;
	_p3_unmarshaled = il2cpp_codegen_marshal_string_result(p3);

	// Managed method invocation
	_5cABXlEfG0XrM4WXXDifxKEqMEo__uyQChhTuYAD4XmnCPT7w5kYlPWK_mF117471058E918D701EDBCAE2C6BB56449A77822(p0, p1, p2, _p3_unmarshaled, NULL);

}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _5cABXlEfG0XrM4WXXDifxKEqMEo__ctor_m115C0979B589832B5A4FE26A0B7FFF91A39E9298 (_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* __this, intptr_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeAdInteractionHandlerClient_t67E48A14F0DE4196E5B988AF4C286978320E51B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0 = p0;
		__this->____h8R8tAmk7RkNLJCCbDABkkUrmXaA_1 = L_0;
		intptr_t L_1 = p0;
		intptr_t L_2;
		L_2 = _za1hl4laeXrpCPhipDgCWTaGcooA__kTWX9GpiTVfOr7dimO6CIxdb3UW_m367A249AC3800738EAA5C50FE5F6B7292E52B14C(L_1, NULL);
		V_0 = L_2;
		intptr_t L_3 = V_0;
		NativeAdInteractionHandlerClient_t67E48A14F0DE4196E5B988AF4C286978320E51B8* L_4 = (NativeAdInteractionHandlerClient_t67E48A14F0DE4196E5B988AF4C286978320E51B8*)il2cpp_codegen_object_new(NativeAdInteractionHandlerClient_t67E48A14F0DE4196E5B988AF4C286978320E51B8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		NativeAdInteractionHandlerClient__ctor_m86D96A37A95A4621B9C9CA21AFC1AA57DF0B7DE5(L_4, L_3, NULL);
		__this->____JraWJG4bYLMuGhZjQ4LEZRSUL8D_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____JraWJG4bYLMuGhZjQ4LEZRSUL8D_2), (void*)L_4);
		return;
	}
}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _5cABXlEfG0XrM4WXXDifxKEqMEo_add_OnPaidEvent_mE790E52B507C766920CE55F032AEEE1DB047CF04 (_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->____seVs0aajbbSrYwUUne4mC9qwqsE_0;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1734247489);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1612504710)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_0007;
			}
			case 3:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)1416582498);
		goto IL_000c;
	}

IL_0036:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_3 = (&__this->____seVs0aajbbSrYwUUne4mC9qwqsE_0);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_3, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_6, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_10))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)570074727);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)150409681);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)1013613956)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::remove_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _5cABXlEfG0XrM4WXXDifxKEqMEo_remove_OnPaidEvent_m63B43B21AD79A97D7CBC95DAE23E148EB7B6FD13 (_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->____seVs0aajbbSrYwUUne4mC9qwqsE_0;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)760904732);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)684737939)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0029;
			}
			case 2:
			{
				goto IL_0007;
			}
		}
	}
	{
		goto IL_0059;
	}

IL_0029:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_2 = V_0;
		V_1 = L_2;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_3 = (&__this->____seVs0aajbbSrYwUUne4mC9qwqsE_0);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_3, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_6, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_10))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ((int32_t)1059381420);
		G_B7_0 = L_11;
		G_B7_1 = L_11;
		goto IL_0056;
	}

IL_0050:
	{
		int32_t L_12 = ((int32_t)760904732);
		G_B7_0 = L_12;
		G_B7_1 = L_12;
	}

IL_0056:
	{
		G_B2_0 = G_B7_1;
		goto IL_000c;
	}

IL_0059:
	{
		return;
	}
}
// GoogleMobileAds.Common.INativeAdInteractionHandlerClient _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::GetInteractionHandlerClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _5cABXlEfG0XrM4WXXDifxKEqMEo_GetInteractionHandlerClient_mC955EC1CB9A1BEF1221611C489A8CECC1B1575C9 (_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		NativeAdInteractionHandlerClient_t67E48A14F0DE4196E5B988AF4C286978320E51B8* L_0 = __this->____JraWJG4bYLMuGhZjQ4LEZRSUL8D_2;
		return L_0;
	}
}
// System.Collections.Generic.List`1<System.String> _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::GetMainImageURLs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* _5cABXlEfG0XrM4WXXDifxKEqMEo_GetMainImageURLs_mB9354202AC89FE242B583CCCAD857329ADF54F8D (_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_1 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_4;
	memset((&V_4), 0, sizeof(V_4));
	uint32_t V_5 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	{
		intptr_t L_0 = __this->____h8R8tAmk7RkNLJCCbDABkkUrmXaA_1;
		intptr_t L_1;
		L_1 = _za1hl4laeXrpCPhipDgCWTaGcooA__t7yhA3nJYckCEyX1l0SAL51ip23_m029B0FCF5675D3695C924DB9B0AF66478D2810BA(L_0, NULL);
		String_t* L_2;
		L_2 = Utils_PtrToString_mCBE79FE8ECC8CB98B62B9AE89B572F576EA0A08C(L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = Json_Deserialize_m1823918610311F093CBF1E0C77B52C348008763B(L_3, NULL);
		V_1 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)IsInstClass((RuntimeObject*)L_4, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var));
	}

IL_001d:
	{
		G_B2_0 = ((int32_t)1765038063);
	}

IL_0022:
	{
		int32_t L_5 = ((int32_t)(G_B2_0^((int32_t)1810621998)));
		V_5 = L_5;
		switch (((int32_t)((uint32_t)(int32_t)L_5%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_0040;
			}
			case 2:
			{
				goto IL_0056;
			}
		}
	}
	{
		goto IL_0056;
	}

IL_0040:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_6, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_2 = L_6;
		uint32_t L_7 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)-95434588)))^((int32_t)-650724562)));
		goto IL_0022;
	}

IL_0056:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_8 = V_1;
		NullCheck(L_8);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_9;
		L_9 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_8, List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var);
		V_4 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00be:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_4), Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a2_1;
			}

IL_0060_1:
			{
				G_B8_0 = ((int32_t)684331435);
			}

IL_0065_1:
			{
				int32_t L_10 = ((int32_t)(G_B8_0^((int32_t)1810621998)));
				V_5 = L_10;
				switch (((int32_t)((uint32_t)(int32_t)L_10%(uint32_t)(int32_t)4)))
				{
					case 0:
					{
						goto IL_00a2_1;
					}
					case 1:
					{
						goto IL_0087_1;
					}
					case 2:
					{
						goto IL_0060_1;
					}
					case 3:
					{
						goto IL_00bc_1;
					}
				}
			}
			{
				goto IL_00bc_1;
			}

IL_0087_1:
			{
				RuntimeObject* L_11;
				L_11 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline((&V_4), Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var);
				V_3 = L_11;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = V_2;
				RuntimeObject* L_13 = V_3;
				NullCheck(L_13);
				String_t* L_14;
				L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
				NullCheck(L_12);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_12, L_14, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
				G_B8_0 = ((int32_t)1411891190);
				goto IL_0065_1;
			}

IL_00a2_1:
			{
				bool L_15;
				L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB((&V_4), Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00b3_1;
				}
			}
			{
				int32_t L_16 = ((int32_t)744415421);
				G_B14_0 = L_16;
				G_B14_1 = L_16;
				goto IL_00b9_1;
			}

IL_00b3_1:
			{
				int32_t L_17 = ((int32_t)684331435);
				G_B14_0 = L_17;
				G_B14_1 = L_17;
			}

IL_00b9_1:
			{
				G_B8_0 = G_B14_1;
				goto IL_0065_1;
			}

IL_00bc_1:
			{
				goto IL_00cc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cc:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18 = V_2;
		return L_18;
	}
}
// System.String _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::GetIconURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _5cABXlEfG0XrM4WXXDifxKEqMEo_GetIconURL_m0E8F1105AE34400C7564CAAA89ACD0B1CF4BB0AD (_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = __this->____h8R8tAmk7RkNLJCCbDABkkUrmXaA_1;
		intptr_t L_1;
		L_1 = _za1hl4laeXrpCPhipDgCWTaGcooA__hXKXtP3Q0VQAhB3a9lNcUrBCFKpA_mA10E41E0D1231160481F07FDF148F61AFD40920A(L_0, NULL);
		String_t* L_2;
		L_2 = Utils_PtrToString_mCBE79FE8ECC8CB98B62B9AE89B572F576EA0A08C(L_1, NULL);
		return L_2;
	}
}
// System.String _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::GetAdChoicesLogoURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _5cABXlEfG0XrM4WXXDifxKEqMEo_GetAdChoicesLogoURL_m7B53383FE543CF584B7227C8E08A5F06EA7D672A (_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = __this->____h8R8tAmk7RkNLJCCbDABkkUrmXaA_1;
		intptr_t L_1;
		L_1 = _za1hl4laeXrpCPhipDgCWTaGcooA__mbZHGU1NGn2yUkvG8m33kkfIAod_m48C45CD730A288681DD65CD6779E373B8D4081CF(L_0, NULL);
		String_t* L_2;
		L_2 = Utils_PtrToString_mCBE79FE8ECC8CB98B62B9AE89B572F576EA0A08C(L_1, NULL);
		return L_2;
	}
}
// System.Double _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::GetStarRating()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double _5cABXlEfG0XrM4WXXDifxKEqMEo_GetStarRating_m617626B008A4BECE1DE51A09487F8EAEEA25AA36 (_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = __this->____h8R8tAmk7RkNLJCCbDABkkUrmXaA_1;
		double L_1;
		L_1 = _za1hl4laeXrpCPhipDgCWTaGcooA__DWc3Rd4i6AS04RdTCEnlk98nOrP_mA1B10DE1E987D88851A26AAD14C6C4C2BBCEF4C6(L_0, NULL);
		return L_1;
	}
}
// System.String _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::GetHeadline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _5cABXlEfG0XrM4WXXDifxKEqMEo_GetHeadline_mA839B4B3A116B6203746D050B145F289483D6018 (_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = __this->____h8R8tAmk7RkNLJCCbDABkkUrmXaA_1;
		intptr_t L_1;
		L_1 = _za1hl4laeXrpCPhipDgCWTaGcooA__WDCDUwJ5OfEKCY0Io3ukTaT2eSH_m094B44F7AB60450CB7F4686E9CEB7A521E1245D4(L_0, NULL);
		String_t* L_2;
		L_2 = Utils_PtrToString_mCBE79FE8ECC8CB98B62B9AE89B572F576EA0A08C(L_1, NULL);
		return L_2;
	}
}
// System.String _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::GetBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _5cABXlEfG0XrM4WXXDifxKEqMEo_GetBody_mD8AD6AC58DE74D3549AA1C7F293C050542D6935D (_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = __this->____h8R8tAmk7RkNLJCCbDABkkUrmXaA_1;
		intptr_t L_1;
		L_1 = _za1hl4laeXrpCPhipDgCWTaGcooA__uWrZG4X0g4xz7ZcWN7vkHw29uHg_m4C5A4BE6AECA76F503EF33479B0AA6F6B82B8796(L_0, NULL);
		String_t* L_2;
		L_2 = Utils_PtrToString_mCBE79FE8ECC8CB98B62B9AE89B572F576EA0A08C(L_1, NULL);
		return L_2;
	}
}
// System.String _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::GetCallToAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _5cABXlEfG0XrM4WXXDifxKEqMEo_GetCallToAction_m792227B08ABD19031A9A23C1FC355412F61C3F17 (_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = __this->____h8R8tAmk7RkNLJCCbDABkkUrmXaA_1;
		intptr_t L_1;
		L_1 = _za1hl4laeXrpCPhipDgCWTaGcooA__WBjHLdy0u2OPvLcberYaz4E5lkm_m4D8E5909E3E658962014C661A33EEE63417F0BBF(L_0, NULL);
		String_t* L_2;
		L_2 = Utils_PtrToString_mCBE79FE8ECC8CB98B62B9AE89B572F576EA0A08C(L_1, NULL);
		return L_2;
	}
}
// System.String _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::GetAdvertiser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _5cABXlEfG0XrM4WXXDifxKEqMEo_GetAdvertiser_mE38CF2229917EEC2F33AFA16BE82EB9B522C4DF9 (_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = __this->____h8R8tAmk7RkNLJCCbDABkkUrmXaA_1;
		intptr_t L_1;
		L_1 = _za1hl4laeXrpCPhipDgCWTaGcooA__vFIadokDOTtgJ2SiWH4eqbx3GE6_m03175F446BC6562E1EB19284D8C72183360057BF(L_0, NULL);
		String_t* L_2;
		L_2 = Utils_PtrToString_mCBE79FE8ECC8CB98B62B9AE89B572F576EA0A08C(L_1, NULL);
		return L_2;
	}
}
// System.String _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::GetPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _5cABXlEfG0XrM4WXXDifxKEqMEo_GetPrice_mD27C371D8B7CEF67F7DDBD52CDF7391B9BD58C60 (_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = __this->____h8R8tAmk7RkNLJCCbDABkkUrmXaA_1;
		intptr_t L_1;
		L_1 = _za1hl4laeXrpCPhipDgCWTaGcooA__gFmfUNK8EYjhw3mp5MXbIsT6A2P_mF3C274BE668F7FF9510EABB91544F8D1B348F6ED(L_0, NULL);
		String_t* L_2;
		L_2 = Utils_PtrToString_mCBE79FE8ECC8CB98B62B9AE89B572F576EA0A08C(L_1, NULL);
		return L_2;
	}
}
// System.String _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::GetStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _5cABXlEfG0XrM4WXXDifxKEqMEo_GetStore_m5F3799BF2B98A1BF91C2DA41F387B9CBC3774E47 (_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = __this->____h8R8tAmk7RkNLJCCbDABkkUrmXaA_1;
		intptr_t L_1;
		L_1 = _za1hl4laeXrpCPhipDgCWTaGcooA__iCtP0CTRXdgzVLvcFVQ0TKs8TLA_m452124A2ABEA28BEEB321B47F9E875DBF7CCD51D(L_0, NULL);
		String_t* L_2;
		L_2 = Utils_PtrToString_mCBE79FE8ECC8CB98B62B9AE89B572F576EA0A08C(L_1, NULL);
		return L_2;
	}
}
// System.String _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::MediationAdapterClassName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _5cABXlEfG0XrM4WXXDifxKEqMEo_MediationAdapterClassName_m3C76FDBBE423268C16B13B53EF041FA3F8086322 (_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = __this->____h8R8tAmk7RkNLJCCbDABkkUrmXaA_1;
		intptr_t L_1;
		L_1 = _za1hl4laeXrpCPhipDgCWTaGcooA__p5UYp9tuvsNktz0mhJB955cWwRC_m0F44FA1F23E93DEE7DA66852FA6B2D0BC12FD628(L_0, NULL);
		String_t* L_2;
		L_2 = Utils_PtrToString_mCBE79FE8ECC8CB98B62B9AE89B572F576EA0A08C(L_1, NULL);
		return L_2;
	}
}
// GoogleMobileAds.Common.IResponseInfoClient _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::GetResponseInfoClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _5cABXlEfG0XrM4WXXDifxKEqMEo_GetResponseInfoClient_mEC25F3818B5B13812858CCA7DBCF7ADD7D47E5D7 (_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseInfoClient_t03446D1122701240801753551A07C20E71012BB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = __this->____h8R8tAmk7RkNLJCCbDABkkUrmXaA_1;
		intptr_t L_1;
		L_1 = _za1hl4laeXrpCPhipDgCWTaGcooA__aWdBBUAAFBu145bGA3Db8heAy1Qb_mAE6730ADE44CD76E983C4AAF2C80666C15231C68(L_0, NULL);
		ResponseInfoClient_t03446D1122701240801753551A07C20E71012BB3* L_2 = (ResponseInfoClient_t03446D1122701240801753551A07C20E71012BB3*)il2cpp_codegen_object_new(ResponseInfoClient_t03446D1122701240801753551A07C20E71012BB3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ResponseInfoClient__ctor_m6C344F37F0C39F6CF7E3418872CA408DB9BB3560(L_2, 1, L_1, NULL);
		return L_2;
	}
}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::_uyQChhTuYAD4XmnCPT7w5kYlPWK(System.IntPtr,System.Int32,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _5cABXlEfG0XrM4WXXDifxKEqMEo__uyQChhTuYAD4XmnCPT7w5kYlPWK_mF117471058E918D701EDBCAE2C6BB56449A77822 (intptr_t p0, int32_t p1, int64_t p2, String_t* p3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* V_0 = NULL;
	AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* V_1 = NULL;
	AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* V_2 = NULL;
	AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* V_3 = NULL;
	AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* V_4 = NULL;
	uint32_t V_5 = 0;
	int32_t G_B2_0 = 0;
	{
		intptr_t L_0 = p0;
		_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* L_1;
		L_1 = _5cABXlEfG0XrM4WXXDifxKEqMEo__vcXuBmJV5TgQLULq7qkzpcabczL_m526952D3B43C6C527D650E92C1A70A707FA59994(L_0, NULL);
		V_0 = L_1;
		_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* L_2 = V_0;
		NullCheck(L_2);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = L_2->____seVs0aajbbSrYwUUne4mC9qwqsE_0;
		if (!L_3)
		{
			goto IL_00f4;
		}
	}

IL_0012:
	{
		G_B2_0 = ((int32_t)1985187991);
	}

IL_0017:
	{
		int32_t L_4 = ((int32_t)(G_B2_0^((int32_t)121893019)));
		V_5 = L_4;
		switch (((int32_t)((uint32_t)(int32_t)L_4%(uint32_t)(int32_t)8)))
		{
			case 0:
			{
				goto IL_0070;
			}
			case 1:
			{
				goto IL_0088;
			}
			case 2:
			{
				goto IL_00da;
			}
			case 3:
			{
				goto IL_00c0;
			}
			case 4:
			{
				goto IL_004c;
			}
			case 5:
			{
				goto IL_00f4;
			}
			case 6:
			{
				goto IL_00ab;
			}
			case 7:
			{
				goto IL_0012;
			}
		}
	}
	{
		goto IL_00f4;
	}

IL_004c:
	{
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_5 = (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD*)il2cpp_codegen_object_new(AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdValue__ctor_mC8469F36ABE33454B249EBBA51574A1CFAC01010(L_5, NULL);
		V_2 = L_5;
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_6 = V_2;
		int32_t L_7 = p1;
		NullCheck(L_6);
		AdValue_set_Precision_m488B0F9CAEBACDD5013E094660C3DD58B362FD03_inline(L_6, L_7, NULL);
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_8 = V_2;
		int64_t L_9 = p2;
		NullCheck(L_8);
		AdValue_set_Value_m7DF76A9D4ED62FE1F5FDBA6FEBBACD4E92115BE9_inline(L_8, L_9, NULL);
		uint32_t L_10 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)181398168)))^((int32_t)1054432080)));
		goto IL_0017;
	}

IL_0070:
	{
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_11 = V_4;
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_12 = V_1;
		NullCheck(L_11);
		AdValueEventArgs_set_AdValue_mFDB2656F4BDBCC3CE719341385666747D72F357E_inline(L_11, L_12, NULL);
		uint32_t L_13 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-2091188191)))^((int32_t)360260850)));
		goto IL_0017;
	}

IL_0088:
	{
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_14 = V_4;
		V_3 = L_14;
		_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* L_15 = V_0;
		NullCheck(L_15);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_16 = L_15->____seVs0aajbbSrYwUUne4mC9qwqsE_0;
		_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* L_17 = V_0;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_18 = V_3;
		NullCheck(L_16);
		EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline(L_16, L_17, L_18, NULL);
		uint32_t L_19 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, ((int32_t)-1841073284)))^((int32_t)-811769766)));
		goto IL_0017;
	}

IL_00ab:
	{
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_20 = V_2;
		V_1 = L_20;
		uint32_t L_21 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_21, ((int32_t)643461350)))^((int32_t)1374726413)));
		goto IL_0017;
	}

IL_00c0:
	{
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_22 = V_2;
		String_t* L_23 = p3;
		NullCheck(L_22);
		AdValue_set_CurrencyCode_mA493466D946C6484F0F20604EF0B013EA0571F71_inline(L_22, L_23, NULL);
		uint32_t L_24 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_24, ((int32_t)1294878068)))^((int32_t)-1737929831)));
		goto IL_0017;
	}

IL_00da:
	{
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_25 = (AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D*)il2cpp_codegen_object_new(AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		AdValueEventArgs__ctor_m2786F476E77E35470958434534FA8976541ED4E0(L_25, NULL);
		V_4 = L_25;
		uint32_t L_26 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_26, ((int32_t)27062256)))^((int32_t)1309112091)));
		goto IL_0017;
	}

IL_00f4:
	{
		return;
	}
}
// _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::_vcXuBmJV5TgQLULq7qkzpcabczL(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* _5cABXlEfG0XrM4WXXDifxKEqMEo__vcXuBmJV5TgQLULq7qkzpcabczL_m526952D3B43C6C527D650E92C1A70A707FA59994 (intptr_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint32_t V_1 = 0;
	{
		intptr_t L_0 = p0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_op_Explicit_mA5F28206637454AD677BE13DF86C6152190B6F0F(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		return ((_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73*)IsInstClass((RuntimeObject*)L_2, _5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73_il2cpp_TypeInfo_var));
	}
}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _5cABXlEfG0XrM4WXXDifxKEqMEo_Finalize_m447F931FDB78C6BB3FF927B16153D1E6A5FA52D2 (_5cABXlEfG0XrM4WXXDifxKEqMEo_t29F5C6B82341E8812A1939526337EFE414AEAA73* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = __this->____h8R8tAmk7RkNLJCCbDABkkUrmXaA_1;
			Externs_GADURelease_mE4B18030411CF16E761BA1AEA7FCF0807B7EA92E(L_0, NULL);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void _sqjDBw8QBlRLHS2SQPm0hC18Ngq_Invoke_m7EC983407E56E52488FCFD9E4BD6AD882402CD15_Multicast(_sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B* __this, intptr_t ___nativeAd0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B* currentDelegate = reinterpret_cast<_sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, int64_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___nativeAd0, ___precision1, ___value2, ___currencyCode3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void _sqjDBw8QBlRLHS2SQPm0hC18Ngq_Invoke_m7EC983407E56E52488FCFD9E4BD6AD882402CD15_OpenInst(_sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B* __this, intptr_t ___nativeAd0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, int64_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___nativeAd0, ___precision1, ___value2, ___currencyCode3, method);
}
void _sqjDBw8QBlRLHS2SQPm0hC18Ngq_Invoke_m7EC983407E56E52488FCFD9E4BD6AD882402CD15_OpenStatic(_sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B* __this, intptr_t ___nativeAd0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, int64_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___nativeAd0, ___precision1, ___value2, ___currencyCode3, method);
}
void _sqjDBw8QBlRLHS2SQPm0hC18Ngq_Invoke_m7EC983407E56E52488FCFD9E4BD6AD882402CD15_OpenStaticInvoker(_sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B* __this, intptr_t ___nativeAd0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, const RuntimeMethod* method)
{
	InvokerActionInvoker4< intptr_t, int32_t, int64_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___nativeAd0, ___precision1, ___value2, ___currencyCode3);
}
void _sqjDBw8QBlRLHS2SQPm0hC18Ngq_Invoke_m7EC983407E56E52488FCFD9E4BD6AD882402CD15_ClosedStaticInvoker(_sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B* __this, intptr_t ___nativeAd0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, intptr_t, int32_t, int64_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___nativeAd0, ___precision1, ___value2, ___currencyCode3);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B (_sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B* __this, intptr_t ___nativeAd0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t, int64_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___currencyCode3' to native representation
	char* ____currencyCode3_marshaled = NULL;
	____currencyCode3_marshaled = il2cpp_codegen_marshal_string(___currencyCode3);

	// Native function invocation
	il2cppPInvokeFunc(___nativeAd0, ___precision1, ___value2, ____currencyCode3_marshaled);

	// Marshaling cleanup of parameter '___currencyCode3' native representation
	il2cpp_codegen_marshal_free(____currencyCode3_marshaled);
	____currencyCode3_marshaled = NULL;

}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo/_sqjDBw8QBlRLHS2SQPm0hC18Ngq::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _sqjDBw8QBlRLHS2SQPm0hC18Ngq__ctor_mF8556B4C13E0FC755628E50B0F91DEEDD8B35973 (_sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)p1);
	__this->___method_3 = p1;
	__this->___m_target_2 = p0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)p0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)p1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)p1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)p1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_sqjDBw8QBlRLHS2SQPm0hC18Ngq_Invoke_m7EC983407E56E52488FCFD9E4BD6AD882402CD15_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_sqjDBw8QBlRLHS2SQPm0hC18Ngq_Invoke_m7EC983407E56E52488FCFD9E4BD6AD882402CD15_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_sqjDBw8QBlRLHS2SQPm0hC18Ngq_Invoke_m7EC983407E56E52488FCFD9E4BD6AD882402CD15_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (p0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_sqjDBw8QBlRLHS2SQPm0hC18Ngq_Invoke_m7EC983407E56E52488FCFD9E4BD6AD882402CD15_Multicast;
}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo/_sqjDBw8QBlRLHS2SQPm0hC18Ngq::Invoke(System.IntPtr,System.Int32,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _sqjDBw8QBlRLHS2SQPm0hC18Ngq_Invoke_m7EC983407E56E52488FCFD9E4BD6AD882402CD15 (_sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B* __this, intptr_t ___nativeAd0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, int64_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___nativeAd0, ___precision1, ___value2, ___currencyCode3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo/_sqjDBw8QBlRLHS2SQPm0hC18Ngq::BeginInvoke(System.IntPtr,System.Int32,System.Int64,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _sqjDBw8QBlRLHS2SQPm0hC18Ngq_BeginInvoke_mCA01C7C7012025EC2AF1139CD5467970FCE026EB (_sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B* __this, intptr_t ___nativeAd0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___object5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___nativeAd0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___precision1);
	__d_args[2] = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &___value2);
	__d_args[3] = ___currencyCode3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo/_sqjDBw8QBlRLHS2SQPm0hC18Ngq::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _sqjDBw8QBlRLHS2SQPm0hC18Ngq_EndInvoke_mD0A02B12C3BF7DA9CB2C4C3D408E52198FC9076E (_sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.iOS.NativeAdInteractionHandlerClient::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAdInteractionHandlerClient__ctor_m86D96A37A95A4621B9C9CA21AFC1AA57DF0B7DE5 (NativeAdInteractionHandlerClient_t67E48A14F0DE4196E5B988AF4C286978320E51B8* __this, intptr_t p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)220408207);
	}

IL_000b:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)989863420)));
		V_0 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_004a;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_0006;
			}
		}
	}
	{
		goto IL_004a;
	}

IL_0028:
	{
		intptr_t L_1 = p0;
		__this->____h8R8tAmk7RkNLJCCbDABkkUrmXaA_0 = L_1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2;
		L_2 = NativeAdInteractionHandlerClient_BuildAssetIDMappings_mD4ED672CFBC9C8DA7E24CF78FA3EE1D8DB3976C1(__this, NULL);
		__this->___assetIDMappings_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___assetIDMappings_1), (void*)L_2);
		uint32_t L_3 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)-1732479648)))^((int32_t)175132474)));
		goto IL_000b;
	}

IL_004a:
	{
		return;
	}
}
// System.Boolean GoogleMobileAds.iOS.NativeAdInteractionHandlerClient::RecordImpression(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeAdInteractionHandlerClient_RecordImpression_mA91BCD250755E2CC17915425A0D454C7DACA787A (NativeAdInteractionHandlerClient_t67E48A14F0DE4196E5B988AF4C286978320E51B8* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___signal0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = __this->____h8R8tAmk7RkNLJCCbDABkkUrmXaA_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___signal0;
		String_t* L_2;
		L_2 = Json_Serialize_m695EB36DCD38B14656ECDCD9C5DB32A04E31AA50(L_1, NULL);
		bool L_3;
		L_3 = _za1hl4laeXrpCPhipDgCWTaGcooA__rXvGpBRd3xFdZ8twrb5h6IStzZq_mBDEE4C1523CBBDE17746B65EC191ACAE1C8D1B4C(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Void GoogleMobileAds.iOS.NativeAdInteractionHandlerClient::PerformClick(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAdInteractionHandlerClient_PerformClick_m141C553D33E1071AA020789FFB0C4C30D3231775 (NativeAdInteractionHandlerClient_t67E48A14F0DE4196E5B988AF4C286978320E51B8* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___signal0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = __this->____h8R8tAmk7RkNLJCCbDABkkUrmXaA_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___signal0;
		String_t* L_2;
		L_2 = Json_Serialize_m695EB36DCD38B14656ECDCD9C5DB32A04E31AA50(L_1, NULL);
		bool L_3;
		L_3 = _za1hl4laeXrpCPhipDgCWTaGcooA__0KaMHBxhInYeusWI1TneKQxj0hC_m3E1F144DBE433ABE90D7D0BFF1ADABD62769EA36(L_0, L_2, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.NativeAdInteractionHandlerClient::ReportTouchEvent(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAdInteractionHandlerClient_ReportTouchEvent_m2876040DFC5489816975B37FF26A6E85F6070C2C (NativeAdInteractionHandlerClient_t67E48A14F0DE4196E5B988AF4C286978320E51B8* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___signal0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = __this->____h8R8tAmk7RkNLJCCbDABkkUrmXaA_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = ___signal0;
		String_t* L_2;
		L_2 = Json_Serialize_m695EB36DCD38B14656ECDCD9C5DB32A04E31AA50(L_1, NULL);
		bool L_3;
		L_3 = _za1hl4laeXrpCPhipDgCWTaGcooA__PqqGVwEk5CoaTqwXLnC42G68Rep_m53378701ABE8E00E2C1848766732DB63AC4E0666(L_0, L_2, NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.iOS.NativeAdInteractionHandlerClient::BuildAssetIDMappings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* NativeAdInteractionHandlerClient_BuildAssetIDMappings_mD4ED672CFBC9C8DA7E24CF78FA3EE1D8DB3976C1 (NativeAdInteractionHandlerClient_t67E48A14F0DE4196E5B988AF4C286978320E51B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		intptr_t L_0 = __this->____h8R8tAmk7RkNLJCCbDABkkUrmXaA_0;
		intptr_t L_1;
		L_1 = _za1hl4laeXrpCPhipDgCWTaGcooA__tK1sRL4sKtjp37IZU4HQcR7CeCh_m910F0B75F07F0DE476E3CA2EC235166EB754C5FE(L_0, NULL);
		String_t* L_2;
		L_2 = Utils_PtrToString_mCBE79FE8ECC8CB98B62B9AE89B572F576EA0A08C(L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4;
		L_4 = NativeUtils_CastAssetIDMappings_m7E3C8BCCFD5A11C1B344838C26028076B70D52C2(L_3, NULL);
		return L_4;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.iOS.NativeAdInteractionHandlerClient::GetAssetIDMappings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* NativeAdInteractionHandlerClient_GetAssetIDMappings_m831E8C877A83F9AF05226E40F9F6A1D12F6A7F05 (NativeAdInteractionHandlerClient_t67E48A14F0DE4196E5B988AF4C286978320E51B8* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___assetIDMappings_1;
		return L_0;
	}
}
// System.Void GoogleMobileAds.iOS.NativeAdInteractionHandlerClient::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAdInteractionHandlerClient_Finalize_mF0606E36ED46581B5DF08E22FA022B43C430D8BC (NativeAdInteractionHandlerClient_t67E48A14F0DE4196E5B988AF4C286978320E51B8* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0002:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_0009;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0009:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _za1hl4laeXrpCPhipDgCWTaGcooA__ctor_mA041FF54216798C57C0A0425D962EEEE1EC032EA (_za1hl4laeXrpCPhipDgCWTaGcooA_tF5B39C9A9F283D873FD617339BF0DE90C04400A9* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_mKIQ1lKbrY4wFOSCkKFs3LPHi8R(System.IntPtr,System.String,System.Int32,System.String[],System.Int32,GoogleMobileAds.iOS.NativeAdTypes&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__mKIQ1lKbrY4wFOSCkKFs3LPHi8R_m1449A05966D46A26C0C4F2A5524273ADAF803DB6 (intptr_t p0, String_t* p1, int32_t p2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* p3, int32_t p4, NativeAdTypes_t667526929D789B3FAE35DF13A63FBAF70A5E8733* p5, bool p6, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, int32_t, char**, int32_t, NativeAdTypes_t667526929D789B3FAE35DF13A63FBAF70A5E8733*, int32_t);

	// Marshaling of parameter 'p1' to native representation
	char* _p1_marshaled = NULL;
	_p1_marshaled = il2cpp_codegen_marshal_string(p1);

	// Marshaling of parameter 'p3' to native representation
	char** _p3_marshaled = NULL;
	if (p3 != NULL)
	{
		il2cpp_array_size_t _p3_Length = (p3)->max_length;
		_p3_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(_p3_Length + 1);
		(_p3_marshaled)[_p3_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_p3_Length); i++)
		{
			(_p3_marshaled)[i] = il2cpp_codegen_marshal_string((p3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		_p3_marshaled = NULL;
	}

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GADUCreateAdLoader)(p0, _p1_marshaled, p2, _p3_marshaled, p4, p5, static_cast<int32_t>(p6));

	// Marshaling cleanup of parameter 'p1' native representation
	il2cpp_codegen_marshal_free(_p1_marshaled);
	_p1_marshaled = NULL;

	// Marshaling cleanup of parameter 'p3' native representation
	if (_p3_marshaled != NULL)
	{
		const il2cpp_array_size_t _p3_marshaled_CleanupLoopCount = (p3 != NULL) ? (p3)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_p3_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((_p3_marshaled)[i]);
			(_p3_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(_p3_marshaled);
		_p3_marshaled = NULL;
	}

	return returnValue;
}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_Nraa7uPS7MD4p9FZPayBGOLj3CD(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _za1hl4laeXrpCPhipDgCWTaGcooA__Nraa7uPS7MD4p9FZPayBGOLj3CD_m92A9031889212240D2BD59D0366A78183D1623F9 (intptr_t p0, intptr_t p1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADURequestNativeAd)(p0, p1);

}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_H4HqX5w5COrC5eq3907KChaofbM(System.IntPtr,GoogleMobileAds.iOS.AdLoaderClient/_pkatmrHxDeDh1gMbaNJt63dgPbDA,GoogleMobileAds.iOS.AdLoaderClient/_vXfQseAIE9IbPtrDH4WEEXJFdiA,GoogleMobileAds.iOS.AdLoaderClient/_GofQR4EAfX2hD0bdVIwCH0WZwGz,GoogleMobileAds.iOS.AdLoaderClient/_oYCq6VgAsLvfIJRn9pDMOfQveh6,GoogleMobileAds.iOS.AdLoaderClient/_fz51zdLhxoaDkS13yalGYMD9apl,GoogleMobileAds.iOS.AdLoaderClient/_RLv7HtUdTeAbp0VxmvKZJm3Yu0M,GoogleMobileAds.iOS.AdLoaderClient/_QIxxmcONDiLd99UXYm2TFDihCVS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _za1hl4laeXrpCPhipDgCWTaGcooA__H4HqX5w5COrC5eq3907KChaofbM_m767C94EF06B8D99112EC10AF7909A20102FA8B68 (intptr_t p0, _pkatmrHxDeDh1gMbaNJt63dgPbDA_t71C6BC8DCF880282D1C6B2EE5ECEDDE495C8F100* p1, _vXfQseAIE9IbPtrDH4WEEXJFdiA_t44AAFC3997C5ADA6711858CE93407B336290ADF3* p2, _GofQR4EAfX2hD0bdVIwCH0WZwGz_t2C73FE321AB95F1441650EF0B13CF9EDD2963B70* p3, _oYCq6VgAsLvfIJRn9pDMOfQveh6_t5AAC2B545F822D0BE57EEA028C68E05E93E02B7F* p4, _fz51zdLhxoaDkS13yalGYMD9apl_t992438AF86A34EC5504F6CC48FBBBB87A0DDE218* p5, _RLv7HtUdTeAbp0VxmvKZJm3Yu0M_t16ABB538F515A114129B7D014BAEF26F501B2B6E* p6, _QIxxmcONDiLd99UXYm2TFDihCVS_t2054C72D85FD099EA3BF1A8A85B93DAAB8C161C2* p7, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter 'p1' to native representation
	Il2CppMethodPointer _p1_marshaled = NULL;
	_p1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(p1));

	// Marshaling of parameter 'p2' to native representation
	Il2CppMethodPointer _p2_marshaled = NULL;
	_p2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(p2));

	// Marshaling of parameter 'p3' to native representation
	Il2CppMethodPointer _p3_marshaled = NULL;
	_p3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(p3));

	// Marshaling of parameter 'p4' to native representation
	Il2CppMethodPointer _p4_marshaled = NULL;
	_p4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(p4));

	// Marshaling of parameter 'p5' to native representation
	Il2CppMethodPointer _p5_marshaled = NULL;
	_p5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(p5));

	// Marshaling of parameter 'p6' to native representation
	Il2CppMethodPointer _p6_marshaled = NULL;
	_p6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(p6));

	// Marshaling of parameter 'p7' to native representation
	Il2CppMethodPointer _p7_marshaled = NULL;
	_p7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(p7));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADUSetAdLoaderCallbacks)(p0, _p1_marshaled, _p2_marshaled, _p3_marshaled, _p4_marshaled, _p5_marshaled, _p6_marshaled, _p7_marshaled);

}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_jG2Tvm1kBshtAy8RTI7CedIoDaY(System.IntPtr,System.IntPtr,_HFkddgMsrMSEe0kDU5USBUe5hBeA._5cABXlEfG0XrM4WXXDifxKEqMEo/_sqjDBw8QBlRLHS2SQPm0hC18Ngq)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _za1hl4laeXrpCPhipDgCWTaGcooA__jG2Tvm1kBshtAy8RTI7CedIoDaY_m9CAC0548AEA42DE3A8CD4485E43AB585B58178BA (intptr_t p0, intptr_t p1, _sqjDBw8QBlRLHS2SQPm0hC18Ngq_tFDEE95536BC8ACE57D9B2C63C86AAA848708861B* p2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);

	// Marshaling of parameter 'p2' to native representation
	Il2CppMethodPointer _p2_marshaled = NULL;
	_p2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(p2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADUSetNativeAdCallback)(p0, p1, _p2_marshaled);

}
// System.String _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_YciJAsA6I19uIJP6mPVBeYyFmDj(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _za1hl4laeXrpCPhipDgCWTaGcooA__YciJAsA6I19uIJP6mPVBeYyFmDj_m868E25B9D7EA7D26E0767FC0C24AAE8CBFF3DFAB (intptr_t p0, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(GADUCustomNativeAdFormatID)(p0);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_F6QbdpiYvARdMfabkzi6V6sotD4(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _za1hl4laeXrpCPhipDgCWTaGcooA__F6QbdpiYvARdMfabkzi6V6sotD4_mB4CEB5290AA8C6B3E3A162C759F14BCB7A033FD9 (intptr_t p0, String_t* p1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter 'p1' to native representation
	char* _p1_marshaled = NULL;
	_p1_marshaled = il2cpp_codegen_marshal_string(p1);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(GADUCustomNativeAdImageAsBytesForKey)(p0, _p1_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter 'p1' native representation
	il2cpp_codegen_marshal_free(_p1_marshaled);
	_p1_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.String _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_0ifA2aTdWYhk4RnFm3CHi3lcZCW(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _za1hl4laeXrpCPhipDgCWTaGcooA__0ifA2aTdWYhk4RnFm3CHi3lcZCW_m7AF3DF8242D9AA094E4598DA73AC7EC6CDF5A70A (intptr_t p0, String_t* p1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter 'p1' to native representation
	char* _p1_marshaled = NULL;
	_p1_marshaled = il2cpp_codegen_marshal_string(p1);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(GADUCustomNativeAdStringForKey)(p0, _p1_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter 'p1' native representation
	il2cpp_codegen_marshal_free(_p1_marshaled);
	_p1_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_oxlFQF0u2DBJGekgybCDEAEpnBw(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _za1hl4laeXrpCPhipDgCWTaGcooA__oxlFQF0u2DBJGekgybCDEAEpnBw_mEA8AF5FA096109F9575700EDC606CFA23B2EB427 (intptr_t p0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADUCustomNativeAdRecordImpression)(p0);

}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_Qi0zsQa21U0Vcy36eYbpfkjllPB(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _za1hl4laeXrpCPhipDgCWTaGcooA__Qi0zsQa21U0Vcy36eYbpfkjllPB_mEB5D18947953723F796D7B2BC236CF74A985F4B3 (intptr_t p0, String_t* p1, bool p2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, int32_t);

	// Marshaling of parameter 'p1' to native representation
	char* _p1_marshaled = NULL;
	_p1_marshaled = il2cpp_codegen_marshal_string(p1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADUCustomNativeAdPerformClickOnAssetWithKey)(p0, _p1_marshaled, static_cast<int32_t>(p2));

	// Marshaling cleanup of parameter 'p1' native representation
	il2cpp_codegen_marshal_free(_p1_marshaled);
	_p1_marshaled = NULL;

}
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_AAKiTtRAAtSE22SKaqHSO0lGt4i(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__AAKiTtRAAtSE22SKaqHSO0lGt4i_m3872838C0AB31C4185D75EC399BFFACCCCD390EB (intptr_t p0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GADUCustomNativeAdAvailableAssetKeys)(p0);

	return returnValue;
}
// System.Int32 _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_qncAEMgRTY2BgAhaaJJImuoWka2(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _za1hl4laeXrpCPhipDgCWTaGcooA__qncAEMgRTY2BgAhaaJJImuoWka2_m27B05FC591F93F9B71C676F098D48DF600F04654 (intptr_t p0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GADUCustomNativeAdNumberOfAvailableAssetKeys)(p0);

	return returnValue;
}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_YN2IWM1qgUZSKdBhtOJa3BJjSDH(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _za1hl4laeXrpCPhipDgCWTaGcooA__YN2IWM1qgUZSKdBhtOJa3BJjSDH_m294A15EC59A4C10427B1D1CAE1927F053BA5B4FB (intptr_t p0, intptr_t p1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADUSetCustomNativeAdUnityClient)(p0, p1);

}
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_ibxz0UHGSQhjjx1HSuobaufiEwg(System.IntPtr,_HFkddgMsrMSEe0kDU5USBUe5hBeA._V1fgpHIlEfdgcIGdMwPd9AxlM8B/_hJLCzgFsr5XwEFNZUdsLyRBbY1n)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _za1hl4laeXrpCPhipDgCWTaGcooA__ibxz0UHGSQhjjx1HSuobaufiEwg_m81E3F6EF8B42948DBB65E84DB204E3C878CA9FEA (intptr_t p0, _hJLCzgFsr5XwEFNZUdsLyRBbY1n_t4BC44284C03F697F12D60A6D8A2CA7701394AC2E* p1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);

	// Marshaling of parameter 'p1' to native representation
	Il2CppMethodPointer _p1_marshaled = NULL;
	_p1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(p1));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADUSetCustomNativeAdCallbacks)(p0, _p1_marshaled);

}
// System.Boolean _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_rXvGpBRd3xFdZ8twrb5h6IStzZq(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _za1hl4laeXrpCPhipDgCWTaGcooA__rXvGpBRd3xFdZ8twrb5h6IStzZq_mBDEE4C1523CBBDE17746B65EC191ACAE1C8D1B4C (intptr_t p0, String_t* p1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter 'p1' to native representation
	char* _p1_marshaled = NULL;
	_p1_marshaled = il2cpp_codegen_marshal_string(p1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GADURecordPossibleImpressionForNativeAd)(p0, _p1_marshaled);

	// Marshaling cleanup of parameter 'p1' native representation
	il2cpp_codegen_marshal_free(_p1_marshaled);
	_p1_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Boolean _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_0KaMHBxhInYeusWI1TneKQxj0hC(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _za1hl4laeXrpCPhipDgCWTaGcooA__0KaMHBxhInYeusWI1TneKQxj0hC_m3E1F144DBE433ABE90D7D0BFF1ADABD62769EA36 (intptr_t p0, String_t* p1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter 'p1' to native representation
	char* _p1_marshaled = NULL;
	_p1_marshaled = il2cpp_codegen_marshal_string(p1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GADUPerformClickOnNativeAd)(p0, _p1_marshaled);

	// Marshaling cleanup of parameter 'p1' native representation
	il2cpp_codegen_marshal_free(_p1_marshaled);
	_p1_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Boolean _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_PqqGVwEk5CoaTqwXLnC42G68Rep(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _za1hl4laeXrpCPhipDgCWTaGcooA__PqqGVwEk5CoaTqwXLnC42G68Rep_m53378701ABE8E00E2C1848766732DB63AC4E0666 (intptr_t p0, String_t* p1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter 'p1' to native representation
	char* _p1_marshaled = NULL;
	_p1_marshaled = il2cpp_codegen_marshal_string(p1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GADUReportTouchEventOnNativeAd)(p0, _p1_marshaled);

	// Marshaling cleanup of parameter 'p1' native representation
	il2cpp_codegen_marshal_free(_p1_marshaled);
	_p1_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_tK1sRL4sKtjp37IZU4HQcR7CeCh(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__tK1sRL4sKtjp37IZU4HQcR7CeCh_m910F0B75F07F0DE476E3CA2EC235166EB754C5FE (intptr_t p0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GADUNativeAdAssetIDMappings)(p0);

	return returnValue;
}
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_kTWX9GpiTVfOr7dimO6CIxdb3UW(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__kTWX9GpiTVfOr7dimO6CIxdb3UW_m367A249AC3800738EAA5C50FE5F6B7292E52B14C (intptr_t p0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GADUGetNativeAd)(p0);

	return returnValue;
}
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_t7yhA3nJYckCEyX1l0SAL51ip23(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__t7yhA3nJYckCEyX1l0SAL51ip23_m029B0FCF5675D3695C924DB9B0AF66478D2810BA (intptr_t p0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GADUNativeAdMainImagesURLs)(p0);

	return returnValue;
}
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_hXKXtP3Q0VQAhB3a9lNcUrBCFKpA(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__hXKXtP3Q0VQAhB3a9lNcUrBCFKpA_mA10E41E0D1231160481F07FDF148F61AFD40920A (intptr_t p0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GADUNativeAdIconURL)(p0);

	return returnValue;
}
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_mbZHGU1NGn2yUkvG8m33kkfIAod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__mbZHGU1NGn2yUkvG8m33kkfIAod_m48C45CD730A288681DD65CD6779E373B8D4081CF (intptr_t p0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GADUNativeAdAdChoicesLogoURL)(p0);

	return returnValue;
}
// System.Double _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_DWc3Rd4i6AS04RdTCEnlk98nOrP(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double _za1hl4laeXrpCPhipDgCWTaGcooA__DWc3Rd4i6AS04RdTCEnlk98nOrP_mA1B10DE1E987D88851A26AAD14C6C4C2BBCEF4C6 (intptr_t p0, const RuntimeMethod* method) 
{
	typedef double (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	double returnValue = reinterpret_cast<PInvokeFunc>(GADUNativeAdStarRating)(p0);

	return returnValue;
}
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_WDCDUwJ5OfEKCY0Io3ukTaT2eSH(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__WDCDUwJ5OfEKCY0Io3ukTaT2eSH_m094B44F7AB60450CB7F4686E9CEB7A521E1245D4 (intptr_t p0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GADUNativeAdHeadline)(p0);

	return returnValue;
}
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_uWrZG4X0g4xz7ZcWN7vkHw29uHg(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__uWrZG4X0g4xz7ZcWN7vkHw29uHg_m4C5A4BE6AECA76F503EF33479B0AA6F6B82B8796 (intptr_t p0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GADUNativeAdBody)(p0);

	return returnValue;
}
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_WBjHLdy0u2OPvLcberYaz4E5lkm(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__WBjHLdy0u2OPvLcberYaz4E5lkm_m4D8E5909E3E658962014C661A33EEE63417F0BBF (intptr_t p0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GADUNativeAdCallToAction)(p0);

	return returnValue;
}
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_vFIadokDOTtgJ2SiWH4eqbx3GE6(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__vFIadokDOTtgJ2SiWH4eqbx3GE6_m03175F446BC6562E1EB19284D8C72183360057BF (intptr_t p0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GADUNativeAdAdvertiser)(p0);

	return returnValue;
}
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_gFmfUNK8EYjhw3mp5MXbIsT6A2P(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__gFmfUNK8EYjhw3mp5MXbIsT6A2P_mF3C274BE668F7FF9510EABB91544F8D1B348F6ED (intptr_t p0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GADUNativeAdPrice)(p0);

	return returnValue;
}
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_iCtP0CTRXdgzVLvcFVQ0TKs8TLA(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__iCtP0CTRXdgzVLvcFVQ0TKs8TLA_m452124A2ABEA28BEEB321B47F9E875DBF7CCD51D (intptr_t p0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GADUNativeAdStore)(p0);

	return returnValue;
}
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_p5UYp9tuvsNktz0mhJB955cWwRC(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__p5UYp9tuvsNktz0mhJB955cWwRC_m0F44FA1F23E93DEE7DA66852FA6B2D0BC12FD628 (intptr_t p0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GADUMediationAdapterClassNameForNativeAd)(p0);

	return returnValue;
}
// System.IntPtr _HFkddgMsrMSEe0kDU5USBUe5hBeA._za1hl4laeXrpCPhipDgCWTaGcooA::_aWdBBUAAFBu145bGA3Db8heAy1Qb(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _za1hl4laeXrpCPhipDgCWTaGcooA__aWdBBUAAFBu145bGA3Db8heAy1Qb_mAE6730ADE44CD76E983C4AAF2C80666C15231C68 (intptr_t p0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GADUGetNativeAdResponseInfo)(p0);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void _HFkddgMsrMSEe0kDU5USBUe5hBeA._leywBKM5fjI6opBI8cQhAyEfj1e::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _leywBKM5fjI6opBI8cQhAyEfj1e__ctor_m6B2C2D18D54F600621A8DFE380C4B223213AE02F (_leywBKM5fjI6opBI8cQhAyEfj1e_t574DF15E8F437D9C02FB9DD36CE090561E17AE81* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String _HFkddgMsrMSEe0kDU5USBUe5hBeA._leywBKM5fjI6opBI8cQhAyEfj1e::_ZbVn3ErQcBEyVdhVSqJMX6SUsid(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _leywBKM5fjI6opBI8cQhAyEfj1e__ZbVn3ErQcBEyVdhVSqJMX6SUsid_m4A47D286B7ADAFA53F70C68D803323EE60FD7F4B (intptr_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	{
		intptr_t L_0 = p0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_0, NULL);
		V_0 = L_1;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)846163977);
	}

IL_000c:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)1406247509)));
		V_1 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_003e;
			}
			case 1:
			{
				goto IL_0029;
			}
			case 2:
			{
				goto IL_0007;
			}
		}
	}
	{
		goto IL_003e;
	}

IL_0029:
	{
		intptr_t L_3 = p0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_3, NULL);
		uint32_t L_4 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)533895773)))^((int32_t)417367037)));
		goto IL_000c;
	}

IL_003e:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GCHandle_op_Explicit_m03DD8D9FB45D565431455A6EE5C30A87305EF73C_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___value0, const RuntimeMethod* method) 
{
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_0 = ___value0;
		intptr_t L_1 = L_0.___handle_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* AdLoaderClientArgs_get_FormatIds_m6731C0FF425BE0CC73D07B3C07A81D5A5C33CF4A_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_0 = __this->___U3CFormatIdsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4* AdLoaderClientArgs_get_AdTypes_m3286F08DA89AEF0941C3580385F858CE95635BD4_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) 
{
	{
		HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4* L_0 = __this->___U3CAdTypesU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdLoaderClientArgs_get_AdUnitId_m9CB2CEDA6950AE81735C721A64024FEE084C1095_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAdUnitIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AdLoaderClientArgs_get_NumberOfAdsToLoad_m16518458445D87FF740EE67FB2117837684591E0_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CNumberOfAdsToLoadU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t AdLoaderClient__jeiOgb5chxB6W7oubrqfMOdSXGC_m32E9CB66FFE1630C904F88E645D96A941ED4D14A_inline (AdLoaderClient_tBF564FA4B9C8C4AB0E29E343EC80CF4942BA77F8* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = __this->____bvTzjqlnTwk0qmycf0HogQ2Bb0Q_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NativeUtils_get_Version_mB8F63B5B552D940B0351BE63FA0ED6E4B93B04D2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var);
		String_t* L_0 = ((NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_StaticFields*)il2cpp_codegen_static_fields_for(NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var))->___U3CVersionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomNativeClientEventArgs_set_nativeAdClient_m7C4578E96709771F4B4E26B0EF01FD72C1CF0E75_inline (CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CnativeAdClientU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnativeAdClientU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomNativeClientEventArgs_set_assetName_m0FFF03346E29AB4599BEB94FD9E2CB5BD6D163C4_inline (CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CassetNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CassetNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeClientEventArgs_set_nativeAdClient_mCEDBB0459BE0B3E308DA85F15E98E31D740B97FA_inline (NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CnativeAdClientU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnativeAdClientU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadAdErrorClientEventArgs_set_LoadAdErrorClient_m6E865CB1B347CEF0B75F55CE43EE3FDBF8353353_inline (LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CLoadAdErrorClientU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLoadAdErrorClientU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t _V1fgpHIlEfdgcIGdMwPd9AxlM8B__W1SFDbUnUAixSccQswseUd4j6CG_m19DFAA037FF2A405D05F6F95DFA4FE9D4C1F7C4E_inline (_V1fgpHIlEfdgcIGdMwPd9AxlM8B_t66A4CC7AD02DF230EB27AC1A2EC205BA796DDC06* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = __this->____bQFLfZbRK2wvbyfGf6MJDQzImUY_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValue_set_Precision_m488B0F9CAEBACDD5013E094660C3DD58B362FD03_inline (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CPrecisionU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValue_set_Value_m7DF76A9D4ED62FE1F5FDBA6FEBBACD4E92115BE9_inline (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValueEventArgs_set_AdValue_mFDB2656F4BDBCC3CE719341385666747D72F357E_inline (AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* __this, AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* ___value0, const RuntimeMethod* method) 
{
	{
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_0 = ___value0;
		__this->___U3CAdValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValue_set_CurrencyCode_mA493466D946C6484F0F20604EF0B013EA0571F71_inline (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CCurrencyCodeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrencyCodeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
