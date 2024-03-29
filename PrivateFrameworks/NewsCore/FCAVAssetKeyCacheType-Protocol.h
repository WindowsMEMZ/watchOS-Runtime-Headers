//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCAVAssetKeyCacheType_Protocol_h
#define FCAVAssetKeyCacheType_Protocol_h
@import Foundation;

@protocol FCAVAssetKeyCacheType 

@property (readonly, copy, nonatomic) NSData *keyServerCertificate;

/* instance methods */
- (id)assetKeyForURI:(id)uri;
- (id)interestTokenForKeyURIs:(id)uris;
- (void)saveAssetKeyData:(id)data creationDate:(id)date expirationDate:(id)date forURI:(id)uri;
- (void)removeAllAssetKeys;
- (void)saveKeyServerCertificate:(id)certificate;
- (void)clearKeyServerCertificate;
- (void)importAVAssetKey:(id)key;
@end

#endif /* FCAVAssetKeyCacheType_Protocol_h */
