//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CIEnhancementHistogram_h
#define CIEnhancementHistogram_h
@import Foundation;

@interface CIEnhancementHistogram : NSObject {
  /* instance variables */
  double hist[256];
}

/* class methods */
+ (id)histogramFromData:(const double *)data;
+ (id)histogramFromFloatData:(const float *)data;
+ (id)histogramFromDoubleData:(const double *)data;

/* instance methods */
- (const double *)values;
@end

#endif /* CIEnhancementHistogram_h */
