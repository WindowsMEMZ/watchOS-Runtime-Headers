//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NENexusAgentDelegate_Protocol_h
#define NENexusAgentDelegate_Protocol_h
@import Foundation;

@protocol NENexusAgentDelegate <NSObject>
/* instance methods */
- (BOOL)handleRequestNexusFromClient:(id)client;
- (void)closeFlowWithClientIdentifier:(id)identifier;
- (void)handleStartFromClient:(id)client;
- (void)handleAssertFromClient:(id)client;
- (void)handleUnassertFromClient:(id)client;
@end

#endif /* NENexusAgentDelegate_Protocol_h */
