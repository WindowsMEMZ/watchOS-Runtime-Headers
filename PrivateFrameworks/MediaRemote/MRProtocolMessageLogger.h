//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRProtocolMessageLogger_h
#define MRProtocolMessageLogger_h
@import Foundation;

@interface MRProtocolMessageLogger : NSObject

@property (nonatomic) BOOL shouldLog;
@property (nonatomic) BOOL shouldVerboselyLog;

/* class methods */
+ (id)sharedLogger;

/* instance methods */
- (id)init;
- (void)logMessage:(id)message client:(id)client protocolMessage:(id)message;
@end

#endif /* MRProtocolMessageLogger_h */
