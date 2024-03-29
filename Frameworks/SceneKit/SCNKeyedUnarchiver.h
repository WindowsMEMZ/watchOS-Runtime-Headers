//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNKeyedUnarchiver_h
#define SCNKeyedUnarchiver_h
@import Foundation;

#include "NSKeyedUnarchiver.h"
#include "SCNAssetCatalog.h"

@class NSArray, NSDictionary, NSString, NSURL;

@interface SCNKeyedUnarchiver : NSKeyedUnarchiver

@property (retain, nonatomic) NSArray *allTargetsFromAnimCodec;
@property (retain, nonatomic) NSURL *documentURL;
@property (retain, nonatomic) NSDictionary *context;
@property (retain, nonatomic) SCNAssetCatalog *assetCatalog;
@property (retain, nonatomic) NSString *lookUpKey;
@property (retain, nonatomic) id lookUpFoundInstance;
@property (readonly, nonatomic) NSURL *documentEnclosingURL;

/* instance methods */
- (id)initForReadingWithData:(id)data secure:(BOOL)secure;
- (void)dealloc;
@end

#endif /* SCNKeyedUnarchiver_h */
