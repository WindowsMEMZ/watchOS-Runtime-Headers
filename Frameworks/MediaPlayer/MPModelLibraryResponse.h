//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPModelLibraryResponse_h
#define MPModelLibraryResponse_h
@import Foundation;

#include "MPModelResponse.h"
#include "MPMediaLibraryConnectionAssertion.h"
#include "MPModelResponseDetailedKeepLocalStatusRequesting-Protocol.h"

@class NSArray, NSString;

@interface MPModelLibraryResponse : MPModelResponse<MPModelResponseDetailedKeepLocalStatusRequesting>

@property (copy, nonatomic) NSArray *sectionKeepLocalStatusConfigurations;
@property (retain, nonatomic) MPMediaLibraryConnectionAssertion *libraryAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRequest:(id)request;
- (void)dealloc;
- (void)_mediaLibraryDidChangeNotification:(id)notification;
- (id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)index responseHandler:(id /* block */)handler;
@end

#endif /* MPModelLibraryResponse_h */
