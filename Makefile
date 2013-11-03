#
# Sample kernel extension makefile.
#
KEXT_VERSION			= 1.0.0d1
KEXT_BUNDLE_FULL		= com.apple.driver.AppleTester

include KextMakefiles/KextMakefile.preamble

SOURCES	 		= AppleTester.cpp KextInfo.c
KEXT_BUNDLE 	= AppleTester
INFO_PLIST		= AppleTester-Info.plist

include KextMakefiles/KextMakefile.postamble
