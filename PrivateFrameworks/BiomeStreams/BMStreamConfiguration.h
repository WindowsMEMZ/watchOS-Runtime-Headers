//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMStreamConfiguration_h
#define BMStreamConfiguration_h
@import Foundation;

#include "BMStreamInternalMetadata.h"
#include "BMStreamSyncPolicy.h"

@class BMStoreConfig, NSArray, NSString, NSUUID;

@interface BMStreamConfiguration : NSObject

@property (readonly, nonatomic) NSString *streamIdentifier;
@property (readonly, nonatomic) NSUUID *streamUUID;
@property (readonly, nonatomic) Class eventClass;
@property (readonly, nonatomic) BMStoreConfig *storeConfig;
@property (readonly, nonatomic) NSArray *legacyNames;
@property (readonly, nonatomic) BMStreamSyncPolicy *syncPolicy;
@property (readonly, nonatomic) BMStreamInternalMetadata *internalMetadata;

/* instance methods */
- (id)init;
- (id)initWithStreamIdentifier:(id)identifier eventClass:(Class)class storeConfig:(id)config;
- (id)initWithStreamIdentifier:(id)identifier eventClass:(Class)class storeConfig:(id)config syncPolicy:(id)policy alternativeNames:(id)names;
- (id)initWithStreamIdentifier:(id)identifier eventClass:(Class)class storeConfig:(id)config syncPolicy:(id)policy alternativeNames:(id)names internalMetadata:(id)metadata;
- (id)initWithStreamUUID:(id)uuid streamIdentifier:(id)identifier eventClass:(Class)class storeConfig:(id)config syncPolicy:(id)policy legacyNames:(id)names internalMetadata:(id)metadata;
@end

#endif /* BMStreamConfiguration_h */
