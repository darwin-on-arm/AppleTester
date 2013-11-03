/*
 * KextSample
 */

#include "AppleTester.h"

#define super IOService
OSDefineMetaClassAndStructors(AppleTester, IOService);

IOService* AppleTester::probe(IOService *provider, SInt32 *score)
{
	IOLog("%s\n", __PRETTY_FUNCTION__);
	panic("We are hanging here...\n");
	return NULL;
}
