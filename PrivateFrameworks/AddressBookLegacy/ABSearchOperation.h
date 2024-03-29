//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 12698.0.0.0.0
//
#ifndef ABSearchOperation_h
#define ABSearchOperation_h
@import Foundation;

#include "NSOperation.h"

@class NSArray, NSPredicate, NSThread;
@protocol ABSearchOperationDelegate;

@interface ABSearchOperation : NSOperation {
  /* instance variables */
  NSThread *_progressBlockThread;
}

@property (copy, nonatomic) id /* block */ progressBlock;
@property (nonatomic) void * internalSearchAddressBook;
@property (nonatomic) void * addressBook;
@property (retain, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *prefetchProperties;
@property (nonatomic) NSObject<ABSearchOperationDelegate> *delegate;
@property (nonatomic) void * context;
@property (nonatomic) unsigned int sortOrdering;

/* class methods */
+ (id)personPredicateWithName:(id)name addressBook:(void *)book;
+ (id)personPredicateWithNameLike:(id)like addressBook:(void *)book;
+ (id)personPredicateWithNameLike:(id)like inGroup:(void *)group addressBook:(void *)book;
+ (id)personPredicateWithNameLike:(id)like inSource:(void *)source addressBook:(void *)book;
+ (id)personPredicateWithNameLike:(id)like inSource:(void *)source includeSourceInResults:(BOOL)results addressBook:(void *)book;
+ (id)personPredicateWithNameLike:(id)like inSource:(void *)source includeSourceInResults:(BOOL)results includePhotosInResults:(BOOL)results addressBook:(void *)book;
+ (id)personPredicateWithNameLike:(id)like inAccount:(id)account addressBook:(void *)book;
+ (id)personPredicateWithNameLike:(id)like inGroups:(id)groups sources:(id)sources addressBook:(void *)book;
+ (id)personPredicateWithPhoneLike:(id)like countryHint:(id)hint addressBook:(void *)book;
+ (id)personPredicateWithNameOnly:(id)only inAccount:(id)account addressBook:(void *)book;
+ (id)personPredicateWithValue:(id)value comparison:(long long)comparison forProperty:(int)property addressBook:(void *)book;
+ (id)personPredicateWithAnyValueForProperty:(int)property addressBook:(void *)book;
+ (id)personPredicateWithGroup:(void *)group addressBook:(void *)book;

/* instance methods */
- (void)dealloc;
- (BOOL)isConcurrent;
- (void)cancel;
- (void)main;
- (BOOL)predicateShouldContinue:(id)continue;
- (void)_mainThread_tellDelegateSearchFoundMatch:(void *)match;
- (BOOL)predicateShouldContinue:(id)continue afterFindingRecord:(void *)record;
@end

#endif /* ABSearchOperation_h */
