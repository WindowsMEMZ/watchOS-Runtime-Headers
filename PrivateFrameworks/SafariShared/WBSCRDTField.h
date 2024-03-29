//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSCRDTField_h
#define WBSCRDTField_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "WBSCRDTGeneration.h"

@class NSMutableDictionary, NSString;

@interface WBSCRDTField : NSObject<NSCopying> {
  /* instance variables */
  id _valueSource;
  id /* block */ _valueProvider;
  id /* block */ _valueUpdater;
  NSMutableDictionary *_metadata;
}

@property (copy, nonatomic) NSObject<NSCopying> *value;
@property (copy, nonatomic) WBSCRDTGeneration *generation;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (nonatomic) BOOL shouldIncrementGeneration;

/* instance methods */
- (id)init;
- (id)initWithValue:(id)value generation:(id)generation deviceIdentifier:(id)identifier;
- (id)initWithValueSource:(id)source valueProvider:(id /* block */)provider valueUpdater:(id /* block */)updater generation:(id)generation deviceIdentifier:(id)identifier;
- (id)initWithValue:(id)value valueSource:(id)source valueProvider:(id /* block */)provider valueUpdater:(id /* block */)updater generation:(id)generation deviceIdentifier:(id)identifier;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)copyWithValueSource:(id)source;
- (void)incrementGenerationIfNeeded;
- (void)setValue:(id)value incrementGenerationIfNeeded:(BOOL)needed;
- (long long)mergeWithField:(id)field;
- (id)objectForKeyedSubscript:(id)subscript;
- (void)setObject:(id)object forKeyedSubscript:(id)subscript;
- (id)description;
@end

#endif /* WBSCRDTField_h */
