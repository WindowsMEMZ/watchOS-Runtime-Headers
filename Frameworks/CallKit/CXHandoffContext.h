//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1228.300.81.0.0
//
#ifndef CXHandoffContext_h
#define CXHandoffContext_h
@import Foundation;

#include "CXHandle.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface CXHandoffContext : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *handoffIdentifier;
@property (nonatomic) BOOL outgoing;
@property (copy, nonatomic) CXHandle *remoteHandle;
@property (copy, nonatomic) NSDictionary *context;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithHandoffIdentifier:(id)identifier;
- (id)init;
- (id)description;
- (id)initWithDictionaryRepresentation:(id)representation;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToHandoffContext:(id)context;
- (unsigned long long)hash;
- (BOOL)isOutgoing;
@end

#endif /* CXHandoffContext_h */
