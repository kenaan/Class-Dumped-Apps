//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTInnerTubeSectionRenderer-Protocol.h"

@class NSData, NSMutableArray, NSString, YTIAssociatedGameSupportedRenderers, YTICommand, YTIFeedbackElicitationSingleQuestionSupportedRenderers, YTIFormattedString, YTIIcon, YTIRenderer, YTIScreenBasedVisibilityCondition, YTISeparatorDetails, YTIShelfAutoNavToggleSupportedRenderers, YTIShelfContextualItemsSupportedRenderers, YTIShelfHeaderStyle, YTIShelfMenuSupportedRenderers, YTIShelfPlayAllButtonSupportedRenderers, YTIShelfPrivacySupportedRenderers, YTIShelfSubscribeButtonSupportedRenderers, YTIShelfSupportedRenderers, YTISubscribeButtonRenderer, YTIThumbnailDetails;

@interface YTIShelfRenderer : GPBMessage <YTInnerTubeSectionRenderer>
{
}

+ (id)descriptor;
- (_Bool)shouldTrimWithMaxItemCount:(unsigned long long)arg1;
- (id)sectionRendererDataSourceWithService:(id)arg1 params:(id)arg2;
@property(readonly, nonatomic) int type;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *actionAnnotation; // @dynamic actionAnnotation;
@property(retain, nonatomic) YTIAssociatedGameSupportedRenderers *associatedGame; // @dynamic associatedGame;
@property(retain, nonatomic) YTIShelfAutoNavToggleSupportedRenderers *autonavToggle; // @dynamic autonavToggle;
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(retain, nonatomic) YTIShelfSupportedRenderers *content; // @dynamic content;
@property(retain, nonatomic) YTIShelfContextualItemsSupportedRenderers *contextualItems; // @dynamic contextualItems;
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) NSString *debugHtml; // @dynamic debugHtml;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *dismissal; // @dynamic dismissal;
@property(retain, nonatomic) YTIFeedbackElicitationSingleQuestionSupportedRenderers *dismissalFollowUpQuestion; // @dynamic dismissalFollowUpQuestion;
@property(retain, nonatomic) YTICommand *endpoint; // @dynamic endpoint;
@property(nonatomic) int guidedHelpShelfType; // @dynamic guidedHelpShelfType;
@property(nonatomic) _Bool hasActionAnnotation; // @dynamic hasActionAnnotation;
@property(nonatomic) _Bool hasAssociatedGame; // @dynamic hasAssociatedGame;
@property(nonatomic) _Bool hasAutonavToggle; // @dynamic hasAutonavToggle;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasContextualItems; // @dynamic hasContextualItems;
@property(nonatomic) _Bool hasDebugHtml; // @dynamic hasDebugHtml;
@property(nonatomic) _Bool hasDismissal; // @dynamic hasDismissal;
@property(nonatomic) _Bool hasDismissalFollowUpQuestion; // @dynamic hasDismissalFollowUpQuestion;
@property(nonatomic) _Bool hasEndpoint; // @dynamic hasEndpoint;
@property(nonatomic) _Bool hasGuidedHelpShelfType; // @dynamic hasGuidedHelpShelfType;
@property(nonatomic) _Bool hasHeaderRenderer; // @dynamic hasHeaderRenderer;
@property(nonatomic) _Bool hasHeaderStyle; // @dynamic hasHeaderStyle;
@property(nonatomic) _Bool hasHideHeader; // @dynamic hasHideHeader;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasP13NDebugData; // @dynamic hasP13NDebugData;
@property(nonatomic) _Bool hasPlayAllButton; // @dynamic hasPlayAllButton;
@property(nonatomic) _Bool hasPlayEndpoint; // @dynamic hasPlayEndpoint;
@property(nonatomic) _Bool hasPrivacySetting; // @dynamic hasPrivacySetting;
@property(nonatomic) _Bool hasScreenBasedVisibilityCondition; // @dynamic hasScreenBasedVisibilityCondition;
@property(nonatomic) _Bool hasSeparator; // @dynamic hasSeparator;
@property(nonatomic) _Bool hasShelfFeedbackEndpoint; // @dynamic hasShelfFeedbackEndpoint;
@property(nonatomic) _Bool hasShelfPaddingStyle; // @dynamic hasShelfPaddingStyle;
@property(nonatomic) _Bool hasSortFilter; // @dynamic hasSortFilter;
@property(nonatomic) _Bool hasSubscribeButton; // @dynamic hasSubscribeButton;
@property(nonatomic) _Bool hasSubscribeButtonRenderer; // @dynamic hasSubscribeButtonRenderer;
@property(nonatomic) _Bool hasSubtitle; // @dynamic hasSubtitle;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasThumbnailSecondary; // @dynamic hasThumbnailSecondary;
@property(nonatomic) _Bool hasThumbnailStyle; // @dynamic hasThumbnailStyle;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTitleAnnotation; // @dynamic hasTitleAnnotation;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUnpluggedShelfRendererType; // @dynamic hasUnpluggedShelfRendererType;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIRenderer *headerRenderer; // @dynamic headerRenderer;
@property(retain, nonatomic) YTIShelfHeaderStyle *headerStyle; // @dynamic headerStyle;
@property(nonatomic) _Bool hideHeader; // @dynamic hideHeader;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(retain, nonatomic) NSMutableArray *impressionEndpointsArray; // @dynamic impressionEndpointsArray;
@property(readonly, nonatomic) unsigned long long impressionEndpointsArray_Count; // @dynamic impressionEndpointsArray_Count;
@property(retain, nonatomic) YTIShelfMenuSupportedRenderers *menu; // @dynamic menu;
@property(copy, nonatomic) NSString *p13NDebugData; // @dynamic p13NDebugData;
@property(retain, nonatomic) YTIShelfPlayAllButtonSupportedRenderers *playAllButton; // @dynamic playAllButton;
@property(retain, nonatomic) YTICommand *playEndpoint; // @dynamic playEndpoint;
@property(retain, nonatomic) YTIShelfPrivacySupportedRenderers *privacySetting; // @dynamic privacySetting;
@property(retain, nonatomic) YTIScreenBasedVisibilityCondition *screenBasedVisibilityCondition; // @dynamic screenBasedVisibilityCondition;
@property(retain, nonatomic) YTISeparatorDetails *separator; // @dynamic separator;
@property(retain, nonatomic) NSMutableArray *serviceEndpointsArray; // @dynamic serviceEndpointsArray;
@property(readonly, nonatomic) unsigned long long serviceEndpointsArray_Count; // @dynamic serviceEndpointsArray_Count;
@property(retain, nonatomic) YTICommand *shelfFeedbackEndpoint; // @dynamic shelfFeedbackEndpoint;
@property(nonatomic) int shelfPaddingStyle; // @dynamic shelfPaddingStyle;
@property(retain, nonatomic) YTIRenderer *sortFilter; // @dynamic sortFilter;
@property(retain, nonatomic) YTIShelfSubscribeButtonSupportedRenderers *subscribeButton; // @dynamic subscribeButton;
@property(retain, nonatomic) YTISubscribeButtonRenderer *subscribeButtonRenderer; // @dynamic subscribeButtonRenderer;
@property(retain, nonatomic) YTIFormattedString *subtitle; // @dynamic subtitle;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnailSecondary; // @dynamic thumbnailSecondary;
@property(nonatomic) int thumbnailStyle; // @dynamic thumbnailStyle;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIFormattedString *titleAnnotation; // @dynamic titleAnnotation;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(nonatomic) int unpluggedShelfRendererType; // @dynamic unpluggedShelfRendererType;

@end
