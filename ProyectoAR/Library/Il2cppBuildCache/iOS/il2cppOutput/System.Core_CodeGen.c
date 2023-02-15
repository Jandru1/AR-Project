#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m1141D2C9AF8AB6ACC45E7488789598C5283D4EEE (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m7B22062E664153625DA782374A7CB9CBD3B2C01D (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_mE8ABBCC1C5FBA4D7BBE5B0647992D20F005F7A97 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000009 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000A System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
// 0x0000000B System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x0000000E TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<System.Int32> System.Linq.Enumerable::Range(System.Int32,System.Int32)
extern void Enumerable_Range_m4FB9BBBA09BEF5177C13506DB385CF4467C15FD8 (void);
// 0x00000010 System.Collections.Generic.IEnumerable`1<System.Int32> System.Linq.Enumerable::RangeIterator(System.Int32,System.Int32)
extern void Enumerable_RangeIterator_mAD9E9F85AF2156C74E78C2EA554F0F32EA0E91C9 (void);
// 0x00000011 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000013 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000014 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000015 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000016 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000017 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000018 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000019 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000001A System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000001B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000001C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001D System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001E System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001F System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000020 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000021 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000022 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000023 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000024 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000025 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000027 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000028 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000029 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002B System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000002D System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000002E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000030 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000031 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000032 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000033 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000034 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000035 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000036 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000037 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000038 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003B System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003C System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000003D System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000040 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000041 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000042 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000043 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000044 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x00000045 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x00000046 System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x00000047 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x00000048 TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000049 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x0000004A System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x0000004B System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000004C System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000004D System.Void System.Linq.Enumerable/<RangeIterator>d__115::.ctor(System.Int32)
extern void U3CRangeIteratorU3Ed__115__ctor_m28402F68F863084357F710F6546910CC4417800C (void);
// 0x0000004E System.Void System.Linq.Enumerable/<RangeIterator>d__115::System.IDisposable.Dispose()
extern void U3CRangeIteratorU3Ed__115_System_IDisposable_Dispose_mACF95799F65FBE5A805C33ABD0ABBB8D90B865E9 (void);
// 0x0000004F System.Boolean System.Linq.Enumerable/<RangeIterator>d__115::MoveNext()
extern void U3CRangeIteratorU3Ed__115_MoveNext_m4B882BD1A41035B16713BD5C47695ACEFF7A3B91 (void);
// 0x00000050 System.Int32 System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.Generic.IEnumerator<System.Int32>.get_Current()
extern void U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumeratorU3CSystem_Int32U3E_get_Current_mACDA0C0FD65D62D6CEB3DA9F761FFF589EC0AAB3 (void);
// 0x00000051 System.Void System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.IEnumerator.Reset()
extern void U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_Reset_mC860C1DBCBFE98B50DC555187E266F145B5909FC (void);
// 0x00000052 System.Object System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.IEnumerator.get_Current()
extern void U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_get_Current_mC5886D606FB46765848339A4305F922494C093ED (void);
// 0x00000053 System.Collections.Generic.IEnumerator`1<System.Int32> System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator()
extern void U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_m712C614B8E578CF43876E5CE889386161DB2CAC9 (void);
// 0x00000054 System.Collections.IEnumerator System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.IEnumerable.GetEnumerator()
extern void U3CRangeIteratorU3Ed__115_System_Collections_IEnumerable_GetEnumerator_m1F60B93D73E3A534079BE4AB93BD7E51F8741F34 (void);
// 0x00000055 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000056 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000057 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000058 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000059 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000005A System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000005B System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000005C System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000005D System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000005E System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000005F System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000060 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000061 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000062 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000063 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000064 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000065 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000066 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000067 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000068 System.Int32 System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000069 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000006A System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000006B System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000006C System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000006D System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000006E System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x0000006F System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000070 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000071 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000072 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[114] = 
{
	Error_ArgumentNull_m1141D2C9AF8AB6ACC45E7488789598C5283D4EEE,
	Error_ArgumentOutOfRange_m7B22062E664153625DA782374A7CB9CBD3B2C01D,
	Error_MoreThanOneMatch_mE8ABBCC1C5FBA4D7BBE5B0647992D20F005F7A97,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Range_m4FB9BBBA09BEF5177C13506DB385CF4467C15FD8,
	Enumerable_RangeIterator_mAD9E9F85AF2156C74E78C2EA554F0F32EA0E91C9,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	U3CRangeIteratorU3Ed__115__ctor_m28402F68F863084357F710F6546910CC4417800C,
	U3CRangeIteratorU3Ed__115_System_IDisposable_Dispose_mACF95799F65FBE5A805C33ABD0ABBB8D90B865E9,
	U3CRangeIteratorU3Ed__115_MoveNext_m4B882BD1A41035B16713BD5C47695ACEFF7A3B91,
	U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumeratorU3CSystem_Int32U3E_get_Current_mACDA0C0FD65D62D6CEB3DA9F761FFF589EC0AAB3,
	U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_Reset_mC860C1DBCBFE98B50DC555187E266F145B5909FC,
	U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_get_Current_mC5886D606FB46765848339A4305F922494C093ED,
	U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_m712C614B8E578CF43876E5CE889386161DB2CAC9,
	U3CRangeIteratorU3Ed__115_System_Collections_IEnumerable_GetEnumerator_m1F60B93D73E3A534079BE4AB93BD7E51F8741F34,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[114] = 
{
	4263,
	4263,
	4462,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	3665,
	3665,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1942,
	2419,
	2335,
	2355,
	2419,
	2380,
	2380,
	2380,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
static const Il2CppTokenRangePair s_rgctxIndices[34] = 
{
	{ 0x02000004, { 76, 5 } },
	{ 0x02000005, { 81, 13 } },
	{ 0x02000006, { 96, 9 } },
	{ 0x02000007, { 107, 13 } },
	{ 0x02000008, { 122, 16 } },
	{ 0x02000009, { 141, 12 } },
	{ 0x0200000A, { 156, 16 } },
	{ 0x0200000B, { 175, 2 } },
	{ 0x0200000C, { 177, 4 } },
	{ 0x0200000D, { 181, 6 } },
	{ 0x0200000F, { 187, 8 } },
	{ 0x02000010, { 195, 22 } },
	{ 0x02000012, { 217, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 3 } },
	{ 0x06000009, { 33, 2 } },
	{ 0x0600000A, { 35, 1 } },
	{ 0x0600000B, { 36, 11 } },
	{ 0x0600000C, { 47, 2 } },
	{ 0x0600000D, { 49, 2 } },
	{ 0x0600000E, { 51, 6 } },
	{ 0x06000011, { 57, 2 } },
	{ 0x06000012, { 59, 6 } },
	{ 0x06000013, { 65, 3 } },
	{ 0x06000014, { 68, 8 } },
	{ 0x06000024, { 94, 2 } },
	{ 0x06000029, { 105, 2 } },
	{ 0x0600002E, { 120, 2 } },
	{ 0x06000034, { 138, 3 } },
	{ 0x06000039, { 153, 3 } },
	{ 0x0600003E, { 172, 3 } },
};
extern const uint32_t g_rgctx_Iterator_1_tAFB7558C92D3848C170203685AA45B10B6035464;
extern const uint32_t g_rgctx_Iterator_1_Where_mB33345A6D2213AB59B7B357292542E752C9AEEF2;
extern const uint32_t g_rgctx_TSourceU5BU5D_t5F9558857B1D501A57AAC7DDF5A60A1CAF6A8736;
extern const uint32_t g_rgctx_WhereArrayIterator_1_t8F188FD6974943DFDC1A3C36E69549C9146DCB25;
extern const uint32_t g_rgctx_WhereArrayIterator_1__ctor_mFE764A6F32B18EEABDD6813CF733205E2149C7B7;
extern const uint32_t g_rgctx_List_1_t8601446322D050B44EBF5C49E8048407F11D6239;
extern const uint32_t g_rgctx_WhereListIterator_1_tDAFC464D33DAF1B893DB760F55638A7AC019AEB9;
extern const uint32_t g_rgctx_WhereListIterator_1__ctor_m0D87B2EFC00BD5C900E47BED483C334DC731E51D;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_tB9885E49C2A0467CBEB9B331919AE76488DD4BA8;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_m7CA177F283ABFD6426F57A5630315F53267741CE;
extern const uint32_t g_rgctx_Iterator_1_t83549F4A854FAE4651C92A7B3B8907E4798F0121;
extern const uint32_t g_rgctx_Iterator_1_Select_TisTResult_tF3AC1D6143237427ECB7A483D967C1FE5374DBD7_mC9EEBF5649EB6F682C5621B1AF6786BFFC2C62B4;
extern const uint32_t g_rgctx_TSourceU5BU5D_tD0F38A3B04FEF1F6EB6A2C0F97C2F6826A3C1198;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2_tD31A5253F7EAAB16463FB95C4B1DF1B5BA0BE6DE;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2__ctor_m85B91DA1F46361240445ADE95E0CFD6F1674C1FA;
extern const uint32_t g_rgctx_List_1_t7FCC2F8DB1446378C6AD15E4C2ECDCB8E2001280;
extern const uint32_t g_rgctx_WhereSelectListIterator_2_tE91BB456A01CEF4F6BC613FDF4A44F341B2D7206;
extern const uint32_t g_rgctx_WhereSelectListIterator_2__ctor_m0D002693B7EAB5A831D2058278463032864687DC;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2_t9583448D4FAA842B0C18940E2557F5D5A9507364;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2__ctor_m8F12E12FDDE5F7E663BA04C6B41490D162423694;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1_t0D7DCEEA7C4415169B2CBD5801DECF1AE6BC71D1;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1__ctor_mC075FAA755826D869270E4A74AED806B91B2E5F3;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1_U3CCombinePredicatesU3Eb__0_m6F0EDB0FF04C8A3C9C6D97800722D1B3851C415C;
extern const uint32_t g_rgctx_Func_2_t39F15D2C4961B652B7F6B0AD725F37F96D8C9F54;
extern const uint32_t g_rgctx_Func_2__ctor_m18DE7FE4BDFFE701174935655A7EFBA6D405ACA1;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_3_tCCDD433A1A5065F08529A9FCE5D0C53B52F7B3A6;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_3__ctor_m248BC6F9C9006A172D95E4482735B14F94409558;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_3_U3CCombineSelectorsU3Eb__0_mEFA4E2467394FB8379F3CCA7A61136C96768B2BD;
extern const uint32_t g_rgctx_Func_2_t09635D19844B1DE3B9DF944B0517FBF783EA917C;
extern const uint32_t g_rgctx_Func_2__ctor_mB0725395805DF6905CB0FAA6BB81FFAAB17AEA93;
extern const uint32_t g_rgctx_Buffer_1_tC3AA32816753DA7B0898D92E15B122AC7DE23B5B;
extern const uint32_t g_rgctx_Buffer_1__ctor_m72F00609851E22DF4338204A2E6EC7E3A3E0C3D4;
extern const uint32_t g_rgctx_Buffer_1_ToArray_m11DBDA9AA16C64F60D134E59D6BD79D515B8D187;
extern const uint32_t g_rgctx_List_1_t168E1771B2C2914F0DF873822B754BD4110D6958;
extern const uint32_t g_rgctx_List_1__ctor_mB51694A9EF5013F0A729FC4B8BD80C8A49970CF9;
extern const uint32_t g_rgctx_Enumerable_ToDictionary_TisTSource_tE31865679B90EA41B3B599272398AC4F59C84AFB_TisTKey_tD37952AE661C99DC819D1D703910E923C1FFB563_TisTElement_tC983FBB6789A209AE3741CF7BF97B4518033512E_m581C4145E7A359AB48C48EF4B9FD323449456C1D;
extern const uint32_t g_rgctx_Dictionary_2_t1E70F86BEBC0F1C830579FA6851930E77390E72B;
extern const uint32_t g_rgctx_Dictionary_2__ctor_m591886154E017552D886FC19F4060A03FE424C93;
extern const uint32_t g_rgctx_IEnumerable_1_t5A5C0F89267F3218FAA546F66CD24FEBC7CF84FE;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_mC69AE1ABEA30DF65F14B814D77CAD7C4024E22AB;
extern const uint32_t g_rgctx_IEnumerator_1_tA355CC98E7C1D7ECE78348B13D33CEB831BD17DA;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m50E35714CF970F9143E42B9AEC7B1D77888FC1CA;
extern const uint32_t g_rgctx_Func_2_t5C04A674024FA30035DFC9782FFCAAA61F83788A;
extern const uint32_t g_rgctx_Func_2_Invoke_m0D96BC3A9C1650762AC39C6C5FD483FA60F189DC;
extern const uint32_t g_rgctx_Func_2_t9712D21F02586859B9C521A9A7AF2CF8C070DC73;
extern const uint32_t g_rgctx_Func_2_Invoke_m11C7E19C8CA2288F9AE5440999F048A468CD4306;
extern const uint32_t g_rgctx_Dictionary_2_Add_m008084EDBF8D30C4C632AB28252CC7E324244C92;
extern const uint32_t g_rgctx_IEnumerable_1_tEB7A5DFD2ACAEA7A8EAEF0EF64F03C11FF5C03C8;
extern const uint32_t g_rgctx_Enumerable_CastIterator_TisTResult_t705B11747EBADAA865F7616E1268D26DB506E54D_m68118B32078607EC27B5AD84DFB34C9DA1B165E9;
extern const uint32_t g_rgctx_U3CCastIteratorU3Ed__99_1_tE45A9F5A1B646861B32100571A6D9C7FCD98B5F3;
extern const uint32_t g_rgctx_U3CCastIteratorU3Ed__99_1__ctor_m94CFA818A80B6A268EB32C30BCFD68AFA0323A78;
extern const uint32_t g_rgctx_IEnumerable_1_tEF986F81DB6A3163CFD7CDAA423612D3C77639CC;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m6FB8D118A5176C69DA8D12EE01C540A380D0CA88;
extern const uint32_t g_rgctx_IEnumerator_1_t6F6571CF0B132A4B653D0A40A4193F23DEEC3FD9;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m69FFBE7376E424D93345AD43D1E5D533855DA21A;
extern const uint32_t g_rgctx_Func_2_t3B2B88FD78F5F69347CF2269307A59AC322C79C3;
extern const uint32_t g_rgctx_Func_2_Invoke_mEB89293A67FE90E3AB9DAD0E7E982413D7D44A4D;
extern const uint32_t g_rgctx_IEnumerable_1_t87213EF6958E9847E318D7FED68D206925280A0F;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m623808007A8A20ED9393D48B2467A792BFE9D1D1;
extern const uint32_t g_rgctx_IEnumerable_1_t34C887C840E86896B486F20B42C0F5EAC90C726E;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m096D45787935CB3519AA751639FA7C8B7B8058FE;
extern const uint32_t g_rgctx_IEnumerator_1_tAC8F51D25D6A25E51E41570AD085263B028F5865;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m0CD4A796E3CAD9965C1EDBF2DD175609DBD87C7D;
extern const uint32_t g_rgctx_Func_2_tECEEE16E2A7D99CED40251A6F6CA091497F39DF9;
extern const uint32_t g_rgctx_Func_2_Invoke_mCF04C711A970D455B890BDBF34E5ABF28518AE9F;
extern const uint32_t g_rgctx_ICollection_1_t143CB03B088368ACAAEEF662B347A36493BD7F74;
extern const uint32_t g_rgctx_ICollection_1_Contains_mB272442975A686EF456CFFBE01CEB6E8F6D0FC4E;
extern const uint32_t g_rgctx_Enumerable_Contains_TisTSource_tF5CADD5C21CF2CD60FD685A28FE7C05B80FA6E8D_mE8A1F4CE22DFFE7ED87F9FA0F0A68FBCDBC3D108;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_m70B2467D3FCF463AF4C26D29F891029BF9EC324F;
extern const uint32_t g_rgctx_EqualityComparer_1_t426D9AC8678417217D095C403FD324D997AB36D4;
extern const uint32_t g_rgctx_IEnumerable_1_tE136AE95298B0A325F0358D30EBD0A23EA38B301;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_mDA3FB122CDC182176702AA6A1F57FABCD6AD1894;
extern const uint32_t g_rgctx_IEnumerator_1_t9DF8767078BE055C6FAF64E02370FECE881D6C38;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m552C8A44C35954659B21BF216ADCB1BDADDF7FB0;
extern const uint32_t g_rgctx_IEqualityComparer_1_t44B0DD0F5552A29B47C50C45ED1102424C434AFA;
extern const uint32_t g_rgctx_IEqualityComparer_1_Equals_mBA41CDA0188EDB9E4464E08B7C9FCE7BD9B6F3A4;
extern const uint32_t g_rgctx_Iterator_1_t8E009DFA0514DB4E4987BB392D13A5A8170ECCE4;
extern const uint32_t g_rgctx_Iterator_1_Clone_m06A7D1B0BDA308E69987DDED84FFC6B95859AA62;
extern const uint32_t g_rgctx_Iterator_1_get_Current_m7CDFA0D6C9FE9C1400547F6BDB614EFD06F9BD91;
extern const uint32_t g_rgctx_TSource_tE11DAFD922BE8DFEB5489CBD1813EB0466BC3D79;
extern const uint32_t g_rgctx_Iterator_1_GetEnumerator_mF75249EC97644B0005490D15C69E49F7F9164A90;
extern const uint32_t g_rgctx_Iterator_1__ctor_m690C659CF11A74EED9E70752C5849F1628230AC8;
extern const uint32_t g_rgctx_Iterator_1_t15119AB906B4942B10DE36D501F127F0FF6DF281;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_t92EE9D2E5265D8B183ED697686240F506BCA8424;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_m9C038F85EC321BD8F7AE403D683D0153D355F9CB;
extern const uint32_t g_rgctx_Iterator_1_Dispose_mF10F128ADF4C88061B584756801E3C39F4D04FA6;
extern const uint32_t g_rgctx_IEnumerable_1_t6BB9BE6EEAECF4E66C19B7781D16F0E830520AC0;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m844DCC57B48252D74DFA627000935F7B4A4407F6;
extern const uint32_t g_rgctx_IEnumerator_1_t7057BF629F81E7DFB90FC10A9074D9A504C6971C;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m07F9232B3524F24682301D1CF8573D7A1CB9C6ED;
extern const uint32_t g_rgctx_Func_2_tC86143735420E666A856DEA89A154669337AD033;
extern const uint32_t g_rgctx_Func_2_Invoke_m12DE18B02FB8945CB56D98F22BD68442081B02EC;
extern const uint32_t g_rgctx_Iterator_1_t15119AB906B4942B10DE36D501F127F0FF6DF281;
extern const uint32_t g_rgctx_Enumerable_CombinePredicates_TisTSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB_m8E8EBCD3C0944D40734F2D3BACA2FF6D133C10EC;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2_t1F5FF34DBCE1F6AF7517393D73D356A6DA50B6D1;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2__ctor_mF3A2E2792E40371499F8A04F1C4B4CF725C70204;
extern const uint32_t g_rgctx_Iterator_1__ctor_mB182060F0BAD71C29739D1A67593C75D932D1F99;
extern const uint32_t g_rgctx_Iterator_1_t401B0AE4A7AE625421285FB386F87D7EB1213E82;
extern const uint32_t g_rgctx_WhereArrayIterator_1_t3191C8D5170E56806A48BD846333ABBD99D3D3C7;
extern const uint32_t g_rgctx_WhereArrayIterator_1__ctor_m4D241BD7A7C7BF59DEFF9D7D34B8E23771934CFE;
extern const uint32_t g_rgctx_Func_2_t9550E469110084BCEB11807FD34F94E9615475E5;
extern const uint32_t g_rgctx_Func_2_Invoke_mCC45E416C5C54731DCA65FEFD545FDC5F4D10DA7;
extern const uint32_t g_rgctx_Iterator_1_t401B0AE4A7AE625421285FB386F87D7EB1213E82;
extern const uint32_t g_rgctx_Iterator_1_Dispose_m3973A9258B5A77E6B3F7DC3D004466E6296075A9;
extern const uint32_t g_rgctx_Enumerable_CombinePredicates_TisTSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A_m457636321FF5773C76C14EA990DF6EBA3827FA1C;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2_t6BD47364FC721CA8B09BDFC7BE6810CCE818F41E;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2__ctor_m13925FA98D8607D9EA9B1A4792AE6A94B2849DF1;
extern const uint32_t g_rgctx_Iterator_1__ctor_m474A63CD9FAA51728C0378997DDC4C8B5FE28303;
extern const uint32_t g_rgctx_Iterator_1_t4928FCA7FD6F8CA3BFB0698285A34D6BBDE1A112;
extern const uint32_t g_rgctx_WhereListIterator_1_t39045FEC3E9F1D32C0EA2780668C61E302992807;
extern const uint32_t g_rgctx_WhereListIterator_1__ctor_m172443247095E67B21AF11E2907D7B644EB793DE;
extern const uint32_t g_rgctx_List_1_t65D73AE3589A56A7B32F4BDFCD91269AD04DD4DF;
extern const uint32_t g_rgctx_List_1_GetEnumerator_m62042CED4A1CF9B02B5E17694405BBB8BEEDD38C;
extern const uint32_t g_rgctx_Enumerator_get_Current_m21D84BB0301B459F1ADE9ABD50089FBBB8C63F97;
extern const uint32_t g_rgctx_Func_2_tC858B64F5B124B5C1F30E774832D4E614DA18793;
extern const uint32_t g_rgctx_Func_2_Invoke_m1C2F1F284152F67D5FE0FD1BD2D71BD3E2DD280F;
extern const uint32_t g_rgctx_Enumerator_MoveNext_m1A9C394EDBEE8ABF55FA1F44A260F79D813902E4;
extern const uint32_t g_rgctx_Iterator_1_t4928FCA7FD6F8CA3BFB0698285A34D6BBDE1A112;
extern const uint32_t g_rgctx_Iterator_1_Dispose_m84B51BBBD674EB42CD5E238D01DC427248C5043F;
extern const uint32_t g_rgctx_Enumerable_CombinePredicates_TisTSource_t85B7C93A555823AE666813BFFC5FEC432E108956_mEF6DF5A93E207AEA02FF346A380F597872BF6F49;
extern const uint32_t g_rgctx_WhereSelectListIterator_2_tA11FC7FED3C26063A55DAAA599906A1C57175B03;
extern const uint32_t g_rgctx_WhereSelectListIterator_2__ctor_m89A10922BF0309154D097D4D7E630E8451C1B952;
extern const uint32_t g_rgctx_Iterator_1__ctor_m24F4541F8829F51E57F84D96054E563391732CFC;
extern const uint32_t g_rgctx_Iterator_1_tA31D49CCC35E12E44AB58CA8F1ABB8B79289764F;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2_t48BC8AE4F3D8AE2BB3FB23C3AFC140A756CC65A4;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2__ctor_mDA7AA133551DE9DAA42B9489EF99A53B6BF80749;
extern const uint32_t g_rgctx_Iterator_1_Dispose_mEC8779D213FB3A1CF689B52F5B8219238E54A57B;
extern const uint32_t g_rgctx_IEnumerable_1_tA64D266802CC654E58E383563C59E5BC49B1AD22;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m8A5C078C211D763A5213D0930EBD38A3D97EA825;
extern const uint32_t g_rgctx_IEnumerator_1_t01303709A68F833425B5740A2A2D972A0DDEEB26;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_mFE78B9CDC5BBDF50E78AFAD9CFE23F2223C79F5B;
extern const uint32_t g_rgctx_Func_2_t86CFE648CE7192981F7DA895E30FBDA1F513B652;
extern const uint32_t g_rgctx_Func_2_Invoke_m4148D75120CEABE2FF0024661FDDBFCB6BA771A5;
extern const uint32_t g_rgctx_Func_2_tD5EAA29CDB4313FE2590F76DD99FB1497FF215B1;
extern const uint32_t g_rgctx_Func_2_Invoke_m76A5030A28A4F68091A624D3302941DB8B4E0765;
extern const uint32_t g_rgctx_Iterator_1_tA31D49CCC35E12E44AB58CA8F1ABB8B79289764F;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_t46D8F3B462050CB986339EA63B34443BA66D5EE9;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_m05CA91B0739729D9DFB15FD9AE29358281C4DF95;
extern const uint32_t g_rgctx_Enumerable_CombineSelectors_TisTSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093_TisTResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520_TisTResult2_tACCDF53F8D9C783083BE76E1EBF4F0851CBEA20C_mF0413C490C865332533AAD91E5E31905E989A32D;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2_t091A81B2BFDECBB6B85A5DE344E32E306B979F4E;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2__ctor_mF714167A39020832C4835CAA8F81F6E0FAA9A789;
extern const uint32_t g_rgctx_Iterator_1__ctor_m6A1E7CB836C19C0B9439096586A06D0057E7AA52;
extern const uint32_t g_rgctx_Iterator_1_tEE17D73E1A34A4CF384B00C3E896D8BCCA8406C7;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2_t2F5234271A3A4E5F89C63030DD6F9D9260D06FDE;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2__ctor_mCD9A624F8C3ACA086CFD4CEBB6150456E1471C9B;
extern const uint32_t g_rgctx_Func_2_t47CC59E1937CA3FCC9DA471AAD5C7899D9AFF9DF;
extern const uint32_t g_rgctx_Func_2_Invoke_m8DAC2E225A682443964FAEA00BE2C728AAD74B0D;
extern const uint32_t g_rgctx_Func_2_t8A5A56224271942180907637F3E10A9A3CBDAEDF;
extern const uint32_t g_rgctx_Func_2_Invoke_mFA2E82CEFB4B24BDB33564DECDF4765D2B7C7053;
extern const uint32_t g_rgctx_Iterator_1_tEE17D73E1A34A4CF384B00C3E896D8BCCA8406C7;
extern const uint32_t g_rgctx_Iterator_1_Dispose_mA9BFBEB710778B3A052F66CEDA033562C82E1D71;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_tC18F5A6D2AF40216AE21EBC6827AD147E31E17A5;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_mA5B3E7EB5B0FFE980FA8EE42233961A20AC087F7;
extern const uint32_t g_rgctx_Enumerable_CombineSelectors_TisTSource_t21BF09076F270DC063711DE3ABB52B001A331F78_TisTResult_t278B55150BC17BB45D33B605F011F4D96EFE5425_TisTResult2_tEC28CE9F47F4F949C7CD44736D7F4B15360A65F9_m5CAC93D4ECC6772D64346C0581C436601A3E07B1;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2_t59D43E919F2DC1D758D7C811297A1435D53D93AC;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2__ctor_m1F6E197D75A7ECC536CF790E45D8855D46A1FDC6;
extern const uint32_t g_rgctx_Iterator_1__ctor_mAB5D6B06319C192633E05B6EBBA9A168FF73AAE9;
extern const uint32_t g_rgctx_Iterator_1_t908D71005972796790D5ED7033CA7098F2134EEF;
extern const uint32_t g_rgctx_WhereSelectListIterator_2_tBA41BFF0DB2BFE973868036026CDCA6B8797A8D6;
extern const uint32_t g_rgctx_WhereSelectListIterator_2__ctor_mDFE79323B2924E6309386ABFB7F9AE7BAAD059C2;
extern const uint32_t g_rgctx_List_1_t905EFEC983EC5317F0B1F633D205BF984BB0BE1D;
extern const uint32_t g_rgctx_List_1_GetEnumerator_m906D8353E6DC2D62B1C6ACF3849D1970361C7AED;
extern const uint32_t g_rgctx_Enumerator_get_Current_mEB276D052415C98826154DC4FDF8574C48E0FAF0;
extern const uint32_t g_rgctx_Func_2_tBE76289600B0D10382BAB5D9F828D996195A6D07;
extern const uint32_t g_rgctx_Func_2_Invoke_mF94AE9E660C674B47621BAB249E8B2D27BF85E73;
extern const uint32_t g_rgctx_Func_2_tC25DAB584B0F47C1DAA1B56A2C30A3D42B88D146;
extern const uint32_t g_rgctx_Func_2_Invoke_m74CA45C07863967094098CE16E020CA52859B1D3;
extern const uint32_t g_rgctx_Enumerator_MoveNext_mD3BAB36AFD8333EB35A46C14C441E1B1A7493CED;
extern const uint32_t g_rgctx_Iterator_1_t908D71005972796790D5ED7033CA7098F2134EEF;
extern const uint32_t g_rgctx_Iterator_1_Dispose_m741197394517AA91B94A9D65A084BBAED71C3C3A;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_t957AB458B1F7D316B1F8960AE854A6CD7E1DD852;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_mF25AEB188FA18B82EFB71A5BAD8534E8A1FFCEE2;
extern const uint32_t g_rgctx_Enumerable_CombineSelectors_TisTSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3_TisTResult_t11AC9139084FDCB528CAF75FE5166467D3329A05_TisTResult2_tECB8FBA56F78B893A9D06A35F011858B7CE2F3E3_m0C731C937555DEE92384A692B1DBACCBB7BE7740;
extern const uint32_t g_rgctx_WhereSelectListIterator_2_t8C5A1568CD9B2B2E7760D591DD3A4517DB930770;
extern const uint32_t g_rgctx_WhereSelectListIterator_2__ctor_m43F52D624D5D5CFF28C6B99849AC99EBE6E71A4F;
extern const uint32_t g_rgctx_Func_2_t756BE45FD1B4569EBD49EAD2AB1444B766D13F83;
extern const uint32_t g_rgctx_Func_2_Invoke_mE7A8E49A025849A2FE64A86343365C1808AD743F;
extern const uint32_t g_rgctx_Func_2_tE17298D4C6D18DE4FB73F421AF563BE9FB9630EB;
extern const uint32_t g_rgctx_Func_2_Invoke_m176EFBF601E4DFA96422134D1F9C9A90B94D6ACF;
extern const uint32_t g_rgctx_Func_2_tB89E2A0A82E89B19927B092B238720F65A87EBE4;
extern const uint32_t g_rgctx_Func_2_Invoke_mE58690AB3F029696906A136F1FFDCB60D54D4C85;
extern const uint32_t g_rgctx_U3CCastIteratorU3Ed__99_1_U3CU3Em__Finally1_mAC1E49465DEED9E5848D85EE5CC56210B6EFD900;
extern const uint32_t g_rgctx_TResult_tF9A9C067B1D7C3992934C3EE72E4040EE9016729;
extern const uint32_t g_rgctx_U3CCastIteratorU3Ed__99_1_System_IDisposable_Dispose_m928508BE18CF8621D700E61A2E43BD5938B7F480;
extern const uint32_t g_rgctx_U3CCastIteratorU3Ed__99_1_t90120AD7B2701C6DCC85AF0B04E37CD8B8743CD4;
extern const uint32_t g_rgctx_U3CCastIteratorU3Ed__99_1__ctor_m5C5C216E5BC40ECA0B904AF74634A5C26B1B5F6F;
extern const uint32_t g_rgctx_U3CCastIteratorU3Ed__99_1_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m60E79E76A77019599C48619F452CB4844876507D;
extern const uint32_t g_rgctx_ICollection_1_tB92B34A134CB1BF586A69F2A283CF79675A37E1D;
extern const uint32_t g_rgctx_ICollection_1_get_Count_m853E49D009E94914082E87AD16E91AD4A7694DEE;
extern const uint32_t g_rgctx_TElementU5BU5D_t65424EAA6380C3A80C7FCEBE88D5E248445EFD15;
extern const uint32_t g_rgctx_ICollection_1_CopyTo_m1623FBCB4E13BACF6CA953F8F38FD10B4ABDC6C9;
extern const uint32_t g_rgctx_IEnumerable_1_t03135CC19B082BC866CC79592745590E608D5CE4;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_mD5E0E805DDE55F5756E21D0D5FEDB2220FA39060;
extern const uint32_t g_rgctx_IEnumerator_1_t13EFC35CCC3C9F302141EE5C116481E1CF2CDC48;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m1BB68E9CA48B668E739FD9AF759EEE794E0CC7A5;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_mC93F859DDE3938407D49FF1E5A96CED45C316265;
extern const uint32_t g_rgctx_EqualityComparer_1_tA96567156D027DA41596C9CA1C5DEAB0CDEE6C60;
extern const uint32_t g_rgctx_HashSet_1__ctor_m781AB04365DCD9333E443C412DFFE8102DCAA2D0;
extern const uint32_t g_rgctx_HashSet_1_AddIfNotPresent_mF89D8C4E328F141B43BA304A67EFAE78CF643968;
extern const uint32_t g_rgctx_HashSet_1_InternalGetHashCode_m175DF882B346A324B102A8692CA09758B465DF72;
extern const uint32_t g_rgctx_IEqualityComparer_1_t66DFFD1D981BA05FF20035307F86BFC3864B2E2B;
extern const uint32_t g_rgctx_IEqualityComparer_1_Equals_m0539178A3A28082426D3792F170D842E3F99CCA6;
extern const uint32_t g_rgctx_HashSet_1_CopyTo_mAC8E7BAAD9DE7ECC11D9FC60E3A4FBD661B4A329;
extern const uint32_t g_rgctx_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D;
extern const uint32_t g_rgctx_Enumerator__ctor_m757B4624317C66B0082A97D86F44F4732370B396;
extern const uint32_t g_rgctx_IComparer_1_t6BC8594DB26FCC0B360DE8C22BD01836BA24C8AC;
extern const uint32_t g_rgctx_TU5BU5D_t6BCCEA57BEA1E43097B80E2965A5789452F93BA0;
extern const uint32_t g_rgctx_HashSet_1_CopyTo_m636F301EC0DFB1B2F58553B0EE2E5D4B41B02261;
extern const uint32_t g_rgctx_TU5BU5D_t6BCCEA57BEA1E43097B80E2965A5789452F93BA0;
extern const uint32_t g_rgctx_IEqualityComparer_1_t66DFFD1D981BA05FF20035307F86BFC3864B2E2B;
extern const uint32_t g_rgctx_SlotU5BU5D_tCF3C9EE13C54F730A642AD5F260A5A7D2F9F73F7;
extern const uint32_t g_rgctx_TU5BU5D_t6BCCEA57BEA1E43097B80E2965A5789452F93BA0;
extern const uint32_t g_rgctx_HashSet_1_SetCapacity_mBAE6B90A5CE1BD75B08B8527763700172A4ADB69;
extern const uint32_t g_rgctx_HashSet_1_Initialize_m06C4A2DE0A243BB8A2D0C4345712ED9B91231993;
extern const uint32_t g_rgctx_HashSet_1_IncreaseCapacity_mC430EB8352A6B45A9776BF3373EEE6551FC85ABE;
extern const uint32_t g_rgctx_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94;
extern const uint32_t g_rgctx_IEqualityComparer_1_GetHashCode_mB43AB2E622EB30D675693CDC96CA5D836DE43336;
extern const uint32_t g_rgctx_Enumerator_get_Current_m6F22509C5AEA1EA15942F7F9C9866256CB3EA347;
extern const uint32_t g_rgctx_T_t6D22409F37413B725563BF484486F55FB7202BB8;
static const Il2CppRGCTXDefinition s_rgctxValues[219] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_tAFB7558C92D3848C170203685AA45B10B6035464 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_Where_mB33345A6D2213AB59B7B357292542E752C9AEEF2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSourceU5BU5D_t5F9558857B1D501A57AAC7DDF5A60A1CAF6A8736 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereArrayIterator_1_t8F188FD6974943DFDC1A3C36E69549C9146DCB25 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereArrayIterator_1__ctor_mFE764A6F32B18EEABDD6813CF733205E2149C7B7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t8601446322D050B44EBF5C49E8048407F11D6239 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereListIterator_1_tDAFC464D33DAF1B893DB760F55638A7AC019AEB9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereListIterator_1__ctor_m0D87B2EFC00BD5C900E47BED483C334DC731E51D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereEnumerableIterator_1_tB9885E49C2A0467CBEB9B331919AE76488DD4BA8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereEnumerableIterator_1__ctor_m7CA177F283ABFD6426F57A5630315F53267741CE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t83549F4A854FAE4651C92A7B3B8907E4798F0121 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_Select_TisTResult_tF3AC1D6143237427ECB7A483D967C1FE5374DBD7_mC9EEBF5649EB6F682C5621B1AF6786BFFC2C62B4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSourceU5BU5D_tD0F38A3B04FEF1F6EB6A2C0F97C2F6826A3C1198 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectArrayIterator_2_tD31A5253F7EAAB16463FB95C4B1DF1B5BA0BE6DE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectArrayIterator_2__ctor_m85B91DA1F46361240445ADE95E0CFD6F1674C1FA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t7FCC2F8DB1446378C6AD15E4C2ECDCB8E2001280 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectListIterator_2_tE91BB456A01CEF4F6BC613FDF4A44F341B2D7206 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectListIterator_2__ctor_m0D002693B7EAB5A831D2058278463032864687DC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectEnumerableIterator_2_t9583448D4FAA842B0C18940E2557F5D5A9507364 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectEnumerableIterator_2__ctor_m8F12E12FDDE5F7E663BA04C6B41490D162423694 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1_t0D7DCEEA7C4415169B2CBD5801DECF1AE6BC71D1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1__ctor_mC075FAA755826D869270E4A74AED806B91B2E5F3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1_U3CCombinePredicatesU3Eb__0_m6F0EDB0FF04C8A3C9C6D97800722D1B3851C415C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t39F15D2C4961B652B7F6B0AD725F37F96D8C9F54 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2__ctor_m18DE7FE4BDFFE701174935655A7EFBA6D405ACA1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_3_tCCDD433A1A5065F08529A9FCE5D0C53B52F7B3A6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_3__ctor_m248BC6F9C9006A172D95E4482735B14F94409558 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_3_U3CCombineSelectorsU3Eb__0_mEFA4E2467394FB8379F3CCA7A61136C96768B2BD },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t09635D19844B1DE3B9DF944B0517FBF783EA917C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2__ctor_mB0725395805DF6905CB0FAA6BB81FFAAB17AEA93 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Buffer_1_tC3AA32816753DA7B0898D92E15B122AC7DE23B5B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Buffer_1__ctor_m72F00609851E22DF4338204A2E6EC7E3A3E0C3D4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Buffer_1_ToArray_m11DBDA9AA16C64F60D134E59D6BD79D515B8D187 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t168E1771B2C2914F0DF873822B754BD4110D6958 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1__ctor_mB51694A9EF5013F0A729FC4B8BD80C8A49970CF9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_ToDictionary_TisTSource_tE31865679B90EA41B3B599272398AC4F59C84AFB_TisTKey_tD37952AE661C99DC819D1D703910E923C1FFB563_TisTElement_tC983FBB6789A209AE3741CF7BF97B4518033512E_m581C4145E7A359AB48C48EF4B9FD323449456C1D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Dictionary_2_t1E70F86BEBC0F1C830579FA6851930E77390E72B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2__ctor_m591886154E017552D886FC19F4060A03FE424C93 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t5A5C0F89267F3218FAA546F66CD24FEBC7CF84FE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_mC69AE1ABEA30DF65F14B814D77CAD7C4024E22AB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_tA355CC98E7C1D7ECE78348B13D33CEB831BD17DA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m50E35714CF970F9143E42B9AEC7B1D77888FC1CA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t5C04A674024FA30035DFC9782FFCAAA61F83788A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m0D96BC3A9C1650762AC39C6C5FD483FA60F189DC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t9712D21F02586859B9C521A9A7AF2CF8C070DC73 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m11C7E19C8CA2288F9AE5440999F048A468CD4306 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_Add_m008084EDBF8D30C4C632AB28252CC7E324244C92 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tEB7A5DFD2ACAEA7A8EAEF0EF64F03C11FF5C03C8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_CastIterator_TisTResult_t705B11747EBADAA865F7616E1268D26DB506E54D_m68118B32078607EC27B5AD84DFB34C9DA1B165E9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CCastIteratorU3Ed__99_1_tE45A9F5A1B646861B32100571A6D9C7FCD98B5F3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CCastIteratorU3Ed__99_1__ctor_m94CFA818A80B6A268EB32C30BCFD68AFA0323A78 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tEF986F81DB6A3163CFD7CDAA423612D3C77639CC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m6FB8D118A5176C69DA8D12EE01C540A380D0CA88 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t6F6571CF0B132A4B653D0A40A4193F23DEEC3FD9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m69FFBE7376E424D93345AD43D1E5D533855DA21A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t3B2B88FD78F5F69347CF2269307A59AC322C79C3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mEB89293A67FE90E3AB9DAD0E7E982413D7D44A4D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t87213EF6958E9847E318D7FED68D206925280A0F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m623808007A8A20ED9393D48B2467A792BFE9D1D1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t34C887C840E86896B486F20B42C0F5EAC90C726E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m096D45787935CB3519AA751639FA7C8B7B8058FE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_tAC8F51D25D6A25E51E41570AD085263B028F5865 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m0CD4A796E3CAD9965C1EDBF2DD175609DBD87C7D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tECEEE16E2A7D99CED40251A6F6CA091497F39DF9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mCF04C711A970D455B890BDBF34E5ABF28518AE9F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ICollection_1_t143CB03B088368ACAAEEF662B347A36493BD7F74 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ICollection_1_Contains_mB272442975A686EF456CFFBE01CEB6E8F6D0FC4E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_Contains_TisTSource_tF5CADD5C21CF2CD60FD685A28FE7C05B80FA6E8D_mE8A1F4CE22DFFE7ED87F9FA0F0A68FBCDBC3D108 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_get_Default_m70B2467D3FCF463AF4C26D29F891029BF9EC324F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_t426D9AC8678417217D095C403FD324D997AB36D4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tE136AE95298B0A325F0358D30EBD0A23EA38B301 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_mDA3FB122CDC182176702AA6A1F57FABCD6AD1894 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t9DF8767078BE055C6FAF64E02370FECE881D6C38 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m552C8A44C35954659B21BF216ADCB1BDADDF7FB0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEqualityComparer_1_t44B0DD0F5552A29B47C50C45ED1102424C434AFA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEqualityComparer_1_Equals_mBA41CDA0188EDB9E4464E08B7C9FCE7BD9B6F3A4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t8E009DFA0514DB4E4987BB392D13A5A8170ECCE4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_Clone_m06A7D1B0BDA308E69987DDED84FFC6B95859AA62 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_get_Current_m7CDFA0D6C9FE9C1400547F6BDB614EFD06F9BD91 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_tE11DAFD922BE8DFEB5489CBD1813EB0466BC3D79 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_GetEnumerator_mF75249EC97644B0005490D15C69E49F7F9164A90 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1__ctor_m690C659CF11A74EED9E70752C5849F1628230AC8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t15119AB906B4942B10DE36D501F127F0FF6DF281 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereEnumerableIterator_1_t92EE9D2E5265D8B183ED697686240F506BCA8424 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereEnumerableIterator_1__ctor_m9C038F85EC321BD8F7AE403D683D0153D355F9CB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_Dispose_mF10F128ADF4C88061B584756801E3C39F4D04FA6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t6BB9BE6EEAECF4E66C19B7781D16F0E830520AC0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m844DCC57B48252D74DFA627000935F7B4A4407F6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t7057BF629F81E7DFB90FC10A9074D9A504C6971C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m07F9232B3524F24682301D1CF8573D7A1CB9C6ED },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tC86143735420E666A856DEA89A154669337AD033 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m12DE18B02FB8945CB56D98F22BD68442081B02EC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t15119AB906B4942B10DE36D501F127F0FF6DF281 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_CombinePredicates_TisTSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB_m8E8EBCD3C0944D40734F2D3BACA2FF6D133C10EC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectEnumerableIterator_2_t1F5FF34DBCE1F6AF7517393D73D356A6DA50B6D1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectEnumerableIterator_2__ctor_mF3A2E2792E40371499F8A04F1C4B4CF725C70204 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1__ctor_mB182060F0BAD71C29739D1A67593C75D932D1F99 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t401B0AE4A7AE625421285FB386F87D7EB1213E82 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereArrayIterator_1_t3191C8D5170E56806A48BD846333ABBD99D3D3C7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereArrayIterator_1__ctor_m4D241BD7A7C7BF59DEFF9D7D34B8E23771934CFE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t9550E469110084BCEB11807FD34F94E9615475E5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mCC45E416C5C54731DCA65FEFD545FDC5F4D10DA7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t401B0AE4A7AE625421285FB386F87D7EB1213E82 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_Dispose_m3973A9258B5A77E6B3F7DC3D004466E6296075A9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_CombinePredicates_TisTSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A_m457636321FF5773C76C14EA990DF6EBA3827FA1C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectArrayIterator_2_t6BD47364FC721CA8B09BDFC7BE6810CCE818F41E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectArrayIterator_2__ctor_m13925FA98D8607D9EA9B1A4792AE6A94B2849DF1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1__ctor_m474A63CD9FAA51728C0378997DDC4C8B5FE28303 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t4928FCA7FD6F8CA3BFB0698285A34D6BBDE1A112 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereListIterator_1_t39045FEC3E9F1D32C0EA2780668C61E302992807 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereListIterator_1__ctor_m172443247095E67B21AF11E2907D7B644EB793DE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t65D73AE3589A56A7B32F4BDFCD91269AD04DD4DF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_GetEnumerator_m62042CED4A1CF9B02B5E17694405BBB8BEEDD38C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_m21D84BB0301B459F1ADE9ABD50089FBBB8C63F97 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tC858B64F5B124B5C1F30E774832D4E614DA18793 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m1C2F1F284152F67D5FE0FD1BD2D71BD3E2DD280F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_m1A9C394EDBEE8ABF55FA1F44A260F79D813902E4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t4928FCA7FD6F8CA3BFB0698285A34D6BBDE1A112 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_Dispose_m84B51BBBD674EB42CD5E238D01DC427248C5043F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_CombinePredicates_TisTSource_t85B7C93A555823AE666813BFFC5FEC432E108956_mEF6DF5A93E207AEA02FF346A380F597872BF6F49 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectListIterator_2_tA11FC7FED3C26063A55DAAA599906A1C57175B03 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectListIterator_2__ctor_m89A10922BF0309154D097D4D7E630E8451C1B952 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1__ctor_m24F4541F8829F51E57F84D96054E563391732CFC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_tA31D49CCC35E12E44AB58CA8F1ABB8B79289764F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectEnumerableIterator_2_t48BC8AE4F3D8AE2BB3FB23C3AFC140A756CC65A4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectEnumerableIterator_2__ctor_mDA7AA133551DE9DAA42B9489EF99A53B6BF80749 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_Dispose_mEC8779D213FB3A1CF689B52F5B8219238E54A57B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tA64D266802CC654E58E383563C59E5BC49B1AD22 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m8A5C078C211D763A5213D0930EBD38A3D97EA825 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t01303709A68F833425B5740A2A2D972A0DDEEB26 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_mFE78B9CDC5BBDF50E78AFAD9CFE23F2223C79F5B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t86CFE648CE7192981F7DA895E30FBDA1F513B652 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m4148D75120CEABE2FF0024661FDDBFCB6BA771A5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tD5EAA29CDB4313FE2590F76DD99FB1497FF215B1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m76A5030A28A4F68091A624D3302941DB8B4E0765 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_tA31D49CCC35E12E44AB58CA8F1ABB8B79289764F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereEnumerableIterator_1_t46D8F3B462050CB986339EA63B34443BA66D5EE9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereEnumerableIterator_1__ctor_m05CA91B0739729D9DFB15FD9AE29358281C4DF95 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_CombineSelectors_TisTSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093_TisTResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520_TisTResult2_tACCDF53F8D9C783083BE76E1EBF4F0851CBEA20C_mF0413C490C865332533AAD91E5E31905E989A32D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectEnumerableIterator_2_t091A81B2BFDECBB6B85A5DE344E32E306B979F4E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectEnumerableIterator_2__ctor_mF714167A39020832C4835CAA8F81F6E0FAA9A789 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1__ctor_m6A1E7CB836C19C0B9439096586A06D0057E7AA52 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_tEE17D73E1A34A4CF384B00C3E896D8BCCA8406C7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectArrayIterator_2_t2F5234271A3A4E5F89C63030DD6F9D9260D06FDE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectArrayIterator_2__ctor_mCD9A624F8C3ACA086CFD4CEBB6150456E1471C9B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t47CC59E1937CA3FCC9DA471AAD5C7899D9AFF9DF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m8DAC2E225A682443964FAEA00BE2C728AAD74B0D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t8A5A56224271942180907637F3E10A9A3CBDAEDF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mFA2E82CEFB4B24BDB33564DECDF4765D2B7C7053 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_tEE17D73E1A34A4CF384B00C3E896D8BCCA8406C7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_Dispose_mA9BFBEB710778B3A052F66CEDA033562C82E1D71 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereEnumerableIterator_1_tC18F5A6D2AF40216AE21EBC6827AD147E31E17A5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereEnumerableIterator_1__ctor_mA5B3E7EB5B0FFE980FA8EE42233961A20AC087F7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_CombineSelectors_TisTSource_t21BF09076F270DC063711DE3ABB52B001A331F78_TisTResult_t278B55150BC17BB45D33B605F011F4D96EFE5425_TisTResult2_tEC28CE9F47F4F949C7CD44736D7F4B15360A65F9_m5CAC93D4ECC6772D64346C0581C436601A3E07B1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectArrayIterator_2_t59D43E919F2DC1D758D7C811297A1435D53D93AC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectArrayIterator_2__ctor_m1F6E197D75A7ECC536CF790E45D8855D46A1FDC6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1__ctor_mAB5D6B06319C192633E05B6EBBA9A168FF73AAE9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t908D71005972796790D5ED7033CA7098F2134EEF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectListIterator_2_tBA41BFF0DB2BFE973868036026CDCA6B8797A8D6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectListIterator_2__ctor_mDFE79323B2924E6309386ABFB7F9AE7BAAD059C2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t905EFEC983EC5317F0B1F633D205BF984BB0BE1D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_GetEnumerator_m906D8353E6DC2D62B1C6ACF3849D1970361C7AED },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_mEB276D052415C98826154DC4FDF8574C48E0FAF0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tBE76289600B0D10382BAB5D9F828D996195A6D07 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mF94AE9E660C674B47621BAB249E8B2D27BF85E73 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tC25DAB584B0F47C1DAA1B56A2C30A3D42B88D146 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m74CA45C07863967094098CE16E020CA52859B1D3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_mD3BAB36AFD8333EB35A46C14C441E1B1A7493CED },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t908D71005972796790D5ED7033CA7098F2134EEF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_Dispose_m741197394517AA91B94A9D65A084BBAED71C3C3A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereEnumerableIterator_1_t957AB458B1F7D316B1F8960AE854A6CD7E1DD852 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereEnumerableIterator_1__ctor_mF25AEB188FA18B82EFB71A5BAD8534E8A1FFCEE2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_CombineSelectors_TisTSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3_TisTResult_t11AC9139084FDCB528CAF75FE5166467D3329A05_TisTResult2_tECB8FBA56F78B893A9D06A35F011858B7CE2F3E3_m0C731C937555DEE92384A692B1DBACCBB7BE7740 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectListIterator_2_t8C5A1568CD9B2B2E7760D591DD3A4517DB930770 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectListIterator_2__ctor_m43F52D624D5D5CFF28C6B99849AC99EBE6E71A4F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t756BE45FD1B4569EBD49EAD2AB1444B766D13F83 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mE7A8E49A025849A2FE64A86343365C1808AD743F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tE17298D4C6D18DE4FB73F421AF563BE9FB9630EB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m176EFBF601E4DFA96422134D1F9C9A90B94D6ACF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tB89E2A0A82E89B19927B092B238720F65A87EBE4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mE58690AB3F029696906A136F1FFDCB60D54D4C85 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CCastIteratorU3Ed__99_1_U3CU3Em__Finally1_mAC1E49465DEED9E5848D85EE5CC56210B6EFD900 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TResult_tF9A9C067B1D7C3992934C3EE72E4040EE9016729 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CCastIteratorU3Ed__99_1_System_IDisposable_Dispose_m928508BE18CF8621D700E61A2E43BD5938B7F480 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CCastIteratorU3Ed__99_1_t90120AD7B2701C6DCC85AF0B04E37CD8B8743CD4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CCastIteratorU3Ed__99_1__ctor_m5C5C216E5BC40ECA0B904AF74634A5C26B1B5F6F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CCastIteratorU3Ed__99_1_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m60E79E76A77019599C48619F452CB4844876507D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ICollection_1_tB92B34A134CB1BF586A69F2A283CF79675A37E1D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ICollection_1_get_Count_m853E49D009E94914082E87AD16E91AD4A7694DEE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TElementU5BU5D_t65424EAA6380C3A80C7FCEBE88D5E248445EFD15 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ICollection_1_CopyTo_m1623FBCB4E13BACF6CA953F8F38FD10B4ABDC6C9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t03135CC19B082BC866CC79592745590E608D5CE4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_mD5E0E805DDE55F5756E21D0D5FEDB2220FA39060 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t13EFC35CCC3C9F302141EE5C116481E1CF2CDC48 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m1BB68E9CA48B668E739FD9AF759EEE794E0CC7A5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_get_Default_mC93F859DDE3938407D49FF1E5A96CED45C316265 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_tA96567156D027DA41596C9CA1C5DEAB0CDEE6C60 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1__ctor_m781AB04365DCD9333E443C412DFFE8102DCAA2D0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_AddIfNotPresent_mF89D8C4E328F141B43BA304A67EFAE78CF643968 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_InternalGetHashCode_m175DF882B346A324B102A8692CA09758B465DF72 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEqualityComparer_1_t66DFFD1D981BA05FF20035307F86BFC3864B2E2B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEqualityComparer_1_Equals_m0539178A3A28082426D3792F170D842E3F99CCA6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_CopyTo_mAC8E7BAAD9DE7ECC11D9FC60E3A4FBD661B4A329 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator__ctor_m757B4624317C66B0082A97D86F44F4732370B396 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_IComparer_1_t6BC8594DB26FCC0B360DE8C22BD01836BA24C8AC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU5BU5D_t6BCCEA57BEA1E43097B80E2965A5789452F93BA0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_CopyTo_m636F301EC0DFB1B2F58553B0EE2E5D4B41B02261 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TU5BU5D_t6BCCEA57BEA1E43097B80E2965A5789452F93BA0 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_IEqualityComparer_1_t66DFFD1D981BA05FF20035307F86BFC3864B2E2B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_SlotU5BU5D_tCF3C9EE13C54F730A642AD5F260A5A7D2F9F73F7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU5BU5D_t6BCCEA57BEA1E43097B80E2965A5789452F93BA0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_SetCapacity_mBAE6B90A5CE1BD75B08B8527763700172A4ADB69 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_Initialize_m06C4A2DE0A243BB8A2D0C4345712ED9B91231993 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_IncreaseCapacity_mC430EB8352A6B45A9776BF3373EEE6551FC85ABE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEqualityComparer_1_GetHashCode_mB43AB2E622EB30D675693CDC96CA5D836DE43336 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_m6F22509C5AEA1EA15942F7F9C9866256CB3EA347 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t6D22409F37413B725563BF484486F55FB7202BB8 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	114,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	34,
	s_rgctxIndices,
	219,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
