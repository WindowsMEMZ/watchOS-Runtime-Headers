//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFPDFContentItem_h
#define WFPDFContentItem_h
@import Foundation;

#include "WFGenericFileContentItem.h"
#include "WFContentItemClass-Protocol.h"
#include "WFObjectType.h"

@class NSDictionary, NSString, WFFileType;

@interface WFPDFContentItem : WFGenericFileContentItem<WFContentItemClass>

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
+ (id)itemWithPrintFormatters:(id)formatters names:(id)names;
+ (void)getPDFFromPrintFormatters:(id)formatters nameIfKnown:(id)known matchingInputSize:(BOOL)size withMargin:(BOOL)margin startingAtPage:(long long)page endingAtPage:(long long)page completionHandler:(id /* block */)handler;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)typeDescription;
+ (id)pluralTypeDescription;
+ (id)countDescription;

/* instance methods */
- (void)getPDF:(id /* block */)pdf matchingInputSize:(BOOL)size withMargin:(BOOL)margin startingAtPage:(long long)page endingAtPage:(long long)page;
- (void)createImageWithFileType:(id)type colorspace:(struct CGColorSpace *)colorspace resolution:(double)resolution completion:(id /* block */)completion;
- (void)generateFileRepresentations:(id /* block */)representations options:(id)options forType:(id)type;
- (void)generateObjectRepresentations:(id /* block */)representations options:(id)options forClass:(Class)class;
@end

#endif /* WFPDFContentItem_h */
