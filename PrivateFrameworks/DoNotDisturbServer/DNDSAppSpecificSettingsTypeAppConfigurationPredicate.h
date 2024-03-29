//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSAppSpecificSettingsTypeAppConfigurationPredicate_h
#define DNDSAppSpecificSettingsTypeAppConfigurationPredicate_h
@import Foundation;

#include "DNDSAppSpecificSettingsType-Protocol.h"

@class NSString;

@interface DNDSAppSpecificSettingsTypeAppConfigurationPredicate : NSObject<DNDSAppSpecificSettingsType>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)appSpecificSettingsEntity;
+ (Class)appSpecificSettingsClass;
+ (id)appSpecificSettingsForManagedObject:(id)object;
+ (void)completeManagedObject:(inout id)object forAppSpecificSettings:(id)settings;
+ (Class)appSpecificSettingsEncodedClass;
+ (id)appSpecificSettingsFromDictionaryRepresentation:(id)representation;
+ (id)dictionaryRepresentationForAppSpecificSettings:(id)settings;
@end

#endif /* DNDSAppSpecificSettingsTypeAppConfigurationPredicate_h */
