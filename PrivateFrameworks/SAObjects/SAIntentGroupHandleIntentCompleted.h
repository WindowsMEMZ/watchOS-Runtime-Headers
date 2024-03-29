//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAIntentGroupHandleIntentCompleted_h
#define SAIntentGroupHandleIntentCompleted_h
@import Foundation;

#include "SABaseCommand.h"
#include "SAIntentGroupProtobufMessage.h"
#include "SAServerBoundCommand-Protocol.h"

@class NSString;

@interface SAIntentGroupHandleIntentCompleted : SABaseCommand<SAServerBoundCommand>

@property (retain, nonatomic) SAIntentGroupProtobufMessage *intentResponse;
@property (copy, nonatomic) NSString *jsonEncodedIntentResponse;
@property (copy, @dynamic, nonatomic) NSString *aceId;
@property (copy, @dynamic, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)handleIntentCompleted;
+ (id)handleIntentCompletedWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
@end

#endif /* SAIntentGroupHandleIntentCompleted_h */
