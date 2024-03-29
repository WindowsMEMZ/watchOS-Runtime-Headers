//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFSearchEngineController_h
#define _SFSearchEngineController_h
@import Foundation;

#include "WBSSearchProviderContext-Protocol.h"
#include "_SFSearchEngineInfo.h"

@class NSArray, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface _SFSearchEngineController : NSObject<WBSSearchProviderContext> {
  /* instance variables */
  NSArray *_searchEngines;
  unsigned long long _defaultSearchEngineIndex;
  NSObject<OS_dispatch_queue> *_searchEnginesQueue;
  _SFSearchEngineInfo *_defaultSearchEngine;
  unsigned long long _privateSearchEngineIndex;
  _SFSearchEngineInfo *_privateSearchEngine;
}

@property (readonly, copy, nonatomic) NSArray *engines;
@property (readonly, copy, nonatomic) NSArray *enginesAvailableForUnifiedFieldSearching;
@property (readonly, copy, nonatomic) NSArray *searchEngineNames;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, copy, nonatomic) NSString *systemLanguage;
@property (readonly, copy, nonatomic) NSDictionary *templateParameterValues;
@property (readonly, copy, nonatomic) NSDictionary *carrierTemplateParameterValues;
@property (readonly, nonatomic) BOOL isChinaDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)_initializeSharedInstance;
+ (id)sharedInstance;
+ (id)sharedInstanceIfAvailable;
+ (void)loadSystemLanguageProperties;
+ (BOOL)_deviceRegionCodeIsChina;

/* instance methods */
- (id)init;
- (void)_populateSearchEngines;
- (void)reloadSearchEngines;
- (void)_addAllWebSearchEngineInfosToArray:(id)array andAddUserVisibleWebSearchEngineInfosToArray:(id)array;
- (void)setDefaultSearchEngine:(id)engine forPrivateBrowsing:(BOOL)browsing;
- (void)_setDefaultSearchEngine:(id)engine forPrivateBrowsing:(BOOL)browsing;
- (id)defaultSearchEngine;
- (id)defaultSearchEngineForPrivateBrowsing:(BOOL)browsing;
- (id)defaultSearchEngineIfPopulatedForPrivateBrowsing:(BOOL)browsing;
- (void)_postDefaultSearchEngineDidChange;
- (id)_existingEngineInfoFor:(id)for;
- (id)engineInfoFor:(id)for;
- (id)engineInfoForScriptName:(id)name;
- (id)_specialSearchEngines;
- (void)_loadSystemPropertiesForSearchEngine:(id)engine;
- (id)safeSearchRequestForSearchRequest:(id)request;
- (void)_setEngines:(id)engines defaultSearchEngineIndex:(unsigned long long)index forPrivateBrowsing:(BOOL)browsing;
- (void)_getEngines:(id *)engines defaultSearchEngineIndex:(unsigned long long *)index forPrivateBrowsing:(BOOL)browsing;
- (id)defaultSearchEngineNameForPrivateBrowsing:(BOOL)browsing;
- (BOOL)isSearchProviderEnabled:(unsigned long long)enabled;
@end

#endif /* _SFSearchEngineController_h */
