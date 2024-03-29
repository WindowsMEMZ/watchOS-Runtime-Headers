//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMContextSyncWalletTransaction_h
#define BMContextSyncWalletTransaction_h
@import Foundation;

#include "BMEventBase.h"
#include "BMStoreData-Protocol.h"

@class NSString;

@interface BMContextSyncWalletTransaction : BMEventBase<BMStoreData>

@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) NSString *deviceUUID;
@property (readonly, nonatomic) NSString *passUniqueID;
@property (readonly, nonatomic) NSString *passLocalizedDescription;
@property (readonly, nonatomic) int transactionType;
@property (readonly, nonatomic) NSString *transactionID;
@property (readonly, nonatomic) int merchantType;
@property (readonly, nonatomic) NSString *poiCategory;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;
+ (id)columns;
+ (id)validKeyPaths;

/* instance methods */
- (id)initWithID:(id)id deviceUUID:(id)uuid passUniqueID:(id)id passLocalizedDescription:(id)description transactionType:(int)type transactionID:(id)id merchantType:(int)type poiCategory:(id)category;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMContextSyncWalletTransaction_h */
