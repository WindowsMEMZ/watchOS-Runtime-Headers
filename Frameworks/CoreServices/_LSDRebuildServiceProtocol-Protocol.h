//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1299.2.3.1.0
//
#ifndef _LSDRebuildServiceProtocol_Protocol_h
#define _LSDRebuildServiceProtocol_Protocol_h
@import Foundation;

@protocol _LSDRebuildServiceProtocol 
/* instance methods */
- (void)performRebuildRegistration:(id)registration personaUniqueStrings:(id)strings reply:(id /* block */)reply;
- (void)noteMigratorRunningWithReply:(id /* block */)reply;
@end

#endif /* _LSDRebuildServiceProtocol_Protocol_h */
