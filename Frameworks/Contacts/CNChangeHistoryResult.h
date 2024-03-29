//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNChangeHistoryResult_h
#define CNChangeHistoryResult_h
@import Foundation;

#include "CNChangeHistoryAnchor.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray;

@interface CNChangeHistoryResult : NSObject<NSSecureCoding>

@property (nonatomic) BOOL changesTruncated;
@property (retain, nonatomic) CNChangeHistoryAnchor *latestChangeAnchor;
@property (retain, nonatomic) NSArray *contactChanges;
@property (retain, nonatomic) NSArray *groupChanges;
@property (retain, nonatomic) NSArray *labeledValueChanges;
@property (retain, nonatomic) NSArray *events;
@property (nonatomic) BOOL unifyResults;
@property (nonatomic) long long changesCount;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (BOOL)enumerateContactChangesWithKeysToFetch:(id)fetch fromContactStore:(id)store error:(id *)error usingBlock:(id /* block */)block;
- (id)contactChangesEnumeratorWithKeysToFetch:(id)fetch contactStore:(id)store;
- (BOOL)enumerateGroupChangesFromContactStore:(id)store error:(id *)error usingBlock:(id /* block */)block;
- (id)groupChangesEnumeratorWithContactStore:(id)store;
- (id)labeledValueChangesEnumeratorWithContactStore:(id)store;
@end

#endif /* CNChangeHistoryResult_h */
