//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef MLTransactionContext_h
#define MLTransactionContext_h
@import Foundation;

#include "ML3DatabasePrivacyContext.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface MLTransactionContext : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) unsigned long long priorityLevel;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) ML3DatabasePrivacyContext *privacyContext;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPrivacyContext:(id)context path:(id)path priorityLevel:(unsigned long long)level options:(unsigned long long)options;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* MLTransactionContext_h */
