//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSReceivedInvitation_h
#define IDSReceivedInvitation_h
@import Foundation;

#include "IDSInvitation.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface IDSReceivedInvitation : IDSInvitation<NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *fromID;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithfromID:(id)id state:(long long)state expirationDate:(id)date uniqueID:(id)id context:(id)context;
- (void)setSelfHandle:(id)handle;
- (void)setSenderMergeID:(id)id;
- (void)setState:(long long)state;
- (void)setContext:(id)context;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* IDSReceivedInvitation_h */
