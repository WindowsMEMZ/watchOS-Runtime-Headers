//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef _TtC10ChronoCore14ProcessMonitor_ChronoCore_h
#define _TtC10ChronoCore14ProcessMonitor_ChronoCore_h
@import Foundation;

@interface ChronoCore.ProcessMonitor (ChronoCore) <CSLSSessionServiceObserver>
/* instance methods */
- (void)sessionDidStart:(id)start error:(id)error completion:(id /* block */)completion;
- (void)sessionDidStop:(id)stop error:(id)error completion:(id /* block */)completion;
- (void)sessionDidPause:(id)pause error:(id)error completion:(id /* block */)completion;
- (void)sessionDidResume:(id)resume error:(id)error completion:(id /* block */)completion;
@end

#endif /* _TtC10ChronoCore14ProcessMonitor_ChronoCore_h */
