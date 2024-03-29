//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef ENSessionDefaultLogger_h
#define ENSessionDefaultLogger_h
@import Foundation;

#include "ENSDKLogging-Protocol.h"

@class NSString;

@interface ENSessionDefaultLogger : NSObject<ENSDKLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)evernoteLogInfoString:(id)string;
- (void)evernoteLogErrorString:(id)string;
@end

#endif /* ENSessionDefaultLogger_h */
