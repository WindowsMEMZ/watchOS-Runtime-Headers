//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef _HMFNetManagerWoWAssertion_h
#define _HMFNetManagerWoWAssertion_h
@import Foundation;

#include "HMFObject.h"
#include "HMFWiFiManager.h"

@interface _HMFNetManagerWoWAssertion : HMFObject

@property (readonly, nonatomic) HMFWiFiManager *manager;

/* instance methods */
- (id)initWithWifiManager:(id)manager;
- (void)dealloc;
@end

#endif /* _HMFNetManagerWoWAssertion_h */
