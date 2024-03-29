//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef MSAssetCollection_h
#define MSAssetCollection_h
@import Foundation;

#include "MSAsset.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSData, NSDate, NSString;

@interface MSAssetCollection : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSString *assetCollectionID;
@property (retain, nonatomic) NSString *ctag;
@property (retain, nonatomic) MSAsset *masterAsset;
@property (readonly, weak, nonatomic) NSData *masterAssetHash;
@property (retain, nonatomic) NSArray *derivedAssets;
@property (retain, nonatomic) NSString *fileName;
@property (nonatomic) BOOL wasDeleted;
@property (retain, nonatomic) NSDate *serverUploadedDate;
@property (nonatomic) long long initialFailureDate;

/* class methods */
+ (id)collectionWithMasterAsset:(id)asset fileName:(id)name;
+ (id)collectionWithMasterAsset:(id)asset fileName:(id)name derivedAssets:(id)assets;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithMasterAsset:(id)asset fileName:(id)name derivedAssets:(id)assets;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* MSAssetCollection_h */
