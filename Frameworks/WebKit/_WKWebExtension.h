//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _WKWebExtension_h
#define _WKWebExtension_h
@import Foundation;

@class NSArray, NSDictionary, NSLocale, NSSet, NSString;

@interface _WKWebExtension : NSObject

@property (readonly, nonatomic) BOOL _backgroundContentIsServiceWorker;
@property (readonly, nonatomic) BOOL _backgroundContentUsesModules;
@property (readonly, copy, nonatomic) NSArray *errors;
@property (readonly, copy, nonatomic) NSDictionary *manifest;
@property (readonly, nonatomic) double manifestVersion;
@property (readonly, copy, nonatomic) NSLocale *defaultLocale;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *displayShortName;
@property (readonly, copy, nonatomic) NSString *displayVersion;
@property (readonly, copy, nonatomic) NSString *displayDescription;
@property (readonly, copy, nonatomic) NSString *displayActionLabel;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSSet *requestedPermissions;
@property (readonly, copy, nonatomic) NSSet *optionalPermissions;
@property (readonly, copy, nonatomic) NSSet *requestedPermissionMatchPatterns;
@property (readonly, copy, nonatomic) NSSet *optionalPermissionMatchPatterns;
@property (readonly, copy, nonatomic) NSSet *allRequestedMatchPatterns;
@property (readonly, nonatomic) BOOL hasBackgroundContent;
@property (readonly, nonatomic) BOOL backgroundContentIsPersistent;

/* class methods */
+ (id)extensionWithAppExtensionBundle:(id)bundle;
+ (id)extensionWithResourceBaseURL:(id)url;

/* instance methods */
- (id)initWithAppExtensionBundle:(id)bundle error:(id *)error;
- (id)initWithResourceBaseURL:(id)url error:(id *)error;
- (id)_initWithManifestDictionary:(id)dictionary;
- (id)_initWithManifestDictionary:(id)dictionary resources:(id)resources;
- (id)_initWithResources:(id)resources;
- (BOOL)supportsManifestVersion:(double)version;
- (id)iconForSize:(struct CGSize { double x0; double x1; })size;
- (id)actionIconForSize:(struct CGSize { double x0; double x1; })size;
- (BOOL)_hasStaticInjectedContentForURL:(id)url;
@end

#endif /* _WKWebExtension_h */
