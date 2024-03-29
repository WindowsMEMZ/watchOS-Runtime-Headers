//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSHPseudoFlipbookAttributeHandler_h
#define BLSHPseudoFlipbookAttributeHandler_h
@import Foundation;

#include "BLSHLocalCountingAssertionAttributeHandler.h"
#include "BLSHPseudoFlipbookProvider-Protocol.h"

@interface BLSHPseudoFlipbookAttributeHandler : BLSHLocalCountingAssertionAttributeHandler {
  /* instance variables */
  NSObject<BLSHPseudoFlipbookProvider> *_provider;
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

#endif /* BLSHPseudoFlipbookAttributeHandler_h */
