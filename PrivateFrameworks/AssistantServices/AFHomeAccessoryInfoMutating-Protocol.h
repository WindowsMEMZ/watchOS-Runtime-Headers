//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFHomeAccessoryInfoMutating_Protocol_h
#define AFHomeAccessoryInfoMutating_Protocol_h
@import Foundation;

@protocol AFHomeAccessoryInfoMutating <NSObject>
/* instance methods */
- (void)setUniqueIdentifier:(id)identifier;
- (void)setLoggingUniqueIdentifier:(id)identifier;
- (void)setName:(id)name;
- (void)setModel:(id)model;
- (void)setRoomName:(id)name;
- (void)setAssistantIdentifier:(id)identifier;
- (void)setIsSpeaker:(BOOL)speaker;
- (void)setHasActiveThirdPartyMusicSubscription:(BOOL)subscription;
- (void)setManufacturer:(id)manufacturer;
- (void)setCategoryType:(id)type;
- (void)setSchemaCategoryType:(long long)type;
@end

#endif /* AFHomeAccessoryInfoMutating_Protocol_h */
