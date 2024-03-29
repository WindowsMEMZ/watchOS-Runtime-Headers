//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPCoreMLFeatureProviderGestureVideo_h
#define VCPCoreMLFeatureProviderGestureVideo_h
@import Foundation;

#include "MLFeatureProvider-Protocol.h"

@class NSMutableDictionary, NSSet;

@interface VCPCoreMLFeatureProviderGestureVideo : NSObject<MLFeatureProvider> {
  /* instance variables */
  NSMutableDictionary *_observationsPersons;
  BOOL _ready;
  int _channels;
  int _currentGroupID;
}

@property BOOL lrFlip;
@property BOOL scaleUpSmallHandGroup;
@property int rotationInDegrees;
@property (readonly, nonatomic) NSSet *featureNames;

/* instance methods */
- (id)init;
- (void)addLeftHand:(id)hand andRightHand:(id)hand;
- (void)setCurrentGroupID:(int)id;
- (id)existingGroupIDs;
- (BOOL)ready;
- (void)reset;
- (id)observationsForCurrentGroup;
- (id)featureValueForName:(id)name;
@end

#endif /* VCPCoreMLFeatureProviderGestureVideo_h */
