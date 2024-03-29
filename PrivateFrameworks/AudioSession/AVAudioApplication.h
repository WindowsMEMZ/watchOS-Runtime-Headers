//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 263.3.7.0.0
//
#ifndef AVAudioApplication_h
#define AVAudioApplication_h
@import Foundation;

@protocol {unique_ptr<caulk::synchronized<as::client::AVAudioApplicationImpl>, std::default_delete<caulk::synchronized<as::client::AVAudioApplicationImpl>>>="__ptr_"{__compressed_pair<caulk::synchronized<as::client::AVAudioApplicationImpl> *, std::default_delete<caulk::synchronized<as::client::AVAudioApplicationImpl>>>="__value_"^v}};

@interface AVAudioApplication : NSObject {
  /* instance variables */
  struct unique_ptr<caulk::synchronized<as::client::AVAudioApplicationImpl>, std::default_delete<caulk::synchronized<as::client::AVAudioApplicationImpl>>> { struct __compressed_pair<caulk::synchronized<as::client::AVAudioApplicationImpl> *, std::default_delete<caulk::synchronized<as::client::AVAudioApplicationImpl>>> { void *__value_; } __ptr_; } _impl;
}

@property (readonly) unsigned int clientID;
@property (readonly, nonatomic) BOOL inputMuted;
@property (readonly) long long recordPermission;

/* class methods */
+ (BOOL)toggleInputMute:(id *)mute;
+ (BOOL)allowAppToInitiatePlaybackTemporarily:(id)temporarily error:(id *)error;
+ (id)sharedInstance;
+ (void)requestRecordPermissionWithCompletionHandler:(id /* block */)handler;

/* instance methods */
- (id)sessionIDs;
- (BOOL)stemClickMutingEnabled;
- (void)privateHandlePing;
- (void)postNotificationName:(id)name userInfo:(id)info;
- (id)initProxyForProcess:(struct { unsigned int x0[8] })process;
- (id)initDelegateForProcess:(struct { unsigned int x0[8] })process processAttribution:(id)attribution;
- (BOOL)setInputMuted:(BOOL)muted context:(id)context error:(id *)error;
- (id)initWithSpecification:(id)specification;
- (id)initPrivate:(id)private;
- (void)dealloc;
- (BOOL)isInputMuted;
- (BOOL)setInputMuted:(BOOL)muted error:(id *)error;
- (BOOL)setInputMuteStateChangeHandler:(id /* block */)handler error:(id *)error;
- (struct sync_guard<as::client::AVAudioApplicationImpl, caulk::mach::unfair_lock> { struct unfair_lock * x0; struct value_holder<as::client::AVAudioApplicationImpl> { struct AVAudioApplicationImpl * x0; } x1; })privateGetImplGuard;
- (struct tuple<std::shared_ptr<as::client::XPCConnection>, as::ProcessIdentity, unsigned int> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, std::shared_ptr<as::client::XPCConnection>, as::ProcessIdentity, unsigned int> { struct shared_ptr<as::client::XPCConnection> { struct XPCConnection * x0; struct __shared_weak_count * x1; } x0; struct ProcessIdentity { struct { unsigned int x0[8] } x0; int x1; int x2; } x1; unsigned int x2; } x0; })privateGetConnection;
- (void)privateOptInToStemClickMuting;
- (void)privateEnableSystemMute:(BOOL)mute;
- (BOOL)privateCreateAudioApplicationInServer:(id)server;
- (BOOL)privateRecreateAudioApplicationInServer;
- (struct tuple<int, id<NSSecureCoding>> { struct __tuple_impl<std::__tuple_indices<0, 1>, int, id<NSSecureCoding>> { int x0; id x1; } x0; })privateGetMXProperty:(id)mxproperty;
- (struct tuple<int, id<NSSecureCoding>> { struct __tuple_impl<std::__tuple_indices<0, 1>, int, id<NSSecureCoding>> { int x0; id x1; } x0; })privateGetAppProperty:(id)property;
- (int)privateSetAppProperty:(id)property value:(id)value guard:(void *)guard;
- (int)privateSetAppProperty:(id)property value:(id)value;
- (int)privateUpdateAppProperty:(id)property value:(id)value context:(id)context;
- (int)privateSetMXPropertyOnAllSessions:(id)sessions value:(id)value;
@end

#endif /* AVAudioApplication_h */
