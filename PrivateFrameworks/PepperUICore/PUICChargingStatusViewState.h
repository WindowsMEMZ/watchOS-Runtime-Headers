//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICChargingStatusViewState_h
#define PUICChargingStatusViewState_h
@import Foundation;

#include "PUICChargingStatusViewState-Protocol.h"
#include "_PUICChargingIndicatorView.h"
#include "_PUICChargingIndicatorViewDataSource-Protocol.h"

@class NSString;

@interface PUICChargingStatusViewState : NSObject<_PUICChargingIndicatorViewDataSource, PUICChargingStatusViewState> {
  /* instance variables */
  unsigned long long _intendedUI;
  _PUICChargingIndicatorView *_chargingIndicator;
}

@property (nonatomic) BOOL showChargingPercentage;
@property (nonatomic) float batteryChargedLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL iconShadow;
@property (nonatomic) BOOL statusViewStateActive;

/* instance methods */
- (id)init;
- (id)initForUIType:(unsigned long long)uitype;
- (id)statusViewStateName;
- (id)statusViewIndicatorView;
- (BOOL)shouldShowChargingPercentage;
- (float)batteryLevel;
- (BOOL)statusViewIsStateActive;
- (BOOL)isShowingChargingPercentage;
@end

#endif /* PUICChargingStatusViewState_h */
