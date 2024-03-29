//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKGreenfieldAnalyticsModel_h
#define NTKGreenfieldAnalyticsModel_h
@import Foundation;

#include "NTKFace.h"

@class NSDictionary, NSError, NSSet, NSString;

@interface NTKGreenfieldAnalyticsModel : NSObject

@property (copy, nonatomic) NTKFace *watchFace;
@property (copy, nonatomic) NSSet *purchasedComplicationsItemIds;
@property (copy, nonatomic) NSSet *skippedComplicationsItemIds;
@property (copy, nonatomic) NSDictionary *complicationSlotToIdMapping;
@property (copy, nonatomic) NSString *addFaceFlowExitScreenName;
@property (copy, nonatomic) NSString *distributionMechanism;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *errorMessage;
@property (copy, nonatomic) NSString *scannedCodeIdentifier;

/* instance methods */
@end

#endif /* NTKGreenfieldAnalyticsModel_h */
