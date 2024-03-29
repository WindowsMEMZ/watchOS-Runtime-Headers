//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSMachServiceAliases_h
#define BSMachServiceAliases_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface BSMachServiceAliases : NSObject<NSCopying, NSMutableCopying> {
  /* instance variables */
  NSMutableDictionary *_lock_aliases;
  NSString *_lock_encoded;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  BOOL _mutable;
}

@property (readonly, copy, nonatomic) NSDictionary *environmentRepresentation;

/* class methods */
+ (id)environmentAliases;

/* instance methods */
- (id)init;
- (id)resolveMachService:(id)service;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* BSMachServiceAliases_h */
