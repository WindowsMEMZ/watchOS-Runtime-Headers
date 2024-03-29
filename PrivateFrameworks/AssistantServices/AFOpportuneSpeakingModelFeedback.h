//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFOpportuneSpeakingModelFeedback_h
#define AFOpportuneSpeakingModelFeedback_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDate, NSDictionary;

@interface AFOpportuneSpeakingModelFeedback : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSDate *lastNegativeFeedback;
@property (retain, nonatomic) NSDictionary *negativeFeedbackByContact;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* AFOpportuneSpeakingModelFeedback_h */
