//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFMediaAccessControlDescriptor_h
#define HFMediaAccessControlDescriptor_h
@import Foundation;

#include "NAIdentifiable-Protocol.h"

@class NSString;

@interface HFMediaAccessControlDescriptor : NSObject<NAIdentifiable>

@property (readonly, nonatomic) unsigned long long access;
@property (readonly, nonatomic) BOOL accessSupportsPassword;
@property (readonly, nonatomic) BOOL accessRequiresPassword;
@property (readonly, copy, nonatomic) NSString *accessPassword;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)defaultAccessControl;
+ (id)descriptorWithAccess:(unsigned long long)access requiresPassword:(BOOL)password password:(id)password;
+ (BOOL)accessClassificationSupportsPassword:(unsigned long long)password;
+ (id)na_identity;

/* instance methods */
- (id)initWithAccess:(unsigned long long)access requiresPassword:(BOOL)password password:(id)password;
- (id)init;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HFMediaAccessControlDescriptor_h */
