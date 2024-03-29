//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef SIServiceDeviceUploadInfo_h
#define SIServiceDeviceUploadInfo_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData, NSString;

@interface SIServiceDeviceUploadInfo : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 ns_relative_to_boot; } _has;
}

@property (copy, nonatomic) NSString *ref_id;
@property (nonatomic) BOOL hasRef_id;
@property (nonatomic) unsigned long long ns_relative_to_boot;
@property (nonatomic) BOOL hasNs_relative_to_boot;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteRef_id;
- (void)deleteNs_relative_to_boot;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* SIServiceDeviceUploadInfo_h */
