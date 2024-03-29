//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKObjectAuthorizationPromptSessionContext_h
#define HKObjectAuthorizationPromptSessionContext_h
@import Foundation;

#include "HKObjectAuthorizationPromptSessionMetadata.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary;

@interface HKObjectAuthorizationPromptSessionContext : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSDictionary *samplesRequiringAuthorization;
@property (readonly, copy, nonatomic) HKObjectAuthorizationPromptSessionMetadata *metadata;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSamplesRequiringAuthorization:(id)authorization metadata:(id)metadata;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HKObjectAuthorizationPromptSessionContext_h */
