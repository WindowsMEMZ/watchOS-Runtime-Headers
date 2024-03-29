//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 346.2.9.0.0
//
#ifndef SCROStealthBrailleDisplay_h
#define SCROStealthBrailleDisplay_h
@import Foundation;

#include "SCROBrailleDisplay.h"

@interface SCROStealthBrailleDisplay : SCROBrailleDisplay
/* class methods */
+ (id)displayWithDelegate:(id)delegate;
+ (id)displayWithIOElement:(id)ioelement driverIdentifier:(id)identifier delegate:(id)delegate;

/* instance methods */
- (void)_mainDisplayHandler:(id)handler;
@end

#endif /* SCROStealthBrailleDisplay_h */
