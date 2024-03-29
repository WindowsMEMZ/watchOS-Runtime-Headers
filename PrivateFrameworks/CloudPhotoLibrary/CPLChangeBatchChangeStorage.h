//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLChangeBatchChangeStorage_h
#define CPLChangeBatchChangeStorage_h
@import Foundation;

#include "CPLChangeStorage.h"
#include "CPLChangeBatch.h"

@class NSDictionary, NSString;

@interface CPLChangeBatchChangeStorage : CPLChangeStorage {
  /* instance variables */
  NSDictionary *_changesPerScopedIdentifier;
  NSString *_storageDescription;
}

@property (readonly, nonatomic) CPLChangeBatch *batch;

/* instance methods */
- (id)initWithBatch:(id)batch name:(id)name;
- (id)changeWithScopedIdentifier:(id)identifier;
- (id)changesWithRelatedScopedIdentifier:(id)identifier class:(Class)class;
- (id)storageDescription;
@end

#endif /* CPLChangeBatchChangeStorage_h */
