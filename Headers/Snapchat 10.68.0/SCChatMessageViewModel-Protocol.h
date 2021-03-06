//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol NSObject;

@protocol SCChatMessageViewModel <NSObject>
@property(readonly, nonatomic) _Bool shouldShowTimestamp;
@property(readonly, nonatomic) _Bool shouldShowSenderHeader;
@property(readonly, nonatomic) _Bool shouldShowDateHeader;
@property(readonly, nonatomic) _Bool isUnseenMessageInChat;
@property(readonly, nonatomic) _Bool shouldDisplayBelowFoldInChat;
@property(readonly, nonatomic) NSString *reusableCellIdentifier;
@property(nonatomic) _Bool isLastViewModel;
@property(nonatomic) _Bool isFirstViewModel;
@property(readonly, nonatomic) double topMargin;
@property(readonly, nonatomic) double dateHeaderHeight;
@property(readonly, nonatomic) double dateHeaderVerticalMargin;
@property(readonly, nonatomic) double dateHeaderHorizontalMargin;
@property(readonly, nonatomic) double headerHorizontalMargin;
@property(nonatomic) double height;
@property(nonatomic) int headerIndex;
@property(nonatomic) _Bool bottomLeftCornerIsRounded;
@property(nonatomic) _Bool bottomRightCornerIsRounded;
@property(nonatomic) _Bool topRightCornerIsRounded;
@property(readonly, nonatomic) id <NSObject> identifier;
- (void)refreshViewModel;
- (_Bool)needsExtraSpacingOnTop;
- (double)intervalFromPrevious;
- (_Bool)shouldDisplayBelowFoldInChatForPreviewMode;
- (double)bodyTopMargin;
- (double)calculateHeight;
@end

