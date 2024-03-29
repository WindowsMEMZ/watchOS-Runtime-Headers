//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSBehaviorSettingsRecord_h
#define DNDSBehaviorSettingsRecord_h
@import Foundation;

#include "DNDSBackingStoreRecord-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSNumber, NSString;

@interface DNDSBehaviorSettingsRecord : NSObject<NSCopying, NSMutableCopying, DNDSBackingStoreRecord>

@property (readonly, copy, nonatomic) NSNumber *interruptionBehaviorSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_recordWithEncodedInfo:(id)info error:(id *)error;
+ (id)migrateDictionaryRepresentation:(id)representation fromVersionNumber:(unsigned long long)number toVersionNumber:(unsigned long long)number;
+ (id)newWithDictionaryRepresentation:(id)representation context:(id)context;

/* instance methods */
- (id)init;
- (id)_initWithRecord:(id)record;
- (id)_initWithInterruptionBehaviorSetting:(id)setting;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)dictionaryRepresentationWithContext:(id)context;
@end

#endif /* DNDSBehaviorSettingsRecord_h */
