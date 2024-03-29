//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDInsertDeleteAndAssociateObjectsOperation_h
#define HDInsertDeleteAndAssociateObjectsOperation_h
@import Foundation;

#include "HDJournalableOperation.h"

@class NSArray, NSDictionary;

@interface HDInsertDeleteAndAssociateObjectsOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSDictionary *objectsToInsertByDataProvenance;
@property (readonly, copy, nonatomic) NSArray *objectsToDelete;
@property (readonly, copy, nonatomic) NSDictionary *associations;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithObjectsToInsertByDataProvenance:(id)provenance objectsToDelete:(id)delete associations:(id)associations;
- (BOOL)performWithProfile:(id)profile transaction:(id)transaction error:(id *)error;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HDInsertDeleteAndAssociateObjectsOperation_h */
