//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef HMFAssertion_h
#define HMFAssertion_h
@import Foundation;

#include "HMFObject.h"
#include "HMFLogging-Protocol.h"

@class NSString;

@interface HMFAssertion : HMFObject<HMFLogging>

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *uniqueDescription;
@property (readonly) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)bundleIdentifier;
+ (id)logCategory;

/* instance methods */
- (id)init;
- (id)initWithName:(id)name;
- (void)dealloc;
- (BOOL)acquire:(id *)acquire;
- (void)invalidate;
- (void)mark;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (BOOL)isValid;
@end

#endif /* HMFAssertion_h */
