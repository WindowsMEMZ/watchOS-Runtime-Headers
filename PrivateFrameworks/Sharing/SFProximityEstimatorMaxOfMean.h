//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFProximityEstimatorMaxOfMean_h
#define SFProximityEstimatorMaxOfMean_h
@import Foundation;

#include "SFProximityEstimator.h"

@interface SFProximityEstimatorMaxOfMean : SFProximityEstimator {
  /* instance variables */
  char * _channelNumberArray;
  char * _rssiArray;
  unsigned int _rssiCount;
  unsigned int _rssiIndex;
  unsigned int _rssiMinCount;
}

/* instance methods */
- (id)initWithProximityInfo:(id)info;
- (void)dealloc;
- (id)description;
- (int)_estimateRSSIForSFBLEDevice:(id)sfbledevice;
@end

#endif /* SFProximityEstimatorMaxOfMean_h */
