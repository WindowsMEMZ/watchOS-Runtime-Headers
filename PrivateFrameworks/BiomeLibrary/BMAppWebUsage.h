//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMAppWebUsage_h
#define BMAppWebUsage_h
@import Foundation;

#include "BMEventBase.h"
#include "BMStoreData-Protocol.h"

@class NSDate, NSString;

@interface BMAppWebUsage : BMEventBase<BMStoreData> {
  /* instance variables */
  BOOL _hasRaw_absoluteTimestamp;
  double _raw_absoluteTimestamp;
}

@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) int usageState;
@property (readonly, nonatomic) NSString *webpageURL;
@property (readonly, nonatomic) NSString *webDomain;
@property (readonly, nonatomic) NSString *applicationID;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) BOOL isUsageTrusted;
@property (nonatomic) BOOL hasIsUsageTrusted;
@property (readonly, nonatomic) NSString *safariProfileID;
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
- (id)initWithUniqueID:(id)id absoluteTimestamp:(id)timestamp usageState:(int)state webpageURL:(id)url webDomain:(id)domain applicationID:(id)id deviceID:(id)id isUsageTrusted:(id)trusted safariProfileID:(id)id;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMAppWebUsage_h */
