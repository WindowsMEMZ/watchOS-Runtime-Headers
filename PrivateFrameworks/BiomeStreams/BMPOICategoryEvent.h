//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMPOICategoryEvent_h
#define BMPOICategoryEvent_h
@import Foundation;

#include "BMEventBase.h"
#include "BMProtoBufWrapper-Protocol.h"
#include "BMStoreData-Protocol.h"

@class NSString;

@interface BMPOICategoryEvent : BMEventBase<BMStoreData, BMProtoBufWrapper>

@property (readonly, copy, nonatomic) NSString *poiCategory;
@property (nonatomic) unsigned long long rank;
@property (nonatomic) double timeIntervalSince1970;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)new;
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;

/* instance methods */
- (id)init;
- (id)initWithPOICategory:(id)poicategory rank:(unsigned long long)rank timeIntervalSince1970:(double)since1970;
- (id)serialize;
- (id)jsonDict;
- (id)json;
- (id)encodeAsProto;
- (id)initWithProto:(id)proto;
- (id)initWithProtoData:(id)data;
- (id)proto;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMPOICategoryEvent_h */
