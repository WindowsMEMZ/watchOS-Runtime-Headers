//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 685.60.2.0.0
//
#ifndef TKSmartCardTokenDriver_h
#define TKSmartCardTokenDriver_h
@import Foundation;

#include "TKTokenDriver.h"

@interface TKSmartCardTokenDriver : TKTokenDriver
/* instance methods */
- (id)createTokenWithSlot:(id)slot AID:(id)aid error:(id *)error;
@end

#endif /* TKSmartCardTokenDriver_h */
