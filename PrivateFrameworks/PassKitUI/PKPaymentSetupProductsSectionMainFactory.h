//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupProductsSectionMainFactory_h
#define PKPaymentSetupProductsSectionMainFactory_h
@import Foundation;

@interface PKPaymentSetupProductsSectionMainFactory : NSObject
/* class methods */
+ (void)generateSectionsWithDefaultSortingForItems:(id)items withContext:(id)context outSectionIdentifierToItemIdentifierMapping:(id *)mapping outOrderedSectionIdentifiers:(id *)identifiers;
+ (void)generateSectionsWithSearchFilter:(id)filter forItems:(id)items withContext:(id)context outSectionIdentifierToItemIdentifierMapping:(id *)mapping outOrderedSectionIdentifiers:(id *)identifiers;
+ (id)_buildSectionIdentifierToItemIdentifierMappingFromSections:(id)sections;
@end

#endif /* PKPaymentSetupProductsSectionMainFactory_h */
