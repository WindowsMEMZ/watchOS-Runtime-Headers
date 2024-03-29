//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBAppBundleInfo_h
#define _INPBAppBundleInfo_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBAppBundleInfo-Protocol.h"
#include "_INPBAppId.h"
#include "_INPBBuildId.h"

@class NSArray, NSString;

@interface _INPBAppBundleInfo : PBCodable<_INPBAppBundleInfo, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct  _has;
}

@property (retain, nonatomic) _INPBAppId *appId;
@property (readonly, nonatomic) BOOL hasAppId;
@property (retain, nonatomic) _INPBBuildId *buildId;
@property (readonly, nonatomic) BOOL hasBuildId;
@property (copy, nonatomic) NSArray *intentSupports;
@property (readonly, nonatomic) unsigned long long intentSupportsCount;
@property (copy, nonatomic) NSArray *localizedProjects;
@property (readonly, nonatomic) unsigned long long localizedProjectsCount;
@property (copy, nonatomic) NSArray *supportedPlatforms;
@property (readonly, nonatomic) unsigned long long supportedPlatformsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)intentSupportType;
+ (Class)localizedProjectsType;
+ (Class)supportedPlatformsType;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)clearIntentSupports;
- (void)addIntentSupport:(id)support;
- (id)intentSupportAtIndex:(unsigned long long)index;
- (void)clearLocalizedProjects;
- (void)addLocalizedProjects:(id)projects;
- (id)localizedProjectsAtIndex:(unsigned long long)index;
- (void)clearSupportedPlatforms;
- (void)addSupportedPlatforms:(id)platforms;
- (id)supportedPlatformsAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)dictionaryRepresentation;
@end

#endif /* _INPBAppBundleInfo_h */
