//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 243.0.0.0.0
//
#ifndef FLViewModel_Protocol_h
#define FLViewModel_Protocol_h
@import Foundation;

@protocol FLViewModel <NSObject>
/* instance methods */
- (id)allPendingItems;
- (void)setItemChangeHandler:(id /* block */)handler;
@optional
/* instance methods */
- (id)groups;
- (id)groupsForPrimaryAccount:(id)account secondaryAccounts:(id)accounts;
- (void)refreshItems:(id)items withCompletionHandler:(id /* block */)handler;
- (void)refreshItemsForItem:(id)item withCompletionHandler:(id /* block */)handler;
@end

#endif /* FLViewModel_Protocol_h */
