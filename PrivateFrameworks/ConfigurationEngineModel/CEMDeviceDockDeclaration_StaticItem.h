//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMDeviceDockDeclaration_StaticItem_h
#define CEMDeviceDockDeclaration_StaticItem_h
@import Foundation;

#include "CEMPayloadBase.h"
#include "CEMDeviceDockDeclaration_StaticItemTileData.h"

@class NSString;

@interface CEMDeviceDockDeclaration_StaticItem : CEMPayloadBase

@property (copy, nonatomic) CEMDeviceDockDeclaration_StaticItemTileData *payloadTileData;
@property (copy, nonatomic) NSString *payloadTileType;

/* class methods */
+ (id)allowedPayloadKeys;
+ (id)buildWithTileData:(id)data withTileType:(id)type;
+ (id)buildRequiredOnlyWithTileData:(id)data withTileType:(id)type;

/* instance methods */
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMDeviceDockDeclaration_StaticItem_h */
