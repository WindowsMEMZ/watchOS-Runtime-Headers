//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SASyncServerSyncDataRequest_h
#define SASyncServerSyncDataRequest_h
@import Foundation;

#include "SABaseCommand.h"
#include "SAServerBoundCommand-Protocol.h"

@class NSString;

@interface SASyncServerSyncDataRequest : SABaseCommand<SAServerBoundCommand>

@property (copy, nonatomic) NSString *assistantId;
@property (copy, nonatomic) NSString *clientGeneration;
@property (copy, nonatomic) NSString *syncType;
@property (copy, nonatomic) NSString *syncToken;
@property (copy, @dynamic, nonatomic) NSString *aceId;
@property (copy, @dynamic, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
@end

#endif /* SASyncServerSyncDataRequest_h */
