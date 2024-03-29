//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2253.0.0.0.0
//
#ifndef MCWebContentFilterPayload_h
#define MCWebContentFilterPayload_h
@import Foundation;

#include "MCPayload.h"

@class NSArray, NSDictionary, NSString;

@interface MCWebContentFilterPayload : MCPayload

@property (copy, nonatomic) NSString *filterType;
@property (retain, nonatomic) NSString *contentFilterUUID;
@property (nonatomic) BOOL autoFilterEnabled;
@property (retain, nonatomic) NSArray *permittedURLStrings;
@property (retain, nonatomic) NSArray *allowListBookmarks;
@property (retain, nonatomic) NSArray *denyListURLStrings;
@property (retain, nonatomic) NSDictionary *pluginConfiguration;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *pluginBundleID;
@property (nonatomic) BOOL filterBrowsers;
@property (nonatomic) BOOL filterSockets;

/* class methods */
+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;
+ (id)pluginFilterKeysAndClasses;

/* instance methods */
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;
- (id)stubDictionary;
- (id)restrictions;
- (id)verboseDescription;
- (id)title;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)payloadDescriptionKeyValueSections;
- (id)installationWarnings;
@end

#endif /* MCWebContentFilterPayload_h */
