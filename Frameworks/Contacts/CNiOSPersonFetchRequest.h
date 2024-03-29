//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNiOSPersonFetchRequest_h
#define CNiOSPersonFetchRequest_h
@import Foundation;

#include "CNiOSContactPredicate-Protocol.h"

@class CNManagedConfiguration, NSArray;

@interface CNiOSPersonFetchRequest : NSObject

@property (readonly) NSObject<CNiOSContactPredicate> *predicate;
@property (readonly) BOOL shouldSort;
@property (readonly) unsigned long long options;
@property (readonly) unsigned int sortOrder;
@property (readonly) unsigned int sortOrderIncludingNone;
@property (readonly) NSArray *keysToFetch;
@property (readonly) BOOL unifiedFetch;
@property (readonly) long long batchSize;
@property (readonly) CNManagedConfiguration *managedConfiguration;

/* class methods */
+ (long long)resolvedSortOrderFromContactSortOrder:(long long)order;
+ (id)fetchRequestFromCNFetchRequest:(id)request managedConfiguration:(id)configuration error:(id *)error;
+ (id)validatePredicate:(id)predicate error:(id *)error;
+ (id)effectivePredicate:(id)predicate;

/* instance methods */
- (id)initWithPredicate:(id)predicate keysToFetch:(id)fetch shouldSort:(BOOL)sort sortOrder:(unsigned int)order unifiedFetch:(BOOL)fetch batchSize:(long long)size managedConfiguration:(id)configuration options:(unsigned long long)options;
@end

#endif /* CNiOSPersonFetchRequest_h */
