//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef SIServiceBatchInfo_h
#define SIServiceBatchInfo_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "SIServiceDeviceUploadInfo.h"
#include "SIServiceServerUploadInfo.h"

@class NSData;

@interface SIServiceBatchInfo : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 batch_type; } _has;
}

@property (copy, nonatomic) NSData *batch_id;
@property (nonatomic) BOOL hasBatch_id;
@property (retain, nonatomic) SIServiceDeviceUploadInfo *device_upload_info;
@property (nonatomic) BOOL hasDevice_upload_info;
@property (retain, nonatomic) SIServiceServerUploadInfo *server_upload_info;
@property (nonatomic) BOOL hasServer_upload_info;
@property (nonatomic) int batch_type;
@property (nonatomic) BOOL hasBatch_type;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichUpload_Info;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteBatch_id;
- (void)deleteDevice_upload_info;
- (void)deleteServer_upload_info;
- (void)deleteBatch_type;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* SIServiceBatchInfo_h */
