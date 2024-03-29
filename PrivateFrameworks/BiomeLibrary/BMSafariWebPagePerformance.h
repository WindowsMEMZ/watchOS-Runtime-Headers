//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMSafariWebPagePerformance_h
#define BMSafariWebPagePerformance_h
@import Foundation;

#include "BMEventBase.h"
#include "BMStoreData-Protocol.h"

@class NSDate, NSString;

@interface BMSafariWebPagePerformance : BMEventBase<BMStoreData> {
  /* instance variables */
  BOOL _hasRaw_visited;
  double _raw_visited;
}

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSDate *visited;
@property (readonly, nonatomic) int platform;
@property (readonly, nonatomic) int performanceEvent;
@property (readonly, nonatomic) BOOL privacyProxy;
@property (nonatomic) BOOL hasPrivacyProxy;
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
- (id)initWithDomain:(id)domain visited:(id)visited platform:(int)platform performanceEvent:(int)event;
- (id)initWithDomain:(id)domain visited:(id)visited platform:(int)platform performanceEvent:(int)event privacyProxy:(id)proxy;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMSafariWebPagePerformance_h */
