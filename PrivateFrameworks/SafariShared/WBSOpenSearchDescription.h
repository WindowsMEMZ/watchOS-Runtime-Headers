//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSOpenSearchDescription_h
#define WBSOpenSearchDescription_h
@import Foundation;

#include "WBSOpenSearchURLTemplate.h"

@class NSString;

@interface WBSOpenSearchDescription : NSObject

@property (readonly, nonatomic) NSString *descriptionDocumentURLString;
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *searchURLTemplate;
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *urlTemplateForSuggestionsInJSON;
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *urlTemplateForSuggestionsInXML;

/* instance methods */
- (id)initWithDescriptionDocumentURLString:(id)urlstring searchURLTemplate:(id)urltemplate urlTemplateForSuggestionsInJSON:(id)json urlTemplateForSuggestionsInXML:(id)xml;
- (id)initWithDictionaryRepresentation:(id)representation;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* WBSOpenSearchDescription_h */
