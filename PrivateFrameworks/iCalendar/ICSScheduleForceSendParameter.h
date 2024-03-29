//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1158.1.1.0.0
//
#ifndef ICSScheduleForceSendParameter_h
#define ICSScheduleForceSendParameter_h
@import Foundation;

#include "ICSPredefinedValue.h"

@interface ICSScheduleForceSendParameter : ICSPredefinedValue
/* class methods */
+ (id)scheduleForceSendParameterFromICSString:(id)icsstring;
+ (id)scheduleForceSendParameterFromCode:(int)code;

/* instance methods */
- (void)_ICSStringWithOptions:(unsigned long long)options appendingToString:(id)string;
- (Class)classForCoder;
@end

#endif /* ICSScheduleForceSendParameter_h */
