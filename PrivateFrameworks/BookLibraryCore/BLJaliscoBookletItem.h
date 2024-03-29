//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BLJaliscoBookletItem_h
#define BLJaliscoBookletItem_h
@import Foundation;

@class NSNumber, NSString;

@interface BLJaliscoBookletItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *storeDownloadParameters;
@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSNumber *size;

/* class methods */
+ (id)itemWithServerBookletItem:(id)item;
+ (id)arrayWithServerBookletItems:(id)items;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* BLJaliscoBookletItem_h */
