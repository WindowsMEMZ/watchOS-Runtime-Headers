//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMFamilyScreenTimeRequest_h
#define BMFamilyScreenTimeRequest_h
@import Foundation;

#include "BMEventBase.h"
#include "BMStoreData-Protocol.h"

@class NSDate, NSString;

@interface BMFamilyScreenTimeRequest : BMEventBase<BMStoreData> {
  /* instance variables */
  BOOL _hasRaw_eventTime;
  double _raw_eventTime;
}

@property (readonly, nonatomic) NSString *requestID;
@property (readonly, nonatomic) NSDate *eventTime;
@property (readonly, nonatomic) NSString *requesterDSID;
@property (readonly, nonatomic) NSString *responderDSID;
@property (readonly, nonatomic) int requestKind;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) int approvalTime;
@property (readonly, nonatomic) NSString *websitePath;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL isActionUserDevice;
@property (nonatomic) BOOL hasIsActionUserDevice;
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
- (id)initWithRequestID:(id)id eventTime:(id)time requesterDSID:(id)dsid responderDSID:(id)dsid requestKind:(int)kind status:(int)status approvalTime:(int)time websitePath:(id)path bundleID:(id)id isActionUserDevice:(id)device;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMFamilyScreenTimeRequest_h */
