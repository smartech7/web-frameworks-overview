/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/usr/local/Cellar/nim/0.17.2/nim/lib -o /Users/taichiro/Workspace/which_is_the_fastest/nim/jester/nimcache/stdlib_rtarrays.o /Users/taichiro/Workspace/which_is_the_fastest/nim/jester/nimcache/stdlib_rtarrays.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct tyObject_RtArray_gCKWFhLtuzYY1Ki6cuwEPQ tyObject_RtArray_gCKWFhLtuzYY1Ki6cuwEPQ;
typedef struct tySequence_9apztJSmgERYU8fZOjI4pOg tySequence_9apztJSmgERYU8fZOjI4pOg;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef int tyArray_hlIpJIfs8ECqDyETXoMStg[10];
struct tyObject_RtArray_gCKWFhLtuzYY1Ki6cuwEPQ {
NI L;
tySequence_9apztJSmgERYU8fZOjI4pOg* spart;
tyArray_hlIpJIfs8ECqDyETXoMStg apart;
};
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tySequence_9apztJSmgERYU8fZOjI4pOg {
  TGenericSeq Sup;
  int data[SEQ_DECL_SIZE];
};
static N_NIMCALL(void, Marker_tySequence_9apztJSmgERYU8fZOjI4pOg)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_NOINLINE(void, raiseIndexError)(void);
extern TNimType NTI_nlCscttRCss70IBTyuBqnA_;
TNimType NTI_9apztJSmgERYU8fZOjI4pOg_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
static N_NIMCALL(void, Marker_tySequence_9apztJSmgERYU8fZOjI4pOg)(void* p, NI op) {
	tySequence_9apztJSmgERYU8fZOjI4pOg* a;
	NI T1_;
	a = (tySequence_9apztJSmgERYU8fZOjI4pOg*)p;
	T1_ = (NI)0;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

N_NIMCALL(void, initRtArray_BEO9bqjB0QqvrdxOQ9azwanw)(NI len, tyObject_RtArray_gCKWFhLtuzYY1Ki6cuwEPQ* Result) {
	nimfr_("initRtArray", "rtarrays.nim");
	nimln_(27, "rtarrays.nim");
	(*Result).L = len;
	nimln_(28, "rtarrays.nim");
	{
		nimln_(15, "rtarrays.nim");
		if (!(((NI) 10) < ((NI) ((*Result).L)))) goto LA3_;
		nimln_(29, "rtarrays.nim");
		unsureAsgnRef((void**) (&(*Result).spart), (tySequence_9apztJSmgERYU8fZOjI4pOg*) newSeq((&NTI_9apztJSmgERYU8fZOjI4pOg_), len));
	}
	LA3_: ;
	popFrame();
}

N_NIMCALL(int*, getRawData_BTVYxgjgdiz9c1Ui1wRvN6g)(tyObject_RtArray_gCKWFhLtuzYY1Ki6cuwEPQ* x) {
	int* result;
	nimfr_("getRawData", "rtarrays.nim");
	result = (int*)0;
	nimln_(32, "rtarrays.nim");
	{
		nimln_(15, "rtarrays.nim");
		if (!(((NI) 10) < ((NI) ((*x).L)))) goto LA3_;
		if ((NU)(((NI) 0)) >= (NU)((*x).spart->Sup.len)) raiseIndexError();
		result = ((int*) ((&(*x).spart->data[((NI) 0)])));
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((int*) ((&(*x).apart[(((NI) 0))- 0])));
	}
	LA1_: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_rtarraysInit000)(void) {
	nimfr_("rtarrays", "rtarrays.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_rtarraysDatInit000)(void) {
NTI_9apztJSmgERYU8fZOjI4pOg_.size = sizeof(tySequence_9apztJSmgERYU8fZOjI4pOg*);
NTI_9apztJSmgERYU8fZOjI4pOg_.kind = 24;
NTI_9apztJSmgERYU8fZOjI4pOg_.base = (&NTI_nlCscttRCss70IBTyuBqnA_);
NTI_9apztJSmgERYU8fZOjI4pOg_.flags = 2;
NTI_9apztJSmgERYU8fZOjI4pOg_.marker = Marker_tySequence_9apztJSmgERYU8fZOjI4pOg;
}

