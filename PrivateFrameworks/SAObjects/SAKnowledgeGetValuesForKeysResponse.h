//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAKnowledgeGetValuesForKeysResponse_h
#define SAKnowledgeGetValuesForKeysResponse_h
@import Foundation;

#include "SABaseCommand.h"
#include "SAAceSerializable-Protocol.h"
#include "SAServerBoundCommand-Protocol.h"

@class NSArray, NSString;

@interface SAKnowledgeGetValuesForKeysResponse : SABaseCommand<SAServerBoundCommand, SAAceSerializable>

@property (copy, nonatomic) NSArray *entries;
@property (copy, @dynamic, nonatomic) NSString *aceId;
@property (copy, @dynamic, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)getValuesForKeysResponse;
+ (id)getValuesForKeysResponseWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
@end

#endif /* SAKnowledgeGetValuesForKeysResponse_h */
