//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7.2.9.0.0
//
#ifndef _TtP9JetEngineP33_3B280445E2AC6E2542A3DCC2FD82BB2C19JSHostObjectExports__Protocol_h
#define _TtP9JetEngineP33_3B280445E2AC6E2542A3DCC2FD82BB2C19JSHostObjectExports__Protocol_h
@import Foundation;

@protocol JetEngine.(JSHostObjectExports in _3B280445E2AC6E2542A3DCC2FD82BB2C) <JSExport>

@property (nonatomic, readonly) NSString *platform;
@property (nonatomic, readonly) NSString *osBuild;
@property (nonatomic, readonly) NSString *deviceModel;
@property (nonatomic, readonly) NSString *deviceLocalizedModel;
@property (nonatomic, readonly) NSString *devicePhysicalModel;
@property (nonatomic, readonly) NSString *deviceModelFamily;
@property (nonatomic, readonly) NSString *deviceMarketingFamilyName;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) NSString *clientVersion;

/* instance methods */
- (BOOL)isOSAtLeast:(id)least;
@end

#endif /* _TtP9JetEngineP33_3B280445E2AC6E2542A3DCC2FD82BB2C19JSHostObjectExports__Protocol_h */
