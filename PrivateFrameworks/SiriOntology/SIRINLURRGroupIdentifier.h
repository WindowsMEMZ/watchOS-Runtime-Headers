//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SIRINLURRGroupIdentifier_h
#define SIRINLURRGroupIdentifier_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface SIRINLURRGroupIdentifier : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSString *groupId;
@property int seq;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithGroupId:(id)id seq:(int)seq;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* SIRINLURRGroupIdentifier_h */
