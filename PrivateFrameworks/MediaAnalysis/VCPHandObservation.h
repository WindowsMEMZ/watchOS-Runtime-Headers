//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPHandObservation_h
#define VCPHandObservation_h
@import Foundation;

@class NSArray;

@interface VCPHandObservation : NSObject

@property (retain, nonatomic) NSArray *keypoints;
@property (nonatomic) int chirality;
@property (nonatomic) int handID;
@property (nonatomic) int groupID;
@property (nonatomic) int revision;
@property (nonatomic) int gestureType;
@property (nonatomic) float gestureConfidence;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) unsigned long long mitigationType;
@property (nonatomic) unsigned long long fingerOpenness;

/* class methods */
+ (id)twoHandGestureTypes;

/* instance methods */
- (id)init;
@end

#endif /* VCPHandObservation_h */
