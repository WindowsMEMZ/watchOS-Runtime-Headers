//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAIntentGroupSnippetTemplate_h
#define SAIntentGroupSnippetTemplate_h
@import Foundation;

#include "SADomainObject.h"
#include "SAUISnippet.h"

@class NSArray, NSString;

@interface SAIntentGroupSnippetTemplate : SADomainObject

@property (retain, nonatomic) SAUISnippet *detailSnippet;
@property (copy, nonatomic) NSArray *intentSlotKeyPaths;
@property (copy, nonatomic) NSString *key;

/* class methods */
+ (id)snippetTemplate;
+ (id)snippetTemplateWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAIntentGroupSnippetTemplate_h */
