//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMProtocolDeclarationItemsResponse_h
#define RMProtocolDeclarationItemsResponse_h
@import Foundation;

#include "RMModelPayloadBase.h"
#include "RMProtocolDeclarationItemsResponse_Declarations.h"

@class NSString;

@interface RMProtocolDeclarationItemsResponse : RMModelPayloadBase

@property (copy, nonatomic) RMProtocolDeclarationItemsResponse_Declarations *responseDeclarations;
@property (copy, nonatomic) NSString *responseDeclarationsToken;

/* class methods */
+ (id)requestWithDeclarations:(id)declarations declarationsToken:(id)token;

/* instance methods */
- (BOOL)loadFromDictionary:(id)dictionary serializationType:(short)type error:(id *)error;
- (id)serializeWithType:(short)type;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* RMProtocolDeclarationItemsResponse_h */
