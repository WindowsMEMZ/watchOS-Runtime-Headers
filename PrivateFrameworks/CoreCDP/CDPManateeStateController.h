//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 359.4.1.2.1
//
#ifndef CDPManateeStateController_h
#define CDPManateeStateController_h
@import Foundation;

#include "CDPContext.h"
#include "CDPDCircleProxy-Protocol.h"

@interface CDPManateeStateController : NSObject {
  /* instance variables */
  NSObject<CDPDCircleProxy> *_circleProxy;
  CDPContext *_context;
}

/* instance methods */
- (id)init;
- (id)initWithContext:(id)context;
- (id)initWithContext:(id)context circleProxy:(id)proxy;
- (BOOL)isManateeAvailable:(id *)available;
- (BOOL)_checkCircleStateWithError:(id *)error;
@end

#endif /* CDPManateeStateController_h */
