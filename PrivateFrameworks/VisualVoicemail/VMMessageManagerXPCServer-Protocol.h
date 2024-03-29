//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 780.0.0.0.0
//
#ifndef VMMessageManagerXPCServer_Protocol_h
#define VMMessageManagerXPCServer_Protocol_h
@import Foundation;

@protocol VMMessageManagerXPCServer <NSObject>
/* instance methods */
- (void)messageCountForMailboxType:(long long)type reply:(id /* block */)reply;
- (void)messageCountForMailboxType:(long long)type read:(BOOL)read reply:(id /* block */)reply;
- (void)messagesForMailboxType:(long long)type limit:(long long)limit offset:(long long)offset reply:(id /* block */)reply;
- (void)messagesForMailboxType:(long long)type read:(BOOL)read limit:(long long)limit offset:(long long)offset reply:(id /* block */)reply;
@end

#endif /* VMMessageManagerXPCServer_Protocol_h */
