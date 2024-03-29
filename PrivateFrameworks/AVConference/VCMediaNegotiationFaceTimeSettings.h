//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCMediaNegotiationFaceTimeSettings_h
#define VCMediaNegotiationFaceTimeSettings_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface VCMediaNegotiationFaceTimeSettings : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 capabilities; unsigned int x :1 linkProbingCapabilityVersion; unsigned int x :1 mediaControlInfoSubVersion; unsigned int x :1 switches; unsigned int x :1 oneToOneModeSupported; } _has;
}

@property (nonatomic) BOOL hasCapabilities;
@property (nonatomic) unsigned int capabilities;
@property (nonatomic) BOOL hasSwitches;
@property (nonatomic) unsigned int switches;
@property (nonatomic) BOOL hasOneToOneModeSupported;
@property (nonatomic) BOOL oneToOneModeSupported;
@property (nonatomic) BOOL hasMediaControlInfoSubVersion;
@property (nonatomic) unsigned int mediaControlInfoSubVersion;
@property (nonatomic) BOOL hasLinkProbingCapabilityVersion;
@property (nonatomic) unsigned int linkProbingCapabilityVersion;

/* instance methods */
- (BOOL)SIPDisabled;
- (BOOL)secureMessagingRequired;
- (unsigned char)mediaControlInfoFECFeedbackVersion;
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

#endif /* VCMediaNegotiationFaceTimeSettings_h */
