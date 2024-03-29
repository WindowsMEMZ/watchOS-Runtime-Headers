//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFLocalCompletionMatch_h
#define SFLocalCompletionMatch_h
@import Foundation;

#include "WBSURLCompletionMatch.h"

@class NSString;

@interface SFLocalCompletionMatch : WBSURLCompletionMatch

@property (readonly, copy, nonatomic) NSString *originalURLString;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *userVisibleURLString;
@property (readonly, nonatomic) long long matchLocation;

/* instance methods */
- (id)initWithCompletionMatch:(id)match;
@end

#endif /* SFLocalCompletionMatch_h */
