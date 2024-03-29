//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef ClockKit_h
#define ClockKit_h

#import "CLKApricotMetrics.h"
#import "CLKAssertionBlockSentinel.h"
#import "CLKClockComplicationCount.h"
#import "CLKClockComplicationCountSet.h"
#import "CLKClockTimer.h"
#import "CLKClockTimerToken.h"
#import "CLKComplication.h"
#import "CLKComplicationBackgroundDescriptor.h"
#import "CLKComplicationBundleConstants.h"
#import "CLKComplicationClient.h"
#import "CLKComplicationClientManager.h"
#import "CLKComplicationConnection.h"
#import "CLKComplicationDescriptor.h"
#import "CLKComplicationIntentWidgetMigrationConfiguration.h"
#import "CLKComplicationObserver.h"
#import "CLKComplicationPreviewTimelineEntry.h"
#import "CLKComplicationServer.h"
#import "CLKComplicationStaticWidgetMigrationConfiguration.h"
#import "CLKComplicationTemplate.h"
#import "CLKComplicationTemplateActivity.h"
#import "CLKComplicationTemplateAuxilaryInfo.h"
#import "CLKComplicationTemplateBattery.h"
#import "CLKComplicationTemplateBreathing.h"
#import "CLKComplicationTemplateCircularMediumCircularImage.h"
#import "CLKComplicationTemplateCircularMediumProgressRingImage.h"
#import "CLKComplicationTemplateCircularMediumRingImage.h"
#import "CLKComplicationTemplateCircularMediumRingText.h"
#import "CLKComplicationTemplateCircularMediumSimpleImage.h"
#import "CLKComplicationTemplateCircularMediumSimpleText.h"
#import "CLKComplicationTemplateCircularMediumStackImage.h"
#import "CLKComplicationTemplateCircularMediumStackText.h"
#import "CLKComplicationTemplateCircularSmallCircularImage.h"
#import "CLKComplicationTemplateCircularSmallProgressRingImage.h"
#import "CLKComplicationTemplateCircularSmallRingImage.h"
#import "CLKComplicationTemplateCircularSmallRingText.h"
#import "CLKComplicationTemplateCircularSmallSimpleImage.h"
#import "CLKComplicationTemplateCircularSmallSimpleText.h"
#import "CLKComplicationTemplateCircularSmallStackImage.h"
#import "CLKComplicationTemplateCircularSmallStackText.h"
#import "CLKComplicationTemplateDigitalTime.h"
#import "CLKComplicationTemplateDigitalTimeNoSeconds.h"
#import "CLKComplicationTemplateExtraLargeColumnsText.h"
#import "CLKComplicationTemplateExtraLargeDate.h"
#import "CLKComplicationTemplateExtraLargeProgressRingImage.h"
#import "CLKComplicationTemplateExtraLargeRingImage.h"
#import "CLKComplicationTemplateExtraLargeRingText.h"
#import "CLKComplicationTemplateExtraLargeSimpleImage.h"
#import "CLKComplicationTemplateExtraLargeSimpleText.h"
#import "CLKComplicationTemplateExtraLargeStackImage.h"
#import "CLKComplicationTemplateExtraLargeStackText.h"
#import "CLKComplicationTemplateGraphicBezelCircularText.h"
#import "CLKComplicationTemplateGraphicBezelMetadata.h"
#import "CLKComplicationTemplateGraphicCircular.h"
#import "CLKComplicationTemplateGraphicCircularClosedGaugeImage.h"
#import "CLKComplicationTemplateGraphicCircularClosedGaugeText.h"
#import "CLKComplicationTemplateGraphicCircularClosedGaugeViewBridge.h"
#import "CLKComplicationTemplateGraphicCircularImage.h"
#import "CLKComplicationTemplateGraphicCircularMetadata.h"
#import "CLKComplicationTemplateGraphicCircularOpenGaugeImage.h"
#import "CLKComplicationTemplateGraphicCircularOpenGaugeRangeText.h"
#import "CLKComplicationTemplateGraphicCircularOpenGaugeSimpleText.h"
#import "CLKComplicationTemplateGraphicCircularOpenGaugeViewBridge.h"
#import "CLKComplicationTemplateGraphicCircularOpenMeteredGaugeImage.h"
#import "CLKComplicationTemplateGraphicCircularOpenSegmentedGaugeImage.h"
#import "CLKComplicationTemplateGraphicCircularStackImage.h"
#import "CLKComplicationTemplateGraphicCircularStackText.h"
#import "CLKComplicationTemplateGraphicCircularStackViewTextBridge.h"
#import "CLKComplicationTemplateGraphicCircularViewBridge.h"
#import "CLKComplicationTemplateGraphicCornerCircularImage.h"
#import "CLKComplicationTemplateGraphicCornerCircularViewBridge.h"
#import "CLKComplicationTemplateGraphicCornerGaugeImage.h"
#import "CLKComplicationTemplateGraphicCornerGaugeText.h"
#import "CLKComplicationTemplateGraphicCornerGaugeViewBridge.h"
#import "CLKComplicationTemplateGraphicCornerMetadata.h"
#import "CLKComplicationTemplateGraphicCornerMeteredGaugeImage.h"
#import "CLKComplicationTemplateGraphicCornerMeteredGaugeText.h"
#import "CLKComplicationTemplateGraphicCornerSegmentedGaugeImage.h"
#import "CLKComplicationTemplateGraphicCornerStackText.h"
#import "CLKComplicationTemplateGraphicCornerTextImage.h"
#import "CLKComplicationTemplateGraphicCornerTextViewBridge.h"
#import "CLKComplicationTemplateGraphicExtraLargeCircular.h"
#import "CLKComplicationTemplateGraphicExtraLargeCircularClosedGaugeImage.h"
#import "CLKComplicationTemplateGraphicExtraLargeCircularClosedGaugeText.h"
#import "CLKComplicationTemplateGraphicExtraLargeCircularClosedGaugeViewBridge.h"
#import "CLKComplicationTemplateGraphicExtraLargeCircularImage.h"
#import "CLKComplicationTemplateGraphicExtraLargeCircularMetadata.h"
#import "CLKComplicationTemplateGraphicExtraLargeCircularOpenGaugeImage.h"
#import "CLKComplicationTemplateGraphicExtraLargeCircularOpenGaugeRangeText.h"
#import "CLKComplicationTemplateGraphicExtraLargeCircularOpenGaugeSimpleText.h"
#import "CLKComplicationTemplateGraphicExtraLargeCircularOpenGaugeViewBridge.h"
#import "CLKComplicationTemplateGraphicExtraLargeCircularOpenMeteredGaugeImage.h"
#import "CLKComplicationTemplateGraphicExtraLargeCircularOpenSegmentedGaugeImage.h"
#import "CLKComplicationTemplateGraphicExtraLargeCircularStackImage.h"
#import "CLKComplicationTemplateGraphicExtraLargeCircularStackText.h"
#import "CLKComplicationTemplateGraphicExtraLargeCircularStackViewTextBridge.h"
#import "CLKComplicationTemplateGraphicExtraLargeCircularViewBridge.h"
#import "CLKComplicationTemplateGraphicRectangularFull.h"
#import "CLKComplicationTemplateGraphicRectangularFullImage.h"
#import "CLKComplicationTemplateGraphicRectangularFullViewBridge.h"
#import "CLKComplicationTemplateGraphicRectangularLargeImage.h"
#import "CLKComplicationTemplateGraphicRectangularLargeText.h"
#import "CLKComplicationTemplateGraphicRectangularLargeViewBridge.h"
#import "CLKComplicationTemplateGraphicRectangularMetadata.h"
#import "CLKComplicationTemplateGraphicRectangularStandardBody.h"
#import "CLKComplicationTemplateGraphicRectangularStandardBodyViewBridge.h"
#import "CLKComplicationTemplateGraphicRectangularTextGauge.h"
#import "CLKComplicationTemplateGraphicRectangularTextGaugeViewBridge.h"
#import "CLKComplicationTemplateGraphicRectangularTextMeteredGauge.h"
#import "CLKComplicationTemplateModularLargeColumns.h"
#import "CLKComplicationTemplateModularLargeStandardBody.h"
#import "CLKComplicationTemplateModularLargeTable.h"
#import "CLKComplicationTemplateModularLargeTallBody.h"
#import "CLKComplicationTemplateModularSmallColumnsText.h"
#import "CLKComplicationTemplateModularSmallDate.h"
#import "CLKComplicationTemplateModularSmallProgressRingImage.h"
#import "CLKComplicationTemplateModularSmallRingImage.h"
#import "CLKComplicationTemplateModularSmallRingText.h"
#import "CLKComplicationTemplateModularSmallSimpleImage.h"
#import "CLKComplicationTemplateModularSmallSimpleText.h"
#import "CLKComplicationTemplateModularSmallStackImage.h"
#import "CLKComplicationTemplateModularSmallStackText.h"
#import "CLKComplicationTemplateSimpleText.h"
#import "CLKComplicationTemplateUtilitarianLargeFlat.h"
#import "CLKComplicationTemplateUtilitarianSmallFlat.h"
#import "CLKComplicationTemplateUtilitarianSmallProgressRingImage.h"
#import "CLKComplicationTemplateUtilitarianSmallRingImage.h"
#import "CLKComplicationTemplateUtilitarianSmallRingText.h"
#import "CLKComplicationTemplateUtilitarianSmallSquare.h"
#import "CLKComplicationTimelineEntry.h"
#import "CLKComplicationVendor.h"
#import "CLKComplicationVendorManager.h"
#import "CLKComplicationWidgetMigrationConfiguration.h"
#import "CLKComplicationWidgetMigrationObjectProvider.h"
#import "CLKCompoundTextProvider.h"
#import "CLKCurrentLocaleSentinel.h"
#import "CLKCurrentTimeTextProvider.h"
#import "CLKDate.h"
#import "CLKDateTextProvider.h"
#import "CLKDevice.h"
#import "CLKDeviceDescriptor.h"
#import "CLKDeviceMetrics.h"
#import "CLKFallbackTextProvider.h"
#import "CLKFont.h"
#import "CLKFullColorImageProvider.h"
#import "CLKFullColorSymbolImageProvider.h"
#import "CLKGaugeProvider.h"
#import "CLKGaugeSegment.h"
#import "CLKImageProvider.h"
#import "CLKIntentReference.h"
#import "CLKLocalizableCompoundTextProvider.h"
#import "CLKLocalizableSimpleTextProvider.h"
#import "CLKMediaAsset.h"
#import "CLKMediaAssetView.h"
#import "CLKOverrideTextProvider.h"
#import "CLKProgressProvider.h"
#import "CLKRelativeDateProgressProvider.h"
#import "CLKRelativeDateTextProvider.h"
#import "CLKRenderingContext.h"
#import "CLKSensitiveUIMonitor.h"
#import "CLKSimpleGaugeProvider.h"
#import "CLKSimpleProgressProvider.h"
#import "CLKSimpleTextProvider.h"
#import "CLKSymbolImageProvider.h"
#import "CLKTextProvider.h"
#import "CLKTextProviderCache.h"
#import "CLKTextProviderStyle.h"
#import "CLKTimeFormatter.h"
#import "CLKTimeIntervalGaugeProvider.h"
#import "CLKTimeIntervalTextProvider.h"
#import "CLKTimeTextProvider.h"
#import "CLKTreatedImageCache.h"
#import "CLKTreatedImageKey.h"
#import "CLKUserActivity.h"
#import "CLKVideo.h"
#import "CLKVideoPlayerView.h"
#import "CLKWatchFaceLibrary.h"
#import "CLKWatchFaceLibraryServer.h"
#import "CLKWidgetComplicationDescriptor.h"
#import "CLKWorldClockTimeFormatter.h"
#import "_$s8ClockKit19KeyedHashingEncoderCN.h"
#import "_CLKPlayerView.h"
#import "_CLKTimeFormatData.h"
#import "_CLKTimeFormatSentinel.h"
#import "_CLKTimeFormatterCache.h"
#import "_CLKTimeFormatterSubstringRange.h"
#import "_StringAndWidthCache.h"
#import "CHSWidgetPersonality-Protocol.h"
#import "CLKComplicationClient-Protocol.h"
#import "CLKComplicationDataSource-Protocol.h"
#import "CLKComplicationServer-Protocol.h"
#import "CLKComplicationTritiumCopyable-Protocol.h"
#import "CLKTimelineEntry-Protocol.h"
#import "CLKVideoPlayerViewDelegate-Protocol.h"
#import "CLKWatchFaceLibraryServerInterface-Protocol.h"
#import "CSLSSensitiveUIMonitoring-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"
#import "SPExtensionConnectionDelegate-Protocol.h"
#import "TLFinalizable-Protocol.h"
#import "TLIdentifiable-Protocol.h"
#import "TLPreviewTimelineEntry-Protocol.h"
#import "TLTimelineEntry-Protocol.h"
#import "TLValidatable-Protocol.h"
#import "NSString+CLKFormatter.h"
#import "NSAttributedString+CLKTextProvider.h"
#import "NSMutableAttributedString+CLKTextProvider.h"
#import "NSData+CLKUtilities.h"
#import "UIFont+ClockKitUtilities.h"
#import "NSTimeZone+JSONSerializable.h"
#import "UIImage+JSONSerializable.h"
#import "UIColor+JSONSerializable.h"
#import "NSDate+JSONSerializable.h"

#endif /* ClockKit_h */
