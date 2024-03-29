//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFiTunesObjectContentItem_h
#define WFiTunesObjectContentItem_h
@import Foundation;

#include "WFContentItem.h"
#include "WFURLCoercion-Protocol.h"
#include "WFiTunesObject.h"

@class NSString;

@interface WFiTunesObjectContentItem : WFContentItem<WFURLCoercion>

@property (readonly, nonatomic) WFiTunesObject *object;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)urlItem_outputClasses;
+ (id)urlItem_sharingItemClassesByBundleIdentifier;
+ (BOOL)parseiTunesURL:(id)url itemIdentifier:(id *)identifier countryCode:(id *)code;
+ (BOOL)urlItem_canCoerceFromURL:(id)url;
+ (void)urlItem_generateObjectRepresentations:(id /* block */)representations fromURL:(id)url forClass:(Class)class;
+ (void)urlItem_generateObjectRepresentations:(id /* block */)representations fromiTunesURL:(id)url forClass:(Class)class;
+ (id)propertyBuilders;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)instance;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)typeDescription;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (BOOL)canLowercaseTypeDescription;

/* instance methods */
- (id)possibleArtworkURLs;
- (void)getArtworkDataWithURLs:(id)urls completionHandler:(id /* block */)handler;
- (void)getArtworkForSize:(struct CGSize { double x0; double x1; })size completionHandler:(id /* block */)handler;
- (void)getPreferredArtworkURL:(id /* block */)url;
- (void)generateFileRepresentation:(id /* block */)representation options:(id)options forType:(id)type;
- (id)generateObjectRepresentationForClass:(Class)class options:(id)options error:(id *)error;
- (id)preferredFileType;
- (BOOL)canGenerateRepresentationForType:(id)type;
@end

#endif /* WFiTunesObjectContentItem_h */
