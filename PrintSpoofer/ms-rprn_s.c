

/* this ALWAYS GENERATED file contains the RPC server stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for ms-rprn.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>
#include "ms-rprn_h.h"

#define TYPE_FORMAT_STRING_SIZE   159                               
#define PROC_FORMAT_STRING_SIZE   2251                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _ms2Drprn_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ms2Drprn_MIDL_TYPE_FORMAT_STRING;

typedef struct _ms2Drprn_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ms2Drprn_MIDL_PROC_FORMAT_STRING;

typedef struct _ms2Drprn_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ms2Drprn_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

extern const ms2Drprn_MIDL_TYPE_FORMAT_STRING ms2Drprn__MIDL_TypeFormatString;
extern const ms2Drprn_MIDL_PROC_FORMAT_STRING ms2Drprn__MIDL_ProcFormatString;
extern const ms2Drprn_MIDL_EXPR_FORMAT_STRING ms2Drprn__MIDL_ExprFormatString;

/* Standard interface: winspool, ver. 1.0,
   GUID={0x12345678,0x1234,0xABCD,{0xEF,0x00,0x01,0x23,0x45,0x67,0x89,0xAB}} */


extern const MIDL_SERVER_INFO winspool_ServerInfo;
static const RPC_PROTSEQ_ENDPOINT __RpcProtseqEndpoint[] = 
    {
    {(unsigned char *) "ncacn_np", (unsigned char *) "\\pipe\\spoolss"}
    };


extern const RPC_DISPATCH_TABLE winspool_v1_0_DispatchTable;

static const RPC_SERVER_INTERFACE winspool___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x12345678,0x1234,0xABCD,{0xEF,0x00,0x01,0x23,0x45,0x67,0x89,0xAB}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&winspool_v1_0_DispatchTable,
    1,
    (RPC_PROTSEQ_ENDPOINT *)__RpcProtseqEndpoint,
    0,
    &winspool_ServerInfo,
    0x04000000
    };
RPC_IF_HANDLE winspool_v1_0_s_ifspec = (RPC_IF_HANDLE)& winspool___RpcServerInterface;

extern const MIDL_STUB_DESC winspool_StubDesc;

extern const NDR_RUNDOWN RundownRoutines[];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const ms2Drprn_MIDL_PROC_FORMAT_STRING ms2Drprn__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcEnumPrinters */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 20 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 28 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 30 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 32 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcOpenPrinter */

/* 34 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 36 */	NdrFcLong( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0x1 ),	/* 1 */
/* 42 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 44 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 46 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 48 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 50 */	NdrFcShort( 0x8 ),	/* 8 */
/* 52 */	NdrFcShort( 0x40 ),	/* 64 */
/* 54 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 56 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x1 ),	/* 1 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pPrinterName */

/* 64 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 66 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 68 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pHandle */

/* 70 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 72 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 74 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter pDatatype */

/* 76 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 78 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 80 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pDevModeContainer */

/* 82 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 84 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 86 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Parameter AccessRequired */

/* 88 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 90 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 92 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 94 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 96 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 98 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetJob */

/* 100 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x2 ),	/* 2 */
/* 108 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 110 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 112 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 118 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 120 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 128 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 130 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetJob */

/* 134 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0x3 ),	/* 3 */
/* 142 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 144 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 146 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 152 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 154 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 164 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumJobs */

/* 168 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x4 ),	/* 4 */
/* 176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 178 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 180 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 186 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 188 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 196 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 198 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrinter */

/* 202 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 204 */	NdrFcLong( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x5 ),	/* 5 */
/* 210 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 212 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 214 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x8 ),	/* 8 */
/* 220 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 222 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 232 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinter */

/* 236 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 242 */	NdrFcShort( 0x6 ),	/* 6 */
/* 244 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 246 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 248 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 254 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 256 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 266 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetPrinter */

/* 270 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x7 ),	/* 7 */
/* 278 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 280 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 282 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x8 ),	/* 8 */
/* 288 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 290 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 298 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 300 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinter */

/* 304 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 312 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 314 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 316 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 322 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 324 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 330 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 334 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrinterDriver */

/* 338 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 344 */	NdrFcShort( 0x9 ),	/* 9 */
/* 346 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 348 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 350 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 356 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 358 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 366 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrinterDrivers */

/* 372 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0xa ),	/* 10 */
/* 380 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 382 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 384 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 390 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 392 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 400 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 402 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterDriver */

/* 406 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 408 */	NdrFcLong( 0x0 ),	/* 0 */
/* 412 */	NdrFcShort( 0xb ),	/* 11 */
/* 414 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 416 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 418 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 422 */	NdrFcShort( 0x8 ),	/* 8 */
/* 424 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 426 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 436 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterDriverDirectory */

/* 440 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 446 */	NdrFcShort( 0xc ),	/* 12 */
/* 448 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 450 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 452 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0x8 ),	/* 8 */
/* 458 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 460 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 470 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterDriver */

/* 474 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0xd ),	/* 13 */
/* 482 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 484 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 486 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 492 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 494 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 500 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 502 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 504 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrintProcessor */

/* 508 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 514 */	NdrFcShort( 0xe ),	/* 14 */
/* 516 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 518 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 520 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0x8 ),	/* 8 */
/* 526 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 528 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 536 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 538 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrintProcessors */

/* 542 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 544 */	NdrFcLong( 0x0 ),	/* 0 */
/* 548 */	NdrFcShort( 0xf ),	/* 15 */
/* 550 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 552 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 554 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0x8 ),	/* 8 */
/* 560 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 562 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 568 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 572 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrintProcessorDirectory */

/* 576 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x10 ),	/* 16 */
/* 584 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 586 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 588 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 594 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 596 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 604 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 606 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcStartDocPrinter */

/* 610 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 616 */	NdrFcShort( 0x11 ),	/* 17 */
/* 618 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 620 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 622 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x8 ),	/* 8 */
/* 628 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 630 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 638 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 640 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcStartPagePrinter */

/* 644 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x12 ),	/* 18 */
/* 652 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 654 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 656 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 662 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 664 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 672 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcWritePrinter */

/* 678 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 684 */	NdrFcShort( 0x13 ),	/* 19 */
/* 686 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 688 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 690 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0x8 ),	/* 8 */
/* 696 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 698 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 704 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 708 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEndPagePrinter */

/* 712 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 718 */	NdrFcShort( 0x14 ),	/* 20 */
/* 720 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 722 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 724 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0x8 ),	/* 8 */
/* 730 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 732 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 738 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 740 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 742 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAbortPrinter */

/* 746 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0x15 ),	/* 21 */
/* 754 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 756 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 758 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 764 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 766 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 776 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcReadPrinter */

/* 780 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 786 */	NdrFcShort( 0x16 ),	/* 22 */
/* 788 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 790 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 792 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 796 */	NdrFcShort( 0x8 ),	/* 8 */
/* 798 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 800 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 808 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 810 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEndDocPrinter */

/* 814 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 820 */	NdrFcShort( 0x17 ),	/* 23 */
/* 822 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 824 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 826 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 832 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 834 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 842 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 844 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddJob */

/* 848 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 850 */	NdrFcLong( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0x18 ),	/* 24 */
/* 856 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 858 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 860 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 864 */	NdrFcShort( 0x8 ),	/* 8 */
/* 866 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 868 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 874 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 876 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 878 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcScheduleJob */

/* 882 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 888 */	NdrFcShort( 0x19 ),	/* 25 */
/* 890 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 892 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 894 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 900 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 902 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 910 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 912 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterData */

/* 916 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 922 */	NdrFcShort( 0x1a ),	/* 26 */
/* 924 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 926 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 928 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 934 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 936 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 944 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 946 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetPrinterData */

/* 950 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 952 */	NdrFcLong( 0x0 ),	/* 0 */
/* 956 */	NdrFcShort( 0x1b ),	/* 27 */
/* 958 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 960 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 962 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 966 */	NdrFcShort( 0x8 ),	/* 8 */
/* 968 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 970 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 976 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 980 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcWaitForPrinterChange */

/* 984 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0x1c ),	/* 28 */
/* 992 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 994 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 996 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1002 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1004 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1012 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1014 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcClosePrinter */

/* 1018 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1024 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1026 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1028 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 1030 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1032 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1034 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1036 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1038 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1040 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1046 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phPrinter */

/* 1048 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 1050 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1052 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Return value */

/* 1054 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1056 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddForm */

/* 1060 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1066 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1068 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1070 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1072 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1078 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1080 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1086 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1088 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1090 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeleteForm */

/* 1094 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1096 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1100 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1102 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1104 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1106 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1112 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1114 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1120 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1124 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetForm */

/* 1128 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1136 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1138 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1140 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1144 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1146 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1148 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetForm */

/* 1162 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1168 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1170 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1172 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1174 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1178 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1180 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1182 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1190 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1192 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumForms */

/* 1196 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1198 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1202 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1204 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1206 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1208 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1214 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1216 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1224 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1226 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPorts */

/* 1230 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1232 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1236 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1238 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1240 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1242 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1248 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1250 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1260 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumMonitors */

/* 1264 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1270 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1272 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1274 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1276 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1282 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1284 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1292 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1294 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum37NotUsedOnWire */

/* 1298 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1304 */	NdrFcShort( 0x25 ),	/* 37 */
/* 1306 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1308 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1310 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1316 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1318 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum38NotUsedOnWire */

/* 1326 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1332 */	NdrFcShort( 0x26 ),	/* 38 */
/* 1334 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1336 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1338 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1344 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1346 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1352 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcDeletePort */

/* 1354 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1360 */	NdrFcShort( 0x27 ),	/* 39 */
/* 1362 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1364 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1366 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1370 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1372 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1374 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1380 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1382 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1384 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcCreatePrinterIC */

/* 1388 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1394 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1396 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1398 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1400 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1406 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1408 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1416 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1418 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcPlayGdiScriptOnPrinterIC */

/* 1422 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1424 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1428 */	NdrFcShort( 0x29 ),	/* 41 */
/* 1430 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1432 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1434 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1440 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1442 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1452 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterIC */

/* 1456 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1462 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1464 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1466 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1468 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1472 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1474 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1476 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1482 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1486 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum43NotUsedOnWire */

/* 1490 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1496 */	NdrFcShort( 0x2b ),	/* 43 */
/* 1498 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1500 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1502 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1508 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1510 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1516 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum44NotUsedOnWire */

/* 1518 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1524 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1526 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1528 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1530 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1536 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1538 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum45NotUsedOnWire */

/* 1546 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1548 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1552 */	NdrFcShort( 0x2d ),	/* 45 */
/* 1554 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1556 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1558 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1564 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1566 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1572 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcAddMonitor */

/* 1574 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1580 */	NdrFcShort( 0x2e ),	/* 46 */
/* 1582 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1584 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1586 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1590 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1592 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1594 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1600 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1602 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1604 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeleteMonitor */

/* 1608 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1614 */	NdrFcShort( 0x2f ),	/* 47 */
/* 1616 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1618 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1620 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1626 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1628 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1636 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrintProcessor */

/* 1642 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1648 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1650 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1652 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1654 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1658 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1660 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1662 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1668 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1670 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1672 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum49NotUsedOnWire */

/* 1676 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1682 */	NdrFcShort( 0x31 ),	/* 49 */
/* 1684 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1686 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1688 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1694 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1696 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1702 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum50NotUsedOnWire */

/* 1704 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1710 */	NdrFcShort( 0x32 ),	/* 50 */
/* 1712 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1714 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1716 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1722 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1724 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcEnumPrintProcessorDatatypes */

/* 1732 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1738 */	NdrFcShort( 0x33 ),	/* 51 */
/* 1740 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1742 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1744 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1748 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1750 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1752 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1758 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1760 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1762 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcResetPrinter */

/* 1766 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1768 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1772 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1774 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1776 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1778 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1782 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1784 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1786 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1794 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1796 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterDriver2 */

/* 1800 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1802 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1806 */	NdrFcShort( 0x35 ),	/* 53 */
/* 1808 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1810 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1812 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1816 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1818 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1820 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1830 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum54NotUsedOnWire */

/* 1834 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1840 */	NdrFcShort( 0x36 ),	/* 54 */
/* 1842 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1844 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1846 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1852 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1854 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1860 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum55NotUsedOnWire */

/* 1862 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1864 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1868 */	NdrFcShort( 0x37 ),	/* 55 */
/* 1870 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1872 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1874 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1880 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1882 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcFindClosePrinterChangeNotification */

/* 1890 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1896 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1898 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1900 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1902 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1906 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1908 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1910 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1916 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1918 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1920 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum57NotUsedOnWire */

/* 1924 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1930 */	NdrFcShort( 0x39 ),	/* 57 */
/* 1932 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1934 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1936 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1942 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1944 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1950 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcReplyOpenPrinter */

/* 1952 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1958 */	NdrFcShort( 0x3a ),	/* 58 */
/* 1960 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1962 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1964 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1968 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1970 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1972 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1978 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1982 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRouterReplyPrinter */

/* 1986 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1992 */	NdrFcShort( 0x3b ),	/* 59 */
/* 1994 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1996 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1998 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2004 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2006 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2012 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2016 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcReplyClosePrinter */

/* 2020 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2026 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2028 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2030 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2032 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2036 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2038 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2040 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2046 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2048 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2050 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPortEx */

/* 2054 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2060 */	NdrFcShort( 0x3d ),	/* 61 */
/* 2062 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2064 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2066 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2070 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2072 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2074 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2080 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2082 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2084 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRemoteFindFirstPrinterChangeNotification */

/* 2088 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2090 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2094 */	NdrFcShort( 0x3e ),	/* 62 */
/* 2096 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2098 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2100 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2106 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2108 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2118 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum63NotUsedOnWire */

/* 2122 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2128 */	NdrFcShort( 0x3f ),	/* 63 */
/* 2130 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2132 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2134 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2140 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2142 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum64NotUsedOnWire */

/* 2150 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2156 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2160 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2162 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2168 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2170 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcRemoteFindFirstPrinterChangeNotificationEx */

/* 2178 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2180 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2184 */	NdrFcShort( 0x41 ),	/* 65 */
/* 2186 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2188 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2190 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2192 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2194 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2198 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2200 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2204 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 2208 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2210 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2212 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Parameter fdwFlags */

/* 2214 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2216 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fdwOptions */

/* 2220 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2222 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszLocalMachine */

/* 2226 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2228 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2230 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter dwPrinterLocal */

/* 2232 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2234 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pOptions */

/* 2238 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2240 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2242 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Return value */

/* 2244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2246 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ms2Drprn_MIDL_TYPE_FORMAT_STRING ms2Drprn__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  4 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 12 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 14 */	
			0x11, 0x0,	/* FC_RP */
/* 16 */	NdrFcShort( 0xe ),	/* Offset= 14 (30) */
/* 18 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 28 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 30 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 32 */	NdrFcShort( 0x8 ),	/* 8 */
/* 34 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 36 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 38 */	NdrFcShort( 0x4 ),	/* 4 */
/* 40 */	NdrFcShort( 0x4 ),	/* 4 */
/* 42 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 44 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (18) */
/* 46 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 48 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 50 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 52 */	NdrFcShort( 0x2 ),	/* Offset= 2 (54) */
/* 54 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 56 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 58 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 60 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 62 */	
			0x12, 0x0,	/* FC_UP */
/* 64 */	NdrFcShort( 0x48 ),	/* Offset= 72 (136) */
/* 66 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 68 */	NdrFcShort( 0x2 ),	/* 2 */
/* 70 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 72 */	NdrFcShort( 0xc ),	/* 12 */
/* 74 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 76 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 78 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 80 */	NdrFcShort( 0x14 ),	/* 20 */
/* 82 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 84 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 86 */	NdrFcShort( 0x10 ),	/* 16 */
/* 88 */	NdrFcShort( 0x10 ),	/* 16 */
/* 90 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 92 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (66) */
/* 94 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 96 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 98 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 100 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 102 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 104 */	NdrFcShort( 0x14 ),	/* 20 */
/* 106 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 110 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 112 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 114 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 116 */	NdrFcShort( 0x14 ),	/* 20 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x1 ),	/* 1 */
/* 122 */	NdrFcShort( 0x10 ),	/* 16 */
/* 124 */	NdrFcShort( 0x10 ),	/* 16 */
/* 126 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 128 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (66) */
/* 130 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 132 */	0x0,		/* 0 */
			NdrFcShort( 0xffc9 ),	/* Offset= -55 (78) */
			0x5b,		/* FC_END */
/* 136 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 138 */	NdrFcShort( 0x10 ),	/* 16 */
/* 140 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 142 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 144 */	NdrFcShort( 0xc ),	/* 12 */
/* 146 */	NdrFcShort( 0xc ),	/* 12 */
/* 148 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 150 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (102) */
/* 152 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 154 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 156 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const NDR_RUNDOWN RundownRoutines[] = 
    {
    PRINTER_HANDLE_rundown
    };


static const unsigned short winspool_FormatStringOffsetTable[] =
    {
    0,
    34,
    100,
    134,
    168,
    202,
    236,
    270,
    304,
    338,
    372,
    406,
    440,
    474,
    508,
    542,
    576,
    610,
    644,
    678,
    712,
    746,
    780,
    814,
    848,
    882,
    916,
    950,
    984,
    1018,
    1060,
    1094,
    1128,
    1162,
    1196,
    1230,
    1264,
    1298,
    1326,
    1354,
    1388,
    1422,
    1456,
    1490,
    1518,
    1546,
    1574,
    1608,
    1642,
    1676,
    1704,
    1732,
    1766,
    1800,
    1834,
    1862,
    1890,
    1924,
    1952,
    1986,
    2020,
    2054,
    2088,
    2122,
    2150,
    2178
    };


static const MIDL_STUB_DESC winspool_StubDesc = 
    {
    (void *)& winspool___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    RundownRoutines,
    0,
    0,
    0,
    ms2Drprn__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

static const RPC_DISPATCH_FUNCTION winspool_table[] =
    {
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    0
    };
static const RPC_DISPATCH_TABLE winspool_v1_0_DispatchTable = 
    {
    66,
    (RPC_DISPATCH_FUNCTION*)winspool_table
    };

static const SERVER_ROUTINE winspool_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)RpcEnumPrinters,
    (SERVER_ROUTINE)RpcOpenPrinter,
    (SERVER_ROUTINE)RpcSetJob,
    (SERVER_ROUTINE)RpcGetJob,
    (SERVER_ROUTINE)RpcEnumJobs,
    (SERVER_ROUTINE)RpcAddPrinter,
    (SERVER_ROUTINE)RpcDeletePrinter,
    (SERVER_ROUTINE)RpcSetPrinter,
    (SERVER_ROUTINE)RpcGetPrinter,
    (SERVER_ROUTINE)RpcAddPrinterDriver,
    (SERVER_ROUTINE)RpcEnumPrinterDrivers,
    (SERVER_ROUTINE)RpcGetPrinterDriver,
    (SERVER_ROUTINE)RpcGetPrinterDriverDirectory,
    (SERVER_ROUTINE)RpcDeletePrinterDriver,
    (SERVER_ROUTINE)RpcAddPrintProcessor,
    (SERVER_ROUTINE)RpcEnumPrintProcessors,
    (SERVER_ROUTINE)RpcGetPrintProcessorDirectory,
    (SERVER_ROUTINE)RpcStartDocPrinter,
    (SERVER_ROUTINE)RpcStartPagePrinter,
    (SERVER_ROUTINE)RpcWritePrinter,
    (SERVER_ROUTINE)RpcEndPagePrinter,
    (SERVER_ROUTINE)RpcAbortPrinter,
    (SERVER_ROUTINE)RpcReadPrinter,
    (SERVER_ROUTINE)RpcEndDocPrinter,
    (SERVER_ROUTINE)RpcAddJob,
    (SERVER_ROUTINE)RpcScheduleJob,
    (SERVER_ROUTINE)RpcGetPrinterData,
    (SERVER_ROUTINE)RpcSetPrinterData,
    (SERVER_ROUTINE)RpcWaitForPrinterChange,
    (SERVER_ROUTINE)RpcClosePrinter,
    (SERVER_ROUTINE)RpcAddForm,
    (SERVER_ROUTINE)RpcDeleteForm,
    (SERVER_ROUTINE)RpcGetForm,
    (SERVER_ROUTINE)RpcSetForm,
    (SERVER_ROUTINE)RpcEnumForms,
    (SERVER_ROUTINE)RpcEnumPorts,
    (SERVER_ROUTINE)RpcEnumMonitors,
    (SERVER_ROUTINE)Opnum37NotUsedOnWire,
    (SERVER_ROUTINE)Opnum38NotUsedOnWire,
    (SERVER_ROUTINE)RpcDeletePort,
    (SERVER_ROUTINE)RpcCreatePrinterIC,
    (SERVER_ROUTINE)RpcPlayGdiScriptOnPrinterIC,
    (SERVER_ROUTINE)RpcDeletePrinterIC,
    (SERVER_ROUTINE)Opnum43NotUsedOnWire,
    (SERVER_ROUTINE)Opnum44NotUsedOnWire,
    (SERVER_ROUTINE)Opnum45NotUsedOnWire,
    (SERVER_ROUTINE)RpcAddMonitor,
    (SERVER_ROUTINE)RpcDeleteMonitor,
    (SERVER_ROUTINE)RpcDeletePrintProcessor,
    (SERVER_ROUTINE)Opnum49NotUsedOnWire,
    (SERVER_ROUTINE)Opnum50NotUsedOnWire,
    (SERVER_ROUTINE)RpcEnumPrintProcessorDatatypes,
    (SERVER_ROUTINE)RpcResetPrinter,
    (SERVER_ROUTINE)RpcGetPrinterDriver2,
    (SERVER_ROUTINE)Opnum54NotUsedOnWire,
    (SERVER_ROUTINE)Opnum55NotUsedOnWire,
    (SERVER_ROUTINE)RpcFindClosePrinterChangeNotification,
    (SERVER_ROUTINE)Opnum57NotUsedOnWire,
    (SERVER_ROUTINE)RpcReplyOpenPrinter,
    (SERVER_ROUTINE)RpcRouterReplyPrinter,
    (SERVER_ROUTINE)RpcReplyClosePrinter,
    (SERVER_ROUTINE)RpcAddPortEx,
    (SERVER_ROUTINE)RpcRemoteFindFirstPrinterChangeNotification,
    (SERVER_ROUTINE)Opnum63NotUsedOnWire,
    (SERVER_ROUTINE)Opnum64NotUsedOnWire,
    (SERVER_ROUTINE)RpcRemoteFindFirstPrinterChangeNotificationEx
    };

static const MIDL_SERVER_INFO winspool_ServerInfo = 
    {
    &winspool_StubDesc,
    winspool_ServerRoutineTable,
    ms2Drprn__MIDL_ProcFormatString.Format,
    winspool_FormatStringOffsetTable,
    0,
    0,
    0,
    0};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

