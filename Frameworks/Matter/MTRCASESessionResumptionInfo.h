//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRCASESessionResumptionInfo_h
#define MTRCASESessionResumptionInfo_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData, NSNumber, NSSet;

@interface MTRCASESessionResumptionInfo : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSNumber *nodeID;
@property (retain, nonatomic) NSData *resumptionID;
@property (retain, nonatomic) NSData *sharedSecret;
@property (retain, nonatomic) NSSet *caseAuthenticatedTags;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* MTRCASESessionResumptionInfo_h */
