//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSHTransparentFlipbookAttributeHandler_h
#define BLSHTransparentFlipbookAttributeHandler_h
@import Foundation;

#include "BLSHLocalCountingAssertionAttributeHandler.h"
#include "BLSHTransparentFlipbookProvider-Protocol.h"

@interface BLSHTransparentFlipbookAttributeHandler : BLSHLocalCountingAssertionAttributeHandler {
  /* instance variables */
  NSObject<BLSHTransparentFlipbookProvider> *_provider;
}

/* class methods */
+ (id)registerHandlerForService:(id)service provider:(id)provider;
+ (id)attributeClasses;
+ (Class)attributeBaseClass;

/* instance methods */
- (id)initForService:(id)service provider:(id)provider;
- (void)activateWithFirstEntry:(id)entry;
- (void)deactivateWithFinalEntry:(id)entry;
@end

#endif /* BLSHTransparentFlipbookAttributeHandler_h */
