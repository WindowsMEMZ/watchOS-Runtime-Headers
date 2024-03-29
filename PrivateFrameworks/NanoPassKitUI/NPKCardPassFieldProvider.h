//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKCardPassFieldProvider_h
#define NPKCardPassFieldProvider_h
@import Foundation;

#include "NPKCardPassSemanticFieldProvider.h"

@class NSArray, PKPass;

@interface NPKCardPassFieldProvider : NSObject

@property (retain, nonatomic) PKPass *pass;
@property (retain, nonatomic) NSArray *topFields;
@property (retain, nonatomic) NSArray *middleFields;
@property (retain, nonatomic) NSArray *bottomFields;
@property (retain, nonatomic) NPKCardPassSemanticFieldProvider *semanticFieldProvider;

/* instance methods */
- (id)initWithPass:(id)pass;
- (id)initWithPass:(id)pass includeRelevanceSemantic:(BOOL)semantic;
- (id)_evaluateFieldPriorityInFields:(id)fields withPassStyle:(long long)style;
- (id)_fieldBucketsForAllFields:(id)fields matchingCriteria:(id)criteria;
- (id)_allFieldsInPass:(id)pass;
- (void)_assertFieldCountForFields:(id)fields withName:(id)name minimumCount:(unsigned long long)count;
- (id)_matchingFieldsInAllFields:(id)fields keywords:(id)keywords;
@end

#endif /* NPKCardPassFieldProvider_h */
