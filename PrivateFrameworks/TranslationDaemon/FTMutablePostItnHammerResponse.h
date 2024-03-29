//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutablePostItnHammerResponse_h
#define FTMutablePostItnHammerResponse_h
@import Foundation;

#include "FTPostItnHammerResponse.h"

@class NSArray, NSString;

@interface FTMutablePostItnHammerResponse : FTPostItnHammerResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *language;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSArray *tokens;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutablePostItnHammerResponse_h */
