//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PSGExpConfigProtocol_Protocol_h
#define PSGExpConfigProtocol_Protocol_h
@import Foundation;

@protocol PSGExpConfigProtocol <NSObject>

@property (readonly, nonatomic) NSString *treatmentName;
@property (readonly, nonatomic) TRIRolloutIdentifiers *rolloutIdentifiers;
@property (readonly, nonatomic) TRIExperimentIdentifiers *experimentIdentifiers;

@end

#endif /* PSGExpConfigProtocol_Protocol_h */
