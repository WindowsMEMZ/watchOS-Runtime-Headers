//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMImmutableSettingsProtoSettingChangeEvent_h
#define HMImmutableSettingsProtoSettingChangeEvent_h
@import Foundation;

#include "PBCodable.h"
#include "HMImmutableSettingsProtoAvailableLanguageListEvent.h"
#include "HMImmutableSettingsProtoBoolSettingEvent.h"
#include "HMImmutableSettingsProtoBoundedIntegerSettingEvent.h"
#include "HMImmutableSettingsProtoLanguageSettingEvent.h"
#include "HMImmutableSettingsProtoStringSettingEvent.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface HMImmutableSettingsProtoSettingChangeEvent : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 settingChangeEvent; unsigned int x :1 readOnly; } _has;
}

@property (readonly, nonatomic) BOOL hasKeyPath;
@property (retain, nonatomic) NSString *keyPath;
@property (nonatomic) BOOL hasReadOnly;
@property (nonatomic) BOOL readOnly;
@property (readonly, nonatomic) BOOL hasStringSetting;
@property (retain, nonatomic) HMImmutableSettingsProtoStringSettingEvent *stringSetting;
@property (readonly, nonatomic) BOOL hasBoundedIntegerSetting;
@property (retain, nonatomic) HMImmutableSettingsProtoBoundedIntegerSettingEvent *boundedIntegerSetting;
@property (readonly, nonatomic) BOOL hasBoolSetting;
@property (retain, nonatomic) HMImmutableSettingsProtoBoolSettingEvent *boolSetting;
@property (readonly, nonatomic) BOOL hasLanguageSetting;
@property (retain, nonatomic) HMImmutableSettingsProtoLanguageSettingEvent *languageSetting;
@property (readonly, nonatomic) BOOL hasAvailableLanguages;
@property (retain, nonatomic) HMImmutableSettingsProtoAvailableLanguageListEvent *availableLanguages;
@property (nonatomic) BOOL hasSettingChangeEvent;
@property (nonatomic) int settingChangeEvent;

/* instance methods */
- (id)settingChangeEventAsString:(int)string;
- (int)StringAsSettingChangeEvent:(id)event;
- (void)clearOneofValuesForSettingChangeEvent;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* HMImmutableSettingsProtoSettingChangeEvent_h */
