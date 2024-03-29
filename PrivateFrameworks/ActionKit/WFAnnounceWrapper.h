//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFAnnounceWrapper_h
#define WFAnnounceWrapper_h
@import Foundation;

@class ANAnnounce;

@interface WFAnnounceWrapper : NSObject

@property (readonly, nonatomic) ANAnnounce *announce;

/* class methods */
+ (id)sharedAnnouncementsDirectoryURL;
+ (id)afPreferencesLanguageCode;
+ (id)currentSiriVoiceVSAssetName;

/* instance methods */
- (id)init;
- (void)prewarmWithHandler:(id /* block */)handler;
- (void)invalidate;
- (void)requestAnnouncementWithAudioFileURL:(id)url homeAreaDescriptor:(id)descriptor completionHandler:(id /* block */)handler;
@end

#endif /* WFAnnounceWrapper_h */
