//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIClientNamespaceMetadataStorage_Server_h
#define TRIClientNamespaceMetadataStorage_Server_h
@import Foundation;

@interface TRIClientNamespaceMetadataStorage (Server)
/* instance methods */
- (BOOL)mergeNamespaceMetadata:(id)metadata forNamespaceName:(id)name;
- (BOOL)removeOutdatedNamespaceMetadataForNamespaceName:(id)name currentCompatibilityVersion:(unsigned int)version;
@end

#endif /* TRIClientNamespaceMetadataStorage_Server_h */
