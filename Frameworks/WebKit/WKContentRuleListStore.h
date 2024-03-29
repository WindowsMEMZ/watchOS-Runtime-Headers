//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WKContentRuleListStore_h
#define WKContentRuleListStore_h
@import Foundation;

#include "WKObject-Protocol.h"

@class NSString;
@protocol {ObjectStorage<API::ContentRuleListStore>="data"{type="__lx"[48C]}};

@interface WKContentRuleListStore : NSObject<WKObject> {
  /* instance variables */
  struct ObjectStorage<API::ContentRuleListStore> { struct type { unsigned char x[48] __lx; } data; } _contentRuleListStore;
}

@property (readonly) struct Object { undefined * * x0; void * x1; } * _apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)defaultStoreWithLegacyFilename;
+ (id)storeWithURLAndLegacyFilename:(id)filename;
+ (id)defaultStore;
+ (id)storeWithURL:(id)url;

/* instance methods */
- (void)_removeAllContentRuleLists;
- (void)_invalidateContentRuleListVersionForIdentifier:(id)identifier;
- (void)_getContentRuleListSourceForIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)removeContentExtensionForIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)dealloc;
- (void)compileContentRuleListForIdentifier:(id)identifier encodedContentRuleList:(id)list completionHandler:(id /* block */)handler;
- (void)lookUpContentRuleListForIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)getAvailableContentRuleListIdentifiers:(id /* block */)identifiers;
- (void)removeContentRuleListForIdentifier:(id)identifier completionHandler:(id /* block */)handler;
@end

#endif /* WKContentRuleListStore_h */
