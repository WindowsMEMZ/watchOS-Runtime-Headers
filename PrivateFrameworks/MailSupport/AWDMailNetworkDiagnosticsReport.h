//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef AWDMailNetworkDiagnosticsReport_h
#define AWDMailNetworkDiagnosticsReport_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface AWDMailNetworkDiagnosticsReport : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 numActiveCalls; unsigned int x :1 numBackgroundWifiClients; unsigned int x :1 timestamp; unsigned int x :1 dataInterface; unsigned int x :1 reachabilityFlags; unsigned int x :1 cellData; unsigned int x :1 dnsEnabled; unsigned int x :1 roamingAllowed; unsigned int x :1 wifiEnabled; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasReachabilityFlags;
@property (nonatomic) unsigned int reachabilityFlags;
@property (nonatomic) BOOL hasDnsEnabled;
@property (nonatomic) BOOL dnsEnabled;
@property (nonatomic) BOOL hasWifiEnabled;
@property (nonatomic) BOOL wifiEnabled;
@property (nonatomic) BOOL hasDataInterface;
@property (nonatomic) int dataInterface;
@property (nonatomic) BOOL hasCellData;
@property (nonatomic) BOOL cellData;
@property (readonly, nonatomic) BOOL hasDataIndicator;
@property (retain, nonatomic) NSString *dataIndicator;
@property (nonatomic) BOOL hasRoamingAllowed;
@property (nonatomic) BOOL roamingAllowed;
@property (nonatomic) BOOL hasNumActiveCalls;
@property (nonatomic) unsigned long long numActiveCalls;
@property (nonatomic) BOOL hasNumBackgroundWifiClients;
@property (nonatomic) unsigned long long numBackgroundWifiClients;

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* AWDMailNetworkDiagnosticsReport_h */
