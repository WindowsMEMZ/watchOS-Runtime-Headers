//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMResultInfoValueForKey_h
#define MCMResultInfoValueForKey_h
@import Foundation;

#include "MCMResultBase.h"

@interface MCMResultInfoValueForKey : MCMResultBase

@property (retain, nonatomic) id value;

/* instance methods */
- (id)initWithValue:(id)value;
- (BOOL)encodeResultOntoReply:(id)reply;
@end

#endif /* MCMResultInfoValueForKey_h */
