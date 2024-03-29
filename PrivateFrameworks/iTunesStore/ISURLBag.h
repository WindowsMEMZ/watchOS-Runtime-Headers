//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef ISURLBag_h
#define ISURLBag_h
@import Foundation;

#include "ISURLBagBackend.h"

@class NSArray, NSDictionary, NSSet, NSString, SSNetworkConstraints, SSURLBagContext;

@interface ISURLBag : NSObject {
  /* instance variables */
  SSURLBagContext *_context;
  SSNetworkConstraints *_defaultConstraints;
  ISURLBagBackend *_bagBackend;
  NSArray *_guidPatterns;
  NSSet *_guidSchemes;
  NSDictionary *_headerPatterns;
}

@property (readonly, nonatomic) NSString *bagBackendKey;
@property (readonly, nonatomic) BOOL valid;
@property (nonatomic) double invalidationTime;
@property (nonatomic) BOOL loadedFromDiskCache;
@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) SSURLBagContext *URLBagContext;
@property (readonly, nonatomic) NSDictionary *URLBagDictionary;
@property (readonly, nonatomic) long long versionIdentifier;
@property (readonly) NSSet *availableStorefrontItemKinds;

/* class methods */
+ (id)_sharedBagBackend;
+ (void)_loadItemKindURLBagKeyMap;
+ (id)storeFrontURLBagKeyForItemKind:(id)kind;
+ (id)copyExtraHeadersForURL:(id)url inBagContext:(id)context;
+ (id)networkConstraintsForDownloadKind:(id)kind inBagContext:(id)context;
+ (BOOL)shouldSendGUIDForURL:(id)url inBagContext:(id)context;
+ (id)urlBagForContext:(id)context;
+ (id)urlForKey:(id)key inBagContext:(id)context;
+ (BOOL)urlIsTrusted:(id)trusted inBagContext:(id)context;
+ (id)valueForKey:(id)key inBagContext:(id)context;

/* instance methods */
- (id)init;
- (id)initWithContentsOfFile:(id)file;
- (id)initWithRawDictionary:(id)dictionary;
- (id)initWithURLBagContext:(id)context;
- (void)dealloc;
- (id)copyExtraHeadersForURL:(id)url;
- (BOOL)loadFromDictionary:(id)dictionary returningError:(id *)error;
- (void)_toggleStopSendingLocalCookies;
- (BOOL)isValid;
- (id)networkConstraintsForDownloadKind:(id)kind;
- (id)searchQueryParametersForClientIdentifier:(id)identifier networkType:(long long)type;
- (void)setInvalidationTimeWithExprationInterval:(double)interval;
- (BOOL)shouldSendAnonymousMachineIdentifierForURL:(id)url;
- (BOOL)shouldSendGUIDForURL:(id)url;
- (id)urlForKey:(id)key;
- (BOOL)urlIsTrusted:(id)trusted;
- (id)URLForURL:(id)url clientIdentifier:(id)identifier;
- (id)valueForKey:(id)key;
- (id)sanitizedURLForURL:(id)url;
- (BOOL)writeToFile:(id)file options:(unsigned long long)options error:(id *)error;
- (id)_copyGUIDPatternsFromBagBackend;
- (id)_copyGUIDSchemesFromBagBackend;
- (id)_copyHeaderPatternsFromBagBackend;
- (id)_networkConstraintsCachePath;
- (void)_preprocessURLResolutionCacheDictionary:(id)dictionary;
- (void)_setBagBackendWithDictionary:(id)dictionary;
- (void)_writeNetworkConstraintsCacheFile;
- (void)_writeURLResolutionCacheFile;
@end

#endif /* ISURLBag_h */
