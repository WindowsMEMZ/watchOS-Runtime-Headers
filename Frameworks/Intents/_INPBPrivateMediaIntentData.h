//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBPrivateMediaIntentData_h
#define _INPBPrivateMediaIntentData_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBAppIdentifier.h"
#include "_INPBHomeAutomationEntityProvider.h"
#include "_INPBPrivateMediaIntentData-Protocol.h"
#include "_INPBSpeakerIDInfo.h"
#include "_INPBString.h"
#include "_INPBWholeHouseAudioMetadata.h"

@class NSString;

@interface _INPBPrivateMediaIntentData : PBCodable<_INPBPrivateMediaIntentData, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 asrConfidenceLevel; unsigned int x :1 asrConfidenceScore; unsigned int x :1 isAppAttributionRequired; unsigned int x :1 isAppCorrection; unsigned int x :1 nlConfidenceLevel; unsigned int x :1 nlConfidenceScore; unsigned int x :1 useDialogMemoryForAttribution; } _has;
}

@property (nonatomic) int asrConfidenceLevel;
@property (nonatomic) BOOL hasAsrConfidenceLevel;
@property (nonatomic) float asrConfidenceScore;
@property (nonatomic) BOOL hasAsrConfidenceScore;
@property (retain, nonatomic) _INPBString *fallbackUsername;
@property (readonly, nonatomic) BOOL hasFallbackUsername;
@property (retain, nonatomic) _INPBHomeAutomationEntityProvider *homeAutomationEntityProvider;
@property (readonly, nonatomic) BOOL hasHomeAutomationEntityProvider;
@property (nonatomic) BOOL isAppAttributionRequired;
@property (nonatomic) BOOL hasIsAppAttributionRequired;
@property (nonatomic) BOOL isAppCorrection;
@property (nonatomic) BOOL hasIsAppCorrection;
@property (nonatomic) int nlConfidenceLevel;
@property (nonatomic) BOOL hasNlConfidenceLevel;
@property (nonatomic) float nlConfidenceScore;
@property (nonatomic) BOOL hasNlConfidenceScore;
@property (retain, nonatomic) _INPBAppIdentifier *proxiedThirdPartyAppInfo;
@property (readonly, nonatomic) BOOL hasProxiedThirdPartyAppInfo;
@property (retain, nonatomic) _INPBString *resolvedSharedUserID;
@property (readonly, nonatomic) BOOL hasResolvedSharedUserID;
@property (retain, nonatomic) _INPBSpeakerIDInfo *speakerIDInfo;
@property (readonly, nonatomic) BOOL hasSpeakerIDInfo;
@property (nonatomic) BOOL useDialogMemoryForAttribution;
@property (nonatomic) BOOL hasUseDialogMemoryForAttribution;
@property (retain, nonatomic) _INPBWholeHouseAudioMetadata *wholeHouseAudioMetadata;
@property (readonly, nonatomic) BOOL hasWholeHouseAudioMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)asrConfidenceLevelAsString:(int)string;
- (int)StringAsAsrConfidenceLevel:(id)level;
- (id)nlConfidenceLevelAsString:(int)string;
- (int)StringAsNlConfidenceLevel:(id)level;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)dictionaryRepresentation;
@end

#endif /* _INPBPrivateMediaIntentData_h */
