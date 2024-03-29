//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.19.1.2.1
//
#ifndef OPTTSMutableTextToSpeechRequestContext_h
#define OPTTSMutableTextToSpeechRequestContext_h
@import Foundation;

#include "OPTTSTextToSpeechRequestContext.h"

@class NSArray, NSString;

@interface OPTTSMutableTextToSpeechRequestContext : OPTTSTextToSpeechRequestContext

@property (copy, nonatomic) NSArray *context_info;
@property (copy, nonatomic) NSString *dialog_identifier;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* OPTTSMutableTextToSpeechRequestContext_h */
