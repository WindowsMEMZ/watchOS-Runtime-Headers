//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFRemoteQuarantineDecision_h
#define WFRemoteQuarantineDecision_h
@import Foundation;

#include "MTLModel.h"
#include "MTLJSONSerializing-Protocol.h"

@class NSDictionary, NSString;

@interface WFRemoteQuarantineDecision : MTLModel<MTLJSONSerializing>

@property (readonly, nonatomic) unsigned long long policy;
@property (readonly, nonatomic) NSString *errorTitle;
@property (readonly, nonatomic) NSString *errorMessage;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)JSONKeyPathsByPropertyKey;

/* instance methods */
@end

#endif /* WFRemoteQuarantineDecision_h */
