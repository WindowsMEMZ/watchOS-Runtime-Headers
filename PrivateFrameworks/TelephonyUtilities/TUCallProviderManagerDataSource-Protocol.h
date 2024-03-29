//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUCallProviderManagerDataSource_Protocol_h
#define TUCallProviderManagerDataSource_Protocol_h
@import Foundation;

@protocol TUCallProviderManagerDataSource <NSObject>

@property (readonly, nonatomic) BOOL currentProcessCanAccessInitialState;
@property (readonly, copy, nonatomic) NSDictionary *providersByIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *localProvidersByIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *pairedHostDeviceProvidersByIdentifier;
@property (weak, nonatomic) NSObject<TUCallProviderManagerDataSourceDelegate> *delegate;

/* instance methods */
- (BOOL)openURL:(id)url isSensitive:(BOOL)sensitive error:(id *)error;
- (void)donateUserIntentForProviderWithIdentifier:(id)identifier;
- (void)launchAppForDialRequest:(id)request completion:(id /* block */)completion;
- (void)blockUntilInitialStateReceived;
- (void)invalidate;
@end

#endif /* TUCallProviderManagerDataSource_Protocol_h */
