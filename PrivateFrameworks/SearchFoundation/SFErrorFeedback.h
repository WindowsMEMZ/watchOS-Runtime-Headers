//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFErrorFeedback_h
#define SFErrorFeedback_h
@import Foundation;

#include "SFFeedback.h"

@class NSError;

@interface SFErrorFeedback : SFFeedback

@property (retain, nonatomic) NSError *error;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithError:(id)error;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* SFErrorFeedback_h */
