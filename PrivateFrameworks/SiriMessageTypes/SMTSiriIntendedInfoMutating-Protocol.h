//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.2.1.0.0
//
#ifndef SMTSiriIntendedInfoMutating_Protocol_h
#define SMTSiriIntendedInfoMutating_Protocol_h
@import Foundation;

@protocol SMTSiriIntendedInfoMutating <NSObject>
/* instance methods */
- (void)setOdldScore:(float)score;
- (void)setAftmScore:(float)score;
- (void)setSpkrIdScore:(float)score;
- (void)setLrnnScore:(float)score;
- (void)setCheckerScore:(float)score;
- (void)setInvocationType:(id)type;
- (void)setLrnnThreshold:(float)threshold;
- (void)setLrnnScale:(float)scale;
- (void)setLrnnOffset:(float)offset;
@end

#endif /* SMTSiriIntendedInfoMutating_Protocol_h */
