//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTSectionInfoObserverDelegate_Protocol_h
#define BLTSectionInfoObserverDelegate_Protocol_h
@import Foundation;

@protocol BLTSectionInfoObserverDelegate <NSObject>
/* instance methods */
- (void)sectionInfoObserver:(id)observer updatedSectionInfoForSectionIDs:(id)ids transaction:(id)transaction;
@optional
/* instance methods */
- (void)sectionInfoObserver:(id)observer removedSectionWithSectionID:(id)id transaction:(id)transaction;
@end

#endif /* BLTSectionInfoObserverDelegate_Protocol_h */
