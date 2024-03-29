//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFMKMapItemContentItem_h
#define WFMKMapItemContentItem_h
@import Foundation;

#include "WFContentItem.h"
#include "WFContentItemClass-Protocol.h"
#include "WFObjectType.h"

@class CLLocation, MKMapItem, NSDictionary, NSString, WFFileType;

@interface WFMKMapItemContentItem : WFContentItem<WFContentItemClass>

@property (retain, nonatomic) CLLocation *queryLocation;
@property (readonly, nonatomic) MKMapItem *mapItem;
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
+ (id)itemWithMapItem:(id)item fromQueryLocation:(id)location origin:(id)origin disclosureLevel:(unsigned long long)level;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)instance;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)typeDescription;
+ (id)pluralTypeDescription;
+ (id)countDescription;

/* instance methods */
- (BOOL)getListSubtitle:(id /* block */)subtitle;
- (BOOL)getListAltText:(id /* block */)text;
- (void)generateObjectRepresentations:(id /* block */)representations options:(id)options forClass:(Class)class;
- (BOOL)canGenerateRepresentationForType:(id)type;
- (unsigned long long)preferredDisplayStyle;
@end

#endif /* WFMKMapItemContentItem_h */
