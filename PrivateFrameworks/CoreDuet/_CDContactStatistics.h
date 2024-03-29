//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _CDContactStatistics_h
#define _CDContactStatistics_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDate;

@interface _CDContactStatistics : NSObject<NSSecureCoding>

@property unsigned long long outgoingRecipientCount;
@property unsigned long long incomingSenderCount;
@property unsigned long long incomingRecipientCount;
@property (retain) NSDate *lastOutgoingRecipientDate;
@property (retain) NSDate *lastIncomingSenderDate;
@property (retain) NSDate *lastIncomingRecipientDate;
@property (retain) NSDate *firstOutgoingRecipientDate;
@property (retain) NSDate *firstIncomingSenderDate;
@property (retain) NSDate *firstIncomingRecipientDate;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)firstDate:(id)date updatedWith:(id)with;
- (id)lastDate:(id)date updatedWith:(id)with;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)updateWithStatistics:(id)statistics;
- (unsigned long long)interactionCount;
- (id)firstInteractionDate;
- (id)lastInteractionDate;
- (double)interactionTimeInterval;
- (double)outgoingRecipientTimeInterval;
- (double)incomingSenderTimeInterval;
- (double)incomingRecipientTimeInterval;
@end

#endif /* _CDContactStatistics_h */
