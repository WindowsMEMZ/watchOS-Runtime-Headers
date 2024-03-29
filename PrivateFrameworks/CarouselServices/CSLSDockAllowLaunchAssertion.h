//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSDockAllowLaunchAssertion_h
#define CSLSDockAllowLaunchAssertion_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface CSLSDockAllowLaunchAssertion : NSObject<NSSecureCoding, BSDescriptionProviding, NSCopying> {
  /* instance variables */
  struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } _lock;
}

@property (readonly, nonatomic) BOOL taken;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithBundleID:(id)id reason:(id)reason;
- (void)dealloc;
- (void)_withLock:(id /* block */)lock;
- (void)take;
- (void)invalidate;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)_buildDescriptionWithBuilder:(id)builder;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CSLSDockAllowLaunchAssertion_h */
