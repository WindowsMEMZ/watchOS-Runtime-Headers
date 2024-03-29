//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDPersistentStore_Protocol_h
#define HMDPersistentStore_Protocol_h
@import Foundation;

#include "HMFObject.h"
#include "HMDPersistentStore-Protocol.h"
#include "HMFLogging-Protocol.h"

@class BOOL *, NSString;

@protocol HMDPersistentStore <NSObject>
/* class methods */
+ (void)archiveBulletinBoard:(id)board;
+ (id)unarchiveBulletinBoard;
/* instance methods */
- (id)writeData:(id)data toStorePath:(id)path dataLabel:(id)label;
- (id)archiveDictionary:(id)dictionary withPath:(id)path forKey:(id)key;
- (id)unarchiveDictionaryWithPath:(id)path allowedClasses:(id)classes forKey:(id)key;
@end

#endif /* HMDPersistentStore_Protocol_h */
