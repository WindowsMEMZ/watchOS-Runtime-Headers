//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BLMLAudiobookImportStoreAccount_h
#define BLMLAudiobookImportStoreAccount_h
@import Foundation;

@class NSMutableSet, NSNumber, NSSet;

@interface BLMLAudiobookImportStoreAccount : NSObject

@property (retain, nonatomic) NSNumber *storeAccountID;
@property (retain, nonatomic) NSMutableSet *storeItemIDs;
@property (readonly, copy, nonatomic) NSSet *storeIDs;

/* class methods */
+ (id)accountWithStoreAccountID:(id)id storeIDs:(id)ids;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* BLMLAudiobookImportStoreAccount_h */
