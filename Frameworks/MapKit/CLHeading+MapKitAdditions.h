//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef CLHeading_MapKitAdditions_h
#define CLHeading_MapKitAdditions_h
@import Foundation;

@interface CLHeading (MapKitAdditions)
/* instance methods */
- (id)initWithHeading:(double)heading accuracy:(double)accuracy;
- (double)heading;
- (BOOL)hasGeomagneticVector;
- (id)compactDescription;
@end

#endif /* CLHeading_MapKitAdditions_h */
