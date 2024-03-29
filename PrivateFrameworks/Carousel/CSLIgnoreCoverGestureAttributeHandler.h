//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLIgnoreCoverGestureAttributeHandler_h
#define CSLIgnoreCoverGestureAttributeHandler_h
@import Foundation;

#include "BLSHLocalCountingAssertionAttributeHandler.h"

@interface CSLIgnoreCoverGestureAttributeHandler : BLSHLocalCountingAssertionAttributeHandler
/* class methods */
+ (id)attributeClasses;
+ (Class)attributeBaseClass;

/* instance methods */
- (void)activateWithFirstEntry:(id)entry;
- (void)deactivateWithFinalEntry:(id)entry;
@end

#endif /* CSLIgnoreCoverGestureAttributeHandler_h */
