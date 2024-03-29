//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITableViewSubviewManagerDelegate_Protocol_h
#define _UITableViewSubviewManagerDelegate_Protocol_h
@import Foundation;

@protocol _UITableViewSubviewManagerDelegate <NSObject>
/* instance methods */
- (void)_reuseTableViewCell:(id)cell withIndexPath:(id)path didEndDisplaying:(BOOL)displaying;
- (void)_reusePrefetchedCell:(id)cell withIndexPath:(id)path;
@end

#endif /* _UITableViewSubviewManagerDelegate_Protocol_h */
