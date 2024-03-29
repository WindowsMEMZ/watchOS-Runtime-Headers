//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef ODDSiriSchemaODDDictationDimensions_h
#define ODDSiriSchemaODDDictationDimensions_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "SISchemaISOLocale.h"

@class NSData, NSString;

@interface ODDSiriSchemaODDDictationDimensions : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 dataSharingOptInStatus; unsigned int x :1 viewInterface; unsigned int x :1 asrLocation; } _has;
}

@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) BOOL hasSystemBuild;
@property (nonatomic) int dataSharingOptInStatus;
@property (nonatomic) BOOL hasDataSharingOptInStatus;
@property (nonatomic) int viewInterface;
@property (nonatomic) BOOL hasViewInterface;
@property (copy, nonatomic) NSString *audioInterfaceVendorId;
@property (nonatomic) BOOL hasAudioInterfaceVendorId;
@property (copy, nonatomic) NSString *audioInterfaceProductId;
@property (nonatomic) BOOL hasAudioInterfaceProductId;
@property (nonatomic) int asrLocation;
@property (nonatomic) BOOL hasAsrLocation;
@property (retain, nonatomic) SISchemaISOLocale *dictationLocale;
@property (nonatomic) BOOL hasDictationLocale;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteSystemBuild;
- (void)deleteDataSharingOptInStatus;
- (void)deleteViewInterface;
- (void)deleteAudioInterfaceVendorId;
- (void)deleteAudioInterfaceProductId;
- (void)deleteAsrLocation;
- (void)deleteDictationLocale;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* ODDSiriSchemaODDDictationDimensions_h */
