//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFGiphyContentItem_h
#define WFGiphyContentItem_h
@import Foundation;

#include "WFGenericFileContentItem.h"
#include "WFContentItemClass-Protocol.h"

@class NSDictionary, NSString, WFFileType, WFObjectType;

@interface WFGiphyContentItem : WFGenericFileContentItem<WFContentItemClass>

@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)stringConversionBehavior;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)typeDescription;
+ (id)pluralTypeDescription;
+ (id)countDescription;

/* instance methods */
- (id)object;
- (void)generateFileRepresentation:(id /* block */)representation options:(id)options forType:(id)type;
- (void)generateObjectRepresentation:(id /* block */)representation options:(id)options forClass:(Class)class;
- (void)getPreferredFileSize:(id /* block */)size;
@end

#endif /* WFGiphyContentItem_h */
