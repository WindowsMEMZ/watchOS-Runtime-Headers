//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INPauseTimerIntent_h
#define INPauseTimerIntent_h
@import Foundation;

#include "INIntent.h"
#include "INPauseTimerIntentExport-Protocol.h"
#include "INTimer.h"

@class NSNumber, NSString;

@interface INPauseTimerIntent : INIntent<INPauseTimerIntentExport>

@property (readonly, copy, nonatomic) INTimer *targetTimer;
@property (readonly, copy, nonatomic) NSNumber *pauseMultiple;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)_typedBackingStore;
- (id)_metadata;
- (void)_setMetadata:(id)metadata;
- (id)initWithTargetTimer:(id)timer pauseMultiple:(id)multiple;
- (id)_dictionaryRepresentation;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)options containingAppBundleId:(id)id;
- (id)domain;
- (void)setDomain:(id)domain;
- (id)verb;
- (void)setVerb:(id)verb;
- (id)parametersByName;
- (void)setParametersByName:(id)name;
@end

#endif /* INPauseTimerIntent_h */
