.assembly texte {}
.method public static void Main() cil managed
{
	.entrypoint
	.maxstack 10
	.locals init (int32, int32, int32)
 call string class [mscorlib]System.Console::ReadLine()
 call int32 int32::Parse(string)
 stloc	0
 call string class [mscorlib]System.Console::ReadLine()
 call int32 int32::Parse(string)
 stloc	1
ldc.i4	0
stloc	2
ldloc	0
ldloc	1
cgt
brfalse	L0
ldloc	0
ldloc	2
cgt
brfalse	L1
ldloc	2
call void class [mscorlib]System.Console::WriteLine(int32)
L1:
br	L2
L0:
ldloc	1
call void class [mscorlib]System.Console::WriteLine(int32)
L2:
	ret
}
