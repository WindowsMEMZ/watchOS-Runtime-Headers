//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMEntitlementBypassList_h
#define MCMEntitlementBypassList_h
@import Foundation;

@class NSDictionary;

@interface MCMEntitlementBypassList : NSObject {
  /* instance variables */
  NSDictionary *_bypassListedLookupByCodeSignIdentifier;
}

@property (retain, nonatomic) NSDictionary *systemEntitlementBypassList;
@property (retain, nonatomic) NSDictionary *systemGroupEntitlementBypassList;

/* class methods */
+ (id)sharedBypassList;

/* instance methods */
- (id)initWithSystemContainerMapping:(id)mapping systemGroupContainerMapping:(id)mapping bypassListedCodeSignIdentifierMapping:(id)mapping;
- (id)wellknownSystemContainerForId:(id)id;
- (BOOL)systemContainerIdIsWellknown:(id)wellknown;
- (id)wellknownSystemContainers;
- (id)wellknownSystemGroupContainerForId:(id)id;
- (BOOL)systemGroupContainerIdIsWellknown:(id)wellknown;
- (id)wellknownSystemGroupContainers;
- (BOOL)containerIdIsWellknown:(id)wellknown class:(unsigned long long)class;
- (id)wellknownContainerForId:(id)id class:(unsigned long long)class;
- (BOOL)isLookupAllowedToBypassEntitlementFromCodeSignIdentifier:(id)identifier forContainerClass:(unsigned long long)class containerIdentifier:(id)identifier;
- (id)_convertArraysToSetsInNestedDictionary:(id)dictionary;
- (id)wellKnownContainerIdentifiersForSandboxPushDownCompatibilitySet;
@end

#endif /* MCMEntitlementBypassList_h */
