//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4416.36.0.0.0
//
#ifndef SBSRelativeDisplayArrangement_h
#define SBSRelativeDisplayArrangement_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface SBSRelativeDisplayArrangement : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *displayIdentifier;
@property (readonly, nonatomic) unsigned int edge;
@property (readonly, nonatomic) double offset;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDisplayIdentifier:(id)identifier edge:(unsigned int)edge offset:(double)offset;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* SBSRelativeDisplayArrangement_h */
