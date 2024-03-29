//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef _FCActivity_h
#define _FCActivity_h
@import Foundation;

#include "FCActivityDescribing-Protocol.h"

@class DNDMode, NSArray, NSDate, NSString, NSURL, NSUUID;

@interface _FCActivity : NSObject<FCActivityDescribing>

@property (copy) DNDMode *dndMode;
@property (copy, nonatomic) NSDate *activityCreationDate;
@property (copy, nonatomic) NSArray *activityLifetimeDescriptions;
@property (copy, nonatomic) NSString *activityLifetimesAlternativeDescription;
@property (readonly, nonatomic) BOOL supportsDiscreteLifetimes;
@property (readonly, nonatomic) BOOL drivingActivity;
@property (readonly, nonatomic) BOOL sleepActivity;
@property (readonly, copy, nonatomic) NSString *activityIdentifier;
@property (readonly, copy, nonatomic) NSUUID *activityUniqueIdentifier;
@property (readonly, nonatomic) long long activitySemanticType;
@property (readonly, copy, nonatomic) NSString *activityDisplayName;
@property (readonly, copy, nonatomic) NSString *activitySymbolImageName;
@property (readonly, copy, nonatomic) NSString *activityColorName;
@property (readonly, copy, nonatomic) NSString *activityDetailText;
@property (readonly, copy, nonatomic) NSURL *activitySettingsURL;
@property (readonly, copy, nonatomic) NSURL *activitySetupURL;
@property (readonly, nonatomic) BOOL placeholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMode:(id)mode;
- (BOOL)isDrivingActivity;
- (BOOL)isSleepActivity;
- (void)_setActivityCreationDate:(id)date;
- (void)_setActivityLifetimeDescriptions:(id)descriptions;
- (void)_setActivityLifetimesAlternativeDescription:(id)description;
- (BOOL)_updateMode:(id)mode;
- (BOOL)isPlaceholder;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)_dndMode;
- (void)_setDndMode:(id)mode;
@end

#endif /* _FCActivity_h */
