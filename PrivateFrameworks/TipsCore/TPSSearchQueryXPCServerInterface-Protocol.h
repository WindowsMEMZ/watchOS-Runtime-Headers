//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSSearchQueryXPCServerInterface_Protocol_h
#define TPSSearchQueryXPCServerInterface_Protocol_h
@import Foundation;

@protocol TPSSearchQueryXPCServerInterface <NSObject>
/* instance methods */
- (void)performQuery:(id)query completion:(id /* block */)completion;
- (void)cancelQueryWithIdentifier:(id)identifier;
- (void)reindexAllSearchableItemsWithCompletionHandler:(id /* block */)handler;
- (void)reindexSearchableItemsWithIdentifiers:(id)identifiers completionHandler:(id /* block */)handler;
- (void)deleteAllSearchableItemsWithCompletionHandler:(id /* block */)handler;
@end

#endif /* TPSSearchQueryXPCServerInterface_Protocol_h */
