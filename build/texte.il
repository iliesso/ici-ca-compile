.assembly texte {}
.method public static void Main() cil managed
{
	.entrypoint
	.maxstack 10
	.locals init (int32, int32)
 call string class [mscorlib]System.Console::ReadLine()
 call int32 int32::Parse(string)
 stloc	0
 call string class [mscorlib]System.Console::ReadLine()
 call int32 int32::Parse(string)
 stloc	1
br	L0
L0:
ldloc	0
ldloc	1
cgt
brfalse	L1
ldloc	0
ldc.i4	1
 sub
stloc	0
br	L0
L1:
ldloc	0
call void class [mscorlib]System.Console::WriteLine(int32)
	ret
}
