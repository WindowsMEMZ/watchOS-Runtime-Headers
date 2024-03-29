//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BLMLJaliscoDataSource_Protocol_h
#define BLMLJaliscoDataSource_Protocol_h
@import Foundation;

#include "BLMLJaliscoDataSource-Protocol.h"

@class NSString;

@protocol BLMLJaliscoDataSource <NSObject>
/* instance methods */
- (id)mediaItemsFromJaliscoItems:(id)items;
- (id)jaliscoItemsWithStoreIDs:(id)ids dsids:(id)dsids isImported:(BOOL)imported;
- (id)jaliscoItemsWithNeedsImport:(BOOL)import;
@end

#endif /* BLMLJaliscoDataSource_Protocol_h */
