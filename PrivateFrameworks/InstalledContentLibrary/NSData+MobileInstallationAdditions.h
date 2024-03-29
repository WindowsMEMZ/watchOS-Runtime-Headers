//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1270.60.4.0.0
//
#ifndef NSData_MobileInstallationAdditions_h
#define NSData_MobileInstallationAdditions_h
@import Foundation;

@interface NSData (MobileInstallationAdditions)
/* instance methods */
- (BOOL)MI_writeAtomicallyToURL:(id)url withMode:(unsigned short)mode owner:(unsigned int)owner group:(unsigned int)group error:(id *)error;
- (BOOL)MI_writeAtomicallyToURL:(id)url withMode:(unsigned short)mode owner:(unsigned int)owner group:(unsigned int)group protectionClass:(int)class error:(id *)error;
- (BOOL)MI_writeAtomicallyToURL:(id)url withMode:(unsigned short)mode owner:(unsigned int)owner group:(unsigned int)group protectionClass:(int)class withBarrier:(BOOL)barrier error:(id *)error;
- (BOOL)MI_writeAtomicallyToURLMatchingCurrentFileMetadata:(id)metadata error:(id *)error;
@end

#endif /* NSData_MobileInstallationAdditions_h */
