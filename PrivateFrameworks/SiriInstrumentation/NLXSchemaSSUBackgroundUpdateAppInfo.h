//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef NLXSchemaSSUBackgroundUpdateAppInfo_h
#define NLXSchemaSSUBackgroundUpdateAppInfo_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSArray, NSData, NSString;

@interface NLXSchemaSSUBackgroundUpdateAppInfo : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 numCacheFilesRemoved; } _has;
}

@property (copy, nonatomic) NSString *appBundleIdSaltedHash;
@property (nonatomic) BOOL hasAppBundleIdSaltedHash;
@property (nonatomic) unsigned int numCacheFilesRemoved;
@property (nonatomic) BOOL hasNumCacheFilesRemoved;
@property (copy, nonatomic) NSArray *categoryInfos;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteAppBundleIdSaltedHash;
- (void)deleteNumCacheFilesRemoved;
- (void)clearCategoryInfos;
- (void)deleteCategoryInfos;
- (void)addCategoryInfos:(id)infos;
- (unsigned long long)categoryInfosCount;
- (id)categoryInfosAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* NLXSchemaSSUBackgroundUpdateAppInfo_h */
