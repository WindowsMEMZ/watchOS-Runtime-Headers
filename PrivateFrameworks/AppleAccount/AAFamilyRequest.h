//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AAFamilyRequest_h
#define AAFamilyRequest_h
@import Foundation;

#include "AARequest.h"
#include "AAGrandSlamSigner.h"

@class ACAccount;

@interface AAFamilyRequest : AARequest {
  /* instance variables */
  ACAccount *_appleAccount;
  AAGrandSlamSigner *_grandSlamSigner;
  AAGrandSlamSigner *_familyGrandSlamSigner;
}

@property (readonly, nonatomic) BOOL isUserInitiated;

/* instance methods */
- (id)initWithAppleAccount:(id)account grandSlamAccount:(id)account accountStore:(id)store;
- (id)initWithGrandSlamAccount:(id)account accountStore:(id)store;
- (id)initWithGrandSlamSigner:(id)signer;
- (id)_familyGrandSlamSigner;
- (id)urlRequest;
@end

#endif /* AAFamilyRequest_h */
