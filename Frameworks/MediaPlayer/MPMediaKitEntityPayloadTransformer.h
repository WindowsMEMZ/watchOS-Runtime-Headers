//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPMediaKitEntityPayloadTransformer_h
#define MPMediaKitEntityPayloadTransformer_h
@import Foundation;

@class NSDictionary, NSMutableDictionary, NSString;

@interface MPMediaKitEntityPayloadTransformer : NSObject

@property (readonly, nonatomic) NSString *transformedType;
@property (readonly, nonatomic) NSDictionary *transformedPayload;
@property (readonly, nonatomic) NSMutableDictionary *relationships;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSMutableDictionary *attributes;
@property (readonly, nonatomic) NSMutableDictionary *meta;

/* instance methods */
- (id)initWithType:(id)type transformedType:(id)type;
@end

#endif /* MPMediaKitEntityPayloadTransformer_h */
