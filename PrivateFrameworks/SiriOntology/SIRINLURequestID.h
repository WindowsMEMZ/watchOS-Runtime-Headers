//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SIRINLURequestID_h
#define SIRINLURequestID_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString, NSUUID;

@interface SIRINLURequestID : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSString *idAsString;
@property (retain, nonatomic) NSUUID *nluRequestId;
@property (retain, nonatomic) NSString *connectionID;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdAsString:(id)string connectionID:(id)id;
- (id)initWithIdAsString:(id)string nluRequestId:(id)id connectionID:(id)id;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* SIRINLURequestID_h */
