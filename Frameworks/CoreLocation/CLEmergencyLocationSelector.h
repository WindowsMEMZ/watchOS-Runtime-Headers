//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CLEmergencyLocationSelector_h
#define CLEmergencyLocationSelector_h
@import Foundation;

#include "CLLocationManagerDelegate-Protocol.h"

@class NSString;

@interface CLEmergencyLocationSelector : NSObject<CLLocationManagerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfig:(id)config bundle:(id)bundle delegate:(id)delegate queue:(id)queue;
- (void)dealloc;
- (void)stopSession;
- (void)locationManager:(id)manager didUpdateLocations:(id)locations;
@end

#endif /* CLEmergencyLocationSelector_h */
