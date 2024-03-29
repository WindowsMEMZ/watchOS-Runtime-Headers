//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUIAlertModelUpdate_h
#define WNUIAlertModelUpdate_h
@import Foundation;

#include "WNUIAlertModel.h"

@class NSDictionary, NSSet;

@interface WNUIAlertModelUpdate : NSObject

@property (readonly, nonatomic) NSDictionary *updatedActivationStates;
@property (readonly, nonatomic) WNUIAlertModel *previousModel;
@property (readonly, nonatomic) WNUIAlertModel *currentModel;
@property (readonly, nonatomic) NSSet *deactivatedIdentities;
@property (readonly, nonatomic) NSSet *activatedIdentities;
@property (readonly, nonatomic) NSSet *removedIdentities;

/* instance methods */
- (id)init;
- (id)initWithPreviousModel:(id)model currentModel:(id)model;
- (id)suppressedItems;
- (long long)activationResultForAlertIdentity:(id)identity;
- (BOOL)hasUpdates;
@end

#endif /* WNUIAlertModelUpdate_h */
