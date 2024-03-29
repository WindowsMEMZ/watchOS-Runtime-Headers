//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFGetHomeAccessoryStateAction_h
#define WFGetHomeAccessoryStateAction_h
@import Foundation;

#include "WFAction.h"
#include "WFHomeManagerEventObserver-Protocol.h"

@class NSString;

@interface WFGetHomeAccessoryStateAction : WFAction<WFHomeManagerEventObserver>

@property (readonly, nonatomic) NSString *homeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)homeAccessoryStateActionWithHome:(id)home;

/* instance methods */
- (void)initializeParameters;
- (void)dealloc;
- (void)runAsynchronouslyWithInput:(id)input;
- (id)localizedName;
- (id)localizedDescriptionSummary;
- (id)localizedAttribution;
- (BOOL)setParameterState:(id)state forKey:(id)key;
- (id)outputContentClasses;
- (id)outputMeasurementUnitType;
- (id)localizedDefaultOutputName;
- (void)homeManagerDidUpdateHomes:(id)homes;
- (id)home;
- (id)homeName;
- (id)characteristic;
- (void)updateCharacteristicsEnumeration;
@end

#endif /* WFGetHomeAccessoryStateAction_h */
