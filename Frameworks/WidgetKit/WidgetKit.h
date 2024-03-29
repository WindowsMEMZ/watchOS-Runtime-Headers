//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef WidgetKit_h
#define WidgetKit_h

#import "WidgetExtensionChecker.h"
#import "_$s9WidgetKit0A11EnvironmentV7StorageCN.h"
#import "_$s9WidgetKit0A11PersonalityCN.h"
#import "_$s9WidgetKit0A12PreviewAgentCN.h"
#import "_$s9WidgetKit0A13LocalizationsCN.h"
#import "_$s9WidgetKit0A14ViewCollectionCN.h"
#import "_$s9WidgetKit0A23ExtensionSessionFactoryCN.h"
#import "_$s9WidgetKit0A6CenterCN.h"
#import "_$s9WidgetKit0A8ArchiverC17ArchivingDelegateCN.h"
#import "_$s9WidgetKit0A8ArchiverCN.h"
#import "_$s9WidgetKit15TimelineRequestCN.h"
#import "_$s9WidgetKit18PlaceholderRequestCN.h"
#import "_$s9WidgetKit21DescriptorFetchResultCN.h"
#import "_$s9WidgetKit31_TimelineArchivedViewCollectionCN.h"
#import "_$s9WidgetKit33CHSWidgetDisplayPropertiesCodableCN.h"
#import "_CHSWidgetMetricsCodable.h"
#import "_TtC9WidgetKit10UnfairLock.h"
#import "_TtC9WidgetKit10WidgetHost.h"
#import "_TtC9WidgetKit13DatePublisher.h"
#import "_TtC9WidgetKit16WidgetURLHandler.h"
#import "_TtC9WidgetKit17WGAutoreleasePool.h"
#import "_TtC9WidgetKit17WidgetHostContext.h"
#import "_TtC9WidgetKit22CircularFontDefinition.h"
#import "_TtC9WidgetKit22_RunningBoardInterface.h"
#import "_TtC9WidgetKit23_WidgetExtensionSession.h"
#import "_TtC9WidgetKit24BaseWidgetFontDefinition.h"
#import "_TtC9WidgetKit24ResolvedWidgetBundleHost.h"
#import "_TtC9WidgetKit24WidgetExtensionXPCServer.h"
#import "_TtC9WidgetKit25RectangularFontDefinition.h"
#import "_TtC9WidgetKit26TightLeadingFontDefinition.h"
#import "_TtC9WidgetKit27DefaultBundleRecordProvider.h"
#import "_TtC9WidgetKit27LargeCircularFontDefinition.h"
#import "_TtC9WidgetKit27_WidgetExtensionBaseContext.h"
#import "_TtC9WidgetKit28OptionalLocalizationsWrapper.h"
#import "_TtC9WidgetKit29CompactCircularFontDefinition.h"
#import "_TtC9WidgetKit29RegularCircularFontDefinition.h"
#import "_TtC9WidgetKit30LargeRectangularFontDefinition.h"
#import "_TtC9WidgetKit30WidgetArchiverAssertionTracker.h"
#import "_TtC9WidgetKit30WidgetExtensionSessionWatchdog.h"
#import "_TtC9WidgetKit32CompactRectangularFontDefinition.h"
#import "_TtC9WidgetKit32RegularRectangularFontDefinition.h"
#import "_TtC9WidgetKit36DefaultAccessoryWidgetFontDefinition.h"
#import "_TtC9WidgetKit37CornerClockComplicationFontDefinition.h"
#import "_TtC9WidgetKit37InlineClockComplicationFontDefinition.h"
#import "_TtC9WidgetKit38DefaultClockComplicationFontDefinition.h"
#import "_TtC9WidgetKit39CircularClockComplicationFontDefinition.h"
#import "_TtC9WidgetKit41CornerMonoClockComplicationFontDefinition.h"
#import "_TtC9WidgetKit42CornerLightClockComplicationFontDefinition.h"
#import "_TtC9WidgetKit42CornerSmallClockComplicationFontDefinition.h"
#import "_TtC9WidgetKit42RectangularClockComplicationFontDefinition.h"
#import "_TtC9WidgetKit43CircularMonoClockComplicationFontDefinition.h"
#import "_TtC9WidgetKit45ContentSizeCategoryDecrementingFontDefinition.h"
#import "_TtC9WidgetKit45ContentSizeCategoryIncrementingFontDefinition.h"
#import "_TtC9WidgetKit45CornerSemiboldClockComplicationFontDefinition.h"
#import "_TtC9WidgetKit46CornerSmallMonoClockComplicationFontDefinition.h"
#import "_TtC9WidgetKit47CircularSemiboldClockComplicationFontDefinition.h"
#import "_TtC9WidgetKit47CornerSmallLightClockComplicationFontDefinition.h"
#import "_TtC9WidgetKit47RectangularHomeScreenComplicationFontDefinition.h"
#import "_TtC9WidgetKit50CornerSmallSemiboldClockComplicationFontDefinition.h"
#import "_TtC9WidgetKit50RectangularSemiboldClockComplicationFontDefinition.h"
#import "_TtC9WidgetKit9Analytics.h"
#import "_TtC9WidgetKitP33_F25834A5110A642184069A8971B03B5A25PreferredLanguageObserver.h"
#import "_TtCC9WidgetKit24WidgetExtensionXPCServer14ExportedObject.h"
#import "_TtCCV9WidgetKit17WidgetEnvironment16AnyKeyValueTupleP33_78669324E9282AD527DC22F3259D9FF411StorageBase.h"
#import "_TtCCV9WidgetKit17WidgetEnvironment6AnyKeyP33_78669324E9282AD527DC22F3259D9FF411StorageBase.h"
#import "_TtCCV9WidgetKit17WidgetEnvironment8AnyValueP33_78669324E9282AD527DC22F3259D9FF411StorageBase.h"
#import "_TtCV9WidgetKit17WidgetEnvironment16AnyKeyValueTuple.h"
#import "_TtCV9WidgetKit17WidgetEnvironment6AnyKey.h"
#import "_TtCV9WidgetKit17WidgetEnvironment8AnyValue.h"
#import "CHSWidgetPersonality-Protocol.h"
#import "EXExtensionContextHostConfigurationProviding-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "_TtP9WidgetKit22WidgetExtensionSession_-Protocol.h"
#import "_TtP9WidgetKit27ExtensionToHostXPCInterface_-Protocol.h"
#import "_TtP9WidgetKit27HostToExtensionXPCInterface_-Protocol.h"
#import "_TtP9WidgetKit27WidgetCenterConnection_Host_-Protocol.h"
#import "_TtP9WidgetKit29WidgetCenterConnection_Remote_-Protocol.h"
#import "INIntent+WK.h"
#import "NSBundle+WidgetKit.h"

#endif /* WidgetKit_h */
