<module name="uuid" type="staticlibrary">
	<include base="ReactOS">include/reactos/wine</include>
	<define name="_DISABLE_TIDENTS" />
	<define name="__USE_W32API" />
	<file>uuid.c</file>
</module>
