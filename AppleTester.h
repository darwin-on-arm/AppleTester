/*
 * KextSample
 */

#ifndef _appletester_h_
#define _appletester_h_

#include <IOKit/IOService.h>
#include <IOKit/IOLib.h>

class AppleTester : public IOService {
	OSDeclareDefaultStructors(AppleTester);
public:
	virtual IOService* probe(IOService *provider, SInt32 *score);
};

#endif