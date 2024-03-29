//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSIdentityAndRecordInfoProvider_h
#define RBSIdentityAndRecordInfoProvider_h
@import Foundation;

#include "RBSWrappedLSInfoProvider-Protocol.h"

@class NSString;

@interface RBSIdentityAndRecordInfoProvider : NSObject<RBSWrappedLSInfoProvider> {
  /* instance variables */
  NSString *_personaString;
  NSString *_bundleID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_providerWithIdentity:(id)identity record:(id)record;

/* instance methods */
- (id)_initWithIdentity:(id)identity record:(id)record;
- (id)fetchWrappedInfoWithError:(out id *)error;
@end

#endif /* RBSIdentityAndRecordInfoProvider_h */
