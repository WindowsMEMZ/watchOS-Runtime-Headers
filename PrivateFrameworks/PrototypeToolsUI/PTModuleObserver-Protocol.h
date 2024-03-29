//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 148.0.0.0.0
//
#ifndef PTModuleObserver_Protocol_h
#define PTModuleObserver_Protocol_h
@import Foundation;

@protocol PTModuleObserver <NSObject>
/* instance methods */
- (void)module:(id)module didInsertSections:(id)sections deleteSections:(id)sections;
- (void)module:(id)module didInsertRows:(id)rows deleteRows:(id)rows;
- (void)moduleDidReload:(id)reload;
@end

#endif /* PTModuleObserver_Protocol_h */
