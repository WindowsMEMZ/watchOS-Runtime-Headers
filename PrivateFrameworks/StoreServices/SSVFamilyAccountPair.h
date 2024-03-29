//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSVFamilyAccountPair_h
#define SSVFamilyAccountPair_h
@import Foundation;

@interface SSVFamilyAccountPair : NSObject

@property (readonly, nonatomic) unsigned long long downloaderAccountIdentifier;
@property (readonly, nonatomic) unsigned long long familyIdentifier;
@property (readonly, nonatomic) unsigned long long purchaserAccountIdentifier;

/* instance methods */
- (id)initWithDownloaderAccountIdentifier:(unsigned long long)identifier purchaserAccountIdentifier:(unsigned long long)identifier familyIdentifier:(unsigned long long)identifier;
@end

#endif /* SSVFamilyAccountPair_h */
