//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef SUTSchemaTestSessionInfo_h
#define SUTSchemaTestSessionInfo_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSArray, NSData, NSString;

@interface SUTSchemaTestSessionInfo : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 isSimulator; } _has;
}

@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) BOOL hasSystemBuild;
@property (copy, nonatomic) NSString *cpuArchitecture;
@property (nonatomic) BOOL hasCpuArchitecture;
@property (copy, nonatomic) NSString *hardwareModel;
@property (nonatomic) BOOL hasHardwareModel;
@property (copy, nonatomic) NSString *modelNumber;
@property (nonatomic) BOOL hasModelNumber;
@property (copy, nonatomic) NSString *productType;
@property (nonatomic) BOOL hasProductType;
@property (copy, nonatomic) NSString *productVersion;
@property (nonatomic) BOOL hasProductVersion;
@property (nonatomic) BOOL isSimulator;
@property (nonatomic) BOOL hasIsSimulator;
@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasBundleId;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) BOOL hasDeviceName;
@property (copy, nonatomic) NSArray *testSessionInfoItems;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteSystemBuild;
- (void)deleteCpuArchitecture;
- (void)deleteHardwareModel;
- (void)deleteModelNumber;
- (void)deleteProductType;
- (void)deleteProductVersion;
- (void)deleteIsSimulator;
- (void)deleteBundleId;
- (void)deleteDeviceName;
- (void)clearTestSessionInfoItem;
- (void)deleteTestSessionInfoItem;
- (void)addTestSessionInfoItem:(id)item;
- (unsigned long long)testSessionInfoItemCount;
- (id)testSessionInfoItemAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* SUTSchemaTestSessionInfo_h */
