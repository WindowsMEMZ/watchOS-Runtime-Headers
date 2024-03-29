//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.2.1.0.0
//
#ifndef LCFModelStore_h
#define LCFModelStore_h
@import Foundation;

#include "LCFModelStoreModelMetadataProvider.h"

@class NSString, NSURL;

@interface LCFModelStore : NSObject

@property (readonly, nonatomic) NSURL *originalEmptyModelURL;
@property (readonly, nonatomic) NSURL *modelStoreRootWithKeyURL;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSURL *modelStoreRootURL;
@property (readonly, nonatomic) NSURL *emptyModelURL;
@property (readonly, nonatomic) LCFModelStoreModelMetadataProvider *modelMetadataProvider;

/* instance methods */
- (id)init:(id)init modelStoreRootURL:(id)url originalEmptyModelURL:(id)url;
- (id)init:(id)init modelStoreRootURL:(id)url;
- (id)storeModel:(id)model;
- (id)storeModel:(id)model modelConfig:(id)config;
- (id)getBaseModelURL:(id)url modelConfig:(id)config;
- (id)getModelURL:(id)url;
- (id)getModelConfig:(id)config;
- (BOOL)markModelTrained:(id)trained;
- (BOOL)deleteModel:(id)model;
- (BOOL)clear;
- (id)listModelNames;
- (id)getModelMetadata:(id)metadata;
- (BOOL)setModelMetadata:(id)metadata key:(id)key value:(id)value;
@end

#endif /* LCFModelStore_h */
