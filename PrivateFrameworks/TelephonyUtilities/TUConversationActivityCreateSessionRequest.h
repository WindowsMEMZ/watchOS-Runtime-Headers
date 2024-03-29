//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUConversationActivityCreateSessionRequest_h
#define TUConversationActivityCreateSessionRequest_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TUConversationActivityMetadata.h"

@class CKShare, NSData, NSString, NSUUID;

@interface TUConversationActivityCreateSessionRequest : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSString *activityIdentifier;
@property (copy, nonatomic) NSData *applicationContext;
@property (retain, nonatomic) TUConversationActivityMetadata *metadata;
@property (copy, nonatomic) CKShare *share;
@property (copy, nonatomic) NSString *staticIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithMetadata:(id)metadata applicationContext:(id)context activityIdentifier:(id)identifier uuid:(id)uuid;
- (id)initWithMetadata:(id)metadata applicationContext:(id)context activityIdentifier:(id)identifier uuid:(id)uuid staticIdentifier:(id)identifier;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToConversationActivitySessionCreationRequest:(id)request;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* TUConversationActivityCreateSessionRequest_h */
