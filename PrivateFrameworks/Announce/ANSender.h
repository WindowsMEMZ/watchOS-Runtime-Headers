//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 217.20.3.0.0
//
#ifndef ANSender_h
#define ANSender_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface ANSender : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long type;

/* class methods */
+ (id)senderWithID:(id)id type:(unsigned long long)type;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithID:(id)id type:(unsigned long long)type;
- (id)stringForSenderIdentifierType:(unsigned long long)type;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* ANSender_h */
