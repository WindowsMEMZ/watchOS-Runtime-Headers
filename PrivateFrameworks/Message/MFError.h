//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFError_h
#define MFError_h
@import Foundation;

#include "NSError.h"

@class NSMutableDictionary;

@interface MFError : NSError {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _moreUserInfoLock;
  NSMutableDictionary *_moreUserInfo;
}

/* class methods */
+ (id)errorWithDomain:(id)domain code:(long long)code localizedDescription:(id)description;
+ (id)errorWithDomain:(id)domain code:(long long)code localizedDescription:(id)description title:(id)title userInfo:(id)info;
+ (id)errorWithException:(id)exception;

/* instance methods */
- (id)initWithDomain:(id)domain code:(long long)code userInfo:(id)info;
- (void)setUserInfoObject:(id)object forKey:(id)key;
- (id)userInfo;
- (id)localizedDescription;
- (id)recoveryAttempter;
- (id)mf_moreInfo;
- (id)mf_shortDescription;
- (void)setLocalizedDescription:(id)description;
- (void)setMoreInfo:(id)info;
- (void)setShortDescription:(id)description;
- (void)useGenericDescription:(id)description;
@end

#endif /* MFError_h */
