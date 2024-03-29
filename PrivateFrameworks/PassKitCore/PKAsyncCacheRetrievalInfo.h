//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAsyncCacheRetrievalInfo_h
#define PKAsyncCacheRetrievalInfo_h
@import Foundation;

@class NSMutableArray;

@interface PKAsyncCacheRetrievalInfo : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  BOOL _itemFetched;
  id _item;
  NSMutableArray *_deliveryBlocks;
}

/* instance methods */
- (id)init;
- (void)addDeliveryBlock:(id /* block */)block;
- (id)synchronouslyRetrieve:(id /* block */)retrieve outDeliveryBlocks:(id *)blocks;
- (void)deliverItem:(id)item;
@end

#endif /* PKAsyncCacheRetrievalInfo_h */
