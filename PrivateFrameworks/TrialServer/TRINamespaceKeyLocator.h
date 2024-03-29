//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRINamespaceKeyLocator_h
#define TRINamespaceKeyLocator_h
@import Foundation;

@interface TRINamespaceKeyLocator : NSObject
/* class methods */
+ (id)keyDataForNamespace:(id)namespace asymmetric:(BOOL)asymmetric;
+ (id)keyFileURLForNamespace:(id)namespace asymmetric:(BOOL)asymmetric;
+ (id)_keyFileSearchLocationsForNamespace:(id)namespace asymmetric:(BOOL)asymmetric;
+ (id)_fileNameForNamespaceIdentifier:(id)identifier asymmetric:(BOOL)asymmetric;
+ (id)_namespaceIdForNamespace:(id)namespace;
@end

#endif /* TRINamespaceKeyLocator_h */
