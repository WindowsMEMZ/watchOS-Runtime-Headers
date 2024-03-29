//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLScopeFilter_h
#define CPLScopeFilter_h
@import Foundation;

@class NSSet, NSString;

@interface CPLScopeFilter : NSObject

@property (readonly, nonatomic) NSSet *includedScopeIdentifiers;
@property (readonly, nonatomic) NSSet *excludedScopeIdentifiers;
@property (readonly, nonatomic) NSString *simpleDescription;

/* instance methods */
- (id)_setOfScopeIdentifiersFromEnumeration:(id)enumeration;
- (id)initWithIncludedScopeIdentifiers:(id)identifiers;
- (id)initWithExcludedScopeIdentifiers:(id)identifiers;
- (BOOL)filterOnScopeIdentifier:(id)identifier;
- (id)description;
@end

#endif /* CPLScopeFilter_h */
