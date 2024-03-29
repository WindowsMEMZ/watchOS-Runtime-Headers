//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIIntervalController_Protocol_h
#define FIIntervalController_Protocol_h
@import Foundation;

@protocol FIIntervalController 

@property (readonly, nonatomic) BOOL intervalComplete;
@property (readonly, nonatomic) NSDate *intervalEndDate;
@property (readonly, nonatomic) BOOL allSlicesFinalized;

@end

#endif /* FIIntervalController_Protocol_h */
