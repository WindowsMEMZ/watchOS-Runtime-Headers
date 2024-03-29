//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 236.12.0.0.0
//
#ifndef SHClusterMetadata_h
#define SHClusterMetadata_h
@import Foundation;

@class NSDate, NSString;

@interface SHClusterMetadata : NSObject

@property (readonly, copy, nonatomic) NSString *uniqueHash;
@property (readonly, copy, nonatomic) NSString *storefront;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) long long clusterType;

/* instance methods */
- (id)initWithType:(long long)type storefront:(id)storefront uniqueHash:(id)hash creationDate:(id)date;
@end

#endif /* SHClusterMetadata_h */
