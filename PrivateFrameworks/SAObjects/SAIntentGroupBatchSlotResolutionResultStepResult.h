//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAIntentGroupBatchSlotResolutionResultStepResult_h
#define SAIntentGroupBatchSlotResolutionResultStepResult_h
@import Foundation;

#include "AceObject.h"
#include "SAAceSerializable-Protocol.h"
#include "SACommandFailed.h"

@class NSString;

@interface SAIntentGroupBatchSlotResolutionResultStepResult : AceObject<SAAceSerializable>

@property (copy, nonatomic) NSString *base64EncodedProtobufMessage;
@property (retain, nonatomic) SACommandFailed *commandFailed;
@property (copy, nonatomic) NSString *jsonEncodedSlotResolutionResult;
@property (copy, nonatomic) NSString *keyPath;
@property (copy, nonatomic) NSString *typeName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)batchSlotResolutionResultStepResult;
+ (id)batchSlotResolutionResultStepResultWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAIntentGroupBatchSlotResolutionResultStepResult_h */
