//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef VGVirtualGarageObserver_Protocol_h
#define VGVirtualGarageObserver_Protocol_h
@import Foundation;

@protocol VGVirtualGarageObserver 
/* instance methods */
- (void)virtualGarageDidUpdate:(id)update;
@optional
/* instance methods */
- (void)virtualGarage:(id)garage didUpdateUnpairedVehicles:(id)vehicles;
@end

#endif /* VGVirtualGarageObserver_Protocol_h */
