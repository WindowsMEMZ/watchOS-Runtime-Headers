//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFiTunesObject_h
#define WFiTunesObject_h
@import Foundation;

#include "MTLModel.h"
#include "MTLJSONSerializing-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "WFNaming-Protocol.h"

@class NSDictionary, NSString, NSURL;

@interface WFiTunesObject : MTLModel<MTLJSONSerializing, NSSecureCoding, WFNaming>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *kind;
@property (readonly, nonatomic) NSString *censoredName;
@property (readonly, nonatomic) NSURL *viewURL;
@property (readonly, nonatomic) NSDictionary *artworkURLs;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *wfName;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)allowedSecureCodingClassesByPropertyKey;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)identifierJSONTransformer;
+ (id)artistIDJSONTransformer;
+ (id)releaseDateJSONTransformer;
+ (id)artworkURLsJSONTransformer;
+ (Class)classForParsingJSONDictionary:(id)jsondictionary;

/* instance methods */
- (id)initWithName:(id)name identifier:(id)identifier kind:(id)kind;
@end

#endif /* WFiTunesObject_h */
