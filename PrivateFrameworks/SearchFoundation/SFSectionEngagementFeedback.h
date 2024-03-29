//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFSectionEngagementFeedback_h
#define SFSectionEngagementFeedback_h
@import Foundation;

#include "SFFeedback.h"
#include "NSCopying-Protocol.h"
#include "SFResultSection.h"

@interface SFSectionEngagementFeedback : SFFeedback<NSCopying>

@property (copy, nonatomic) SFResultSection *section;
@property (nonatomic) unsigned long long triggerEvent;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSection:(id)section triggerEvent:(unsigned long long)event;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* SFSectionEngagementFeedback_h */
