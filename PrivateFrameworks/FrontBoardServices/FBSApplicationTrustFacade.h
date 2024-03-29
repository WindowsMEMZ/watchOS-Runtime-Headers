//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSApplicationTrustFacade_h
#define FBSApplicationTrustFacade_h
@import Foundation;

#include "FBSApplicationTrustDataProvider-Protocol.h"
#include "FBSSignatureValidationService.h"

@class NSString;

@interface FBSApplicationTrustFacade : NSObject<FBSApplicationTrustDataProvider> {
  /* instance variables */
  NSObject<FBSApplicationTrustDataProvider> *_legacyProvider;
  NSObject<FBSApplicationTrustDataProvider> *_modernProvider;
  FBSSignatureValidationService *_authoritativeProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (unsigned long long)trustStateForApplication:(id)application;
@end

#endif /* FBSApplicationTrustFacade_h */
