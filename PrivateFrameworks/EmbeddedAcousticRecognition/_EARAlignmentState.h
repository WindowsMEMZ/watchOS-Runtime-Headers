//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.7.1.0.0
//
#ifndef _EARAlignmentState_h
#define _EARAlignmentState_h
@import Foundation;

#include "NSCopying-Protocol.h"

@interface _EARAlignmentState : NSObject<NSCopying>

@property (nonatomic) long long numberOfInsertions;
@property (nonatomic) long long numberOfDeletions;
@property (nonatomic) long long numberOfSubstitutions;
@property (nonatomic) long long totalCost;

/* instance methods */
- (void)incrementInsertions;
- (void)incrementDeletions;
- (void)incrementSubstitutions;
- (void)incrementCost;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* _EARAlignmentState_h */
