//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSSQLCompoundWhereIntermediate_h
#define NSSQLCompoundWhereIntermediate_h
@import Foundation;

#include "NSSQLWhereIntermediate.h"
#include "NSSQLEntity.h"

@class NSArray, NSMutableArray;

@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate {
  /* instance variables */
  NSMutableArray *_subclauses;
  NSSQLEntity *_disambiguatingEntity;
  NSArray *_disambiguationKeypath;
  BOOL _disambiguationKeypathHasToMany;
}

/* instance methods */
- (id)initWithPredicate:(id)predicate inScope:(id)scope inContext:(id)context;
- (void)dealloc;
- (id)disambiguatingEntity;
- (id)disambiguationKeypath;
- (BOOL)disambiguationKeypathHasToMany;
- (void)setDisambiguatingEntity:(id)entity withKeypath:(id)keypath hasToMany:(BOOL)many;
- (id)generateSQLStringInContext:(id)context;
- (BOOL)isOrScoped;
@end

#endif /* NSSQLCompoundWhereIntermediate_h */
