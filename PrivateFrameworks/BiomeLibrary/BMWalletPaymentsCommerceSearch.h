//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMWalletPaymentsCommerceSearch_h
#define BMWalletPaymentsCommerceSearch_h
@import Foundation;

#include "BMEventBase.h"
#include "BMStoreData-Protocol.h"

@class NSString;

@interface BMWalletPaymentsCommerceSearch : BMEventBase<BMStoreData>

@property (readonly, nonatomic) int tagSource;
@property (readonly, nonatomic) int tagType;
@property (readonly, nonatomic) int passType;
@property (readonly, nonatomic) double tagClickDate;
@property (nonatomic) BOOL hasTagClickDate;
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
- (id)initWithTagSource:(int)source tagType:(int)type passType:(int)type tagClickDate:(id)date;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMWalletPaymentsCommerceSearch_h */
