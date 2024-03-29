//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMStoreResolvedAsset_h
#define RMStoreResolvedAsset_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData, NSString, NSURL;

@interface RMStoreResolvedAsset : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSData *assetData;
@property (readonly, copy, nonatomic) NSURL *assetFile;
@property (readonly, copy, nonatomic) NSData *assetKeychainReference;
@property (readonly, copy, nonatomic) NSString *assetKeychainUserName;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithData:(id)data;
- (id)initWithFile:(id)file;
- (id)initWithKeychainReference:(id)reference;
- (id)initWithKeychainReference:(id)reference userName:(id)name;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToResolvedAsset:(id)asset;
@end

#endif /* RMStoreResolvedAsset_h */
