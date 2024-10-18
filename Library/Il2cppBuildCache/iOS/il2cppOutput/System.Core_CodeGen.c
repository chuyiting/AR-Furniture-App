#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000B System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000010 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType(System.Collections.IEnumerable)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfTypeIterator(System.Collections.IEnumerable)
// 0x00000014 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000017 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000018 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001A System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001B System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001C System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x0000001D System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000001E System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000001F TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000020 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000021 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000022 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000023 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000024 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000025 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000027 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000028 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000029 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000002B System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000002C System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000002D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002F System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000030 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000031 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000035 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000036 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000038 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000039 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003A System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000003B System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000003C System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003F System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000040 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000041 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000042 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000044 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000045 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000046 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000047 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000048 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000049 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000004A System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000004B System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000004C TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000004D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000004E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000004F System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x00000050 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x00000051 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000052 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000053 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000054 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000055 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000056 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000057 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000058 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000059 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x0000005A System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x0000005B TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000005C System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x0000005D System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x0000005E System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000005F System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000060 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000061 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000062 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x00000063 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x00000064 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x00000065 TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000066 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x00000067 System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x00000068 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000069 System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006A System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::.ctor(System.Int32)
// 0x0000006B System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.IDisposable.Dispose()
// 0x0000006C System.Boolean System.Linq.Enumerable/<OfTypeIterator>d__97`1::MoveNext()
// 0x0000006D System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>m__Finally1()
// 0x0000006E TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000006F System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.Reset()
// 0x00000070 System.Object System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.get_Current()
// 0x00000071 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000072 System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000073 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000074 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000075 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000076 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000077 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000078 System.Void System.Linq.Set`1::Resize()
// 0x00000079 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x0000007A System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000007B System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000007C System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007D System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000007E System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000007F System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000080 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000081 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000082 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000083 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000084 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000085 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000086 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000087 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000088 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000089 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x0000008A System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x0000008B System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000008C System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000008D System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x0000008E System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x0000008F System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000090 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000091 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000092 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000093 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000094 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000095 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000096 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000097 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000098 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000099 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000009A System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000009B System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000009C System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000009D System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009E System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000009F System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000A0 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000A1 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000A2 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000A3 System.Int32 System.Collections.Generic.HashSet`1::RemoveWhere(System.Predicate`1<T>)
// 0x000000A4 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000A5 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000A6 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000A7 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000A8 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000A9 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000AA System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000AB System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000AC T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000AD System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000AE System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[174] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
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
};
static const int32_t s_InvokerIndices[174] = 
{
	5407,
	5592,
	5592,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[56] = 
{
	{ 0x02000004, { 78, 4 } },
	{ 0x02000005, { 82, 9 } },
	{ 0x02000006, { 93, 7 } },
	{ 0x02000007, { 102, 10 } },
	{ 0x02000008, { 114, 11 } },
	{ 0x02000009, { 128, 9 } },
	{ 0x0200000A, { 140, 12 } },
	{ 0x0200000B, { 155, 1 } },
	{ 0x0200000C, { 156, 2 } },
	{ 0x0200000D, { 158, 12 } },
	{ 0x0200000E, { 170, 11 } },
	{ 0x0200000F, { 181, 12 } },
	{ 0x02000010, { 193, 6 } },
	{ 0x02000011, { 199, 2 } },
	{ 0x02000013, { 201, 8 } },
	{ 0x02000015, { 209, 3 } },
	{ 0x02000016, { 214, 5 } },
	{ 0x02000017, { 219, 7 } },
	{ 0x02000018, { 226, 3 } },
	{ 0x02000019, { 229, 7 } },
	{ 0x0200001A, { 236, 4 } },
	{ 0x0200001B, { 240, 23 } },
	{ 0x0200001D, { 263, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 1 } },
	{ 0x06000009, { 31, 2 } },
	{ 0x0600000A, { 33, 2 } },
	{ 0x0600000B, { 35, 1 } },
	{ 0x0600000C, { 36, 1 } },
	{ 0x0600000D, { 37, 2 } },
	{ 0x0600000E, { 39, 1 } },
	{ 0x0600000F, { 40, 2 } },
	{ 0x06000010, { 42, 3 } },
	{ 0x06000011, { 45, 2 } },
	{ 0x06000012, { 47, 1 } },
	{ 0x06000013, { 48, 2 } },
	{ 0x06000014, { 50, 4 } },
	{ 0x06000015, { 54, 4 } },
	{ 0x06000016, { 58, 3 } },
	{ 0x06000017, { 61, 1 } },
	{ 0x06000018, { 62, 1 } },
	{ 0x06000019, { 63, 3 } },
	{ 0x0600001A, { 66, 3 } },
	{ 0x0600001B, { 69, 2 } },
	{ 0x0600001C, { 71, 2 } },
	{ 0x0600001D, { 73, 5 } },
	{ 0x0600002D, { 91, 2 } },
	{ 0x06000032, { 100, 2 } },
	{ 0x06000037, { 112, 2 } },
	{ 0x0600003D, { 125, 3 } },
	{ 0x06000042, { 137, 3 } },
	{ 0x06000047, { 152, 3 } },
	{ 0x0600007D, { 212, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[265] = 
{
	{ (Il2CppRGCTXDataType)2, 2738 },
	{ (Il2CppRGCTXDataType)3, 10272 },
	{ (Il2CppRGCTXDataType)2, 4325 },
	{ (Il2CppRGCTXDataType)2, 3794 },
	{ (Il2CppRGCTXDataType)3, 18357 },
	{ (Il2CppRGCTXDataType)2, 2822 },
	{ (Il2CppRGCTXDataType)2, 3801 },
	{ (Il2CppRGCTXDataType)3, 18392 },
	{ (Il2CppRGCTXDataType)2, 3796 },
	{ (Il2CppRGCTXDataType)3, 18369 },
	{ (Il2CppRGCTXDataType)2, 2739 },
	{ (Il2CppRGCTXDataType)3, 10273 },
	{ (Il2CppRGCTXDataType)2, 4350 },
	{ (Il2CppRGCTXDataType)2, 3806 },
	{ (Il2CppRGCTXDataType)3, 18407 },
	{ (Il2CppRGCTXDataType)2, 2842 },
	{ (Il2CppRGCTXDataType)2, 3814 },
	{ (Il2CppRGCTXDataType)3, 18571 },
	{ (Il2CppRGCTXDataType)2, 3810 },
	{ (Il2CppRGCTXDataType)3, 18482 },
	{ (Il2CppRGCTXDataType)2, 941 },
	{ (Il2CppRGCTXDataType)3, 31 },
	{ (Il2CppRGCTXDataType)3, 32 },
	{ (Il2CppRGCTXDataType)2, 1684 },
	{ (Il2CppRGCTXDataType)3, 7166 },
	{ (Il2CppRGCTXDataType)2, 943 },
	{ (Il2CppRGCTXDataType)3, 43 },
	{ (Il2CppRGCTXDataType)3, 44 },
	{ (Il2CppRGCTXDataType)2, 1698 },
	{ (Il2CppRGCTXDataType)3, 7171 },
	{ (Il2CppRGCTXDataType)3, 21656 },
	{ (Il2CppRGCTXDataType)2, 952 },
	{ (Il2CppRGCTXDataType)3, 143 },
	{ (Il2CppRGCTXDataType)2, 3401 },
	{ (Il2CppRGCTXDataType)3, 16035 },
	{ (Il2CppRGCTXDataType)3, 8072 },
	{ (Il2CppRGCTXDataType)3, 21620 },
	{ (Il2CppRGCTXDataType)2, 944 },
	{ (Il2CppRGCTXDataType)3, 87 },
	{ (Il2CppRGCTXDataType)3, 21675 },
	{ (Il2CppRGCTXDataType)2, 955 },
	{ (Il2CppRGCTXDataType)3, 172 },
	{ (Il2CppRGCTXDataType)2, 1234 },
	{ (Il2CppRGCTXDataType)3, 1862 },
	{ (Il2CppRGCTXDataType)3, 1863 },
	{ (Il2CppRGCTXDataType)2, 2823 },
	{ (Il2CppRGCTXDataType)3, 10863 },
	{ (Il2CppRGCTXDataType)3, 21631 },
	{ (Il2CppRGCTXDataType)2, 950 },
	{ (Il2CppRGCTXDataType)3, 129 },
	{ (Il2CppRGCTXDataType)2, 2491 },
	{ (Il2CppRGCTXDataType)2, 1925 },
	{ (Il2CppRGCTXDataType)2, 2046 },
	{ (Il2CppRGCTXDataType)2, 2169 },
	{ (Il2CppRGCTXDataType)2, 2492 },
	{ (Il2CppRGCTXDataType)2, 1926 },
	{ (Il2CppRGCTXDataType)2, 2047 },
	{ (Il2CppRGCTXDataType)2, 2170 },
	{ (Il2CppRGCTXDataType)2, 2048 },
	{ (Il2CppRGCTXDataType)2, 2171 },
	{ (Il2CppRGCTXDataType)3, 7167 },
	{ (Il2CppRGCTXDataType)2, 1517 },
	{ (Il2CppRGCTXDataType)2, 2032 },
	{ (Il2CppRGCTXDataType)2, 2033 },
	{ (Il2CppRGCTXDataType)2, 2167 },
	{ (Il2CppRGCTXDataType)3, 7165 },
	{ (Il2CppRGCTXDataType)2, 2031 },
	{ (Il2CppRGCTXDataType)2, 2166 },
	{ (Il2CppRGCTXDataType)3, 7164 },
	{ (Il2CppRGCTXDataType)2, 1924 },
	{ (Il2CppRGCTXDataType)2, 2045 },
	{ (Il2CppRGCTXDataType)2, 1923 },
	{ (Il2CppRGCTXDataType)3, 21598 },
	{ (Il2CppRGCTXDataType)3, 6469 },
	{ (Il2CppRGCTXDataType)2, 1593 },
	{ (Il2CppRGCTXDataType)2, 2035 },
	{ (Il2CppRGCTXDataType)2, 2168 },
	{ (Il2CppRGCTXDataType)2, 2275 },
	{ (Il2CppRGCTXDataType)3, 10274 },
	{ (Il2CppRGCTXDataType)3, 10276 },
	{ (Il2CppRGCTXDataType)2, 670 },
	{ (Il2CppRGCTXDataType)3, 10275 },
	{ (Il2CppRGCTXDataType)3, 10284 },
	{ (Il2CppRGCTXDataType)2, 2742 },
	{ (Il2CppRGCTXDataType)2, 3797 },
	{ (Il2CppRGCTXDataType)3, 18370 },
	{ (Il2CppRGCTXDataType)3, 10285 },
	{ (Il2CppRGCTXDataType)2, 2102 },
	{ (Il2CppRGCTXDataType)2, 2205 },
	{ (Il2CppRGCTXDataType)3, 7179 },
	{ (Il2CppRGCTXDataType)3, 21563 },
	{ (Il2CppRGCTXDataType)2, 3811 },
	{ (Il2CppRGCTXDataType)3, 18483 },
	{ (Il2CppRGCTXDataType)3, 10277 },
	{ (Il2CppRGCTXDataType)2, 2741 },
	{ (Il2CppRGCTXDataType)2, 3795 },
	{ (Il2CppRGCTXDataType)3, 18358 },
	{ (Il2CppRGCTXDataType)3, 7178 },
	{ (Il2CppRGCTXDataType)3, 10278 },
	{ (Il2CppRGCTXDataType)3, 21562 },
	{ (Il2CppRGCTXDataType)2, 3807 },
	{ (Il2CppRGCTXDataType)3, 18408 },
	{ (Il2CppRGCTXDataType)3, 10291 },
	{ (Il2CppRGCTXDataType)2, 2743 },
	{ (Il2CppRGCTXDataType)2, 3802 },
	{ (Il2CppRGCTXDataType)3, 18393 },
	{ (Il2CppRGCTXDataType)3, 10917 },
	{ (Il2CppRGCTXDataType)3, 5067 },
	{ (Il2CppRGCTXDataType)3, 7180 },
	{ (Il2CppRGCTXDataType)3, 5066 },
	{ (Il2CppRGCTXDataType)3, 10292 },
	{ (Il2CppRGCTXDataType)3, 21564 },
	{ (Il2CppRGCTXDataType)2, 3815 },
	{ (Il2CppRGCTXDataType)3, 18572 },
	{ (Il2CppRGCTXDataType)3, 10305 },
	{ (Il2CppRGCTXDataType)2, 2745 },
	{ (Il2CppRGCTXDataType)2, 3813 },
	{ (Il2CppRGCTXDataType)3, 18485 },
	{ (Il2CppRGCTXDataType)3, 10306 },
	{ (Il2CppRGCTXDataType)2, 2105 },
	{ (Il2CppRGCTXDataType)2, 2208 },
	{ (Il2CppRGCTXDataType)3, 7184 },
	{ (Il2CppRGCTXDataType)3, 7183 },
	{ (Il2CppRGCTXDataType)2, 3799 },
	{ (Il2CppRGCTXDataType)3, 18372 },
	{ (Il2CppRGCTXDataType)3, 21569 },
	{ (Il2CppRGCTXDataType)2, 3812 },
	{ (Il2CppRGCTXDataType)3, 18484 },
	{ (Il2CppRGCTXDataType)3, 10298 },
	{ (Il2CppRGCTXDataType)2, 2744 },
	{ (Il2CppRGCTXDataType)2, 3809 },
	{ (Il2CppRGCTXDataType)3, 18410 },
	{ (Il2CppRGCTXDataType)3, 7182 },
	{ (Il2CppRGCTXDataType)3, 7181 },
	{ (Il2CppRGCTXDataType)3, 10299 },
	{ (Il2CppRGCTXDataType)2, 3798 },
	{ (Il2CppRGCTXDataType)3, 18371 },
	{ (Il2CppRGCTXDataType)3, 21568 },
	{ (Il2CppRGCTXDataType)2, 3808 },
	{ (Il2CppRGCTXDataType)3, 18409 },
	{ (Il2CppRGCTXDataType)3, 10312 },
	{ (Il2CppRGCTXDataType)2, 2746 },
	{ (Il2CppRGCTXDataType)2, 3817 },
	{ (Il2CppRGCTXDataType)3, 18574 },
	{ (Il2CppRGCTXDataType)3, 10918 },
	{ (Il2CppRGCTXDataType)3, 5069 },
	{ (Il2CppRGCTXDataType)3, 7186 },
	{ (Il2CppRGCTXDataType)3, 7185 },
	{ (Il2CppRGCTXDataType)3, 5068 },
	{ (Il2CppRGCTXDataType)3, 10313 },
	{ (Il2CppRGCTXDataType)2, 3800 },
	{ (Il2CppRGCTXDataType)3, 18373 },
	{ (Il2CppRGCTXDataType)3, 21570 },
	{ (Il2CppRGCTXDataType)2, 3816 },
	{ (Il2CppRGCTXDataType)3, 18573 },
	{ (Il2CppRGCTXDataType)3, 7175 },
	{ (Il2CppRGCTXDataType)3, 7176 },
	{ (Il2CppRGCTXDataType)3, 7190 },
	{ (Il2CppRGCTXDataType)3, 146 },
	{ (Il2CppRGCTXDataType)3, 145 },
	{ (Il2CppRGCTXDataType)2, 2094 },
	{ (Il2CppRGCTXDataType)2, 2199 },
	{ (Il2CppRGCTXDataType)3, 7177 },
	{ (Il2CppRGCTXDataType)2, 2116 },
	{ (Il2CppRGCTXDataType)2, 2225 },
	{ (Il2CppRGCTXDataType)3, 148 },
	{ (Il2CppRGCTXDataType)2, 861 },
	{ (Il2CppRGCTXDataType)2, 953 },
	{ (Il2CppRGCTXDataType)3, 144 },
	{ (Il2CppRGCTXDataType)3, 147 },
	{ (Il2CppRGCTXDataType)3, 89 },
	{ (Il2CppRGCTXDataType)2, 3520 },
	{ (Il2CppRGCTXDataType)3, 16721 },
	{ (Il2CppRGCTXDataType)2, 2090 },
	{ (Il2CppRGCTXDataType)2, 2196 },
	{ (Il2CppRGCTXDataType)3, 16722 },
	{ (Il2CppRGCTXDataType)3, 91 },
	{ (Il2CppRGCTXDataType)2, 663 },
	{ (Il2CppRGCTXDataType)2, 945 },
	{ (Il2CppRGCTXDataType)3, 88 },
	{ (Il2CppRGCTXDataType)3, 90 },
	{ (Il2CppRGCTXDataType)3, 174 },
	{ (Il2CppRGCTXDataType)3, 175 },
	{ (Il2CppRGCTXDataType)2, 3522 },
	{ (Il2CppRGCTXDataType)3, 16723 },
	{ (Il2CppRGCTXDataType)2, 2097 },
	{ (Il2CppRGCTXDataType)2, 2201 },
	{ (Il2CppRGCTXDataType)3, 16724 },
	{ (Il2CppRGCTXDataType)3, 177 },
	{ (Il2CppRGCTXDataType)2, 668 },
	{ (Il2CppRGCTXDataType)2, 956 },
	{ (Il2CppRGCTXDataType)3, 173 },
	{ (Il2CppRGCTXDataType)3, 176 },
	{ (Il2CppRGCTXDataType)3, 131 },
	{ (Il2CppRGCTXDataType)2, 665 },
	{ (Il2CppRGCTXDataType)3, 133 },
	{ (Il2CppRGCTXDataType)2, 951 },
	{ (Il2CppRGCTXDataType)3, 130 },
	{ (Il2CppRGCTXDataType)3, 132 },
	{ (Il2CppRGCTXDataType)2, 4357 },
	{ (Il2CppRGCTXDataType)2, 1518 },
	{ (Il2CppRGCTXDataType)3, 6506 },
	{ (Il2CppRGCTXDataType)2, 1609 },
	{ (Il2CppRGCTXDataType)2, 4424 },
	{ (Il2CppRGCTXDataType)3, 16718 },
	{ (Il2CppRGCTXDataType)3, 16719 },
	{ (Il2CppRGCTXDataType)2, 2291 },
	{ (Il2CppRGCTXDataType)3, 16720 },
	{ (Il2CppRGCTXDataType)2, 601 },
	{ (Il2CppRGCTXDataType)2, 948 },
	{ (Il2CppRGCTXDataType)3, 115 },
	{ (Il2CppRGCTXDataType)3, 16023 },
	{ (Il2CppRGCTXDataType)2, 3402 },
	{ (Il2CppRGCTXDataType)3, 16036 },
	{ (Il2CppRGCTXDataType)2, 1235 },
	{ (Il2CppRGCTXDataType)3, 1864 },
	{ (Il2CppRGCTXDataType)3, 16029 },
	{ (Il2CppRGCTXDataType)3, 5033 },
	{ (Il2CppRGCTXDataType)2, 702 },
	{ (Il2CppRGCTXDataType)3, 16024 },
	{ (Il2CppRGCTXDataType)2, 3398 },
	{ (Il2CppRGCTXDataType)3, 1976 },
	{ (Il2CppRGCTXDataType)2, 1271 },
	{ (Il2CppRGCTXDataType)2, 1547 },
	{ (Il2CppRGCTXDataType)3, 5039 },
	{ (Il2CppRGCTXDataType)3, 16025 },
	{ (Il2CppRGCTXDataType)3, 5028 },
	{ (Il2CppRGCTXDataType)3, 5029 },
	{ (Il2CppRGCTXDataType)3, 5027 },
	{ (Il2CppRGCTXDataType)3, 5030 },
	{ (Il2CppRGCTXDataType)2, 1543 },
	{ (Il2CppRGCTXDataType)2, 4400 },
	{ (Il2CppRGCTXDataType)3, 7173 },
	{ (Il2CppRGCTXDataType)3, 5032 },
	{ (Il2CppRGCTXDataType)2, 2009 },
	{ (Il2CppRGCTXDataType)3, 5031 },
	{ (Il2CppRGCTXDataType)2, 1929 },
	{ (Il2CppRGCTXDataType)2, 4353 },
	{ (Il2CppRGCTXDataType)2, 2066 },
	{ (Il2CppRGCTXDataType)2, 2176 },
	{ (Il2CppRGCTXDataType)3, 6487 },
	{ (Il2CppRGCTXDataType)2, 1602 },
	{ (Il2CppRGCTXDataType)3, 7858 },
	{ (Il2CppRGCTXDataType)3, 7859 },
	{ (Il2CppRGCTXDataType)3, 7864 },
	{ (Il2CppRGCTXDataType)2, 2285 },
	{ (Il2CppRGCTXDataType)3, 7861 },
	{ (Il2CppRGCTXDataType)3, 22432 },
	{ (Il2CppRGCTXDataType)2, 1553 },
	{ (Il2CppRGCTXDataType)3, 5056 },
	{ (Il2CppRGCTXDataType)1, 2002 },
	{ (Il2CppRGCTXDataType)2, 4363 },
	{ (Il2CppRGCTXDataType)3, 7860 },
	{ (Il2CppRGCTXDataType)1, 4363 },
	{ (Il2CppRGCTXDataType)1, 2285 },
	{ (Il2CppRGCTXDataType)2, 4422 },
	{ (Il2CppRGCTXDataType)2, 4363 },
	{ (Il2CppRGCTXDataType)3, 16061 },
	{ (Il2CppRGCTXDataType)3, 7865 },
	{ (Il2CppRGCTXDataType)3, 7866 },
	{ (Il2CppRGCTXDataType)3, 7863 },
	{ (Il2CppRGCTXDataType)3, 7862 },
	{ (Il2CppRGCTXDataType)2, 532 },
	{ (Il2CppRGCTXDataType)3, 5070 },
	{ (Il2CppRGCTXDataType)2, 680 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	174,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	56,
	s_rgctxIndices,
	265,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
