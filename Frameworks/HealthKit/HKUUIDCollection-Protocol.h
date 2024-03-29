//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKUUIDCollection_Protocol_h
#define HKUUIDCollection_Protocol_h
@import Foundation;

@protocol HKUUIDCollection <NSObject, NSCopying>
/* instance methods */
- (BOOL)hk_enumerateUUIDsWithError:(id *)error block:(id /* block */)block;
- (id)hk_dataForAllUUIDs;
@end

#endif /* HKUUIDCollection_Protocol_h */
