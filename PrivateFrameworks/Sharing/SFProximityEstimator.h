//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFProximityEstimator_h
#define SFProximityEstimator_h
@import Foundation;

@interface SFProximityEstimator : NSObject {
  /* instance variables */
  int _rssiEnter;
  int _rssiExit;
  int _rssiImmediate;
  int _rssiNear;
  int _rssiFar;
}

@property (readonly, nonatomic) int estimatedRSSI;

/* class methods */
+ (id)proximityEstimatorWithProximityInfo:(id)info;

/* instance methods */
- (id)initWithProximityInfo:(id)info;
- (id)description;
- (id)descriptionParams;
- (unsigned int)updateWithSFBLEDevice:(id)sfbledevice;
- (int)_estimateRSSIForSFBLEDevice:(id)sfbledevice;
@end

#endif /* SFProximityEstimator_h */
