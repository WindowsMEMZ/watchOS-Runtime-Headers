//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 170.2.3.0.0
//
#ifndef DEDSeedingFilerToken_h
#define DEDSeedingFilerToken_h
@import Foundation;

@class NSNumber, NSString;

@interface DEDSeedingFilerToken : NSObject

@property (readonly, nonatomic) NSNumber *entityID;
@property (readonly, nonatomic) NSString *token;
@property (readonly, nonatomic) NSString *dsid;
@property (readonly, nonatomic) long long submissionType;

/* instance methods */
- (id)initWithEntityID:(id)id type:(long long)type token:(id)token dsid:(id)dsid;
- (id)compiledEntityID;
@end

#endif /* DEDSeedingFilerToken_h */
